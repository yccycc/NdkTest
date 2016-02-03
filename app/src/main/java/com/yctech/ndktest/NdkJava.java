package com.yctech.ndktest;

import android.util.Log;

public class NdkJava {
   static {
      System.loadLibrary("sayjni");
   }
   public native String say();
   public native int sayint();
   public void notNdkZaiJava()
   {
      Log.i("bitch", "i am java func called by c");
   }
}
