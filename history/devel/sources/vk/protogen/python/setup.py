import configparser
import os
import re

from setuptools import find_packages, setup


def get_requires():
    requires = []
    c = configparser.ConfigParser()
    c.read('Pipfile')
    for package in c.options('packages'):
        raw_ver, *_ = c.get('packages', package).split('#')
        ver = raw_ver.strip('" ')
        if ver == '*':
            requires.append(package)
        elif '{' not in ver:
            requires.append(package + ver)
    return requires


def get_desc():
    with open('README.md', 'r', encoding='utf-8') as f:
        return f.read()

def fix_imports():
    p = re.compile('import .*_pb2 as')

    for f in os.listdir('protogen/'):
        with open(f'protogen/{f}', 'r') as fin:
            lines = fin.readlines()

        for i, line in enumerate(lines):
            if p.match(line):
                lines[i] = line.replace('import ', 'import protogen.')

        with open(f'protogen/{f}', 'w') as fout:
            for line in lines:
                fout.write(line)

fix_imports()

setup(
    name='protogen',
    version='1.0.95540',
    description='Protogen library',
    long_description=get_desc(),
    long_description_content_type='text/markdown',
    author='poisk',
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    packages=find_packages(include=['protogen']),
    include_package_data=True,
    zip_safe=False,
    install_requires='protobuf>=3.7.0',
    python_requires='>=3.6',
)
