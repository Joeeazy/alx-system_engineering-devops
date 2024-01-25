#!/usr/bin/env bash
# using Puppet to make changes to our configuration file.

file_line { 'etc/ssh/ssh_config':
	     ensure => present,
content =>"

	  host*
	  PasswordAuthentication no
	  IdentityFile ~/.ssh/school
	  ",
}
