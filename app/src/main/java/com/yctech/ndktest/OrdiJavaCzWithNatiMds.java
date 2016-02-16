package com.yctech.ndktest;

public class OrdiJavaCzWithNatiMds {
    static {
        System.loadLibrary("jnilibycc");
    }
    public void ordiJavaMdsSaySth()
    {
        System.out.println("OrdiJavaCzWithNatiMds.java--普通java方法---ordiJavaMdsSayHello---");
    }
    public native void  nativeSaySth();
}
