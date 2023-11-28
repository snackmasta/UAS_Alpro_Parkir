#include <graphics.h>
#include <stdio.h>

void antri(int *slot){
    int antri1 = 10-*slot;
    int antri2 = antri1*60;
    int x = 100+antri2, y = 210, t;
    int o = 30;
    int f = 5;
    int batas;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
    printf("Tersedia = %i",*slot);

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    batas=10-*slot;

    // Gambar Mobil
    for (f = 0; f <= batas*60 ; f++) {
	// Frame
	delay(7);
	setcolor(WHITE);
	rectangle(x - f, y, x + o - f, y + o);
	setcolor(BLACK);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);

    }
}

void mobilkeluar(int *slot){
 int x = 100, y = 210, t;
    int o = 30;
    int f = 5;
    int batas;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
    printf("Tersedia = %i",*slot);

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    batas=10-*slot;

    // Gambar Mobil
    for (f = 0; f <= 410 - batas*60 ; f++) {
	// Frame
	delay(7);
	setcolor(WHITE);
	rectangle(x - f, y, x + o - f, y + o);
	setcolor(BLACK);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);

    }
}

void cancel(int *slot){
    int x = 500, y = 210, t;
    int o = 30;
    int f = 5;
    int batas;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
	printf("\n\t    Tersedia = %i",*slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	setcolor(WHITE);
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    batas=10-*slot;

    // Gambar Mobil
    for (f = 0; f <= 190 ; f++) {
	// Frame
	delay(7);
	setcolor(GREEN);
	line(500, 200, 500, 250);
	setcolor(WHITE);
	rectangle(x + f, y, x + o + f, y + o);
	setcolor(BLACK);
	rectangle(x - 30 + f, y - 8, x + o - 30 + f, y + o + 8);
	rectangle(x - 30 + f, y - 8, x + o - 30 + f, y + o + 8);

    }
}


void ambilkarcis(int *slot){
    int x = 500+200, y = 210, t;
    int o = 30;
    int f = 5;
    int batas;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
	printf("\n\t    Tersedia = %i",*slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    batas=10-*slot;

    // Gambar Mobil
    for (f = 0; f <= 190 ; f++) {
	// Frame
	delay(7);
	setcolor(WHITE);
	rectangle(x - f, y, x + o - f, y + o);
	setcolor(BLACK);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);

    }
}


void animasimasuk(int *slot){
    int x = 500, y = 210, t;
    int o = 30;
    int f = 5;
    int batas;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
	printf("\n\t    Tersedia = %i",*slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    batas=10-*slot;

    // Gambar Mobil
    for (f = 0; f <= 410 - batas*60 ; f++) {
	// Frame
	delay(7);
	setcolor(WHITE);
	rectangle(x - f, y, x + o - f, y + o);
	setcolor(BLACK);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);
	rectangle(x + 30 - f, y - 8, x + o + 30 - f, y + o + 8);

    }
}

// Fungsi untuk menggambar portal masuk
void portalmasuk(int *slot) {
    int x = 500, y = 200, t;
    int o = 50;
    int f = 5;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
	printf("\n\t    Tersedia = %i",*slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");


    setcolor(WHITE);
    rectangle(700,210,700+30,210+30);
	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    // Gambar portal
    for (f = 0; f <= 50; f++) {
	// Frame
	delay(7);
	setcolor(BLACK);
	line(x, y, x, y + o);
	setcolor(GREEN);
	line(x, y, x, y + o - f);
    }
}

void portalmasuktutup(int *slot) {
    int x = 500, y = 150, t;
    int o = 50;
    int f = 5;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
	printf("\n\t    Tersedia = %i",*slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    // Gambar portal
    for (f = 0; f <= 50; f++) {
	// Frame
	delay(7);
	setcolor(BLACK);
	line(x, y, x, y + o);
	setcolor(WHITE);
	line(x, y, x, y + o + f);
    }
}


// Fungsi untuk menggambar portal keluar
void portalkeluar(int *slot) {
    int x = 100, y = 200, t;
    int o = 50;
    int f = 5;

    // Koordinat untuk portal
    int xa = 150, ya = 150;
    int xb = 150, yb = 250;
    int L = 50;
    int x1 = xa, x2 = xa + L, y1 = ya, y2 = ya + L;
    int x3 = xb, x4 = xb + L, y3 = yb, y4 = yb + L;
    int offset = 60;
    int i;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    // Gambar parkiran
    cleardevice(); // Membersihkan layar
    printf("Tersedia = %i",*slot);

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

    for (i = 0; i < 5; i++) {
	rectangle(x1 + offset * i, y1, x2 + offset * i, y2);
	rectangle(x3 + offset * i, y3, x4 + offset * i, y4);
    }

    // Gambar portal
    for (f = 0; f <= 50; f++) {
	// Frame
	delay(7);
	setcolor(BLACK);
	line(x, y, x, y + o);
	setcolor(WHITE);
	line(x, y, x, y + o - f);
    }
}

int main()
{
    // Inisialisasi posisi awal kotak
    int x = 150, y = 150;
    int L = 50;
    int offset=60;
    int direction = 1; // arah pergerakan kotak, 1 untuk ke kanan, -1 untuk ke kiri
    int i;
    int slot=10;
    char key,karcis;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI\\");

    while(1) // loop utama
    {
	// Deklarasi variabel untuk menggambar kotak parkir
	int xa = 150, ya = 150;
	int xb = 150, yb = 250;
	int L = 50;
	int x1 = xa, x2 = xa+L, y1 = ya, y2 = ya+L;
	int x3 = xb, x4 = xb+L, y3 = yb, y4 = yb+L;
	int offset=60;

	// Membersihkan layar
	cleardevice();

	if(slot<=10 && slot>0){
	printf("\n\t    Tersedia = %i",slot);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t    Tombol 'w' untuk mendekati portal masuk");
	printf("\n\t    Tombol 'm' untuk membeli karcis");
	printf("\n\t    Tombol 'k' untuk batal membeli karcis");
	printf("\n\t    Tombol 's' untuk antri keluar dari tempat parkir");
	printf("\n\t    Tombol 'q' untuk menutup program");
	printf("\n\t    Tombol 'b' untuk membayar biaya parkir");
	}
	else if(slot==10){
	 printf("Parkiran Kosong");
	}

	// Menggambar dinding yang mengelilingi parkiran
	rectangle(100,100,500,350);

	// Menggambar kotak parkir
	for(i = 0; i < 5; i++) {
	    rectangle(x1+offset*i, y1, x2+offset*i, y2);
	    rectangle(x3+offset*i, y3, x4+offset*i, y4);
	}

	// Menggambar portal bergerak
	key=getch();
	if (key=='w' && slot >0){
	    ambilkarcis(&slot);
	    karcis=getch();

	    if(karcis=='m'){
	     portalmasuk(&slot);
	     delay(1000);
	     slot--;
	     animasimasuk(&slot);
	     portalmasuktutup(&slot);
	     delay(1000);
	    }
	    else if(karcis=='k'){
	     cancel(&slot);
	     delay(1000);
	     portalmasuktutup(&slot);
	     delay(1000);
	    }
	}
	else if (key=='s' && slot < 10){
	 antri(&slot);
	 karcis=getch();

	    if(karcis=='b'){
	    portalkeluar(&slot);
	    delay(1000);
	    slot++;
	    mobilkeluar(&slot);
	    portalkeluar(&slot);
	    delay(1000);
	    }
	}
	else if (key=='w' && slot == 0){
	    printf("Parkir Penuh");
	}
	else if (key=='s' && slot == 10){
	    printf("Tidak ada mobil");
	}
	else if (key=='q'){
	break;
	}

	// Jeda sejenak sebelum menggambar ulang
	delay(50);

	// Menggambar ulang layar
    }

    getch();
    closegraph();
    return 0;
}
