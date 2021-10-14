package com.kimliu.fmodproject;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import org.fmod.FMOD;

public class MainActivity extends AppCompatActivity {

    private static final int MODE_NORMAL = 0; // 正常
    private static final int MODE_LUOLI = 1; // 萝莉
    private static final int MODE_DASHU = 2; // 大叔
    private static final int MODE_JINGSONG = 3; // 惊悚
    private static final int MODE_GAOGUAI = 4; // 搞怪
    private static final int MODE_KONGLING = 5; // 空灵

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    private String path;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        path = "file:///android_asset/kimliu.mp3";

        FMOD.init(this);

    }


    @Override
    protected void onDestroy() {
        super.onDestroy();
        FMOD.close();
    }

    public void onFix(View view) {
        switch (view.getId()) {
            case R.id.btn_normal:
                voiceChangeNative(MODE_NORMAL, path); // 真实开发中，必须子线程  JNI线程（很多坑）
                break;
            case R.id.btn_luoli:
                voiceChangeNative(MODE_LUOLI, path);
                break;
            case R.id.btn_dashu:
                voiceChangeNative(MODE_DASHU, path);
                break;
            case R.id.btn_jingsong:
                voiceChangeNative(MODE_JINGSONG, path);
                break;
            case R.id.btn_gaoguai:
                voiceChangeNative(MODE_GAOGUAI, path);
                break;
            case R.id.btn_kongling:
                voiceChangeNative(MODE_KONGLING, path);
                break;
        }
    }

    /**
     * 这个函数 给C++调用
     * JNI调用Java函数的时候，会忽略掉private public
     * @param msg
     */
    private void playEnd(String msg){
        Toast.makeText(this,""+ msg, Toast.LENGTH_SHORT).show();
    }
    // native方法  改变声音
    private native void voiceChangeNative(int modeNormal,String path);
}