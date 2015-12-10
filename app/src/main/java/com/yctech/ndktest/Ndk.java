package com.yctech.ndktest;

import android.app.Activity;
import android.os.Bundle;

public class Ndk extends Activity {
    static {
        System.loadLibrary("MyJninnnn");
    }
    public native String getStringFromNative();
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_ndk);
        System.out.println(getStringFromNative());
    }
}
