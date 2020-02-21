#!/bin/bash 

#
## Installe VIM MAN GIT CURL WGET GCC TMUX ...
#
 apt-get install -y nginx
 apt-get install -y vim
 apt-get install -y man
 apt-get install -y git
 apt-get install -y curl
 apt-get install -y wget
 apt-get install -y gcc
 apt-get install -y tmux
 apt-get install -y zip
 apt-get install -y ps
 apt-get install -y expect
 apt install -y lsb-release gnupg
 mv .bashrc ..
 mv default /etc/nginx/sites-available/default
 apt update

#
## Install PHP
#
 apt install -y php-fpm
 apt install -y php-mysql
 apt update

#
## Installe PHPMYADMIN
#
 bash phpmyadmin.sh
 apt update

#
## Installe WORDPRESS
#
 bash wordpress.sh
 apt update

#
## Installe MySQL
#
 bash installmysql.sh
 apt update
 expect exp.exp
 apt update
 expect exp2.exp
 apt update
 service mysql start
 expect exp3.exp

# service php7.3-fpm start
 service nginx restart
 rm -fr phpMyAdmin-4.9.4-all-languages.tar.gz
 rm -fr latest.tar.gz
 rm -fr mysql-apt-config_0.8.13-1_all.deb
