<?php
	fscanf(STDIN, "%d", $t);
	while($t--) {
		fscanf(STDIN, "%s", $s);
		strlen($s)%2 == 0 ? $n=strlen($s)/2 : $n = floor(strlen($s)/2 + 1);
		$no = true;
		for ($i=strlen($s), $k=strlen($s)-1; $i>=$n; $i--, $k--) {
			if ($s[strlen($s)-$i] != 'a') {
				$no = false;
				echo "YES\n";
				for ($j=0; $j<$i; $j++) {
					echo $s[$j];
				}
				echo 'a';
				for ($j=$i; $j<strlen($s); $j++){
					echo $s[$j];
				}
				echo "\n";
				break;

			}
			else if ($s[$k] != 'a'){
				$no = false;
				echo "YES\n";
				$k2 = strlen($s)-$k-1;
				while($k2 > 0){
					$k2--;
					echo $s[$k2];
				}
				echo 'a';
				for ($i=strlen($s)-$k-1; $i<=strlen($s)-1; $i++){
					echo $s[$i];
				}
				echo "\n";
				break;
			}

		}
		if ($no) echo "NO\n";
		
	}
?>