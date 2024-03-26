package com.example.mjcpp;

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import java.io.*;

public class HelloController {
    @FXML
    private Label welcomeText;


    @FXML
    protected void onBowButtonClick() {
        try {
            System.out.println("Succes : 0.45  fumble : 0.05 critique : 0.9");
            Runtime rt = Runtime.getRuntime();
            //Process pr = rt.exec("ls / >fichier.txt");

            //Process pr = rt.exec("/System/Users/admin/Desktop/TP_Cpp/cmake-build-debug/TP_Cpp");
            Process pr = rt.exec("/Users/admin/Desktop/Spring/MJCPP/src/main/resources/com/example/cpp/TP_Cpp");
            int exitVal = pr.waitFor();
            System.out.println("Exited with error code "+exitVal);
        } catch(Exception e) {
            System.out.println(e.toString());
            e.printStackTrace();
        }

    }
    @FXML
    protected void onSwordButtonClick() {
        try {
            System.out.println("Succes : 0.25  fumble : 0.2 critique : 0.85");
            Runtime rt = Runtime.getRuntime();
            Process pr = rt.exec("ls");
        } catch(Exception e){
            System.out.println(e.toString());
            e.printStackTrace();
        }

    }
    @FXML
    protected void onFistButtonClick() {
        try{
            System.out.println("Succes : 0.60  fumble : 0 critique : 1");
            ProcessBuilder processBuilder = new ProcessBuilder();
            processBuilder.command("/Users/admin/Desktop/Spring/MJCPP/src/main/resources/com/example/cpp/TP_Cpp", "0", "60", "100");
            Process process = processBuilder.start();
            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
            int exitVal = process.waitFor();
            System.out.println("Exited with error code "+exitVal);
        } catch(Exception e)
        {
            System.out.println(e.toString());
            e.printStackTrace();
        }

    }

    @FXML
    protected void onFireButtonClick() {
        System.out.println("Succes : -1  fumble : 0.5 critique : 0.5");
    }
}