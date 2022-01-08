import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.File;

public class Template {
	
	public static void main(String[] args) throws Exception {
		setIO();

		int n = Integer.parseInt(br.readLine());

		for (int i=1; i<=n; i++) {
			for (int j=i; j<=n; j++) {
				wr.print("  ");
			}

			for (int k=0; k <= i-1; k++) {
				if (k == 0) wr.print(k);
				else wr.print(" " + k);
			}
			if (i-2 >= 0) {
				for (int k=i-2; k >=0; k--) {
					wr.print(" " + k);
				}
			}
			wr.println();
		}
		wr.print(0);
		for (int i=1; i<n; i++) {
			wr.print(" " + i);
		}
		for (int i=n; i >= 0; i--) {
			wr.print(" " + i);
		}
		wr.println();
		for (int i=n-1; i >= 0; i--) {
			for (int j=i; j < n; j++) {
				wr.print("  ");
			}

			for (int k=0; k<=i; k++) {
				if (k==0) wr.print(k);
				else wr.print(" " + k);
			}
			if (i-1 >= 0) {
				for (int k=i-1; k>=0; k--){
					wr.print(" " + k);
				}
			}

			wr.println();
		}
	
		close();
	}

	public static BufferedReader br = null; 
	public static PrintWriter wr = null;
	
	public static void setIO() throws java.io.FileNotFoundException {
		if (System.getProperty("ONLINE_JUDGE") == null) {
			br = new BufferedReader(new FileReader("input.txt"));
			wr = new PrintWriter(new File("output.txt"));
		} else {
			br = new BufferedReader(new InputStreamReader(System.in));
			wr = new PrintWriter(System.out);
		}
	}
	
	public static void close() throws java.io.IOException {
		wr.flush();
		br.close();
		wr.close();

	}
	
}
