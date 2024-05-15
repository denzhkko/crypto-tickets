FROM ubuntu:24.04

# base

RUN yes | unminimize
RUN apt update
RUN apt install -y sudo vim curl less git

RUN useradd -ms /bin/bash denzhkko
RUN usermod -aG sudo denzhkko
RUN echo -n "denzhkko:denzhkko" | chpasswd

# workflow setup

RUN apt install -y ccls clangd protobuf-compiler g++ make

USER denzhkko
WORKDIR /home/denzhkko

RUN echo -e '\nexport TERM="screen-256color"' >> /home/denzhkko/.bashrc

# vim setup
RUN curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.7/install.sh | bash
RUN export NVM_DIR="$HOME/.nvm" && [ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh" && nvm install --lts
RUN curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
COPY --chown=denzhkko:denzhkko vimrc  /home/denzhkko/.vim/vimrc
COPY --chown=denzhkko:denzhkko coc-settings.json /home/denzhkko/.vim/coc-settings.json
RUN export NVM_DIR="$HOME/.nvm" && [ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh" && vim -c 'PlugInstall' -c 'qa'
