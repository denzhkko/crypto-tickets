package ru.mail;

import com.google.protobuf.InvalidProtocolBufferException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import ru.mail.go.webbase.blobs.Video;
import ru.mail.go.webbase.classifier.VideoClassifier;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main {
    static double VIDEO_CLASSIFIER_THRESHOLD = 0.6;
    static int MAX_ITER_COUNT = 1_000;

    private static final Logger LOG = LoggerFactory.getLogger(Main.class);

    public static void main(String[] args) {
        String videoImportDocsDirname = "videoImportDocs";

        List<Video.VideoImportDoc> videoDocs = Stream.of(new File(videoImportDocsDirname).listFiles())
                .filter(file -> !file.isDirectory())
                .map(File::getName)
                .sorted()
                .map((it) -> Paths.get(videoImportDocsDirname, it))
                .map((it) -> {
                    try {
                        return Files.readAllBytes(it);
                    } catch (IOException e) {
                        throw new RuntimeException(e);
                    }
                })
                .map((it) -> {
                    try {
                        return Video.VideoImportDoc.PARSER.parseFrom(it);
                    } catch (InvalidProtocolBufferException e) {
                        throw new RuntimeException(e);
                    }
                })
                .collect(Collectors.toList());

        System.out.printf("VideoImportDoc count = %d\n", videoDocs.size());

        List<byte[]> rawVideoDocs = videoDocs.stream().map((it) -> it.toByteArray()).collect(Collectors.toList());

        long start = System.currentTimeMillis();
        VideoClassifier classifier = new VideoClassifier(VIDEO_CLASSIFIER_THRESHOLD);
        for (byte[] rawVideoDoc: rawVideoDocs) {
            String category = classifier.getCategory(rawVideoDoc);
//            System.out.printf("category = %s\n", category);
        }
        long end = System.currentTimeMillis();
        long time = end - start;
        double avg = time / (double) rawVideoDocs.size();

        System.out.printf("time     = %d millis\n", time);
        System.out.printf("time avg = %f millis\n", avg);
    }
}
