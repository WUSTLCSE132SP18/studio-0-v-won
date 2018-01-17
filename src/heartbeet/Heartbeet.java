package heartbeet;

import java.lang.*;

public class Heartbeet implements Runnable {
	
	Thread hb;
	String s = "heartbeet";

	public void run() {

		Thread.currentThread().setName(s);

		for (int i = 0; i < 1000; ++i) {
			
			System.out.println(i + " seconds have elapsed.");
			
			try {
				Thread.sleep(1000);
			}
			catch (Exception e){ 
				System.out.println(e);  
			}
			
			
		
		}
	}

	public static void main(String[] args) {
		Thread hb = new Thread(new Heartbeet());
		hb.start();
	}


}
