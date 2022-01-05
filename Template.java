import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.FileReader;
import java.io.PrintWriter;
import java.io.File;

public class Template {
	
	public static void main(String[] args) throws Exception {
		setIO();

		wr.println(br.readLine());

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
