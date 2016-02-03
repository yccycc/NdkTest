package com.yctech.ndktest;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;

import java.util.Date;

public class Ndk extends Activity {
    static {
        System.loadLibrary("sayjni");
    }
    public native String getStringFromNative();
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_ndk);
        System.out.println(getStringFromNative());
        findViewById(R.id.btn).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Log.i("bitch", new NdkJava().sayint() + "---&@");
            }
        });
        findViewById(R.id.btn1).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                new Thread(){
                    @Override
                    public void run() {
                        super.run();
                        Log.i("bitch", new NdkJava().sayint() + "---&@");
                    }
                }.start();
            }
        });
    }
}
