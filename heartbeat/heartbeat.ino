package random;

import java.lang.*;

public class hartbeet implements Runnable {
  
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
    Thread hb = new Thread(new hartbeet());
    hb.start();
    
  }

  

}

