package com.example;

import java.util.Scanner;

public class tugas2 {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        System.out.println("\nKelompok: kelompok 3");
        System.out.println("Shift: shift 1");
        System.out.println("Nama Anggota 1: Ananda Muhammad Zahir (21120120140115)");
        System.out.println("Nama Anggota 2: Didan Hasan Murtaqi (21120120140103)");
        System.out.println("Nama Anggota 3: Juliant Raffa (21120120130127)");
        System.out.println("Nama Anggota 4: Sachiko Fitria Ramandanti (21120120140103)\n");

        menu();
        int x = input.nextInt();
        if (x == 1) {
            menu2();
            int y = input.nextInt();
            if (y == 1 ) {
                pangkat();
            }else if (y == 2){
                akar();
            }else {
                System.out.println("ERROR");
            }
        }else if (x == 2){
            menu3();
            int a = input.nextInt();
            if (a == 1){
                sin1();
            }else if (a == 2){
                cos1();
            }else{
                System.out.println("ERROR");
            }
        }else{
            System.out.println("ERROR");
        }
    }

    //Method
    static void menu(){
        System.out.println("============================");  System.out.println("    Program Kalkulator");
        System.out.println(" 1. Kalkulator Eksponen");
        System.out.println(" 2. Kalkulator Trigonometri");
        System.out.println("============================");
        System.out.print("Pilih Opsi: ");
    }

    static void menu2() {
        System.out.println("================================");
        System.out.println("    Program Kalkulator Eksponen");
        System.out.println(" 1. Kalkulator Pangkat");
        System.out.println(" 2. Kalkulator Akar");
        System.out.println("================================");
        System.out.print("Pilih Opsi: ");
    }

    static void menu3(){
        System.out.println("==================================");
        System.out.println("    Program Kalkulator Trionometri");
        System.out.println("    1. Kalkulator Sin");
        System.out.println("    2. Kalkulator Cos");
        System.out.println("==================================");
        System.out.print("Pilih Opsi: ");
    }

    static double pangkat() {
        boolean f = false;
        do {
            Scanner s = new Scanner(System.in);
            double x, b, hasil;
            char a;
            System.out.print("Masukan angka: ");
            x = s.nextDouble();
            System.out.print("Masukan pangkat: ");
            b = s.nextDouble();
            hasil = Math.pow(x, b);
            System.out.println("Hasil pangkat adalah: " + hasil + "\n");
            System.out.println("Ingin Lanjut?(y/n) ");
            a = s.next().charAt(0);
            if (a == 'y') {
                f = true;
            } else {
                f = false;
            }
            return hasil;
        }while(f);
    }

    static double akar() {
        boolean f = false;
        do {
            Scanner s = new Scanner(System.in);
            double x, b, hasil;
            char a;
            System.out.print("Masukan angka: ");
            x = s.nextDouble();
            System.out.print("Masukan akar: ");
            b = s.nextDouble();
            hasil = Math.pow(x, 1/b);
            System.out.println("Hasil akar adalah: " + hasil + "\n");
            System.out.println("Ingin Lanjut?(y/n) ");
            a = s.next().charAt(0);
            if (a == 'y') {
                f = true;
            } else {
                f = false;
            }
            return hasil;
        }while(f);
    }

    static double sin1(){
        boolean f = false;
        do
        {
            Scanner s = new Scanner(System.in);
            double x,hasil;
            char a;
            System.out.print("Masukan sudut: "); ;
             x = s.nextDouble();
            hasil = x*3.14/180;
            System.out.println("Hasil perhitungan adalah: " + Math.sin(hasil));
            System.out.println("Ingin Lanjut?(y/n) ");
            a = s.next().charAt(0);
            if (a == 'y')
            {
                f = true;
            }else
            {
                f = false;
            }

            return Math.sin(hasil) ;
        } while (f);

    }

    static double cos1(){
        boolean f = false;
        do
        {
            Scanner s = new Scanner(System.in);
            double x,hasil;
            char a;
            System.out.print("Masukan sudut: "); ;
            x = s.nextDouble();
            hasil = x*3.14/180;
            System.out.println("Hasil perhitungan adalah: " + Math.cos(hasil));
            System.out.println("Ingin Lanjut?(y/n) ");
            a = s.next().charAt(0);
            if (a == 'y')
            {
                f = true;
            }else
            {
                f = false;
            }
            return Math.cos(hasil) ;
        } while (f);
    }
}
