package CSE132-studio0;

import java.lang.*;

public class heartbeet implements Runnable {
	
	Thread hb;
	String h = "heartbeet";
	
	public void run() {
		Thread.currentThread().setName(h);
		
			for (int i = 0; i < 1000; ++i) {
				
				System.out.println(i + " sec have elapsed");
				try {
					Thread.sleep(1000);
				} catch (Exception e) {
					System.out.println(e);
				}
				
			}
	}

	public static void main(String[] args) {
		Thread hb = new Thread(new heartbeet());
		hb.start();
		
	}

	

}
