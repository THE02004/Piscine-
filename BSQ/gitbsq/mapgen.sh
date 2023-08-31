echo '#!/usr/bin/perl

use warnings;
use strict;

#die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
		}
		else {
			print ".";
		}
	}
	print "\n";
}' > mapgen.pl

mkdir mapfiles

i=3
d=2
until [ $i -gt 100 ]
do
	d=2
	until [ $d -gt 10 ]
	do
   		perl mapgen.pl $i $i $d > mapfiles/map$i\x$i\d$d.txt
		((d=d+2))
	done
  	((i=i+(i/2)))
done

