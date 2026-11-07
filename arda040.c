//kütüphaneler
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include <windows.h>
#include <process.h>
#include <string.h>
#include <fcntl.h>
#define MAX_NOT_UZUNLUK 1000
//KarOS 4
int showtime=1;
int shownavbar=1;
int sil=1;
int renk;
int ses=1;
int nof;
int crnof;
int nofses=1;
int crnofses=1;
int lisdognof=0;
int lisdognof2=0;
int appno;
int qmenu;
int setupped;
FILE *koslog;
int alllog[5];
int saveoft;
int day=1;
int homerenk;
int nofhelp=0;
int nofh1;
FILE *kosrenk;
int allrenk[5];
int color10;
int color1;
int homerenk10;
int homerenk1;
int devs=0;
//varsayýlanlar
int varylang=1;
int varyhome=1;
int varybrsr=1;
int varyserc=1;
int home=0;
//temel sistem parçalarý
int workmode=0;
int seterisim=1;
int kaserisim=1;
int calerisim=1;
int noterisim=1;
int cityerisim=1;
int vererisim=1;
int lang=1;
int calint=0;
int kascon=1;
int karcon=1;
int location;
int keys=100000;
int karlocate;
int karos;
int backup;
int kared;
int backdown;
int lisansdogrulama()
{
	if(keys==618342|| keys==762496)
	karos=41;
	else if(keys==821673|| keys==876405)
	karos=42;
	else if(keys==100000)
	karos=40;
}
int saniye()
{
	int a;
	if(karos==40)
	Sleep(2000);
	else if(karos==41)
	Sleep(1000);
	else if(karos==42)
	Sleep(0);
	
}
int mainimsi()
{
	if(lang==1)
	trstart();
	else if(lang==2)
	enstart();
	else if(lang==3)
	destart();
}
int backzone()
{
	switch(location)
	{
//Boot
		case 1:
			main();
			break;
		case 2:
			main2();
			break;
		case 1115711:
			langtr();
			break;
		case 1215712:
			langen();
			break;
		case 11:
			trstart0();
			break;
		case 12:
			enstart0();
			break;
		case 13:
			destart0();
			break;
		case 119:
			biostr();
			break;
		case 129:
			biosen();
			break;
//Kilit Ekranlarý ve Ana Ekranlar
		case 111:
			trstart1();
			break;
		case 121:
			enstart1();
			break;
		case 131:
			destart();
			break;
		case 1111:
			trstart();
			break;
		case 1211:
			enstart();
			break;
		case 1311:
			destart();
			break;
		case 1115:
			fazlatr();
			break;
		case 1215:
			fazlaen();
			break;
		case 1315:
			fazlade();
			break;
//ayarlar
		case 111570:
			settingstr0();
			break;
		case 121570:
			settingsen0();
			break;
		case 131570:
			settingsde0();
			break;
		case 111571:
			settingstr();
			break;
		case 121571:
			settingsen();
			break;
		case 131571:
			settingsde();
			break;
		case 111572:
			screentr();
			break;
		case 111573:
			karappstr();
			break;
		case 111574:
			devicetr();
			break;
		case 111575:
			abouttr();
			break;
		case 111576:
			onesettr();
			break;
		case 1115721:
			daynighttr();
			break;
		case 1115722:
			desktoptr();
			break;
		case 1115723:
			showsaattr();
			break;
		case 1115724:
			typenavbartr();
			break;
		case 11157251:
			colorstr();
			break;
		case 11157252:
			colors2tr();
			break;
		case 11157253:
			colors3tr();
			break;
		case 1115731:
			nappstr();
			break;
		case 1115732:
			varytr();
			break;
		case 1115741:
			connectionstr();
			break;
		case 1115742:
			sesvebiltr();
			break;
		case 1115743:
			langtr();
			break;
		case 1115744:
			erisebiltr();
			break;
		case 1115745:
			onartr();
			break;
		case 11157421:
			nofsestr();
			break;
		case 11157441:
			nofhelptr();
			break;
		case 11157442:
			gecmistr();
			break;
		case 11157451:
			backuptr();
			break;
		case 11157452:
			gelstarttr();
			break;
		case 11157453:
			sorunlartr();
			break;
		case 111574531:
			testtr();
			break;
		case 121572:
			screenen();
			break;
		case 121573:
			karappsen();
			break;
		case 121574:
			deviceen();
			break;
		case 121575:
			abouten();
			break;
		case 121576:
			oneseten();
			break;
		case 1215721:
			daynighten();
			break;
		case 1215722:
			desktopen();
			break;
		case 1215723:
			showsaaten();
			break;
		case 1215724:
			typenavbaren();
			break;
		case 12157251:
			colorsen();
			break;
		case 12157252:
			colors2en();
			break;
		case 12157253:
			colors3en();
			break;
		case 1215731:
			nappsen();
			break;
		case 1215732:
			varyen();
			break;
		case 1215741:
			connectionsen();
			break;
		case 1215742:
			sesvebilen();
			break;
		case 1215743:
			langen();
			break;
		case 1215744:
			erisebilen();
			break;
		case 1215745:
			onaren();
			break;
		case 12157421:
			nofsesen();
			break;
		case 12157441:
			nofhelpen();
			break;
		case 12157442:
			gecmisen();
			break;
		case 12157451:
			backupen();
			break;
		case 12157452:
			gelstarten();
			break;
		case 12157453:
			sorunlaren();
			break;
		case 121574531:
			testen();
			break;
		case 131572:
			screende();
			break;
		case 131573:
			karappsde();
			break;
		case 131574:
			devicede();
			break;
		case 131575:
			aboutde();
			break;
		case 131576:
			onesetde();
			break;
		case 1315721:
			daynightde();
			break;
		case 1315722:
			desktopde();
			break;
		case 1315723:
			showsaatde();
			break;
		case 1315724:
			typenavbarde();
			break;
		case 13157251:
			colorsde();
			break;
		case 13157252:
			colors2de();
			break;
		case 13157253:
			colors3de();
			break;
		case 1315731:
			nappsde();
			break;
		case 1315732:
			varyde();
			break;
		case 1315741:
			connectionsde();
			break;
		case 1315742:
			sesvebilde();
			break;
		case 1315744:
			erisebilde();
			break;
		case 1315745:
			onarde();
			break;
		case 13157421:
			nofsesde();
			break;
		case 13157441:
			nofhelpde();
			break;
		case 13157442:
			gecmisde();
			break;
		case 13157451:
			backupde();
			break;
		case 13157452:
			gelstartde();
			break;
		case 13157453:
			sorunlarde();
			break;
		case 131574531:
			testde();
			break;
		//Kapatma Seçenekleri
		case 11150:
			shutdowntr();
			break;
		case 12150:
			shutdownen();
			break;
		case 13150:
			shutdownde();
			break;
	//Yardým ve Destek
		case 11153:
			help();
			break;
		case 12153:
			help();
			break;
		case 13153:
			help();
			break;
			//Kod Sistemi
		case 11152:
			codsystr();
			break;
		case 12152:
			codsysen();
			break;
		case 13152:
			codsysde();
			break;
		//Hesap Makinesi
		case 11110:
			calculatortr0();
			break;
		case 11111:
			calculatortr();
			break;
		case 11112:
			calculatortr2();
			break;
		case 11118:
			calsettr();
			break;
		case 12110:
			calculatoren0();
			break;
		case 12111:
			calculatoren();
			break;
		case 12112:
			calculatoren2();
			break;
		case 12118:
			calseten();
			break;
		case 13110:
			calculatorde0();
			break;
		case 13111:
			calculatorde();
			break;
		case 13112:
			calculatorde2();
			break;
		case 13118:
			calsetde();
			break;
		//Not Defteri
		case 11120:
			notepadtr0();
			break;
		case 12120:
			notepaden0();
			break;
		case 13120:
			notepadde();
			break;
		case 11121:
			notepadtr();
			break;
		case 12121:
			notepaden();
			break;
		case 13121:
			notepadde();
			break;
		//Þehir Bulma
		case 11130:
			cityfindtr0();
			break;
		case 12130:
			cityfinden0();
			break;
		case 13130:
			cityfindde0();
			break;
		case 11131:
			cityfindtr();
			break;
		case 12131:
			cityfinden();
			break;
		//Vergi Hesaplama
		case 111510:
			vergihometr0();
			break;
		case 121510:
			vergihomeen0();
			break;
		case 131510:
			vergihomede0();
			break;
		case 111511:
			vergihometr();
			break;
		case 1115111:
			doviztr();
			break;
		case 1115112:
			konsoltr();
			break;
		case 121511:
			vergihomeen();
			break;
		case 1215111:
			dovizen();
			break;
		case 1215112:
			konsolen();
			break;
		default:
			backzone2();
			break;		
	}
}
int startimsi()
{
	if(lang==1)
	trstart0();
	else if(lang==2)
	enstart0();
	else if(lang==3)
	destart0();
}
int saat()
{
	if(showtime==1)
	{
		time_t mytime;
	    mytime = time(NULL);
		printf("%s\n",ctime(&mytime));
	}
	else
	{
		
	}
}
int navbar()
{
	if(shownavbar==1)
	{
		if(lang==1)
		{
			printf("7=Geri\n");
			printf("8=Hýzlý Menü ve Bildirim Merkezi\n");
			printf("9=Ana Menü\n");
		}
		else if(lang==2)
		{
			printf("7=Back\n");
			printf("8=Quick Menu & Noffication Center\n");
			printf("9=Home Menu\n");
		}
		else if(lang==3)
		{
			printf("7=Zurück\n");
			printf("8=Schnellmenü und Benachrichtigungscenter\n");
			printf("9=Home-Menü\n");
		}
	}
	else if(shownavbar==2)
	{
		printf("7=<--   8=|Q|   9=|^|\n");
	}
	else 
	{
		
	}
}
int hata()
{
	if(ses==1)
	printf("\a\n");
	else if(ses==0)
	{
		printf("\n");
	}
}
int silge(int a)
{
	if(a==1)
	{
		
	}
	else
	{
		if(sil==1)
		{
			system("cls");
		}
		else
		{
			
		}
	}
}
int nofbar()
{
	printf("?=%d   !=%d\n",nof,crnof);
	if(crnof>0)
	printf("\a");
}
int checknofs()
{
	if(lang==1)
	printf("Sync...\n");
	else if(lang==2)
	printf("Sync...\n");
	else if(lang==3)
	printf("Sync...\n");
	if(lisdognof==1)
	{
		crnof++;
		lisdognof2=1;
		lisdognof=0;
	}
	if(nofh1=!crnof)
	{
		system("color 70");
		saniye();
		system("color 07");
		saniye();
		system("color 70");
		if(day==1)
		system("color 70");
		else if(day=2)
		system("color 07");
		renkbulucu();
	}
	
}
int kaydet()
{
	verikaydet();
	renkkaydet();
	storekaydet();
}
int verikaydet()
{
	koslog=fopen("karoslog.txt","w+");
	crtlog();
	fprintf(koslog,"%d%d%d%d%d",alllog[0],alllog[1],alllog[2],alllog[3],alllog[4]);
	fclose(koslog);
}
int crtlog()
{
	kared=karos%10;
	alllog[0]=varylang;
	alllog[1]=varybrsr;
	alllog[2]=setupped;
	alllog[3]=kared;
	alllog[4]=lang;
}
int oku()
{
	koslog=fopen("karoslog.txt","r");
	fscanf(koslog,"%d",&alllog);	
	int i; 
    int basamak; 
    for (i = 0; i < 5; i++) 
    {
        basamak = alllog[0] % 10; 
        alllog[0] = alllog[0] / 10; 
		if(i==0)
		lang=basamak;
		else if(i==1)
		kared=basamak;
		else if(i==2)
		setupped=basamak;
		else if(i==3)
		varybrsr=basamak;
		else if(i==4)
		varylang=basamak;
		karos=40+kared;
		if(karos==41)
		keys=618342;
		if(karos==42)
		keys=821673;
    }
    renkoku();
    okustr();
}
int renkkaydet()
{
	kosrenk=fopen("karosrenk.txt","w+");
	crtrenklog();
	fprintf(kosrenk,"%d%d%d%d%d",allrenk[0],allrenk[1],allrenk[2],allrenk[3],allrenk[4]);
	fclose(kosrenk);
}
int crtrenklog()
{
	int a=renk;
	color1=renk%10;
	renk=renk-color1;
	color10=renk/10;
	renk=a;
	int b=homerenk;
	homerenk1=homerenk%10;
	homerenk=homerenk-homerenk1;
	homerenk10=homerenk/10;
	homerenk=b;
	allrenk[0]=color10;
	allrenk[1]=homerenk1;
	allrenk[2]=day;
	allrenk[3]=color1;
	allrenk[4]=homerenk10;
}
int renkoku()
{
	kosrenk=fopen("karosrenk.txt","r");
	fscanf(kosrenk,"%d",&allrenk);	
	int i; 
    int basamak; 
    for (i = 0; i < 5; i++) 
    {
        basamak = allrenk[0] % 10; 
        allrenk[0] = allrenk[0] / 10; 
		if(i==0)
		homerenk10=basamak;
		else if(i==1)
		color1=basamak;
		else if(i==2)
		day=basamak;
		else if(i==3)
		homerenk1=basamak;
		else if(i==4)
		color10=basamak;
		renk=color10*10+color1;
		homerenk=homerenk10*10+homerenk1;
    }
    renkbulucu();
}
int devshow()
{
	if(devs==1)
	{
		printf("KarOS 2543V1 BUILD\n");
		printf("Location  : %d\n",location);
		printf("Homerenk  : %d\n",homerenk);
		printf("color10   : %d\n",color10);
		printf("color1    : %d\n",color1);
		printf("homerenk10: %d\n",homerenk10);
		printf("homerenk1 : %d\n",homerenk1);
		printf("varylang  : %d\n",varylang);
		printf("lang      : %d\n",lang);
		printf("varybrsr  : %d\n",varybrsr);
		printf("karos     : %d\n",karos);
	}
	else if(devs==1)
	{
		
	}
}
//KarStore Services Parçalarý
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SIZE 4
#define BORDER 219
#define ESC 57
#define PR 2
//karstore4
FILE *strlog;
int mgzlog[5];
int svstore=1;
//Eriþimler
int tip0=1;
int figure0=1;
int akdev0=1;
int akyak0=1;
int asim0=1;
int ssim0=1;
int t20230=1;
int tkm0=1;
int sayi0=1;
int barb0=1;
int yil0=1;
int gtt0=1;
int vki0=1;
int yerm0=1;
int eko0=1;
//Ana Ekran
int yerm1=0;
int tip1=0;
int figure1=0;
int akdev1=0;
int akyak1=0;
int asim1=0;
int ssim1=0;
int gtt1=0;
int t20231=0;
int tkm10=0;
int sayi10=0;
int barb10=0;
int yil10=0;
int vki11=0;
int eko1=0;
//Lisanslar
int yerm2=0;
int figure2=0;
int akdev2=0;
int gtt2=0;
int akyak2=0;
int vki2=0;
int tip2=1;
int asim2=0;
int ssim2=0;
int t20232=0;
int tkm2=0;
int sayi2=0;
int barb2=0;
int yil2=0;
int eko2=0;
int storelicense=1;
//akdevlet
int onay=0;
int yonet=0;
//sanayi sim
int sanayisim_maas=0;
int sanayisim_para=0;
int sanayisim_tcrb=0;
int sanayisim_sabt=0;
//Target 2023
int geri=3;//Geriye kalan geri alma hakký için zorunlu
int onceki;//Bir önceki fonksiyonu bulmanýn zor olabileceði durumlar için zorunlu
//KarGames Baþarýmlarý
int basar=0;
int ssima1=0;
int ssima2=0;
int ssims;
int asima1=0;
int asima2=0;
int asima3=0;
int asims;
int tkma1=0;
int trgta1=0;
int trgta2=0;
int trgts;
int saya1=0;
int ekoa1=0;
int ekos;
//Target Fonksiyonlarý
void icerik(int geri,char *tarih,float borc,int para,char *gelir,char *doviz,int mutluluk,int diplomasi,int ordu);
void ifelse(int secim1,int secim2,int secimgeri);
void kaybettiniz(int secimgeri);
void target2023();

void target_start();
void a1();
void a2();
void b1();
void b2();
void b3();
void b4();
void c1();
void c2();
void c3();
void c4();
void c5();
void c6();
void c7();
void c8();
void d1();
void d2();
void d3();
void d4();
void d5();
void d6();
void d7();
void d8();
void e1();
void e2();
void e3();
void e4();
void e5();
void e6();
void e7();
void e8();
void e9();
void e10();
void e11();
void e12();
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
void f10();
void f11();
void f12();
void f13();
void f14();
void g1();
void g2();
void g3();
void g4();
void g5();
void g6();
void g7();
void g8();
void g9();
void g10();
void g11();
void g12();
void g13();
void g14();
void g15();
void g16();
void h1();
void h2();
void h3();
void h4();
void h5();
void h6();
void h7();
void h8();
void h9();
void h10();
void h11();
void h12();
void i1();
void i2();
void i3();
void i4();
void i5();
void i6();
void i7();
void i8();
void i9();
void i10();
void i11();
void i12();
void k1();
void k2();
void k3();
void k4();
void k5();
void k6();
void k7();
void k8();
void k9();
void k10();
void k11();
void k12();
void k13();
void k14();
void l1();
void l2();
void l3();
void l4();
void l5();
void l6();
void l7();
void l8();
void m1();
void m2();
void m3();
void m4();
//boot
int main()
{
	location=1;
	nofh1=crnof;
	setlocale(LC_ALL,"Turkish"); 
	printf("Your pc will open automatically.\n");
	printf("NOTICE: You want to open BSS, you can go to settings.\n");
	saniye();
	lisansdogrulama();
	oku();
	renkoku();
	saniye();
	system("color 70");
	if(setupped==0)
	{
		firstsetup();
	}
	else if(setupped==1)
	{
		startimsi();
	}
}
int main2()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=2;
	printf("Geliþmiþ Baþlatma Seçenekleri----------------------------------------\n");
	printf("Türkiye\n");
	printf("1=Türkçe\n");
	printf("2=English\n");
	printf("3=Tüm Diller\n");
	printf("8=BSS\n");
	printf("9=Kapat\n");
	lisansdogrulama();
	char giris;
	scanf("%c",&giris);
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch (a)
		{
			case 1:
				trstart0();
				break;
			case 2:
				enstart0();
				break;	
			case 3:
				if(varylang==1)
				langtr();
				else if(varylang==2)
				langen();
				break;
			case 8:
				if(varylang==1)
				biostr();
				else if(varylang==2)
				biosen();
				break;
			case 9:
				break;
			default:
				printf("Err001\n");
				scanf("");
				main2();
				break;		
	}
	}
	else
	{
		printf("Sayi girilmedi.\n");
		printf("Tekrar dene.\n");
		main2();
	}
	
	return 0; 
}
int langtr()
{
	location=1115743;
	int fflush(FILE *stream);
	fflush(stdin);
	silge(0);
	saat();
	nofbar();
	printf("Diller----------------------\n");
	printf("1=Türkçe\n");
	printf("2=Ingilizce--English\n");
	printf("3=Almanca-  -Deustch\n");
	printf("4=Fransýzca--Français(Yakýnda)\n");
	printf("7=Geri\n");
	printf("9=Kapat ve geri dön\n");
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
			switch (a)
		{
			case 1:
				lang=1;
				trstart0();
				break;
			case 2:
				lang=2;
				enstart0();
				break;	
			case 3:
				lang=3;
				destart0();
				break;
			case 7:
				if(lang==1)
				settingstr();
				else if(lang==3)
				settingsde();
				break;
			case 9:
				main2();
				break;
			default:
				hata();
				langtr();
				break;		
		}
	}
	else
	{
		hata();
		langtr();
	}
	return 0; 
}
int langen()
{
	location=1215743;
	int fflush(FILE *stream);
	fflush(stdin);
	silge(0);
	saat();
	nofbar();
	printf("Languages----------------------\n");
	printf("1=Türkçe\n");
	printf("2=English\n");
	printf("3=Deustch\n");
	printf("4=Français(Coming Soon)\n");
	printf("7=Back\n");
	printf("9=Shutdown and turn back\n");
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch (a)
		{
			case 1:
				lang=1;
				trstart0();
				break;
			case 2:
				lang=2;
				enstart0();
				break;	
			case 3:
				lang=3;
				destart0();
				break;
			case 7:
				if(lang==2)
				settingsen();
				else if(lang==3)
				settingsde();
				break;
			case 9:
				main2();
				break;
			default:
				hata();
				langen();
				break;		
		}
	}
	else
	{
		hata();
		langen();
	}
	return 0; 
}
int trstart0()
{
	location=11;
	lang=1;
	int a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	printf("\t\t\t\t\t\tKarOS baþlatýlýyor...\n");
	printf("----------");
	saniye();
	a=1;
	while (a<7)
	{
		printf("------------------");
		saniye();
		a++;
	}
	a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	trstart1();
}
int enstart0()
{
	location=12;
	lang=2;
	int a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	printf("\t\t\t\t\t\tKarOS starting...\n");
	printf("----------");
	saniye();
	a=1;
	while (a<7)
	{
		printf("------------------");
		saniye();
		a++;
	}
	a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	enstart1();
}
int destart0()
{
	location=13;
	lang=3;
	int a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	printf("\t\t\t\t\t\tKarOS starten...\n");
	printf("----------");
	saniye();
	a=1;
	while (a<7)
	{
		printf("------------------");
		saniye();
		a++;
	}
	a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	destart1();
}
int biostr()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=119;
	printf("KarSoft BSS(Basic System Settings) 3.1\n");
	printf("BSS dili=Türkçe\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("1=Maðaza lisansýný devre dýþý býrak/etkinleþtir\n");
	printf("2=Ayarlar uygulamasýný devre dýþý býrak\n");
	printf("3=KarStore Servisleri'ni Durdur/Baþlat\n");
	printf("4=BSS dilini seç\n");
	printf("9=BSS'i kapat ve geri dön\n");
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
			switch(a)
		{
			case 1:
				if(storelicense==0)
				{
					printf("Durum: Kapalý\n");
					printf("Açmak için 1'e geri gitmek için 7'ye basýn.\n");
					int fflush(FILE *stream);
					fflush(stdin);
					char giris=getch();
					if(isdigit(giris)==1)
					{
						int f=giris-'0';
						if(f==1)
						{
							storelicense=1;
							printf("Ýþlem baþarýlý.\n\n");
							biostr();
						}
						else
						{
							biostr();
						}
					}
					else
					{
						printf("\a\n");
						biostr();
					}
				}
				else if(storelicense==0)
				{
					printf("Bunu yapmak istediðinize emin misiniz?(Bazý uygulamalar beklenmedik bir biçimde kapanabilir.)\n");
					printf("1=Evet\n");
					printf("2=Hayýr\n");
					int fflush(FILE *stream);
					fflush(stdin);
					giris=getch();
					if(isdigit(giris)==1)
					{
						int d=giris-'0';
						if (d==1)
						{
							kaserisim=0;
							printf("Ýþlem baþarýyla tamamlandý.\n");
							biostr();
						}
						else if(d==2)
						biostr();
						else
						{
							printf("\a\n");
							biostr();
						}
					}
					else
					{
						printf("\a\n");
						biostr();
					}
				}
				break;
			case 2:
				printf("Bu, KarOS'unuzun düzgün çalýþmasýný engelleyebilir, devam etmek istiyor musunuz?\n");
				printf("1=Evet\n");
				printf("2=Hayýr\n");
				int c;
				scanf("%d",&c);
				if (c==1)
				{
					seterisim=0;
					printf("Ýþlem Baþarýyla tamamlandý.\n");
					biostr();
				}
				else if(c==2)
				biostr();
				else
				{
					printf("\a\n");
					biostr();
				}
				break;
			case 3:
				if(kaserisim==0)
				{
					printf("Durum: Kapalý\n");
					printf("Açmak için 1'e geri gitmek için 7'ye basýn.\n");
					int f;
					scanf("%d",&f);
					if(f==1)
					{
						kaserisim=1;
						printf("Ýþlem baþarýlý.\n\n");
						biostr();
					}
					else
					{
						biostr();
					}
				}
				else if(kaserisim==0)
				{
					printf("Bunu yapmak istediðinize emin misiniz?(Bazý uygulamalar beklenmedik bir biçimde kapanabilir.)\n");
					printf("1=Evet\n");
					printf("2=Hayýr\n");
					int d;
					scanf("%d",&d);
					if (d==1)
					{
						kaserisim=0;
						printf("Ýþlem baþarýyla tamamlandý.\n");
						biostr();
					}
					else if(d==2)
					biostr();
					else
					{
						printf("\a\n");
						biostr();
					}
				}
				break;
			case 4:
				printf("1=Türkçe\n");
				printf("2=English\n");
				int e;
				scanf("%d",&e);
				if (e==1)
				{
					printf("Türkçe seçildi.\n");
					biostr();
				}
				else if(e==2)
				{
					printf("Ýngilizce Seçildi/Selected English\n");
					biosen();
				}
				else
				{
					printf("\a\n");
					biostr();
				}
			case 9:
				main();
				break;
			default:
				printf("\a\n");
				biostr();
				break;
		}
	}
	else
	{
		printf("\a\n");
		biostr();
	}

}
int biosen()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=129;
	printf("KarSoft BSS(Basic System Settings) 3.1\n");
	printf("BSS language=English\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("1=Disable/enable store license\n");
	printf("2=Disable Settings app\n");
	printf("3=Stop/Start KarStore Services\n");
	printf("4=Select BSS Language\n");
	printf("9=Turn off BSS and come back\n");
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
			switch(a)
		{
			case 1:
				if(storelicense==0)
				{
					printf("Status: Off\n");
					printf("Press 1 to open, 7 to go back.\n");
					int fflush(FILE *stream);
					fflush(stdin);
					char giris=getch();
					if(isdigit(giris)==1)
					{
						int f=giris-'0';
						if(f==1)
						{
							storelicense=1;
							printf("Process successful.\n\n");
							biosen();
						}
						else
						{
							biosen();
						}
					}
					else
					{
						printf("\a\n");
						biosen();
					}
				}
				else if(storelicense==0)
				{
					printf("Are you sure you want to do this? (Some apps may close unexpectedly.)\n");
					printf("1=Yes\n");
					printf("2=No\n");
					int fflush(FILE *stream);
					fflush(stdin);
					giris=getch();
					if(isdigit(giris)==1)
					{
						int d=giris-'0';
						if (d==1)
						{
							kaserisim=0;
							printf("Process successful.\n");
							biosen();
						}
						else if(d==2)
						biosen();
						else
						{
							printf("\a\n");
							biosen();
						}
					}
					else
					{
						printf("\a\n");
						biosen();
					}
				}
				break;
			case 2:
				printf("This may prevent your KarOS from working properly, do you want to continue?\n");
				printf("1=Yes\n");
				printf("2=No\n");
				int c;
				scanf("%d",&c);
				if (c==1)
				{
					seterisim=0;
					printf("Process successful.\n");
					biosen();
				}
				else if(c==2)
				biosen();
				else
				{
					printf("\a\n");
					biosen();
				}
				break;
			case 3:
				if(kaserisim==0)
				{
					printf("Status: Off\n");
					printf("Press 1 to open, 7 to go back.\n");
					int f;
					scanf("%d",&f);
					if(f==1)
					{
						kaserisim=1;
						printf("Process successful.\n\n");
						biosen();
					}
					else
					{
						biosen();
					}
				}
				else if(kaserisim==0)
				{
					printf("Are you sure you want to do this? (Some apps may close unexpectedly.)\n");
					printf("1=Yes\n");
					printf("2=No\n");
					int d;
					scanf("%d",&d);
					if (d==1)
					{
						kaserisim=0;
						printf("Process successful.\n");
						biosen();
					}
					else if(d==2)
					biosen();
					else
					{
						printf("\a\n");
						biosen();
					}
				}
				break;
			case 4:
				printf("1=Türkçe\n");
				printf("2=English\n");
				int e;
				scanf("%d",&e);
				if (e==1)
				{
					printf("Türkçe seçildi.\n");
					biostr();
				}
				else if(e==2)
				{
					printf("Ýngilizce Seçildi/Selected English\n");
					biosen();
				}
				else
				{
					printf("\a\n");
					biostr();
				}
			case 9:
				main();
				break;
			default:
				printf("\a\n");
				biosen();
				break;
		}
	}
	else
	{
		printf("\a\n");
		biosen();
	}

}//kilit ekranlarý
//KarOS Kurulum
int firstsetup()
{
	printf("Bölge: Türkiye\n");
	printf("Merhaba!\n");
	printf("KarOS'a Hoþgeldiniz!\n");
	printf("Kullanmadan önce ayarlamanýz gereken þeyler var.\n");
	printf("Hazýrsanýz 1'e basýn ve baþlayalým!\n");
	printf("Kapatmak için herhangi bir tuþa basýn.\n");
	varyhome=1;
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("Lütfen dilinizi seçin ve onaylamak için ENTER basýn.\n");
				printf("1=Türkçe-Turkish\n");
				printf("2=English\n");
				printf("3=Deutsch-German\n");
				int fflush(FILE *stream);
				fflush(stdin);
				int b;
				scanf("%d",&b);
					switch(b)
					{
						case 1:
							lang=1;
							varylang=1;
							fs2tr();
							break;
						case 2:
							varylang=2;
							lang=2;
							fs2en();
							break;
						case 3:
							lang=3;
							printf("Lütfen varsayýlan dilinizi seçin ve ENTER basýn.\n");
							printf("1=Türkçe(Önerilen)\n");
							printf("2=Ýngilizce\n");
							int c;
							scanf("%d",&c);
							switch(c)
							{
								case 1:
									varylang=1;
									fs2de();
									break;
								case 2:
									varylang=2;
									fs2de();
									break;
								default:
									firstsetup();
									break;
							}
							break;
						default:
							firstsetup();
							break;		
					}
					break;
				case 99:
					printf("Tek Seferlik Oturum Açýlýyor...\n");
					lang=1;
					varylang=1;
					mainimsi();
					break;
				default:
					break;
				
		}
}
int fs2tr()
{
	printf("Kullanmak istediðiniz tarayýcýyý seçin ve ENTER basýn.\n");
	printf("1=Google Chrome\n");
	printf("2=Microsoft Edge\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			varybrsr=1;
			break;
		case 2:
			varybrsr=2;
			break;
		default:
			fs2tr();
			break;
	}
	printf("Daha fazla ayarý Ayarlar'dan yapabilirsiniz, Hoþ Geldiniz.\n");
	setupped=1;
	kaydet();
	trstart1();
}
int fs2de()
{
	printf("Wählen Sie den Browser aus, den Sie verwenden möchten.\n");
	printf("1=Google Chrome\n");
	printf("2=Microsoft Edge\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			varybrsr=1;
			break;
		case 2:
			varybrsr=2;
			break;
		default:
			fs2de();
			break;
	}
	printf("Weitere Einstellungen können Sie unter Einstellungen, Willkommen vornehmen.\n");
	setupped=1;
	kaydet();
	destart1();
}
int fs2en()
{
	printf("Select the browser you want to use and press ENTER.\n");
	printf("1=Google Chrome\n");
	printf("2=Microsoft Edge\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			varybrsr=1;
			break;
		case 2:
			varybrsr=2;
			break;
		default:
			fs2en();
			break;
	}
	printf("You can make more settings in Settings, Welcome.\n");
	setupped=1;
	kaydet();
	enstart1();
}
//Kilit Ekraný
int trstart1()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=111;
	renkbulucu();
	silge(0);
	nofbar();
	devshow();
	puts("Kilidi açmak için boþluk tuþuna basýn veya 'kilidi aç' deyin.");
	while (1) {
        if (_kbhit()) { // Tuþ algýlandý mý?
            char ch = _getch(); // Tuþu oku (göstermez)
            if (ch == ' '|| ch== 'k') {
				mainimsi(); 
                break;
            }
        }

        time_t now;
        struct tm *local;

        time(&now);
        local = localtime(&now);

        printf("\rSaat: %02d:%02d:%02d   ",
               local->tm_hour,
               local->tm_min,
               local->tm_sec);

        Sleep(1000); // 1 saniye bekle
    }
}
int enstart1()
{
	int fflush(FILE *stream);
	fflush(stdin);
	renkbulucu();
	location=121;
	silge(0);
	saat();
	nofbar();
	devshow();
	puts("Press space button for unlock say 'unlock'");
	while (1) {
        if (_kbhit()) { // Tuþ algýlandý mý?
            char ch = _getch(); // Tuþu oku (göstermez)
            if (ch == ' '|| ch== 'u') {
				mainimsi(); 
                break;
            }
        }

        time_t now;
        struct tm *local;

        time(&now);
        local = localtime(&now);

        printf("\rSaat: %02d:%02d:%02d   ",
               local->tm_hour,
               local->tm_min,
               local->tm_sec);

        Sleep(1000); // 1 saniye bekle
    }
}
int destart1()
{
	int fflush(FILE *stream);
	fflush(stdin);
	renkbulucu();
	location=131;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Drücken Sie zum Entsperren eine Taste.\n");
	while (1) {
        if (_kbhit()) { // Tuþ algýlandý mý?
            char ch = _getch(); // Tuþu oku (göstermez)
            if (ch == ' ') {
				mainimsi(); 
                break;
            }
        }

        time_t now;
        struct tm *local;

        time(&now);
        local = localtime(&now);

        printf("\rSaat: %02d:%02d:%02d   ",
               local->tm_hour,
               local->tm_min,
               local->tm_sec);

        Sleep(1000); // 1 saniye bekle
    }

}
//anaekranlar
int trstart()
{
	silge(1);
	if(saveoft>2)
	kaydet();
	backrenk();
	location=1111;
	saat();
	nofbar();
	devshow();
	printf("1=Hesap Makinesi\n");
	printf("2=KarNotes\n");
	printf("3=Þehir Bulma\n");
	printf("4=KarStore\n");
	printf("5=Daha fazla...\n");
	homestore();
	printf("8=Hýzlý Menü\n");
	printf("Ýpucu-------------------------\n");
	printf("KarOS 5 ile daha kiþisel bir ana ekranýnýz olacak.\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				calculatortr0();
				break;
			case 2:
				renkbulucu();
				notepadtr0();
				break;
			case 3:
				renkbulucu();
				cityfindtr0();
				break;
			case 4:
				renkbulucu();
				karstoretr0();
				break;
			case 9:
				renkbulucu();
				shutdowntr();
				break;
			case 5:
				fazlatr();
				break;
			case 6:
				renkbulucu();
				if(figure1==1)
				figuretr();
				else if(akdev1==1)
				akdevlet();
				else if(akyak1==1)
				akyakit();
				else if(asim1==1)
				apflsim();
				else if(ssim1==1)
				sanayisim();
				else if(t20231==1)
				target2023();
				else if(tkm10==1)
				tkm();
				else if(sayi10==1)
				sayi_tahmin();
				else if(barb10==1)
				barbut();
				else if(yil10==1)
				yilan();
				else if(gtt1==1)
				gtt();
				else if(tip1==1)
				tiptr();
				else if(yerm1==1)
				yerm();
				else if(vki11==1)
				vki();
				else if(eko1==1)
				ekosim();
				else 
				trstart();
				break;
			case 7:
				renkbulucu();
				if(figure1==2)
				figuretr();
				else if(akdev1==2)
				akdevlet();
				else if(akyak1==2)
				akyakit();
				else if(asim1==2)
				apflsim();
				else if(ssim1==2)
				sanayisim();
				else if(t20231==2)
				target2023();
				else if(tkm10==2)
				tkm();
				else if(sayi10==2)
				sayi_tahmin();
				else if(barb10==2)
				barbut();
				else if(yil10==2)
				yilan();
				else if(gtt1==2)
				gtt();
				else if(tip1==2)
				tiptr();
				else if(yerm1==2)
				yerm();
				else if(vki11==2)
				vki();
				else if(eko1==2)
				ekosim();
				else 
				trstart();
				break;
			case 8:
				renkbulucu();
				quicktr();
				break;
			default:
				hata();
				trstart();
				break;
		}
	}
	else
	{
		hata();
		trstart();
	}
}
int enstart()
{
	backrenk();
	silge(1);
	if(saveoft>2)
	kaydet();
	location=1211;
	saat();
	nofbar();
	devshow();
	printf("1=Calculator\n");
	printf("2=KarNotes\n");
	printf("3=City Finder\n");
	printf("4=KarStore\n");
	printf("5=Other apps...\n");
	homestore();
	printf("8=Quick Menu\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				calculatoren0();
				break;
			case 2:
				renkbulucu();
				notepaden0();
				break;
			case 3:
				renkbulucu();
				cityfinden0();
				break;
			case 4:
				renkbulucu();
				karstoreen0();
				break;
			case 9:
				renkbulucu();
				shutdownen();
				break;
			case 5:
				fazlaen();
				break;
			case 6:
				renkbulucu();
				if(figure1==1)
				figureen();
				else if(akdev1==1)
				akdevlet();
				else if(akyak1==1)
				akyakit();
				else if(asim1==1)
				apflsim();
				else if(ssim1==1)
				sanayisim();
				else if(t20231==1)
				target2023();
				else if(tkm10==1)
				tkm();
				else if(sayi10==1)
				sayi_tahmin();
				else if(barb10==1)
				barbut();
				else if(yil10==1)
				yilan();
				else if(gtt1==1)
				gtt();
				else if(tip1==1)
				tiptr();
				else if(yerm1==1)
				yerm();
				else if(vki11==1)
				vki();
				else if(eko1==1)
				ekosim();
				else 
				mainimsi();
				break;
			case 7:
				renkbulucu();
				if(figure1==2)
				figureen();
				else if(akdev1==2)
				akdevlet();
				else if(akyak1==2)
				akyakit();
				else if(asim1==2)
				apflsim();
				else if(ssim1==2)
				sanayisim();
				else if(t20231==2)
				target2023();
				else if(tkm10==2)
				tkm();
				else if(sayi10==2)
				sayi_tahmin();
				else if(barb10==2)
				barbut();
				else if(yil10==2)
				yilan();
				else if(gtt1==2)
				gtt();
				else if(tip1==2)
				tiptr();
				else if(yerm1==2)
				yerm();
				else if(vki11==2)
				vki();
				else if(eko1==2)
				ekosim();
				else 
				mainimsi();
				break;
			case 8:
				renkbulucu();
				quicken();
				break;
			default:
				hata();
				enstart();
				break;
		}
	}
	else
	{
		hata();
		enstart();
	}
}
int destart()
{
	backrenk();
	silge(1);
	if(saveoft>2)
	kaydet();
	location=1311;
	saat();
	nofbar();
	devshow();
	printf("1=Taschenrechner\n");
	printf("2=KarNotes\n");
	printf("3=Städtefinder\n");
	printf("4=KarStore\n");
	printf("5=Andere Apps...\n");
	homestore();
	printf("8=Quick Menu\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				calculatorde0();
				break;
			case 2:
				renkbulucu();
				notepadde0();
				break;
			case 3:
				renkbulucu();
				cityfindde0();
				break;
			case 4:
				renkbulucu();
				karstore0de();
				break;
			case 9:
				renkbulucu();
				shutdownde();
				break;
			case 5:
				fazlade();
				break;
			case 6:
				renkbulucu();
				if(figure1==1)
				figuretr();
				else if(akdev1==1)
				akdevlet();
				else if(akyak1==1)
				akyakit();
				else if(asim1==1)
				apflsim();
				else if(ssim1==1)
				sanayisim();
				else if(t20231==1)
				target2023();
				else if(tkm10==1)
				tkm();
				else if(sayi10==1)
				sayi_tahmin();
				else if(barb10==1)
				barbut();
				else if(yil10==1)
				yilan();
				else if(gtt1==1)
				gtt();
				else if(tip1==1)
				tiptr();
				else if(yerm1==1)
				yerm();
				else if(vki11==1)
				vki();
				else if(eko1==1)
				ekosim();
				else 
				mainimsi();
				break;
			case 7:
				renkbulucu();
				if(figure1==2)
				figuretr();
				else if(akdev1==2)
				akdevlet();
				else if(akyak1==2)
				akyakit();
				else if(asim1==2)
				apflsim();
				else if(ssim1==2)
				sanayisim();
				else if(t20231==2)
				target2023();
				else if(tkm10==2)
				tkm();
				else if(sayi10==2)
				sayi_tahmin();
				else if(barb10==2)
				barbut();
				else if(yil10==2)
				yilan();
				else if(gtt1==2)
				gtt();
				else if(tip1==2)
				tiptr();
				else if(yerm1==2)
				yerm();
				else if(vki11==2)
				vki();
				else if(eko1==2)
				ekosim();
				else 
				mainimsi();
				break;
			case 8:
				renkbulucu();
				quickde();
				break;
			default:
				hata();
				destart();
				break;
		}
	}
	else
	{
		hata();
		destart();
	}
}
int fazlatr()
{
	silge(1);
	if(saveoft>2)
	kaydet();
	backrenk();
	location=1115;
	saat();
	nofbar();
	devshow();
	printf("1=Vergi Hesaplama\n");
	printf("2=Kod Sistemi\n");
	printf("3=Yardým ve Destek\n");
	printf("4=Google Chrome\n");
	printf("5=Microsoft Edge\n");
	printf("6=Sesle Kullaným\n");
	printf("7=Ayarlar\n");	
	printf("8=Hýzlý Menü\n");
	printf("9=Geri\n");
	printf("0=Kapatma Seçenekleri\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				vergihometr0();
				break;
			case 2:
				renkbulucu();
				codsystr();
				break;
			case 3:
				renkbulucu();
				help();
				break;
			case 4:
				if(karcon==1)
				{
					system("start chrome");
					printf("-Google Chrome Baþlatýldý.\n");
					fazlatr();
				}
				else
				{
					printf("Dýþ alan iletiþiminiz kapalý, Hýzlý Menü'den açýn.\n");
					fazlatr();
				}
				break;
			case 5:
				if(karcon==1)
				{
					system("start msedge");
					printf("-Microsoft Edge Baþlatýldý.\n");
					fazlatr();
				}
				else
				{
					printf("Dýþ alan iletiþiminiz kapalý, Hýzlý Menü'den açýn.\n");
					fazlatr();
				}
				break;
			case 6:
				renkbulucu();
				seskullantr();
			case 8:
				renkbulucu();
				quicktr();
				break;
			case 7:
				renkbulucu();
				settingstr0();
				break;
			case 0:
				renkbulucu();
				shutdowntr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				saniye();
				fazlatr();
				break;
		}
	}
	else
	{
		hata();
		fazlatr();
	}
}
int fazlaen()
{
	silge(1);
	if(saveoft>2)
	kaydet();
	backrenk();
	location=1215;
	saat();
	nofbar();
	devshow();
	printf("1=Tax Calculator\n");
	printf("2=Code System\n");
	printf("3=Help and Support\n");
	printf("4=Google Chrome\n");
	printf("5=Microsoft Edge\n");
	printf("6=Voice Control\n");
	printf("7=Settings\n");
	printf("8=Quick Menu\n");
	printf("9=Back\n");
	printf("0=Shutdown Options\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				vergihomeen0();
				break;
			case 2:
				renkbulucu();
				codsysen();
				break;
			case 3:
				renkbulucu();
				help();
				break;
			case 4:
				if(karcon==1)
				{
					system("start chrome");
					printf("-Google Chrome started.\n");
					fazlaen();
				}
				else
				{
					printf("Your outdoor communication is turned off, - open it from the Quick Menu.\n");
					fazlaen();
				}
				break;
			case 5:
				if(karcon==1)
				{
					system("start msedge");
					printf("-Microsoft Edge started.\n");
					fazlaen();
				}
				else
				{
					printf("Your outdoor communication is turned off, - open it from the Quick Menu\n");
					fazlaen();
				}
				break;
			case 6:
				renkbulucu();
				seskullanen();
				break;
			case 8:
				renkbulucu();
				quicken();
				break;
			case 7:
				renkbulucu();
				settingsen0();
				break;
			case 0:
				renkbulucu();
				shutdownen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				saniye();
				fazlaen();
				break;
		}
	}
	else
	{
		hata();
		fazlaen();
	}
}
int fazlade()
{
	silge(1);
	if(saveoft>2)
	kaydet();
	backrenk();
	location=1315;
	saat();
	nofbar();
	devshow();
	printf("1=Steuerrechner\n");
	printf("2=Code-System\n");
	printf("3=Hilfe\n");
	printf("4=Google Chrome\n");
	printf("5=Microsoft Edge\n");
	printf("7=Einstellungen\n");
	printf("8=Schnellmenü\n");
	printf("9=Der Rücken\n");
	printf("0=Optionen zum Herunterfahren\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				renkbulucu();
				vergihomede0();
				break;
			case 2:
				renkbulucu();
				codsysde();
				break;
			case 3:
				renkbulucu();
				help();
				break;
			case 4:
				if(karcon==1)
				{
					system("start chrome");
					printf("-Google Chrome gestartet.\n");
					fazlade();
				}
				else
				{
					printf("Ihre Außenkommunikation ist ausgeschaltet, - öffnen Sie sie über das Schnellmenü.\n");
					fazlade();
				}
				break;
			case 5:
				if(karcon==1)
				{
					system("start msedge");
					printf("-Microsoft Edge gestartet.\n");
					fazlade();
				}
				else
				{
					printf("Ihre Außenkommunikation ist ausgeschaltet, - öffnen Sie sie über das Schnellmenü.\n");
					fazlade();
				}
				break;
			case 8:
				renkbulucu();
				quickde();
				break;
			case 7:
				renkbulucu();
				settingsde0();
				break;
			case 0:
				renkbulucu();
				shutdownde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				saniye();
				fazlade();
				break;
		}
	}
	else
	{
		hata();
		fazlade();
	}
}
//Ayarlar
int settingstr0()
{
	location=111570;
	silge(0);
	saat();
	nofbar();
	if(seterisim==0)
	{
		printf("Eriþim engellendi.");
		hata();
		mainimsi();
	}
	else if(seterisim==1)
	{
		settingstr();
	}
}
int settingsen0()
{
	location=121570;
	if(seterisim==0)
	{
		printf("Access Denied.");
		hata();
		mainimsi();
	}
	else if(seterisim==1)
	{
		settingsen();
	}
}
int settingsde0()
{
	location=131570;
	if(seterisim==0)
	{
		printf("Zugriff abgelehnt.");
		hata();
		mainimsi();
	}
	else if(seterisim==1)
	{
		settingsde();
	}
}
int settingsfr0()
{
	location=121570;
	if(seterisim==0)
	{
		printf("Accès refusé.");
		hata();
		mainimsi();
	}
	else if(seterisim==1)
	{
		settingsen();
	}
}
int settingstr()
{
	if(saveoft>1)
	kaydet();
	location=111571;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("1=Ekran\n");
	printf("2=Uygulamalar\n");
	printf("3=Cihaz\n");
	printf("4=Hakkýnda\n");
	printf("5=Bir Bakýþta Ayarlarým\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				screentr();
				break;
			case 2:
				karappstr();
				break;
			case 3:
				devicetr();
				break;
			case 4:
				abouttr();
				break;
			case 5:
				onesettr();
				break;
			case 7:
				mainimsi();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				settingstr();
				break;	
		}
	}
	else
	{
		hata();
		settingstr();
	}
}
int settingsen()
{
	if(saveoft>1)
	kaydet();
	location=121571;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("1=Display\n");
	printf("2=Apps\n");
	printf("3=Device\n");
	printf("4=About\n");
	printf("5=My Settings at a Glance\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				screenen();
				break;
			case 2:
				karappsen();
				break;
			case 3:
				deviceen();
				break;
			case 4:
				abouten();
				break;
			case 5:
				oneseten();
				break;
			case 7:
				mainimsi();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				settingsen();
				break;	
		}
	}
	else
	{
		hata();
		settingsen();
	}
}
int settingsde()
{
	if(saveoft>1)
	kaydet();
	location=131571;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("1=Anzeige\n");
	printf("2=Apps\n");
	printf("3=Gerät\n");
	printf("4=Um\n");
	printf("5=Meine Einstellungen auf einen Blick\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				screende();
				break;
			case 2:
				karappsde();
				break;
			case 3:
				devicede();
				break;
			case 4:
				aboutde();
				break;
			case 5:
				onesetde();
				break;
			case 7:
				mainimsi();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				settingsde();
				break;	
		}
	}
	else
	{
		hata();
		settingsde();
	}
}
int screentr()
{
	location=111572;
	silge(0);
	saat();
	nofbar();
	checknofs();
	kaydet();
	devshow();
	printf("Ekran-------------------------------\n");
	printf("1=Ekran Modu\n");
	printf("2=Ana ekran arka planý\n");
	printf("3=Saat Stili\n");
	printf("4=Navigasyon Çubuðu\n");
	printf("5=Renkler\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				daynighttr();
				break;
			case 2:
				desktoptr();
				break;
			case 3:
				showsaattr();
				break;
			case 4:
				typenavbartr();
				break;
			case 5:
				colorstr();
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				screentr();
		}
	}
	else
	{
		hata();
		screentr();
	}
}
int screenen()
{
	location=121572;
	silge(0);
	saat();
	nofbar();
	checknofs();
	kaydet();
	devshow();
	printf("Display-------------------------------\n");
	printf("1=Display Mode\n");
	printf("2=Home Menu Background\n");
	printf("3=Clock Style\n");
	printf("4=Navigation Bar\n");
	printf("5=Colors\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				daynighten();
				break;
			case 2:
				desktopen();
				break;
			case 3:
				showsaaten();
				break;
			case 4:
				typenavbaren();
				break;
			case 5:
				colorsen();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				screenen();
		}
	}
	else
	{
		hata();
		screenen();
	}
}
int screende()
{
	location=131572;
	silge(0);
	saat();
	nofbar();
	checknofs();
	kaydet();
	devshow();
	printf("Anzeige-------------------------------\n");
	printf("1=Anzeigemodus\n");
	printf("2=Hintergrund des Home-Menüs\n");
	printf("3=Zeit\n");
	printf("4=Navigationsleiste\n");
	printf("5=Farben\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				daynightde();
				break;
			case 2:
				desktopde();
				break;
			case 3:
				showsaatde();
				break;
			case 4:
				typenavbarde();
				break;
			case 5:
				colorsde();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				screende();
		}
	}
	else
	{
		hata();
		screende();
	}
}
int daynighttr()
{
	location=1115721;
	silge(1);
	saat();
	nofbar();
	kaydet();
	renkkaydet();
	devshow();
	printf("Ekran Modunu seçin.\n");
	printf("1=Gündüz(Aydýnlýk)\n");
	printf("2=Gece(Karanlýk)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				system("color 70");
				day=1;
				daynighttr();
				break;
			case 2:
				system("color 07");
				day=2;
				daynighttr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				daynighttr();
		}
	}
	else
	{
		hata();
		daynighttr();
	}
	
}
int daynighten()
{
	location=1215721;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Select Screen Mode.\n");
	printf("1=Day(Light)\n");
	printf("2=Night(Dark)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				system("color 70");
				day=1;
				daynighten();
				break;
			case 2:
				system("color 07");
				day=0;
				daynighten();
				break;
			case 7:
				screenen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				daynighten();
		}
	}
	else
	{
		hata();
		daynighten();
	}
	
}
int daynightde()
{
	location=1315721;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Wählen Sie den Bildschirmmodus.\n");
	printf("1=Tag (Licht)\n");
	printf("2=Nacht (Dunkel)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				system("color 70");
				day=1;
				daynightde();
				break;
			case 2:
				system("color 07");
				day=0;
				daynightde();
				break;
			case 7:
				screende();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				daynightde();
		}
	}
	else
	{
		hata();
		daynightde();
	}
	
}
int desktoptr()
{
	location=1115722;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Size uygun arka plan rengini seçin.\n");
	printf("1=Sýfýrla\n");
	printf("2=Mavi\n");
	printf("3=Yeþil\n");
	printf("4=Sarý\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				homerenk=0;
				desktoptr();
				break;
			case 2:
				homerenk=17;
				desktoptr();
				break;
			case 3:
				homerenk=27;
				desktoptr();
				break;
			case 4:
				homerenk=67;
				desktoptr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				desktoptr();
				break;
		}
	}
	else
	{
		hata();
		desktoptr();
	}
}
int desktopen()
{
	location=1215722;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Choose the background color that suits you best.\n");
	printf("1=Reset\n");
	printf("2=Blue\n");
	printf("3=Green\n");
	printf("4=Yellow\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				homerenk=0;
				desktopen();
				break;
			case 2:
				homerenk=17;
				desktopen();
				break;
			case 3:
				homerenk=27;
				desktopen();
				break;
			case 4:
				homerenk=67;
				desktopen();
				break;
			case 7:
				screenen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				desktopen();
				break;
		}
	}
	else
	{
		hata();
		desktopen();
	}
}
int desktopde()
{
	location=1315722;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Wählen Sie den Hintergrund, der am besten zu Ihnen passt.\n");
	printf("1=Zurücksetzen\n");
	printf("2=Blau\n");
	printf("3=Grün\n");
	printf("4=Gelb\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				homerenk=0;
				desktopde();
				break;
			case 2:
				homerenk=17;
				desktopde();
				break;
			case 3:
				homerenk=27;
				desktopde();
				break;
			case 4:
				homerenk=67;
				desktopde();
				break;
			case 7:
				screende();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				desktopde();
				break;
		}
	}
	else
	{
		hata();
		desktopde();
	}
}
int showsaattr()
{
	location=1115723;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Saat Stili Ayarlarý\n");
	printf("1=Göster\n");
	printf("2=Gizle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				showtime=1;
				showsaattr();
				break;
			case 2:
				showtime=2;
				showsaattr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				showsaattr();
				break;
		}
	}
	else
	{
		hata();
		showsaattr();
	}	
}
int showsaaten()
{
	location=1215723;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Clock Style Settings\n");
	printf("1=Show Time\n");
	printf("2=Hide Time\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				showtime=1;
				showsaaten();
				break;
			case 2:
				showtime=2;
				showsaaten();
				break;
			case 7:
				screenen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				showsaaten();
				break;
		}
	}
	else
	{
		hata();
		showsaaten();
	}
}
int showsaatde()
{
	location=1315723;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Zeit Einstellungen\n");
	printf("1=Show Time\n");
	printf("2=Hide Time\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				showtime=1;
				showsaatde();
				break;
			case 2:
				showtime=2;
				showsaatde();
				break;
			case 7:
				screende();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				showsaatde();
				break;
		}
	}
	else
	{
		hata();
		showsaatde();
	}
}
int typenavbartr()
{
	location=1115724;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Navigasyon Çubuðu türünü seçin.\n");
	printf("1=Açýklamalý\n");
	printf("2=Özet\n");
	printf("3=Gizli\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				shownavbar=1;
				typenavbartr();
				break;
			case 2:
				shownavbar=2;
				typenavbartr();
				break;
			case 3:
				shownavbar=3;
				typenavbartr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				typenavbartr();
				break;
		}
	}
	else
	{
		hata();
		typenavbartr();
	}
}
int typenavbaren()
{
	location=1215724;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Select Navigation Bar\n");
	printf("1=Annotated\n");
	printf("2=Summary\n");
	printf("3=Hide\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				shownavbar=1;
				typenavbaren();
				break;
			case 2:
				shownavbar=2;
				typenavbaren();
				break;
			case 3:
				shownavbar=3;
				typenavbaren();
				break;
			case 7:
				screenen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				typenavbaren();
				break;
		}
	}
	else
	{
		hata();
		typenavbaren();
	}
}
int typenavbarde()
{
	location=1315724;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Wählen Sie Navigationsleiste\n");
	printf("1=Kommentiert\n");
	printf("2=Zusammenfassung\n");
	printf("3=Verstecken\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				shownavbar=1;
				typenavbarde();
				break;
			case 2:
				shownavbar=2;
				typenavbarde();
				break;
			case 3:
				shownavbar=3;
				typenavbarde();
				break;
			case 7:
				screende();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				typenavbarde();
				break;
		}
	}
	else
	{
		hata();
		typenavbarde();
	}
}
int karappstr()
{
	location=111573;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("Uygulamalar ve Varsayýlanlar\n");
	printf("1=Yüklü Uygulamalar\n");
	printf("2=Varsayýlanlar\n");
	printf("3=Ana Ekraný Sýfýrla\n");
	printf("4=Daha fazla uygulama için KarStore'u ziyaret edin.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nappstr();
				break;
			case 2:
				varytr();
				break;
			case 3:
				resethome();
				printf("Ana Ekran Sýfýrlandý.\n");
				karappstr();
				break;
			case 4:
				karstoretr();
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				karappstr();
				break;
		}
	}
	else
	{
		hata();
		karappstr();
	}
}
int karappsen()
{
	location=121573;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("Apps & Defaults\n");
	printf("1=Installed Apps\n");
	printf("2=Defaults\n");
	printf("3=Reset Home Screen\n");
	printf("4=Visit KarStore for more apps\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nappsen();
				break;
			case 2:
				varyen();
				break;
			case 3:
				resethome();
				printf("Resetted home screen.\n");
				karappsen();
				break;
			case 4:
				karstoreen();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				karappsen();
				break;
		}
	}
	else
	{
		hata();
		karappsen();
	}
}
int karappsde()
{
	location=131573;
	silge(1);
	saat();
	nofbar();
	checknofs();
	devshow();
	printf("Apps und Standardeinstellungen\n");
	printf("1=Installierte Apps\n");
	printf("2=Standardeinstellungen\n");
	printf("3=Startbildschirm zurücksetzen\n");
	printf("4=Weitere Apps finden Sie im KarStore\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nappsde();
				break;
			case 2:
				varyde();
				break;
			case 3:
				resethome();
				printf("Resetted home screen.\n");
				karappsde();
				break;
			case 4:
				karstore0de();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				karappsde();
				break;
		}
	}
	else
	{
		hata();
		karappsde();
	}
}
int resethome()
{
	yerm1=0;
	tip1=0;
	figure1=0;
	akdev1=0;
	akyak1=0;
	asim1=0;
	ssim1=0;
	gtt1=0;
	t20231=0;
	tkm10=0;
	sayi10=0;
	barb10=0;
	yil10=0;
	vki11=0;
}
int devicetr()
{
	location=111574;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Cihaz Ayarlarý\n");
	printf("1=Baðlantýlar\n");
	printf("2=Ses ve Bildirimler\n");
	printf("3=Dil ve Bölge\n");
	printf("4=Eriþebilirlik\n");
	printf("5=Onarým\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				connectionstr();
				break;
			case 2:
				sesvebiltr();
				break;
			case 3:
				langtr();
				break;
			case 4:
				erisebiltr();
				break;
			case 5:
				onartr();
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
			default:
				hata();
				devicetr();
				break;
		}
	}
	else
	{
		hata();
		devicetr();
	}
}
int deviceen()
{
	location=121574;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Device Settings\n");
	printf("1=Connections\n");
	printf("2=Sound and Noffications\n");
	printf("3=Language and Regions\n");
	printf("4=Accessbility\n");
	printf("5=Repair\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				connectionsen();
				break;
			case 2:
				sesvebilen();
				break;
			case 3:
				langen();
				break;
			case 4:
				erisebilen();
				break;
			case 5:
				onaren();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
			default:
				hata();
				deviceen();
				break;
		}
	}
	else
	{
		hata();
		deviceen();
	}
}
int devicede()
{
	location=131574;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Geräteeinstellungen\n");
	printf("1=Verbindungen\n");
	printf("2=Ton und Benachrichtigungen\n");
	printf("3=Sprache und Regionen\n");
	printf("4=Barrierefreiheit\n");
	printf("5=Reparatur\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				connectionsde();
				break;
			case 2:
				sesvebilde();
				break;
			case 3:
				langen();
				break;
			case 4:
				erisebilde();
				break;
			case 5:
				onarde();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
			default:
				hata();
				devicede();
				break;
		}
	}
	else
	{
		hata();
		devicede();
	}
}
int sesvebiltr()
{
	location=1115742;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Ses ve Bildirim Ayarlarý\n");
	if(ses==0)
	printf("1=Hatalý girdi alýndýðýndaki ses durumunu aç\n");
	else if(ses==1)
	printf("1=Hatalý girdi alýndýðýndaki ses durumunu kapat\n");
	printf("2=Rahatsýz Etmeyin\n");
	printf("-Rahatsýz etmeyin cihazýnýzdaki hata sesini kapatýr, oyunlarý engeller ve sadece önemli bildirimleri gösterir.\n");
	printf("3=Bildirim Sesleri\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(ses==0)
				ses=1;
				else if(ses==1)
				ses=0;
				sesvebiltr();
				break;
			case 2:
				ses=0;
				workmode=1;
				nofses=0;
				sesvebiltr();
				break;
			case 3:
				nofsestr();
				break;
			case 7:
				devicetr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sesvebiltr();
				break;
		}
	}
	else
	{
		hata();
		sesvebiltr();
	}
}
int sesvebilen()
{
	location=1215742;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Sound and Noffication Settings\n");
	if(ses==0)
	printf("1=Turn on sound status when incorrect input is received\n");
	else if(ses==1)
	printf("1=Turn off sound status when incorrect input is received\n");
	printf("2=Do Not Disturb\n");
	printf("3=Noffication Sounds\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(ses==0)
				ses=1;
				else if(ses==1)
				ses=0;
				sesvebilen();
				break;
			case 2:
				ses=0;
				workmode=1;
				nofses=0;
				sesvebilen();
				break;
			case 3:
				nofsesen();
				break;
			case 7:
				deviceen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sesvebilen();
				break;
		}
	}
	else
	{
		hata();
		sesvebilen();
	}
}
int sesvebilde()
{
	location=1315742;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Ton- und Benachrichtigungseinstellungen\n");
	if(ses==0)
	printf("1=Schalten Sie den Tonstatus ein, wenn eine falsche Eingabe empfangen wird\n");
	else if(ses==1)
	printf("1=Schalten Sie den Tonstatus aus, wenn eine falsche Eingabe empfangen wird\n");
	printf("2=Bitte nicht stören\n");
	printf("3=Benachrichtigungstöne\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(ses==0)
				ses=1;
				else if(ses==1)
				ses=0;
				sesvebilde();
				break;
			case 2:
				ses=0;
				workmode=1;
				nofses=0;
				sesvebilde();
				break;
			case 3:
				nofsesde();
				break;
			case 7:
				devicede();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sesvebilde();
				break;
		}
	}
	else
	{
		hata();
		sesvebilde();
	}
}
int nofsestr()
{
	location=11157421;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Bildirim seslerini ayarlayýn.\n");
	if(nofses==1)
	printf("1=Normal bildirim seslerini kapat\n");
	else if(nofses==0)
	printf("1=Normal bildirim seslerini aç\n");
	if(crnofses==1)
	printf("2=Kritik bildirim seslerini kapat(Önerilmez)\n");
	else if(crnofses==0)
	printf("2=Kritik bildirim seslerini aç\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(nofses==1)
				nofses=0;
				else if(nofses==0)
				nofses=1;
				nofsestr();
				break;
			case 2:
				if(crnofses==1)
				crnofses=0;
				else if(crnofses==0)
				crnofses=1;
				nofsestr();
			case 7:
				sesvebiltr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofsestr();
				break;
		}
	}
	else
	{
		hata();
		nofsestr();
	}
}
int nofsesen()
{
	location=12157421;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Set Noffication Sounds\n");
	if(nofses==1)
	printf("1=Turn off Normal Noffication Sounds\n");
	else if(nofses==0)
	printf("1=Turn on Normal Noffication Sounds\n");
	if(crnofses==1)
	printf("2=Turn off Critical Noffication Sounds(not recommended)\n");
	else if(crnofses==0)
	printf("2=Turn on Critical Noffication Sounds\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(nofses==1)
				nofses=0;
				else if(nofses==0)
				nofses=1;
				nofsesen();
				break;
			case 2:
				if(crnofses==1)
				crnofses=0;
				else if(crnofses==0)
				crnofses=1;
				nofsesen();
			case 7:
				sesvebilen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofsesen();
				break;
		}
	}
	else
	{
		hata();
		nofsesen();
	}
}
int nofsesde()
{
	location=13157421;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Legen Sie Benachrichtigungstöne fest\n");
	if(nofses==1)
	printf("1=Schalten Sie normale Benachrichtigungstöne aus\n");
	else if(nofses==0)
	printf("1=Aktivieren Sie normale Benachrichtigungstöne\n");
	if(crnofses==1)
	printf("2=Deaktivieren Sie kritische Benachrichtigungstöne (nicht empfohlen)\n");
	else if(crnofses==0)
	printf("2=Aktivieren Sie kritische Benachrichtigungstöne\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(nofses==1)
				nofses=0;
				else if(nofses==0)
				nofses=1;
				nofsesde();
				break;
			case 2:
				if(crnofses==1)
				crnofses=0;
				else if(crnofses==0)
				crnofses=1;
				nofsesde();
			case 7:
				sesvebilde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofsesde();
				break;
		}
	}
	else
	{
		hata();
		nofsesde();
	}
}
int erisebiltr()
{
	location=1115744;
	silge(1);
	saat();
	devshow();
	printf("Eriþebilirlik Ayarlarý\n");
	printf("1=Bildirim yardýmý\n");
	printf("2=Kullaným Geçmiþi\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nofhelptr();
				break;
			case 2:
				gecmistr();
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				erisebiltr();
				break;
		}
	}
	else
	{
		hata();
		erisebiltr();
	}
}
int erisebilen()
{
	location=1215744;
	silge(1);
	saat();
	devshow();
	printf("Accessbility Settings\n");
	printf("1=Noffication Helps\n");
	printf("2=Usage History\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nofhelpen();
				break;
			case 2:
				gecmisen();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				erisebilen();
				break;
		}
	}
	else
	{
		hata();
		erisebilen();
	}
}
int erisebilde()
{
	location=1315744;
	silge(1);
	saat();
	devshow();
	printf("Barrierefreiheitseinstellungen\n");
	printf("1=Benachrichtigung hilft\n");
	printf("2=Nutzungsverlauf\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				nofhelpde();
				break;
			case 2:
				gecmisde();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				erisebilde();
				break;
		}
	}
	else
	{
		hata();
		erisebilde();
	}
}
int nofhelptr()
{
	location=11157441;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Bildirim Yardýmý siz bildirim aldýðýnýzda ekraný yanýp söndürerek uyarý almanýzý saðlar.\n");
	if(nofhelp==0)
	printf("Bildirim yardýmý þuan kapalý, açmak için 1'e basýn.\n");
	else if(nofhelp==1)
	printf("Bildirim yardýmý þuan açýk, kapatmak için 0'a basýn.\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			nofhelp=1;
			erisebiltr();
			break;
		case 0:
			nofhelp=1;
			erisebiltr();
			break;
		case 7:
			erisebiltr();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			erisebiltr();
			break;
	}
}
int nofhelpen()
{
	location=12157441;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Notification Assist lets you receive alerts by flashing the screen when you receive notifications.\n");
	if(nofhelp==0)
	printf("Notification help is now off, press 1 to turn it on.\n");
	else if(nofhelp==1)
	printf("Notification help is now on , press 0 to turn it off.\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			nofhelp=1;
			erisebilen();
			break;
		case 0:
			nofhelp=1;
			erisebilen();
			break;
		case 7:
			erisebilen();
			break;
		case 8:
			quicken();
			break;
		case 9:
			mainimsi();
			break;
		default:
			erisebilen();
			break;
	}
}
int nofhelpde()
{
	location=13157441;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Mit dem Benachrichtigungsassistenten können Sie Benachrichtigungen erhalten, indem der Bildschirm blinkt, wenn Sie Benachrichtigungen erhalten.\n");
	if(nofhelp==0)
	printf("Die Benachrichtigungshilfe ist jetzt deaktiviert. Drücken Sie 1, um sie einzuschalten.\n");
	else if(nofhelp==1)
	printf("Die Benachrichtigungshilfe ist jetzt aktiviert. Drücken Sie 0, um sie auszuschalten.\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			nofhelp=1;
			erisebilde();
			break;
		case 0:
			nofhelp=0;
			erisebilde();
			break;
		case 7:
			erisebilde();
			break;
		case 8:
			quickde();
			break;
		case 9:
			mainimsi();
			break;
		default:
			erisebilde();
			break;
	}
}
int gecmistr()
{
	location=11157442;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Kullaným Geçmiþi Ayarlarý\n");
	if(sil==1)
	{
		printf("Kullaným Geçmiþi Kapalý.\n");
		printf("Eðer açarsanýz KarOS'u açtýðýnýz süre boyunca\n");
		printf("neler yaptýðýnýzý görebilirsiniz.\n");
		printf("Ancak bu gözleriniz için yorucu olabilir.\n");
		printf("Açmak için 1'e basýn.\n");
		int a;
		scanf("%d",&a);
		if(a==1)
		sil=0;
		printf("Ýþlem onaylandý.\n");
	}
	else if(sil==0)
	{
		printf("Kullaným Geçmiþi Açýk\n");
		printf("Eðer kapatýrsanýz gözleriniz daha rahat olur.\n");
		printf("Ancak neler yaptýðýnýzý göremezsiniz.\n");
		printf("Kapatmak için 2'ye basýn.\n");
		int a;
		scanf("%d",&a);
		if(a==2)
		sil=1;
		printf("Ýþlem onaylandý.\n");
	}
	else
	{
		printf("Bir hata oluþtu.\n");
		printf("Hata Kodu: %dE",sil*10);
	}
	erisebiltr();
}
int gecmisen()
{
	location=112157442;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Usage History Settings\n");
	if(sil==1)
	{
		printf("Usage History is Off.\n");
		printf("If you open it, \n");
		printf("you can see what you did during the time you opened KarOS.\n");
		printf("However, this can be tiring for your eyes.\n");
		printf("Press 1 to open.\n");
		int a;
		scanf("%d",&a);
		if(a==1)
		sil=0;
		printf("The transaction has been confirmed.\n");
	}
	else if(sil==0)
	{
		printf("Usage History is On.\n");
		printf("If you close it, your eyes will be more comfortable.\n");
		printf("But you can't see what you're doing.\n");
		printf("Press 2 to turn it off.\n");
		int a;
		scanf("%d",&a);
		if(a==2)
		sil=1;
		printf("The transaction has been confirmed.\n");
	}
	else
	{
		printf("Something went wrong.\n");
		printf("Error Code: %dE",sil*10);
	}
	erisebilen();
}
int gecmisde()
{
	location=13157442;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Einstellungen für den Nutzungsverlauf\n");
	if(sil==1)
	{
		printf("Die Nutzungshistorie ist ausgeschaltet.\n"); 
		printf("Wenn Sie sie öffnen, \n"); 
		printf("können Sie sehen, was Sie während der Zeit, in der Sie KarOS geöffnet haben, gemacht haben.\n"); 
		printf("Dies kann jedoch anstrengend für Ihre Augen sein.\n"); 
		printf("Drücken Sie 1, um zu öffnen.\n");
		int a;
		scanf("%d",&a);
		if(a==1)
		sil=0;
		printf("Die Transaktion wurde bestätigt.\n");
	}
	else if(sil==0)
	{
		printf("Die Nutzungshistorie ist eingeschaltet.\n");
		printf("Wenn Sie sie schließen, werden Ihre Augen angenehmer sein.\n");
		printf("Aber Sie können nicht sehen, was Sie tun.\n");
		printf("Drücken Sie 2, um sie auszuschalten.\n");

		int a;
		scanf("%d",&a);
		if(a==2)
		sil=1;
		printf("Die Transaktion wurde bestätigt.\n");
	}
	else
	{
		printf("Etwas ist schief gelaufen.\n");
		printf("Error Code: %dE",sil*10);
	}
	erisebilen();
}
int onartr()
{
	location=1115745;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Onarým ve Yedekleme\n");
	printf("1=Kaydetme Sýklýðý\n");
	printf("2=Yedekleme ve Geri Yükleme\n");
	printf("3=Geliþmiþ Baþlatma\n");
	printf("4=Sorun Gidericiler\n");
	printf("5=Sýfýrla\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("1=Sadece Kapatýlýrken(Düþük)\n");
				printf("2=Her uygulama açýlýdýðýnda(Orta)\n");
				printf("3=Her ana ekrana giriþ ve uygulama açýldýðýnda(Yüksek)\n");
				int b;
				scanf("%d",&b);
				switch(b)
				{
					case 1:
						saveoft=1;
						onartr();
						break;
					case 2:
						saveoft=2;
						onartr();
						break;
					case 3:
						saveoft=3;
						onartr();
						break;
					default:
						hata();
						onartr();
						break;
				}
				break;
			case 2:
				backuptr();
				break;
			case 3:
				gelstarttr();
				break;
			case 4:
				sorunlartr();
				break;
			case 5:
				resettr();
			case 7:
				devicetr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				onartr();
				break;
		}
	}
	else
	{
		hata();
		onartr();
	}
}
int onaren()
{
	location=1215745;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Repair and Backup\n");
	printf("1=Save Frequency\n");
	printf("2=Backup and Restore\n");
	printf("3=Advanced Startup\n");
	printf("4=Troubleshooters\n");
	printf("5=Reset All Data\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("1=Only when shutting down(Low)\n");
				printf("2=Every time an app is opened(Normal)\n");
				printf("3=Every time you log in to the home screen and the app is opened(High)\n");
				int b;
				scanf("%d",&b);
				switch(b)
				{
					case 1:
						saveoft=1;
						onaren();
						break;
					case 2:
						saveoft=2;
						onaren();
						break;
					case 3:
						saveoft=3;
						onaren();
						break;
					default:
						hata();
						onaren();
						break;
				}
				break;
			case 2:
				backupen();
				break;
			case 3:
				gelstarten();
				break;
			case 4:
				sorunlaren();
				break;
			case 5:
				reseten();
			case 7:
				deviceen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				onaren();
				break;
		}
	}
	else
	{
		hata();
		onaren();
	}
}
int onarde()
{
	location=1315745;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Reparatur und Backup\n");
	printf("1=Häufigkeit speichern\n");
	printf("2=Sichern und Wiederherstellen\n");
	printf("3=Fortgeschrittenes Start-up\n");
	printf("4=Fehlerbehebungen\n");
	printf("5=Reset\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("1=Nur beim Herunterfahren (Niedrig)\n");
				printf("2=Jedes Mal, wenn eine App geöffnet wird (Normal)\n");
				printf("3=Jedes Mal, wenn Sie sich auf dem Startbildschirm anmelden und die App geöffnet wird (Hoch)\n");
				int b;
				scanf("%d",&b);
				switch(b)
				{
					case 1:
						saveoft=1;
						onarde();
						break;
					case 2:
						saveoft=2;
						onarde();
						break;
					case 3:
						saveoft=3;
						onarde();
						break;
					default:
						hata();
						onarde();
						break;
				}
				break;
			case 2:
				backupde();
				break;
			case 3:
				gelstartde();
				break;
			case 4:
				sorunlarde();
				break;
			case 5:
				resetde();
				break;
			case 7:
				devicede();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				onarde();
				break;
		}
	}
	else
	{
		hata();
		onarde();
	}
}
int resettr()
{
	printf("BU ÝÞLEM GERÝ ALINAMAZ!\n");
	printf("Devam etmek istediðinize emin misiniz\n");
	printf("1=Hayýr\n");
	int a;
	scanf("%d",&a);
	if(a==1)
	mainimsi();
	printf("Tüm verileriniz siliniyor...\n");
	workmode=0;
 	seterisim=1;
	kaserisim=1;
	calerisim=1;
	noterisim=1;
	cityerisim=1;
	vererisim=1;
	lang=1;
	calint=0;
	kascon=1;
	karcon=1;
	location;
	keys=100000;
	showtime=1;
	shownavbar=1;
	sil=1;
	ses=1;
	nofses=1;
	crnofses=1;
	lisdognof=0;
	lisdognof2=0;
	day=1;
	homerenk;
	nofhelp=0;
	varylang=1;
	varyhome=1;
	varybrsr=1;
	home=0;
	printf("Tüm uygulamalar kapatýlýyor...\n");
	printf("KarOS ilk kurulum için hazýrlanýyor...\n");
	firstsetup();
}
int reseten()
{
	printf("THIS PROCESS CANNOT BE REVERSED!\n");
	printf("Are you sure you want to continue?\n");
	printf("1=No\n");
	int a;
	scanf("%d",&a);
	if(a==1)
	mainimsi();
	printf("All your data is deleting...\n");
	workmode=0;
 	seterisim=1;
	kaserisim=1;
	calerisim=1;
	noterisim=1;
	cityerisim=1;
	vererisim=1;
	lang=1;
	calint=0;
	kascon=1;
	karcon=1;
	location;
	keys=100000;
	showtime=1;
	shownavbar=1;
	sil=1;
	ses=1;
	nofses=1;
	crnofses=1;
	lisdognof=0;
	lisdognof2=0;
	day=1;
	homerenk;
	nofhelp=0;
	varylang=1;
	varyhome=1;
	varybrsr=1;
	home=0;
	printf("All applications are closing...\n");
	printf("KarOS is being prepared for the first installation...\n");
	firstsetup();
}
int resetde()
{
	printf("Dieser Vorgang kann nicht rückgängig gemacht werden!\n");
	printf("Bist du dir sicher, dass du weitermachen willst?\n");
	printf("1=Nein\n");
	int a;
	scanf("%d",&a);
	if(a==1)
	mainimsi();
	printf("Alle Ihre Daten werden gelöscht...\n");
	workmode=0;
 	seterisim=1;
	kaserisim=1;
	calerisim=1;
	noterisim=1;
	cityerisim=1;
	vererisim=1;
	lang=1;
	calint=0;
	kascon=1;
	karcon=1;
	location;
	keys=100000;
	showtime=1;
	shownavbar=1;
	sil=1;
	ses=1;
	nofses=1;
	crnofses=1;
	lisdognof=0;
	lisdognof2=0;
	day=1;
	homerenk;
	nofhelp=0;
	varylang=1;
	varyhome=1;
	varybrsr=1;
	home=0;
	printf("Alle Bewerbungen werden geschlossen...\n");
	printf("KarOS wird für die Erstinstallation vorbereitet...\n");
	firstsetup();
}
int sorunlartr()
{
	location=11157453;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Sorun Gidericiler\n");
	printf("1=KarStore Baðlantý Testi\n");
	printf("2=Ana Ekraný Sýfýrla\n");
	printf("3=KarOS Edisyon Çözücü\n");
	printf("4=Saat ve Tarih Düzeltici\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				testtr();
				break;
			case 2:
				resethome();
				sorunlartr();
				break;
			case 3:
				procoztr();
				break;
			case 4:
				saatfixtr();
				break;
			case 7:
				onartr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sorunlartr();
				break;
		}
	}
	else
	{
		hata();
		sorunlartr();
	}
}
int sorunlaren()
{
	location=12157453;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Troubleshooters\n");
	printf("1=KarStore Connect Test\n");
	printf("2=Reset Home Screen\n");
	printf("3=KarOS Edition Solver\n");
	printf("4=Time and Date Fixer\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				testen();
				break;
			case 2:
				resethome();
				sorunlaren();
				break;
			case 4:
				saatfixen();
				break;
			case 7:
				onaren();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sorunlaren();
				break;
		}
	}
	else
	{
		hata();
		sorunlaren();
	}
}
int sorunlarde()
{
	location=13157453;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Fehlerbehebungen\n");
	printf("1=KarStore Connect-Test\n");
	printf("2=Startbildschirm zurücksetzen\n");
	printf("3=KarOS Edition Solver\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				testde();
				break;
			case 2:
				resethome();
				sorunlarde();
				break;
			case 7:
				onarde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sorunlarde();
				break;
		}
	}
	else
	{
		hata();
		sorunlarde();
	}
}
int procoztr()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("KarOS Edisyon Çözücü--------------\n");
	printf("Mevcut edisyonunuz: %d",karos);
	printf("Sorun algýlanýyor...\n");
	if(karos==50 || karos==51 || karos==52)
	{
		printf("Mevcut edisyonunuz KarOS 5 ile uyumludur.\n");
		printf("Sorun bulunamadý. Cihazý kullanmaya devam edebilirsiniz.\n");
		onartr();
	}
	if(karos==40 || karos==41 || karos==42 || karos==43)
	{
		printf("Sorun bulunamadý. Edisyonunuz zaten KarOS 4.\n");
		onartr();
	}
	else if(karos==30 || karos==31 || karos==32)
	{
		printf("Mevcut edisyonunuz KarOS 3 ile uyumlu.\a\n");
		printf("Edisyonunuz KarOS 4 edisyonuna yükseltiliyor...\n");
		karos=karos+10;
		printf("KarOS edisyonunuz güncellendi.\n");
		printf("Sorun giderici tekrar baþlatýlýyor...\n");
		procoztr();
	}
	else if(karos==20 || karos==21 || karos==22)
	{
		printf("Mevcut edisyonunuz KarOS 2 ile uyumlu.\a\n");
		printf("Ne yazýkki KarOS 2 edisyonunuzu KarOS 4 için kullanamazsýnýz.\n");
		printf("Edisyonunuz KarOS 4.0 Home ile deðiþtiriliyor.\n");
		printf("Destek Kodu: ED2NSPDN4\n");
		karos=40;
		onartr();
	}
	else
	{
		printf("KarOS edisyonu desteklenmiyor veya kaybolmuþ.\a\n");
		printf("Edisyonunuz KarOS 4.0 Home ile deðiþtiriliyor...\n");
		karos=40;
		onartr();
	}
}
int saatfixtr()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Saat ve Tarih hatasýndan kaynaklanan sorunlar KarOS yazýlýmýndan kaynaklanmaz.\n");
	printf("Hata, Windows'un senkronize edememesi ve düzeltememesinden kaynaklanýr.\n");
	printf("Hata düzeltmesi için bazý kodlar uygulanýyor...\n");
	printf("Lütfen Bekleyin.\n");
	system("start w32tm");
	system("w32tm /resync /nowait");
	system("w32tm /resync /rediscover");
	printf("Bazý kodlar uygulandý.\n");
	printf("Cihazýnýz saati internet üzerinden güncellemeye çalýþtý.\n");
	sorunlartr();
}
int saatfixen()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Problems caused by Time and Date errors are not caused by the KarOS software.\n");
	printf("The error is caused by Windows not being able to sync and fix it.\n");
	printf("Implementing some code for error correction...\n");
	printf("Please wait.\n");
	system("start w32tm");
	system("w32tm /resync /nowait");
	system("w32tm /resync /rediscover");
	printf("Some codes implemented.\n");
	printf("Your device tried to update the time over the internet.\n");
	sorunlaren();
}
int onesettr()
{
	location=111576;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Bir Bakýþta Ayarlarým\n");
	printf("Ayarlarýnýz kontrol ediliyor...\n");
	saniye();
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Bir Bakýþta Ayarlarým\n");
	printf("Görüntü ve Ses--------------\n");
	if(day==2)
	printf("Karanlýk Mod        : Açýk\n");
	printf("Baðlantýlar-----------------\n");
	if(karcon==1)
	printf("Dýþ Alan Ýletiþimi  : Açýk\n");
	if(kascon==1)
	printf("KarStore Baðlantýsý : Açýk\n");
	printf("Uygulamalar-----------------\n");
	printf("Sorun görülmedi.\n");
	printf("Bildirimler-----------------\n");
	if(nofses==1)
	printf("Bildirim Sesi       : Açýk\n");
	if(crnofses==1)
	printf("Önemli Bildirim Sesi: Açýk\n");
	printf("Güncelleme------------------\n");
	printf("KarOS Edisyonu      : %d\n",karos);
	printf("KarOS Versiyonu     : Ýþlem Gerekli\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				onesettr();
				break;
		}
	}
	else
	{
		hata();
		onesettr();
	}
}
int oneseten()
{
	location=121576;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("My Settings at a Glance\n");
	printf("Checking your settings...\n");
	saniye();
	silge(0);
	saat();
	nofbar();
	printf("My Settings at a Glance\n");
	printf("Screen----------------------\n");
	if(day==2)
	printf("Dark Mode           : On\n");
	printf("Connections-----------------\n");
	if(karcon==1)
	printf("Dýþ Alan Ýletiþimi  : On\n");
	printf("Apps------------------------\n");
	printf("No problem.\n");
	printf("Noffications----------------\n");
	if(nofses==1)
	printf("Noffication Sound   : On\n");
	if(crnofses==1)
	printf("Critic Nof. Sound   : On\n");
	printf("Update----------------------\n");
	printf("KarOS Edition       : %d\n",karos);
	printf("KarOS Version       : Action Required\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				oneseten();
				break;
		}
	}
	else
	{
		hata();
		oneseten();
	}
}
int onesetde()
{
	location=131576;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Meine Einstellungen auf einen Blick\n");
	printf("Überprüfen Sie Ihre Einstellungen...\n");
	saniye();
	silge(0);
	saat();
	nofbar();
	printf("Meine Einstellungen auf einen Blick\n");
	printf("Bild und Ton--------------\n");
	if(day==2)
	printf("Dunkler Modus       : Offen\n");
	if(nofses==1)
	printf("Benachrichtigungston: Offen\n");
	if(crnofses==1)
	printf("Wichtiger Benachrichtigungston: Offen\n");
	printf("Verbindung----------------------\n");
	if(karcon==1)
	printf("Outdoor-Kommunikation  : Offen\n");
	printf("Apps\n");
	printf("Benachrichtigungen\n");
	printf("Aktualisieren\n");
	printf("KarOS Edition       : %d\n",karos);
	printf("KarOS Version       : Handlungsbedarf\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				onesetde();
				break;
		}
	}
	else
	{
		hata();
		onesetde();
	}
}
int connectionstr()
{
	location=1115741;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Baðlantý Ayarlarý\n");
	if(karcon==1)
	printf("1=Dýþ Alan Ýletiþimi Açýk\n");
	else if(karcon==0)
	printf("1=Dýþ Alan Ýletiþimi Kapalý\n");
	printf("2=KarStore Baðlantý Testi\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				connectionstr();
				break;
			case 2:
				testtr();
				break;
			case 7:
				devicetr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				connectionstr();
				break;
		}
	}
	else
	{
		hata();
		connectionstr();
	}
	
}
int connectionsen()
{
	location=1215741;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Connection Settings\n");
	if(karcon==1)
	printf("1=Outdoor Communication On\n");
	else if(karcon==0)
	printf("1=Outdoor Communications Off\n");
	printf("2=KarStore Connect Test\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				connectionsen();
				break;
			case 2:
				testen();
				break;
			case 7:
				deviceen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				connectionsen();
				break;
		}
	}
	else
	{
		hata();
		connectionsen();
	}
	
}
int connectionsde()
{
	location=1315741;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Verbindungseinstellungen\n");
	if(karcon==1)
	printf("1=Outdoor-Kommunikation an\n");
	else if(karcon==0)
	printf("1=Außenkommunikation ausgeschaltet\n");
	printf("2=KarStore Connect-Test\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				connectionsde();
				break;
			case 2:
				testde();
				break;
			case 7:
				devicede();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				connectionsde();
				break;
		}
	}
	else
	{
		hata();
		connectionsde();
	}
	
}
int updatetr()
{
	location=111575;
	silge(1);
	saat();
	nofbar();
	devshow();
    printf("Yazýlým Güncellemesi---------------------------\n");
    printf("KarOS güncellemelerini denetlemek için web sayfasýný ziyaret edin.\n");
	printf("1=Web sayfasýna gidin\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/indirme-merkezi");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/indirme-merkezi");
					else 
					varybrsrhelper();
					printf("Yönlendirme baþarýlý.\n");
					updatetr();
					}
				else 
				{
					printf("Dýþ alan iletiþimi kapalý, açýp tekrar deneyin.\n");
					updatetr();
				}
				break;	
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				settingstr();
				break;
			default:
				hata();
				updatetr();
				break;	
		}
	}
	else
	{
		hata();
		updatetr();
	}
}
int updateen()
{
	location=121575;
	silge(1);
	saat();
	nofbar();
	devshow();
    printf("Software Update---------------------------\n");
    printf("Visit the web page to check for KarOS updates.\n");
	printf("1=Go to website(Turkish)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/indirme-merkezi");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/indirme-merkezi");
					printf("Redirect successful.\n");
					updateen();
					}
				else 
				{
					printf("Outdoor communication is turned off, turn it on and try again.\n");
					updateen();
				}
				break;	
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				settingsen();
				break;
			default:
				hata();
				updateen();
				break;	
		}
	}
	else
	{
		hata();
		updateen();
	}
}
int updatede()
{
	location=121575;
	silge(1);
	saat();
	nofbar();
	devshow();
    printf("Software Aktualisierung---------------------------\n");
    printf("Besuchen Sie die Webseite, um nach KarOS-Updates zu suchen.\n");
	printf("1=Gehen Sie zur Webseite(Türkisch)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(karcon==1)
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/indirme-merkezi");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/indirme-merkezi");
					printf("Umleitung erfolgreich.\n");
					updatede();
					}
				else 
				{
					printf("Die Außenkommunikation ist ausgeschaltet, schalten Sie sie ein und versuchen Sie es erneut.\n");
					updatede();
				}
				break;	
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				settingsde();
				break;
			default:
				hata();
				updatede();
				break;	
		}
	}
	else
	{
		hata();
		updatede();
	}
}
int nappstr()
{
	location=1115731;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Yerel Uygulamalarýnýz ve Hizmetleriniz\n");
	printf("Uygulamalarý Devre Dýþý býrakmak için Numarasýný seçin.\n");
	printf("Uygulama Adý               Uygulama Sürümü       Destekleme Durumu          Durum\n");
	if(calerisim==1)
	printf("1=Hesap Makinesi                   4.3              Tüm Diller              Etkin\n");
	else if(calerisim==0)
	printf("1=Hesap Makinesi                   4.3              Tüm Diller            Devre Dýþý\n");
	if(noterisim==1)
	printf("2=KarNotes                         4.1              Tüm Diller              Etkin\n");
	else if(noterisim==0)
	printf("2=KarNotes                         4.1              Tüm Diller            Devre Dýþý\n");
	if(cityerisim==1)
	printf("3=Þehir Bulucu                     4.2                TR-EN                 Etkin\n");
	else if(cityerisim==0)
	printf("3=Þehir Bulucu                     4.2                TR-EN               Devre Dýþý\n");
	if(vererisim==1)
	printf("4=Vergi Hesaplama                  4.2                TR-EN                 Etkin\n");
	else if(vererisim==0)
	printf("4=Vergi Hesaplama                  4.2                TR-EN               Devre Dýþý\n");
	printf("Devre Dýþý Býrakýlamaz Uygulamalar ve Hizmetler\n");
	printf("-KarOS Ana Ekraný                 3.3              Tüm Diller\n");
	printf("-KarOS Temel Sistem Parçalarý     8.0                   -\n");
	printf("-Ayarlar                          4.5              Tüm Diller\n");
	printf("-Temel Sistem Baþlatýcý           4.2              Tüm Diller\n");
	printf("-Hýzlý Menü ve Bildirimler        4.0              Tüm Diller\n");
	printf("-Kod Sistemi                      4.2              Tüm Diller\n");
	printf("-Kapatma Menüsü                   4.0              Tüm Diller\n");
	printf("-Yardým ve Destek                 4.0              Tüm Diller\n");
	printf("-Tarayýcýlar ve Ýnternet          2.1              Tüm Diller\n");
	printf("-KarOS Kilit Ekraný               3.0              Tüm Diller\n");
	printf("-Yedekleme ve Geri Yükleme        2.2              Tüm Diller\n");
	printf("-Sesle Kullaným                   2.6                 TR-EN\n");
	printf("-KarOS Edisyon Çözücü             1.2                 TR\n");
	printf("-KarOS Kurulumu                   1.3              Tüm Diller\n");
	printf("KarStore'u devre dýþý býrakmak için BSS'i ziyaret edin.\n");
	printf("Cihazýnýzda 19 KarOS uygulamasý mevcut.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calerisim==1)
				calerisim=0;
				else if(calerisim==0)
				calerisim=1;
				nappstr();
				break;
			case 2:
				if(noterisim==1)
				noterisim=0;
				else if(noterisim==0)
				noterisim=1;
				nappstr();
				break;
			case 3:
				if(cityerisim==1)
				cityerisim=0;
				else if(cityerisim==0)
				cityerisim=1;
				nappstr();
				break;
			case 4:
				if(vererisim==1)
				vererisim=0;
				else if(vererisim==0)
				vererisim=1;
				nappstr();
				break;
			case 7:
				karappstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nappstr();
				break;
		}
	}
	else
	{
		hata();
		nappstr();
	}
}
int nappsen()
{
	location=1215731;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Your Native Apps and Services\n");
	printf("Select Number to Disable Apps.\n");
	printf("App Name                      App Version        Support Status              Status\n");
	if(calerisim==1)
	printf("1=Calculator                       4.3              All Languages            Enabled\n");
	else if(calerisim==0)
	printf("1=Calculator                       4.3              All Languages           Disabled\n");
	if(noterisim==1)
	printf("2=KarNotes                         4.1              All Languages            Enabled\n");
	else if(noterisim==0)
	printf("2=KarNotes                         4.1              All Languages           Disabled\n");
	if(cityerisim==1)
	printf("3=City Finder                      4.2                  TR-EN                Enabled\n");
	else if(cityerisim==0)
	printf("3=City Finder                      4.2                TR-EN                 Disabled\n");
	if(vererisim==1)
	printf("4=Tax Calculator                   4.2                TR-EN                  Enabled\n");
	else if(vererisim==0)
	printf("4=Tax Calculator                   4.2                TR-EN                 Disabled\n");
	printf("Non-Disable Apps and Services\n");
	printf("-KarOS Home Screen                3.3              All Languages\n");
	printf("-KarOS Basic System Parts         8.0                   -\n");
	printf("-Settings                         4.5              All Languages\n");
	printf("-Basic System Launcher            4.2              All Languages\n");
	printf("-Quick Menu                       4.0              All Languages\n");
	printf("-Code System                      4.2              All Languages\n");
	printf("-Shutdown Menu                    4.0              All Languages\n");
	printf("-Help&Support                     4.0              All Langauges\n");
	printf("-Browsers and Internet            2.1              All Langauges\n");
	printf("- KarOS Lock Screen               3.0              All Languages\n");
	printf("-Backup and Restore               2.2              All Languages\n");
	printf("-Voice Control                    2.5                  TR-EN\n");
	printf("-KarOS Setup                      1.2              All Langauages\n");
	printf("If you want to disable KarStore, go BSS.\n");
	printf("There are 19 KarOS applications on your device.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calerisim==1)
				calerisim=0;
				else if(calerisim==0)
				calerisim=1;
				nappsen();
				break;
			case 2:
				if(noterisim==1)
				noterisim=0;
				else if(noterisim==0)
				noterisim=1;
				nappsen();
				break;
			case 3:
				if(cityerisim==1)
				cityerisim=0;
				else if(cityerisim==0)
				cityerisim=1;
				nappsen();
				break;
			case 4:
				if(vererisim==1)
				vererisim=0;
				else if(vererisim==0)
				vererisim=1;
				nappsen();
				break;
			case 7:
				deviceen();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nappsen();
				break;
		}
	}
	else
	{
		hata();
		nappsen();
	}
}
int nappsde()
{
	location=1315731;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Ihre nativen Apps und Dienste\n");
	printf("Wählen Sie Nummer, um Apps zu deaktivieren.\n");
	printf("App Name                      App Version        Support Status              Status\n");
	if(calerisim==1)
	printf("1=Calculator                       4.3              All Languages            Active\n");
	else if(calerisim==0)
	printf("1=Calculator                       4.3              All Languages           Disabled\n");
	if(noterisim==1)
	printf("2=KarNotes                         4.1              All Languages            Active\n");
	else if(noterisim==0)
	printf("2=KarNotes                         4.1              All Languages           Disabled\n");
	if(cityerisim==1)
	printf("3=City Finder                      4.2                TR-EN                  Active\n");
	else if(cityerisim==0)
	printf("3=City Finder                      4.2                TR-EN                 Disabled\n");
	if(vererisim==1)
	printf("4=Tax Calculator                   4.2                TR-EN                  Active\n");
	else if(vererisim==0)
	printf("4=Tax Calculator                   4.2                TR-EN                 Disabled\n");
	printf("Nicht deaktivierbare Apps und Dienste\n");
	printf("-KarOS Home Screen                3.3              All Languages\n");
	printf("-KarOS Basic System Parts         8.0                   -\n");
	printf("-Settings                         4.5              All Languages\n");
	printf("-Basic System Launcher            4.2              All Languages\n");
	printf("-Quick Menu                       4.0              All Languages\n");
	printf("-Code System                      4.2              All Languages\n");
	printf("-Shutdown Menu                    4.0              All Languages\n");
	printf("-Help&Support                     4.0              All Languages\n");
	printf("-Browsers and Internet            2.1              All Langauges\n");
	printf("-Lock Screen                      3.0              All Languages\n");
	printf("-Sichern und Wiederherstellen     2.2              All Languages\n");
	printf("-KarOS Setup                      1.2              All Languages\n");
	printf("Um KarStore zu deaktivieren, besuchen Sie BSS.\n");
	printf("Auf Ihrem Gerät befinden sich 19 KarOS-Anwendungen.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calerisim==1)
				calerisim=0;
				else if(calerisim==0)
				calerisim=1;
				nappsde();
				break;
			case 2:
				if(noterisim==1)
				noterisim=0;
				else if(noterisim==0)
				noterisim=1;
				nappsde();
				break;
			case 3:
				if(cityerisim==1)
				cityerisim=0;
				else if(cityerisim==0)
				cityerisim=1;
				nappsde();
				break;
			case 4:
				if(vererisim==1)
				vererisim=0;
				else if(vererisim==0)
				vererisim=1;
				nappsde();
				break;
			case 7:
				karappsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nappsde();
				break;
		}
	}
	else
	{
		hata();
		nappsde();
	}
}
int varytr()
{
	location=1115732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Varsayýlanlar\n");
	printf("Ayar deðiþtirdikten sonra geçerli olmasý için yeniden baþlatýn.\n");
	printf("1=Dil\n");
	printf("2=Tema\n");
	printf("3=Tarayýcý\n");
	printf("4=Arama Motoru\n");
	printf("6=Yeniden Baþlat\n");
	printf("Varsayýlan Haritalar servisi: Google Haritalar\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylangtr();
				break;
			case 2:
				printf("Bu iþlem için alternatif bulunamadý.\n");
				varytr();
				break;
			case 3:
				printf("Varsayýlan tarayýcýnýzý seçin:\n");
				printf("Uyarý: Bazý uygulamalar için varsayýlan deðiþtirilemez.\n");
				if(varybrsr==1)
				printf("Varsayýlan Tarayýcýnýz: Google Chrome\n");
				else if(varybrsr==2)
				printf("Varsayýlan Tarayýcýnýz: Microsoft Edge\n");
				printf("1=Google Chrome\n");
				printf("2=Microsoft Edge\n");
				printf("7=Geri\n");
				int fflush(FILE *stream);
				fflush(stdin);
				char giris=getch();
				if(isdigit(giris)==1)
				{
					int b=giris-'0';
					switch(b)
					{
						case 1:
							varybrsr=1;
							printf("Varsayýlanlarýnýz güncelleniyor...\n");
							saniye();
							varytr();
							break;
						case 2:
							varybrsr=2;
							printf("Varsayýlanlarýnýz güncelleniyor...\n");
							saniye();
							varytr();
							break;
						case 7:
							varytr();
							break;
						default:
							hata();
							varytr();
							break;	
					}
				}
				else
				{
					hata();
					varytr();
				}
				break;
			case 4:
				printf("Varsayýlan arama motorunuzu seçin:\n");
				printf("Uyarý: Bazý uygulamalar için varsayýlan deðiþtirilemez.\n");
				if(varyserc==1)
				printf("Varsayýlan Arama Motoru: Google\n");
				else if(varyserc==2)
				printf("Varsayýlan Arama Motoru: Yandex\n");
				else if(varyserc==3)
				printf("Varsayýlan Arama Motoru: Bing\n");
				printf("1=Google\n");
				printf("2=Yandex\n");
				printf("3=Bing\n");
				printf("7=Geri\n");
				int fflush(FILE *stream);
				fflush(stdin);
				char girisi=getch();
				if(isdigit(girisi)==1)
				{
					int b=girisi-'0';
					switch(b)
					{
						case 1:
							varyserc=1;
							printf("Varsayýlanlarýnýz güncelleniyor...\n");
							saniye();
							varytr();
							break;
						case 2:
							varyserc=2;
							printf("Varsayýlanlarýnýz güncelleniyor...\n");
							saniye();
							varytr();
							break;
						case 3:
							varyserc=3;
							printf("Varsayýlanlarýnýz güncelleniyor...\n");
							saniye();
							varytr();
							break;
						case 7:
							varytr();
							break;
						default:
							hata();
							varytr();
							break;	
					}
				}
				else
				{
					hata();
					varytr();
				}
				break;
			case 6:
				yenidentr();
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				break;
		}
	}
	else
	{
		hata();
		varytr();
	}
}
int varyen()
{
	location=1215732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Defaults\n");
	printf("After changing the setting, reboot for it to take effect.\n");
	printf("1=Language\n");
	printf("2=Themes\n");
	printf("3=Browser\n");
	printf("4=Search Engine\n");
	printf("6=Restart\n");
	printf("Default Map Service  : Google Maps\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylangen();
				break;
			case 2:
				printf("No alternative was found for this operation.\n");
				varyen();
				break;
			case 3:
				printf("Select Default Browser:\n");
				printf("Warning: The default cannot be changed for some applications.\n");
				if(varybrsr==1)
				printf("Default Browser: Google Chrome\n");
				else if(varybrsr==2)
				printf("Default Browser: Microsoft Edge\n");
				printf("1=Google Chrome\n");
				printf("2=Microsoft Edge\n");
				printf("7=Back\n");
				int fflush(FILE *stream);
				fflush(stdin);
				char giris=getch();
				if(isdigit(giris)==1)
				{
					int b=giris-'0';
					switch(b)
					{
						case 1:
							varybrsr=1;
							printf("Updating your defaults...\n");
							saniye();
							varyen();
							break;
						case 2:
							varybrsr=2;
							printf("Updating your defaults...\n");
							saniye();
							varyen();
							break;
						case 7:
							varyen();
							break;
						default:
							hata();
							varyen();
							break;	
					}
				}
				else
				{
					hata();
					varyen();
				}
				break;
			case 4:
				printf("Select your default search engine:\n");
				printf("Warning: The default cannot be changed for some applications.\n");
				if(varyserc==1)
				printf("Default Serach Engine: Google\n");
				else if(varyserc==2)
				printf("Default Serach Engine: Yandex\n");
				else if(varyserc==3)
				printf("Default Serach Engine: Bing\n");
				printf("1=Google\n");
				printf("2=Yandex\n");
				printf("3=Bing\n");
				printf("7=Back\n");
				int fflush(FILE *stream);
				fflush(stdin);
				char girisi=getch();
				if(isdigit(girisi)==1)
				{
					int b=girisi-'0';
					switch(b)
					{
						case 1:
							varyserc=1;
							printf("Updating your defaults...\n");
							saniye();
							varyen();
							break;
						case 2:
							varyserc=2;
							printf("Updating your defaults...\n");
							saniye();
							varyen();
							break;
						case 3:
							varyserc=3;
							printf("Updating your defaults...\n");
							saniye();
							varyen();
							break;
						case 7:
							varyen();
							break;
						default:
							hata();
							varyen();
							break;	
					}
				}
				else
				{
					hata();
					varyen();
				}
				break;
			case 6:
				yenidenen();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				varyen();
				break;
		}
	}
	else
	{
		hata();
		varyen();
	}
}
int varyde()
{
	location=1315732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Defaults\n");
	printf("Starten Sie nach dem Ändern der Einstellung einen Neustart, damit sie wirksam wird.\n");
	printf("1=Sprache\n");
	printf("2=Theme\n");
	printf("3=Browser\n");
	printf("4=Neustart\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylangde();
				break;
			case 2:
				printf("Für diese Operation wurde keine Alternative gefunden.\n");
				varyde();
				break;
			case 3:
				printf("Standardbrowser auswählen:\n");
				printf("Warnung: Die Standardeinstellung kann für einige Anwendungen nicht geändert werden.\n");
				if(varybrsr==1)
				printf("Standardbrowser: Google Chrome\n");
				else if(varybrsr==2)
				printf("Standardbrowser: Microsoft Edge\n");
				printf("1=Google Chrome\n");
				printf("2=Microsoft Edge\n");
				printf("7=Back\n");
				int fflush(FILE *stream);
				fflush(stdin);
				char giris=getch();
				if(isdigit(giris)==1)
				{
					int b=giris-'0';
					switch(b)
					{
						case 1:
							varybrsr=1;
							printf("Aktualisieren Ihrer Standardeinstellungen...\n");
							saniye();
							varyde();
							break;
						case 2:
							varybrsr=2;
							printf("Aktualisieren Ihrer Standardeinstellungen...\n");
							saniye();
							varyde();
							break;
						default:
							hata();
							varyde();
							break;	
					}
				}
				else
				{
					hata();
					varyde();
				}
				break;
			case 4:
				yenidende();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				varyde();
				break;
		}
	}
	else
	{
		hata();
		varyde();
	}
}
int varylangtr()
{
	location=1115732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Varsayýlan dilinizi seçin.\n");
	printf("KarOS tüm Türkçe karakterler ile uyumludur.\n");
	if(varylang==1)
	printf("Mevcut varsayýlan dil: Türkçe\n");
	else if(varylang==2)
	printf("Mevcut varsayýlan dil: Ýngilizce\n");
	printf("1=Türkçe(Önerilen)\n");
	printf("2=Ýngilizce\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylang=1;
				printf("Varsayýlan dil Türkçe olarak seçildi.\n\n");
				varylangtr();
				break;
			case 2:
				varylang=2;
				printf("Varsayýlan dil Ýngilizce olarak seçildi.\n\n");
				varylangtr();
				break;
			case 8:
				quicktr();
				break;
			case 7:
				settingstr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				varylangtr();
				break;
		}
	}
	else
	{
		hata();
		varylangtr();
	}
}
int varylangen()
{
	location=1215732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Defaults\n");
	if(varylang==1)
	printf("Current default language: Turkish\n");
	else if(varylang==2)
	printf("Current default language: English\n");
	printf("Choose default language.\n");
	printf("1=Turkish(Recommend)\n");
	printf("2=English\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylang=1;
				printf("The default language is Turkish.\n\n");
				settingsen();
				break;
			case 2:
				varylang=2;
				printf("The default language is English.\n\n");
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 7:
				settingsen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				printf("\a\n");
				varylangen();
				break;
		}
	}
	else
	{
		printf("\a\n");
		varylangen();
	}
}
int varylangde()
{
	location=1315732;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Voreinstellungen\n");
	if(varylang==1)
	printf("Aktuelle Standardsprache: Türkisch\n");
	else if(varylang==2)
	printf("Aktuelle Standardsprache: Englisch\n");
	printf("Wählen Sie Ihre Standardsprache.\n");
	printf("1=Türkisch (Empfohlen)\n");
	printf("2=Englisch\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varylang=1;
				printf("Als Standardsprache wurde Türkisch ausgewählt.\n\n");
				settingsde();
				break;
			case 2:
				varylang=2;
				printf("Die Standardsprache ist Englisch.\n\n");
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 7:
				settingsde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				varylangde();
				break;
		}
	}
	else
	{
		hata();
		varylangde();
	}
}
int varybrsrhelper()
{
	printf("Varsayýlan Tarayýcýnýz saptanamadý, sorun çözülüyor...\n");
	printf("Tarayýcý ayarýnýz sýfýrlanýyor...\n");
	varybrsr=0;
	printf("Yeni Tarayýcýnýzý seçin.\n");
	printf("1=Google Chrome\n");
	printf("2=Microsoft Edge\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				varybrsr=1;
				printf("Tarayýcý ayarýnýz güncellendi.\n");
				break;
			case 2:
				varybrsr=2;
				printf("Tarayýcý ayarýnýz güncellendi.\n");
				break;
			default:
				hata();
				varybrsrhelper();
				break;
		}
	}
	else
	{
		hata();
		varybrsrhelper();
	}
}
int abouttr()
{
	location=111575;
	silge(1);
	saat();
	lisansdogrulama();
	puts("                            Hakkýnda");
    puts("KarOS Sürümü         : 4.4.0\n");
    if(karos==40)
    {
    	puts("KarOS Edisyonu       : Home");
    	lisdognof=0;
	}
    else if(karos==41)
    {
    	puts("KarOS Edisyonu       : Pro");
    	lisdognof=0;
	}
    else if(karos==42)
    {
    	puts("KarOS Edisyonu       : Dev");
    	lisdognof=0;
	}
    else
    {
    	puts("KarOS Edisyonu       : Saptanamadý");
    	puts("KarSoft Destek ile iletiþime geçin.");
    	lisdognof=1;
	}
    puts("Düzeltme Yamasý      : Ekim 2025");
    puts("Yapým Numarasý       : 2543FT43FV1");
    puts("C Tabaný             : C99\n");
    puts("Cihaz Sürümü:");
    system("ver");
    puts("KarSoft, 2025");
    puts("3=Geliþtirici Seçenekleri");
    puts("4=Yazýlým Güncellemesi");
    puts("5=Emeði Geçenler");
	puts("6=KarOS Edisyonunuzu deðiþtirin");
	navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 3:
				devsettr();
				break;
			case 4:
				updatetr();
				break;
			case 5:
				puts("Arda Yürekli");
			    puts("Kerem Doðan");
				puts("Mazhar Hamza Özden");
				abouttr();
				break;
			case 6:
				puts("KarOS Edisyon için 6 haneli kodunuzu girin.");
				int keykey;
				scanf("%d",&keykey);
				if(keykey==762496)
				{
					keys=762496;
					puts("Pro edisyonu etkinleþtirildi, tamamlanmasý için lütfen yeniden baþlatýn.");
					abouttr();
				}
				else if(keykey==876405)
				{
					keys=876405;
					puts("Dev edisyonu etkinleþtirildi, tamamlanmasý için lütfen yeniden baþlatýn.");
					abouttr();
				}
				else
				{
					puts("Böyle bir anahtar bulunamadý.");
					puts("Anahtar KarOS 4 tarafýndan tanýmlanamadý.");
					puts("Eski bir anahtara sahipseniz, yeniden baþlattýðýnýzda geçerli olacaktýr.");
					abouttr();
				}
				break;
			case 7:
				settingstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				abouttr();
				break;
		}
	}
	else
	{
		hata();
		abouttr();
	}
}
int abouten()
{
	location=111575;
	silge(1);
	saat();
	lisansdogrulama();
	printf("                            About\n");
    printf("KarOS Version            : 4.4\n");
    if(karos==40)
    {
    	printf("KarOS Edition            : Home\n");
    	lisdognof=0;
	}
    else if(karos==41)
    {
    	printf("KarOS Edition            : Pro\n");
    	lisdognof=0;
	}
    else if(karos==42)
    {
    	printf("KarOS Edition            : Dev\n");
    	lisdognof=0;
	}
    else
    {
    	printf("KarOS Edition            : Not detected\n");
    	printf("Contact KarSoft Support.\n");
    	lisdognof=1;
	}
    printf("Hotfix Patch             : October 2025\n");
    printf("Build No                 : 2543FT43FV1\n");
    printf("C Base                   : C99\n");
    printf("Device Version:");
    system("ver");
    printf("KarSoft, 2025\n");
    printf("3=Developer Options\n");
    printf("4=Software update\n");
    printf("5=Who contributed\n");
	printf("6=Change your KarOS Edition\n");
	navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 3:
				devseten();
				break;
			case 4:
				updateen();
				break;
			case 5:
				printf("Arda Yürekli\n");
			    printf("Kerem Doðan\n");
				printf("Mazhar Hamza Özden\n");
				abouten();
				break;
			case 6:
				printf("Enter your 6-digit code for KarOS Edition.\n");
				int keykey;
				scanf("%d",&keykey);
				if(keykey==762496)
				{
					keys=762496;
					printf("Pro edition activated, please reboot to complete.\n");
					abouten();
				}
				else if(keykey==876405)
				{
					keys=876405;
					printf("Dev edition activated, please reboot to complete.\n");
					abouten();
				}
				else
				{
					printf("No such key found.\n");
					printf("The key could not be recognized by KarOS 4.\n");
					printf("If you have an old key, it will be valid when you reboot.\n");
					abouten();
				}
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				abouten();
				break;
		}
	}
	else
	{
		hata();
		abouten();
	}
}
int devsettr()
{
	location=1115751;
	silge(1);
	saat();
	nofbar();
	lisansdogrulama();
	printf("Geliþtirici Seçenekleri----------------------\n");
	printf("UYARI: Bu ayarlar sadece geliþtiriciler içindir, bilginiz yoksa\n");
	printf("cihazda veya verilerinizde hasar meydana gelebilir.\n");
	printf("Location = %d\n",location);
	printf("Store License = %d\n",storelicense);
	printf("KarOS Version = %d\n",karos);
	printf("Varylang: %d\n",varylang);
	printf("Varybrsr: %d\n",varybrsr);
	printf("Varyhome: %d\n",varyhome);
	printf("lang: %d\n",lang);
	printf("kared: %d\n",kared);
	devshow();
	printf("1=Windows'u kapat\n");
	printf("2=Windows'u Baþlat\n");
	if(devs==0)
	printf("3=Geliþtirici barýný göster\n");
	else if(devs==1)
	printf("3=Geliþtirici barýný gizle\n");
	printf("4=KarStore'u ayrý uygulama olarak aç");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				system("taskkill /im explorer.exe /f ");
				printf("Windows baþarýyla kapatýldý.\n");
				devsettr();
				break;
			case 2:
				system("start explorer");
				printf("Windows baþarýyla baþlatýldý.\n");
				devsettr();
				break;
			case 3:
				if(devs==0)
				devs=1;
				else if(devs==1)
				devs=0;
				devsettr();
				break;
			case 4:
				printf("Ýstek gerçekleþtiriliyor...\n");
				printf("Bu istek KarStore for Windows 4.0 ve üstü kurulu ise çalýþýr.\n");
				system("start KarStore.exe");
				printf("Ýstek çalýþýtýrýldý.\n");
				devsettr();
				break;
			case 7:
				abouttr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				devsettr();
				break;
		}
	}
	else
	{
		hata();
		devsettr();
	}
}
int devseten()
{
	location=1115752;
	silge(1);
	saat();
	nofbar();
	lisansdogrulama();
	printf("Developer Options----------------------\n");
	printf("WARNING: These settings are for developers only, if you don't know\n");
	printf("damage to the device or your data may occur.\n");
	printf("Location = %d\n",location);
	printf("Store License = %d\n",storelicense);
	printf("KarOS Version = %d\n",karos);
	printf("Varylang: %d\n",varylang);
	printf("Varybrsr: %d\n",varybrsr);
	printf("Varyhome: %d\n",varyhome);
	printf("lang: %d\n",lang);
	printf("kared: %d\n",kared);
	devshow();
	printf("1=Turn off Windows\n");
	printf("2=Start Windows\n");
	if(devs==0)
	printf("3=Show developer bar\n");
	else if(devs==1)
	printf("3=Hide developer bar\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				system("taskkill /im explorer.exe /f ");
				printf("Windows has been shut down successfully.\n");
				devseten();
				break;
			case 2:
				system("start explorer");
				printf("Windows started successfully.\n");
				devseten();
				break;
			case 3:
				if(devs==0)
				devs=1;
				else if(devs==1)
				devs=0;
				devseten();
				break;
			case 7:
				abouten();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				devseten();
				break;
		}
	}
	else
	{
		hata();
		devseten();
	}
}
int aboutde()
{
	location=1315721;
	silge(1);
	saat();
	nofbar();
	lisansdogrulama();
	printf("-                                 Über\n");
    printf("KarOS Version        : 4.4.0\n");
    if(karos==40)
    {
    	printf("KarOS Edition            : Home\n");
    	lisdognof=0;
	}
    else if(karos==41)
    {
    	printf("KarOS Edition            : Pro\n");
    	lisdognof=0;
	}
    else if(karos==42)
    {
    	printf("KarOS Edition            : Dev\n");
    	lisdognof=0;
	}
    else
    {
    	printf("KarOS Edition            : Not detected\n");
    	printf("Contact KarSoft Support.\n");
    	lisdognof=1;
	}
    printf("Hot-fix Patch        : Oktober 2025\n");
    printf("Build-Nummer         : 2543FT43FV1\n");
    printf("C Version            : C99\n");
    printf("Device Version:");
    system("ver");
	printf("KarSoft, 2025\n");
    printf("5=Wer hat beigetragen\n");
	printf("6=Ändern Sie die KarOS-Edition\n");
	navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 5:
				printf("Arda Yürekli\n");
			    printf("Kerem Doðan\n");
				printf("Mazhar Hamza Özden\n");
				aboutde();
				break;
			case 6:
				printf("Geben Sie Ihren 6-stelligen Code für KarOS Edition ein.\n");
				int keykey;
				scanf("%d",&keykey);
				if(keykey==762496)
				{
					keys=762496;
					printf("Pro aktiviert, bitte zum Abschluss neu starten.\n");
					aboutde();
				}
				else if(keykey==876405)
				{
					keys=876405;
					printf("Dev aktiviert, bitte zum Abschluss neu starten.\n");
					aboutde();
				}
				else
				{
					printf("No such key found.\n");
					printf("Der Schlüssel konnte von KarOS 4 nicht erkannt werden.\n");
					printf("Wenn Sie einen alten Schlüssel haben, ist dieser beim Neustart gültig.\n");
					aboutde();
				}
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				aboutde();
				break;
		}
	}
	else
	{
		hata();
		aboutde();
	}
}
int testtr()
{
	location=111574531;
	silge(0);
	saat();
	nofbar();
	printf("KarStore Sorun Gidericisi\n");
	printf("Test Baþlatýlýyor...\n");
	saniye();
	if(kascon==1)
	{
		printf("KarStore Baðlantýsý: Sorun yok.\n");
	}
	else
	{
		printf("KarStore Baðlantýsý: Ýlgilenilmesi gerekiyor.\n");
		printf("Öneri: Hýzlý Menüden KarStore baðlantýsýný açýp kapatmayý deneyin.\n");
	}
	if(kaserisim==1)
	{
		printf("KarStore Servisleri: Sorun yok.\n");
	}
	else
	{
		printf("KarStore Servisleri: Ýlgilenilmesi gerekiyor.\n");
		printf("KarSoft Destek bölümüne göz atýn.\n");
	}
	settingstr();
}
int testen()
{
	location=121574531;
	silge(0);
	saat();
	nofbar();
	printf("Test starting...\n");
	saniye();
	if(kascon==1)
	{
		printf("KarStore Connection: No problem.\n");
	}
	else
	{
		printf("KarStore Connection: It needs attention.\n");
		printf("Suggestion: Try toggling the KarStore connection from the Quick Menu.\n");
	}
	if(seterisim==1)
	{
		printf("KarStore Services: No problem.\n");
	}
	else
	{
		printf("KarStore Services: It needs attention.\n");
		printf("Check out the KarSoft Support section.\n");
	}
	settingsen();
}
int testde()
{
	location=131574531;
	silge(0);
	saat();
	nofbar();
	printf("Test starten...\n");
	saniye();
	if(kascon==1)
	{
		printf("KarStore-Anbindung: Kein Problem.\n");
	}
	else
	{
		printf("KarStore-Link: Benötigt Aufmerksamkeit.\n");
		printf("Vorschlag: Versuchen Sie, die KarStore-Verbindung über das Schnellmenü umzuschalten.\n");
	}
	if(seterisim==1)
	{
		printf("KarStore Services: Kein Problem.\n");
	}
	else
	{
		printf("KarStore Services: Benötigt Aufmerksamkeit.\n");
		printf("Sehen Sie sich den KarSoft Support-Bereich an.\n");
	}
	settingsde();
}
int colorstr()
{
	location=11157251;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Renginizi seçin.\n");
    printf("-Bu renk KarOS genelinde, indirdiðiniz uygulamalar ve oyunlarda kullanýlacak.\n");
    printf("1=Siyah(Varsayýlan)\n");
    printf("2=Mavi\n");
    printf("3=Su Mavisi\n");
    printf("4=Kýrmýzý\n");
    printf("5=   2.Sayfa  ->\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 70");
					renk=70;
				}
				else if(day==2)
				{
					printf("Gece modunda yazý rengini siyah yapamazsýnýz.\n");
				}
				screentr();
				break;
			case 2:
				if(day==1)
				{
					system("color 71");
					renk=71;
				}
				else if(day==2)
				{
					system("color 01");
					renk=01;
					
				}
				screentr();
				break;
			case 3:
				if(day==1)
				{
					system("color 73");
					renk=73;
				}
				else if(day==2)
				{
					system("color 03");
					renk=03;
					
				}
				screentr();
				break;
			case 4:
				if(day==1)
				{
					system("color 74");
					renk=74;
				}
				else if(day==2)
				{
					system("color 04");
					renk=04;
					
				}
				screentr();
				break;
			case 5:
				colors2tr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colorstr();
				break;
		}	
	}
	else
	{
		hata();
		colorstr();
	}
}
int colors2tr()
{
	location=11157252;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Renginizi seçin.\n");
    printf("1=Yeþil\n");
    printf("2=Mor\n");
    printf("3=Sarý\n");
    printf("4=Gri\n");
    printf("5=<--  1. Sayfa\n");
    printf("6=     3. Sayfa -->\n");
    printf("7=<--   8=|Q|   9=|^|\n");
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 72");
					renk=72;
				}
				else if(day==2)
				{
					system("color 02");
					renk=02;
					
				}
				screentr();
				break;
			case 2:
				if(day==1)
				{
					system("color 75");
					renk=75;
				}
				else if(day==2)
				{
					system("color 05");
					renk=05;
					
				}
				screentr();
				break;
			case 3:
				if(day==1)
				{
					system("color 76");
					renk=76;
				}
				else if(day==2)
				{
					system("color 06");
					renk=06;
					
				}
				screentr();
				break;
			case 4:
				if(day==1)
				{
					printf("Gündüz modunda yazý rengini gri yapamazsýnýz.\n");
				}
				else if(day==2)
				{
					system("color 08");
					renk= 8;
					
				}
				screentr();
				break;
			case 5:
				colorstr();
				break;
			case 6:
				colors3tr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colors2tr();
				break;
		}	
	}
	else
	{
		hata();
		colors2tr();
	}
}
int colors3tr()
{
	location=11157253;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Renginizi seçin.\n");
    printf("1=Açýk Mavi\n");
    printf("2=Açýk Yeþil\n");
    printf("3=Açýk Kýrmýzý\n");
    printf("4=Açýk Mor\n");
    printf("5=<--  2. Sayfa\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 79");
					renk=79;
				}
				else if(day==2)
				{
					system("color 09");
					renk=9;
					
				}
				screentr();
				break;
			case 2:
				if(day==1)
				{
					system("color 7A");
					renk=710;
				}
				else if(day==2)
				{
					system("color 0A");
					renk=10;
					
				}
				screentr();
				break;
			case 3:
				if(day==1)
				{
					system("color 7C");
					renk=712;
				}
				else if(day==2)
				{
					system("color 0C");
					renk=12;
					
				}
				screentr();
				break;
			case 4:
				if(day==1)
				{
					system("color 7D");
					renk=713;
				}
				else if(day==2)
				{
					system("color 0D");
					renk=13;
					
				}
				screentr();
				break;
			case 5:
				colors2tr();
				break;
			case 7:
				screentr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colors3tr();
				break;
		}	
	}
	else
	{
		hata();
		colors3tr();
	}
}
int colorsen()
{
	location=12157251;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Select color.\n");
    printf("1=Black(Default)\n");
    printf("2=Blue\n");
    printf("3=Water blue\n");
    printf("4=Red\n");
    printf("5=   2. Page  ->\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 70");
					renk=70;
				}
				else if(day==2)
				{
					printf("You cannot change the text color to black in night mode.\n");
				}
				screenen();
				break;
			case 2:
				if(day==1)
				{
					system("color 71");
					renk=71;
				}
				else if(day==2)
				{
					system("color 01");
					renk=01;
					
				}
				screenen();
				break;
			case 3:
				if(day==1)
				{
					system("color 73");
					renk=73;
				}
				else if(day==2)
				{
					system("color 03");
					renk=03;
					
				}
				screenen();
				break;
			case 4:
				if(day==1)
				{
					system("color 74");
					renk=74;
				}
				else if(day==2)
				{
					system("color 04");
					renk=04;
					
				}
				screenen();
				break;
			case 5:
				colors2en();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colorsen();
				break;
		}	
	}
	else
	{
		hata();
		colorsen();
	}
}
int colors2en()
{
	location=12157252;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Select Color.\n");
    printf("1=Green\n");
    printf("2=Purple\n");
    printf("3=Yellow\n");
    printf("4=Gray\n");
    printf("5=<--  1. Page\n");
    printf("6=     3. Page -->\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 72");
					renk=72;
				}
				else if(day==2)
				{
					system("color 02");
					renk=02;
					
				}
				screenen();
				break;
			case 2:
				if(day==1)
				{
					system("color 75");
					renk=75;
				}
				else if(day==2)
				{
					system("color 05");
					renk=05;
					
				}
				screenen();
				break;
			case 3:
				if(day==1)
				{
					system("color 76");
					renk=76;
				}
				else if(day==2)
				{
					system("color 06");
					renk=06;
					
				}
				screenen();
				break;
			case 4:
				if(day==1)
				{
					printf("You cannot change the text color to gray in day mode.\n");
				}
				else if(day==2)
				{
					system("color 08");
					renk= 8;
					
				}
				screenen();
				break;
			case 5:
				colorsen();
				break;
			case 6:
				colors3en();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colors2en();
				break;
		}	
	}
	else
	{
		hata();
		colors2en();
	}
}
int colors3en()
{
	location=12157253;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Select color.\n");
    printf("1=Light Blue\n");
    printf("2=Light Green\n");
    printf("3=Light Red\n");
    printf("4=Light Purple\n");
    printf("5=<--  2. Page\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 79");
					renk=79;
				}
				else if(day==2)
				{
					system("color 09");
					renk=9;
					
				}
				screenen();
				break;
			case 2:
				if(day==1)
				{
					system("color 7A");
					renk=710;
				}
				else if(day==2)
				{
					system("color 0A");
					renk=10;
					
				}
				screenen();
				break;
			case 3:
				if(day==1)
				{
					system("color 7C");
					renk=712;
				}
				else if(day==2)
				{
					system("color 0C");
					renk=12;
					
				}
				screenen();
				break;
			case 4:
				if(day==1)
				{
					system("color 7D");
					renk=713;
				}
				else if(day==2)
				{
					system("color 0D");
					renk=13;
					
				}
				screenen();
				break;
			case 5:
				colors2en();
				break;
			case 7:
				settingsen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colors3en();
				break;
		}	
	}
	else
	{
		hata();
		colors3en();
	}
}
int colorsde()
{
	location=13157251;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Wählen Sie die Farbe.\n");
    printf("1=Schwarz(Standard)\n");
    printf("2=Blau\n");
    printf("3=Wasse Blau\n");
    printf("4=Rot\n");
    printf("5=   2. Page  ->\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 70");
					renk=70;
				}
				else if(day==2)
				{
					printf("You cannot change the text color to black in night mode.\n");
				}
				screende();
				break;
			case 2:
				if(day==1)
				{
					system("color 71");
					renk=71;
				}
				else if(day==2)
				{
					system("color 01");
					renk=01;
					
				}
				screende();
				break;
			case 3:
				if(day==1)
				{
					system("color 73");
					renk=73;
				}
				else if(day==2)
				{
					system("color 03");
					renk=03;
					
				}
				screende();
				break;
			case 4:
				if(day==1)
				{
					system("color 74");
					renk=74;
				}
				else if(day==2)
				{
					system("color 04");
					renk=04;
					
				}
				screende();
				break;
			case 5:
				colors2de();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				colorsde();
				break;
		}	
	}
	else
	{
		hata();
		colorsde();
	}
}
int colors2de()
{
	location=13157252;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Wählen Sie die Farbe.\n");
    printf("1=Grün\n");
    printf("2=Violett\n");
    printf("3=Gelb\n");
    printf("4=Grau\n");
    printf("5=<--  1. Page\n");
    printf("6=     3. Page -->\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 72");
					renk=72;
				}
				else if(day==2)
				{
					system("color 02");
					renk=02;
					
				}
				screenen();
				break;
			case 2:
				if(day==1)
				{
					system("color 75");
					renk=75;
				}
				else if(day==2)
				{
					system("color 05");
					renk=05;
					
				}
				screende();
				break;
			case 3:
				if(day==1)
				{
					system("color 76");
					renk=76;
				}
				else if(day==2)
				{
					system("color 06");
					renk=06;
					
				}
				screende();
				break;
			case 4:
				if(day==1)
				{
					printf("You cannot change the text color to gray in day mode.\n");
				}
				else if(day==2)
				{
					system("color 08");
					renk= 8;
					
				}
				screende();
				break;
			case 5:
				colorsde();
				break;
			case 6:
				colors3de();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				printf("\n\a");
				colors2de();
				break;
		}	
	}
	else
	{
		printf("\a\n");
		colors2de();
	}
}
int colors3de()
{
	location=13157253;
	silge(0);
	saat();
	nofbar();
	devshow();
    printf("Wählen Sie die Farbe.\n");
    printf("1=Hellblau\n");
    printf("2=Hellgrün\n");
    printf("3=Hellrot\n");
    printf("4=Helles Lila\n");
    printf("5=<--  2. Page\n");
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(day==1)
				{
					system("color 79");
					renk=79;
				}
				else if(day==2)
				{
					system("color 09");
					renk=9;
					
				}
				screende();
				break;
			case 2:
				if(day==1)
				{
					system("color 7A");
					renk=710;
				}
				else if(day==2)
				{
					system("color 0A");
					renk=10;
					
				}
				screende();
				break;
			case 3:
				if(day==1)
				{
					system("color 7C");
					renk=712;
				}
				else if(day==2)
				{
					system("color 0C");
					renk=12;
					
				}
				screende();
				break;
			case 4:
				if(day==1)
				{
					system("color 7D");
					renk=713;
				}
				else if(day==2)
				{
					system("color 0D");
					renk=13;
					
				}
				screende();
				break;
			case 5:
				colors2de();
				break;
			case 7:
				settingsde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				printf("\n\a");
				colors3de();
				break;
		}	
	}
	else
	{
		printf("\a\n");
		colors3de();
	}
}
int backuptr()
{
	location=11157451;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Yedekleme ve Geri Yükleme\n");
	printf("1=Yedek oluþtur\n");
	printf("2=Geri yükle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("Yedeðinizde yalnýzca KarOS Edisyonunuz ve varsayýlanlarýnýz bulunacaktýr.\n");
				printf("Yedek oluþturuluyor...\n");
				backup01();
				printf("Yedeðiniz oluþturuldu.\n");
				printf("Kodunuz: %d\n",backup);
				backuptr();
				break;
			case 2:
				printf("Yedek kodunu girin:\n");
				scanf("%d",&backdown);
				backup02();
				printf("KarOS Edisyonunuz: %d\n",karos);
				printf("Varsayýlan tarayýcýnýz: %d\n",varybrsr);
				printf("Varsayýlan diliniz: %d\n",varylang);
				lisansdogrulama();
				backuptr();
				break;
			case 7:
				onartr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				backuptr();
				break;
		}
	}
	else
	{
		hata();
		backuptr();
	}
}
int backupen()
{
	location=12157451;
	silge(1);
	saat();
	nofbar();
	kaydet();
	devshow();
	printf("Welcome to Backup and Restore Service\n");
	printf("1=Backup\n");
	printf("2=Restore\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("Your backup will only contain your KarOS Edition and your defaults.\n");
				printf("Creating a backup....\n");
				backup01();
				printf("Your backup has been created.\n");
				printf("Your Code: %d\n",backup);
				backupen();
				break;
			case 2:
				printf("Enter backup code:\n");
				scanf("%d",&backdown);
				backup02();
				printf("KarOS Edition: %d\n",karos);
				printf("Default Browser: %d\n",varybrsr);
				printf("Default Language: %d\n",varylang);
				lisansdogrulama();
				backupen();
				break;
			case 7:
				deviceen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				backupen();
				break;
		}
	}
	else
	{
		hata();
		backupen();
	}
}
int backupde()
{
	location=13157451;
	silge(1);
	saat();
	nofbar();
	kaydet();
	printf("Willkommen beim Sicherungs- und Wiederherstellungsdienst...\n");
	printf("1=Ein Backup erstellen\n");
	printf("2=wiederherstellen\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("Ihr Backup enthält nur Ihre KarOS Edition und Ihre Standardeinstellungen.\n");
				printf("Backup erstellen...\n");
				backup01();
				printf("Ihre Sicherung wurde erstellt.\n");
				printf("dein Code: %d\n",backup);
				backupde();
				break;
			case 2:
				printf("Geben Sie den Backup-Code ein:\n");
				scanf("%d",&backdown);
				backup02();
				printf("KarOS Edition: %d\n",karos);
				printf("Ihr Standardbrowser: %d\n",varybrsr);
				printf("Ihre Standardsprache: %d\n",varylang);
				lisansdogrulama();
				backupde();
				break;
			case 7:
				devicede();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				backupde();
				break;
		}
	}
	else
	{
		hata();
		backupde();
	}		
}
//Temel Sistem Bileþenleri
int yenidentr()
{
	printf("KarOS yeniden baþlatýlýyor...\n");
	kaydet();
	int b=1;
	while (b<350)
	{
		printf("\n");
		b++;
	}
	system("cls");
	main();
}
int yenidenen()
{
	printf("KarOS restarting...\n");
	kaydet();
	int b=1;
	while (b<350)
	{
		printf("\n");
		b++;
	}
	system("cls");
	main();
}
int yenidende()
{
	printf("KarOS neustart...\n");
	kaydet();
	int b=1;
	while (b<350)
	{
		printf("\n");
		b++;
	}
	system("cls");
	main();
}
//Yedekleme ve Geri Yükleme
int backup01()
{
	kared=karos%10;
	backup=(100*kared)+(10*varybrsr)+(1*varylang);
}
int backup02()
{
	varylang=backdown%10;
	int a=backdown%10;
	int b=(backdown-a)/10;
	varybrsr=b%10;
	int c=b%10;
	int d=(b-c)/10;
	kared=d%10;
	karos=40+kared;
	if(karos==40)
	keys=100000;
	else if(karos==41)
	keys=618342;
	else if(karos==42)
	keys=821673;
}
//Görüntü ve Kiþiselleþtirme
int renkbulucu()
{
	switch(renk)
	{
		case 70:
			system("color 70");
			break;
		case 71:
			system("color 71");
			break;
		case 73:
			system("color 73");
			break;
		case 74:
			system("color 74");
			break;
		case 72:
			system("color 72");
			break;
		case 75:
			system("color 75");
			break;
		case 76:
			system("color 76");
			break;
		case 79:
			system("color 79");
			break;
		case 710:
			system("color 7A");
			break;
		case 712:
			system("color 7C");
			break;
		case 713:
			system("color 7D");
			break;
		case 01:
			system("color 01");
			break;
		case 03:
			system("color 03");
			break;
		case 04:
			system("color 04");
			break;
		case 02:
			system("color 02");
			break;
		case 05:
			system("color 05");
			break;
		case 06:
			system("color 06");
			break;
		case 07:
			system("color 07");
			break;
		case 8:
			system("color 08");
			break;
		case 9:
			system("color 09");
			break;
		case 10:
			system("color 0A");
			break;
		case 12:
			system("color 0C");
			break;
		case 13:
			system("color 0D");
			break;
		default:
			if(day==1)
			system("color 70");
			else if(day==2)
			system("color 07");
			break;
			
	}
}
int backrenk()
{
	switch(homerenk)
	{
		case 17:
			system("color 17");
			break;
		case 27:
			system("color 27");
			break;
		case 67:
			system("color 67");
			break;
		default:
			if(day==1)
			system("color 70");
			else if(day==2)
			system("color 07");
			break;
	}
}
//Kapatma Menüsü
int shutdowntr()
{
	location=11150;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Kapatma Seçenekleri\n");
	printf("1=Kapat\n");
	printf("2=Yeniden Baþlat\n");
	printf("3=Kilitle\n");
	printf("4=Bilgisayarý Kapat\n");
	printf("5=Bilgisayarý Yeniden Baþlat\n");
	printf("6=Bilgisayarý 10 dk sonra kapat\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("KarOS kapatýlýyor...\n");
				kaydet();
				int c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
				break;
				break;
				break;
				break;
				break;
				break;
			case 2:
				yenidentr();
				break;
			case 3:
				kaydet();
				trstart1();
				break;
			case 4:
				kaydet();
				system("shutdown /p");
				fazlatr();
				break;
			case 5:
				kaydet();
				system("shutdown /r");
				fazlatr();
				break;
			case 6:
				kaydet();
				system("shutdown -s -f -t 600");
				printf("Cihazýnýz 10 dakika sonra kapatýlacak.\n");
				shutdowntr();
				break;
			case 7:
				fazlatr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				shutdowntr();
				break;
		}
	}
	else
	{
		hata();
		shutdowntr();
	}
}
int shutdownen()
{
	location=12150;
	silge(1);
	saat();
	nofbar();
	printf("Shutdown Options--------------\n");
	printf("1=Shutdown\n");
	printf("2=Restart\n");
	printf("3=Lock\n");
	printf("4=Turn off PC\n");
	printf("5=Restart PC\n");
	printf("6=10 minutes Shutdown\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("KarOS shutting down...\n");
				int c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
				break;
				break;
				break;
				break;
				break;
				break;
			case 2:
				yenidenen();
				break;
			case 3:
				enstart1();
				break;
			case 4:
				system("shutdown /p");
				fazlaen();
				break;
			case 5:
				system("shutdown /r");
				fazlaen();
				break;
			case 6:
				system("shutdown -s -f -t 600");
				printf("Your device will be turned off after 10 minutes.\n");
				shutdownen();
				break;
			case 7:
				fazlaen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				shutdownen();
				break;
		}
	}
	else
	{
		hata();
		shutdownen();
	}
}
int shutdownde()
{
	location=12150;
	silge(1);
	saat();
	nofbar();
	printf("Optionen zum Herunterfahren--------------\n");
	printf("1=Stilllegen\n");
	printf("2=Neu starten\n");
	printf("3=Sperren\n");
	printf("4=PC ausschalten\n");
	printf("5=PC neu starten\n");
	printf("6=Abschaltung 10 minüte\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("KarOS Herunterfahren...\n");
				int c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
				break;
				break;
				break;
				break;
				break;
				break;
			case 2:
				yenidende();
				break;
			case 3:
				destart1();
				break;
			case 4:
				system("shutdown /p");
				fazlade();
				break;
			case 5:
				system("shutdown /r");
				fazlade();
				break;
			case 6:
				system("shutdown -s -f -t 600");
				printf("Ihr Gerät wird nach 10 Minuten ausgeschaltet.\n");
				shutdownde();
				break;
			case 7:
				fazlade();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				shutdownde();
				break;
		}
	}
	else
	{
		hata();
		shutdownde();
	}
}
//Sesli Kullaným
int seskullantr()
{
	silge(1);
	saat();
	nofbar();
	printf("Sesli Kullanýmý açmak için Windows+H tuþlarýna basýn.\n");
	printf("Eðer gerekli dil paketleri yüklü deðil ise sonuç alamayabilirsiniz.\n");
	printf("Uygulama sadece Windows 11 ile desteklenir.\n");
	printf("Açmak istediðiniz uygulamanýn ismini söyleyin.\n");
	char a=getch();
	if(a=='A')
	{
		char b=getch();
		if(b=='y')
		{
			printf("Ayarlar uygulamasý açýlýyor...\n");
			settingstr0();
		}
		else if(b=='n')
		{
			char c=getch();
			{
				if(c=='a')
				{
					printf("Ana Ekran açýlýyor...\n");
					mainimsi();
				}
				else if(c=='k')
				{
					printf("Webde Ankara aranýyor...\n");
					if(varybrsr==1)
					{
						if(varyserc==1)
						system("start chrome https://www.google.com/search?q=Ankara");
						else if(varyserc==2)
						system("start chrome https://www.yandex.com.tr/search/?text=Ankara");
						else if(varyserc==3)
						system("start chrome https://www.bing.com/search?q=Ankara");
					}
					else if(varybrsr==2)
					{
						if(varyserc==1)
						system("start msedge https://www.google.com/search?q=Ankara");
						else if(varyserc==2)
						system("start msedge https://www.yandex.com.tr/search/?text=Ankara");
						else if(varyserc==3)
						system("start msedge https://www.bing.com/search?q=Ankara");
					}
					else 
					varybrsrhelper();
					mainimsi();
				}
			}
		}
	}
	else if(a=='B')
	{
		printf("Borsa istanbul 100 endeksi açýlýyor...\n");
		if(varybrsr==1)
		system("start chrome https://www.google.com/search?q=xu100");
		else if(varybrsr==2)
		system("start msedge https://www.google.com/search?q=xu100");
		else 
		varybrsrhelper();
		mainimsi();
	}
	else if(a=='I')
	{
		printf("Ýstanbul Webde açýlýyor...\n");
		if(varybrsr==1)
		{
			if(varyserc==1)
			system("start chrome https://www.google.com/search?q=Istanbul");
			else if(varyserc==2)
			system("start chrome https://www.yandex.com.tr/search/?text=Istanbul");
			else if(varyserc==3)
			system("start chrome https://www.bing.com/search?q=Istanbul");
		}
		else if(varybrsr==2)
		{
			if(varyserc==1)
			system("start msedge https://www.google.com/search?q=Istanbul");
			else if(varyserc==2)
			system("start msedge https://www.yandex.com.tr/search/?text=Istanbul");
			else if(varyserc==3)
			system("start msedge https://www.bing.com/search?q=Istanbul");
		}
		else 
		varybrsrhelper();
		mainimsi();
	}
	else if(a=='K')
	{
		char b=getch();
		if(b=='i')
		{
			printf("Cihaz kilitleniyor...\n");
			trstart1();
		}
		else if(b=='r')
		{
			printf("Kronometre Webde açýlýyor...\n");
			if(varybrsr==1)
			{
				if(varyserc==1)
				system("start chrome https://www.google.com/search?q=Kronometre");
				else if(varyserc==2)
				system("start chrome https://www.yandex.com.tr/search/?text=Kronometre");
				else if(varyserc==3)
				system("start chrome https://www.bing.com/search?q=Kronometre");
			}
			else if(varybrsr==2)
			{
				if(varyserc==1)
				system("start msedge https://www.google.com/search?q=Kronometre");
				else if(varyserc==2)
				system("start msedge https://www.yandex.com.tr/search/?text=Kronometre");
				else if(varyserc==3)
				system("start msedge https://www.bing.com/search?q=Kronometre");
			}
			else 
			varybrsrhelper();
			mainimsi();
		}
		else
		{
			printf("KarStore için Maðaza, KarNotes için Notlar diyin.\n");
			seskullantr();
		}
	}
	else if(a=='M')
	{
		printf("KarStore Maðazasý açýlýyor...\n");
		karstoretr();
	}
	else if(a=='N')
	{
		printf("KarNotes açýlýyor...\n");
		notepadtr0();
	}
	else if(a=='G')
	{
		printf("Google varsayýlan tarayýcý da açýlýyor...\n");
		if(varybrsr==1)
		system("start chrome https://www.google.com");
		else if(varybrsr==2)
		system("start msedge https://www.google.com");
		else 
		varybrsrhelper();
		mainimsi();
	}
	else if(a=='H')
	{
		char b=getch();
		if(b=='a')
		{
			char c=getch();
			if(c=='v')
			{
				printf("Hava durumu tarayýcýnýzda açýlýyor...\n");
				if(varybrsr==1)
				system("start chrome https://mgm.gov.tr/");
				else if(varybrsr==2)
				system("start msedge https://mgm.gov.tr/");
				else 
				varybrsrhelper();
				mainimsi();
			}
			else if(c=='r')
			{
				printf("Google Haritalar açýlýyor...\n");
				if(varybrsr==1)
				system("start chrome https://maps.google.com");
				else if(varybrsr==2)
				system("start msedge https://maps.google.com");
				else 
				varybrsrhelper();
				mainimsi();
			}
		}
		else if(b=='e')
		{
			printf("Hesap Makinesi açýlýyor...\n");
			calculatortr0();
		}
	}
	else if(a=='Y')
	{
		printf("Yardým ve Destek açýlýyor...\n");
		help();
	}
	else if(a=='S')
	{
		printf("Son Dakika Haberleri açýlýyor...\n");
		if(varybrsr==1)
		{
			if(varyserc==1)
			system("start chrome https://www.google.com/search?q=Haberler");
			else if(varyserc==2)
			system("start chrome https://www.yandex.com.tr/search/?text=Haberler");
			else if(varyserc==3)
			system("start chrome https://www.bing.com/search?q=Haberler");
		}
		else if(varybrsr==2)
		{
			if(varyserc==1)
			system("start msedge https://www.google.com/search?q=Haberler");
			else if(varyserc==2)
			system("start msedge https://www.yandex.com.tr/search/?text=Haberler");
			else if(varyserc==3)
			system("start msedge https://www.bing.com/search?q=Haberler");
		}
		else 
		varybrsrhelper();
		mainimsi();
	}
	else if(a=='Þ')
	{
		printf("Þehir uygulamasý açýlýyor...\n");
		cityfindtr0();
	}
	else if(a=='V')
	{
		printf("Vergi Hesaplama açýlýyor...\n");
		vergihometr0();
	}
	else if(a=='D')
	{
		printf("Döviz sayfasý açýlýyor...\n");
		if(varybrsr==1)
		system("start chrome https://www.foreks.com/doviz/");
		else if(varybrsr==2)
		system("start msedge https://www.foreks.com/doviz/");
		else 
		varybrsrhelper();
		mainimsi();
	}
	else if(a=='Z')
	{
		printf("Zamanlayýcý açýlýyor...\n");
		if(varybrsr==1)
		{
			if(varyserc==1)
			system("start chrome https://www.google.com/search?q=Timer");
			else if(varyserc==2)
			system("start chrome https://www.yandex.com.tr/search/?text=Timer");
			else if(varyserc==3)
			system("start chrome https://www.bing.com/search?q=Timer");
		}
		else if(varybrsr==2)
		{
			if(varyserc==1)
			system("start msedge https://www.google.com/search?q=Timer");
			else if(varyserc==2)
			system("start msedge https://www.yandex.com.tr/search/?text=Timer");
			else if(varyserc==3)
			system("start msedge https://www.bing.com/search?q=Timer");
		}
		else 
		varybrsrhelper();
		mainimsi();
	}
}
int seskullanen()
{
	silge(1);
	saat();
	nofbar();
	printf("Press Windows+H to turn on Voice Control.\n");
	printf("Say the name of the application you want to open.\n");
	char a=getch();
	if(a=='S')
	{
		char b=getch();
		if(b=='e')
		{
			printf("Turning on Settings...\n");
			settingsen0();
		}
		else if(b=='t')
		{
			printf("Starting Stopwatch on the web...\n");
			if(varybrsr==1)
			system("start chrome https://www.google.com/search?q=stopwatch");
			else if(varybrsr==2)
			system("start msedge https://www.google.com/search?q=stopwatch");
			mainimsi();
		}
	}
	else if(a=='K')
	{
		printf("Turning on KarStore...\n");
		karstoreen0();
	}
	else if(a=='N')
	{
		printf("Turning on KarNotes...\n");
		notepaden0();
	}
	else if(a=='C')
	{
		char b=getch();
		if(b=='a')
		{
			printf("Turning on Calculator...\n");
			calculatoren0();
		}
		else if(b=='i')
		{
			printf("Turning on City app...\n");
			cityfinden0();
		}
	}
	else if(a=='H')
	{
		char b=getch();
		if(b=='e')
		{
			printf("Turning on Help and support...\n");
			help();
		}
		else if(b=='o')
		{
			printf("Turning on Home Screen...\n");
			mainimsi();
		}
	}
	else if(a=='T')
	{
		printf("Turning on Tax Calculator...\n");
		vergihomeen0();
	}
	else if(a=='W')
	{
		printf("Turning on Weather on your Browser\n");
		if(varybrsr==1)
		system("start chrome https://mgm.gov.tr/");
		else if(varybrsr==2)
		system("start msedge https://mgm.gov.tr/");
		mainimsi();
	}
	else if(a=='M')
	{
		printf("Turning on Maps on your Browser\n");
		if(varybrsr==1)
		system("start chrome https://maps.google.com");
		else if(varybrsr==2)
		system("start msedge https://maps.google.com");
		mainimsi();
	}
}
//Hýzlý Menü
int quicktr()
{
	if(saveoft>2)
	kaydet();
	silge(1);
	saat();
	checknofs();
	printf("Hýzlý Menü\n");
	if(workmode==1)
	printf("1=Çalýþma Modu        : Açýk\n");
	else if(workmode==0)
	printf("1=Çalýþma Modu        : Kapalý\n");
	if(kascon==1)
	printf("2=KarStore Baðlantýsý : Açýk\n");
	else if(kascon==0)
	printf("2=KarStore Baðlantýsý : Kapalý\n");
	if(karcon==1)
	printf("3=Dýþ Alan Ýletiþimi  : Açýk\n");
	else if(karcon==0)
	printf("3=Dýþ Alan Ýletiþimi  : Kapalý\n");
	printf("4=Ayarlar\n");
	printf("7=Geri\n");
	printf("8=Bildirimler\n");
	printf("9=Ana Menü\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(workmode==1)
				workmode=0;
				else if(workmode==0)
				workmode=1;
				quicktr();
				break;
			case 4:
				settingstr0();
				break;
			case 2:
				if(kascon==1)
				kascon=0;
				else if(kascon==0)
				kascon=1;
				quicktr();
				break;
			case 3:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				backzone();
				break;
			case 8:
				nofbartr();
				break;
			default:
				hata();
				quicktr();
				break;
		}
	}
	else
	{
		printf("\a\n");
		quicktr();
	}
}
int nofbartr()
{
	silge(1);
	saat();
	printf("Bildirim Merkezi\n");
	printf("------------\n");
	printf("Mikrofon Eriþimi: Açýk\n");
	printf("------------\n");
	if(lisdognof2==1)
	{
		printf("KarOS Edisyonunuzda bir hata bulundu.\n");
		printf("Lütfen KarSoft Destek ile iletiþime geçin.\n");
	}
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				quicktr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofbartr();
				break;
		}
	}
	else
	{
		hata();
		nofbartr();
	}
		
}
int quicken()
{
	if(saveoft>2)
	kaydet();
	silge(1);
	saat();
	checknofs();
	printf("Quick Menu\n");
	if(workmode==1)
	printf("1=Work Mode            : On\n");
	else if(workmode==0)
	printf("1=Work Mode            : Off\n");
	if(kascon==1)
	printf("2=KarStore Connection  : On\n");
	else if(kascon==0)
	printf("2=KarStore Conneciton  : Off\n");
	if(karcon==1)
	printf("3=Outdoor Communication: On\n");
	else if(karcon==0)
	printf("3=Outdoor Communication: Off\n");
	printf("4=Settings\n");
	printf("7=Back\n");
	printf("8=Noffcations\n");
	printf("9=Main Menu\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(workmode==1)
				workmode=0;
				else if(workmode==0)
				workmode=1;
				quicken();
				break;
			case 4:
				settingsen0();
				break;
			case 2:
				if(kascon==1)
				kascon=0;
				else if(kascon==0)
				kascon=1;
				quicken();
				break;
			case 3:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				backzone();
				break;
			case 8:
				nofbaren();
				break;
			default:
				hata();
				quicken();
				break;
		}
	}
	else
	{
		hata();
		quicken();
	}
}
int nofbaren()
{
	silge(1);
	saat();
	printf("Noffication Center\n");
	printf("---------------\n");
	printf("Mic Access: Enabled\n");
	printf("---------------\n");
	if(lisdognof2==1)
	{
		printf("An error was found in your KarOS Edition.\n");
		printf("Please contact KarSoft Support.\n");
	}
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				quicken();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofbaren();
				break;
		}
		
	}
	else
	{
		hata();
		nofbaren();
	}
}
int quickde()
{
	if(saveoft>2)
	kaydet();
	silge(1);
	saat();
	checknofs();
	printf("Schnellmenü\n");
	if(workmode==1)
	printf("1=Arbeitsmodus           : Offen\n");
	else if(workmode==0)
	printf("1=Arbeitsmodus           : Abgeschlossen\n");
	if(kascon==1)
	printf("2=KarStore Verbindung    : Offen\n");
	else if(kascon==0)
	printf("2=KarStore Verbindung    : Abgeschlossen\n");
	if(karcon==1)
	printf("3=Kommunikation im Freien: Offen\n");
	else if(karcon==0)
	printf("3=Kommunikation im Freien: Abgeschlossen\n");
	printf("4=Einstellungen\n");
	printf("7=Zürück\n");
	printf("8=Benachrichtigungen\n");
	printf("9=Hauptmenu\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(workmode==1)
				workmode=0;
				else if(workmode==0)
				workmode=1;
				quickde();
				break;
			case 4:
				settingsde0();
				break;
			case 2:
				if(kascon==1)
				kascon=0;
				else if(kascon==0)
				kascon=1;
				quickde();
				break;
			case 3:
				if(karcon==1)
				karcon=0;
				else if(karcon==0)
				karcon=1;
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			case 7:
				backzone();
				break;
			case 8:
				nofbartr();
				break;
			default:
				hata();
				quickde();
				break;
		}
	}
	else
	{
		hata();
		quickde();
	}
}
int nofbarde()
{
	silge(1);
	saat();
	printf("Nachrichtencenter\n");
	printf("---------------\n");
	printf("Mikrofonzugriff: Aktiviert\n");
	printf("---------------\n");
	if(lisdognof2==1)
	{
		printf("In Ihrer KarOS Edition wurde ein Fehler gefunden.\n");
		printf("Bitte wenden Sie sich an den KarSoft-Support.\n");
	}
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				quickde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				nofbarde();
				break;
		}
	}
	else
	{
		hata();
		nofbarde();
	}
}
//Geliþmiþ Baþlatma
int gelstarttr()
{
	location=1157452;
	saniye();
	int c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("KarOS yeniden baþlatýlýyor...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	system("cls");
	printf("KarOS baþlatýlýyor...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("Geliþmiþ Seçenekler\n");
	printf("1=KarOS'u geliþmiþ seçenekler için baþlat\n");
	printf("2=KarOS Sistem Parçalarýný Sýfýrla\n");
	printf("3=KarStore Services sýfýrla\n");
	printf("4=KarOS Ana Ekranýný sýfýrla\n");
	printf("5=KarGames Baþarýmlarýný sýfýrla\n");
	printf("Kapatmak için herhangi bir tuþa basýn.\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris;
	scanf("%c",&giris);
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				main2();
				break;
			case 2:
				systemparcatr();
				break;
			case 3:
				karstoreservicetr();
				break;
			case 4:
				karoshometr();
				break;
			case 5:
				kargametr();
				break;
			default:
				printf("KarOS kapatýlýyor...\n");
				c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
		}
	}
	else
	{
		printf("KarOS kapatýlýyor...\n");
		c=1;
		while (c<350)
		{
			printf("\n");
			c++;
		}
	}
}
int gelstarten()
{
	location=1257452;
	saniye();
	int c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("KarOS restarting...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	system("cls");
	printf("KarOS starting...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("Advanced Choices\n");
	printf("1=Start KarOS normally\n");
	printf("2=Reset KarOS System Parts\n");
	printf("3=Reset KarOS Services\n");
	printf("4=Reser KarOS Home Screen\n");
	printf("Press another key to turn it off.\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris;
	scanf("%c",&giris);
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				main2();
				break;
			case 2:
				systemparcaen();
				break;
			case 3:
				karstoreserviceen();
				break;
			case 4:
				karoshomeen();
				break;
			default:
				printf("KarOS shutting down...\n");
				c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
		}
	}
	else
	{
		printf("KarOS shutting down...\n");
		c=1;
		while (c<350)
		{
			printf("\n");
			c++;
		}
	}
}
int gelstartde()
{
	location=1357452;
	saniye();
	int c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("KarOS neu starten...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	system("cls");
	printf("KarOS starten...\n");
	c=1;
	while (c<350)
	{
		printf("\n");
		c++;
	}
	printf("Erweiterte Optionen\n");
	printf("1=Starten Sie KarOS normal\n");
	printf("2=KarOS-Systemteile zurücksetzen\n");
	printf("3=KarOS-Dienste zurücksetzen\n");
	printf("4=KarOS-Home screen zurücksetzen\n");
	printf("Drücken Sie eine andere Taste, um es auszuschalten.\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris;
	scanf("%c",&giris);
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				main2();
				break;
			case 2:
				systemparcade();
				break;
			case 3:
				karstoreservicede();
				break;
			case 4:
				karoshomede();
			default:
				printf("KarOS wird heruntergefahren...\n");
				c=1;
				while (c<350)
				{
					printf("\n");
					c++;
				}
				break;
		}
	}
	else
	{
		printf("KarOS wird heruntergefahren...\n");
		c=1;
		while (c<350)
		{
			printf("\n");
			c++;
		}
	}
}
int systemparcatr()
{
	int workmode=0;
	int seterisim=1;
	int kaserisim=1;
	int calerisim=1;
	int noterisim=1;
	int cityerisim=1;
	int vererisim=1;
	int varylang=1;
	int lang=1;
	int calint=0;
	printf("Ýþlem tamamlandý.\n");
	main();
}
int systemparcaen()
{
	int workmode=0;
	int seterisim=1;
	int kaserisim=1;
	int calerisim=1;
	int noterisim=1;
	int cityerisim=1;
	int vererisim=1;
	int varylang=1;
	int lang=1;
	int calint=0;
	printf("Process completed.\n");
	main();
}
int systemparcade()
{
	int workmode=0;
	int seterisim=1;
	int kaserisim=1;
	int calerisim=1;
	int noterisim=1;
	int cityerisim=1;
	int vererisim=1;
	int varylang=1;
	int lang=1;
	int calint=0;
	printf("Prozess abgescholossen.\n");
	main();
}
int karstoreservicetr()
{
//Eriþimler
 tip0=1;
 figure0=1;
 akdev0=1;
 akyak0=1;
 asim0=1;
 ssim0=1;
 t20230=1;
 tkm0=1;
 sayi0=1;
 barb0=1;
 yil0=1;
 gtt0=1;
 vki0=1;
 yerm0=1;
//Lisanslar
 yerm2=0;
 figure2=0;
 akdev2=0;
 gtt2=0;
 akyak2=0;
 vki2=0;
 tip2=1;
 asim2=0;
 ssim2=0;
 t20232=0;
 tkm2=0;
 sayi2=0;
 barb2=0;
 yil2=0;
 storelicense=1;
	//akdevlet
	onay=0;
	//sanayisim
	sanayisim_maas=0;
	sanayisim_para=0;
	sanayisim_tcrb=0;
	sanayisim_sabt=0;
	//target 2023
	geri=3;
	printf("Ýþlem tamamlandý.\n");
	main();
}
int karstoreserviceen()
{
//Eriþimler
 tip0=1;
 figure0=1;
 akdev0=1;
 akyak0=1;
 asim0=1;
 ssim0=1;
 t20230=1;
 tkm0=1;
 sayi0=1;
 barb0=1;
 yil0=1;
 gtt0=1;
 vki0=1;
 yerm0=1;
//Lisanslar
 yerm2=0;
 figure2=0;
 akdev2=0;
 gtt2=0;
 akyak2=0;
 vki2=0;
 tip2=1;
 asim2=0;
 ssim2=0;
 t20232=0;
 tkm2=0;
 sayi2=0;
 barb2=0;
 yil2=0;
 storelicense=1;
	//akdevlet
	onay=0;
	//sanayisim
	sanayisim_maas=0;
	sanayisim_para=0;
	sanayisim_tcrb=0;
	sanayisim_sabt=0;
//target 2023
	geri=3;
	//KarGames Baþarýmlarý
 basar=0;
 ssima1=0;
 ssima2=0;
 asima1=0;
 asima2=0;
 asima3=0;
 tkma1=0;
 trgta1=0;
 trgta2=0;
	printf("process completed.\n");
	main();
}
int karstoreservicede()
{
//Eriþimler
	 tip0=1;
 figure0=1;
 akdev0=1;
 akyak0=1;
 asim0=1;
 ssim0=1;
 t20230=1;
 tkm0=1;
 sayi0=1;
 barb0=1;
 yil0=1;
 gtt0=1;
 vki0=1;
 yerm0=1;
	figure0=1;
	akdev0=1;
	akyak0=1;
	asim0=1;
	ssim0=1;
	t20230=1;
	tkm0=1;
	sayi0=1;
	barb0=1;
	yil0=1;
	gtt0=0;
//Lisanslar
 yerm2=0;
 figure2=0;
 akdev2=0;
 gtt2=0;
 akyak2=0;
 vki2=0;
 tip2=1;
 asim2=0;
 ssim2=0;
 t20232=0;
 tkm2=0;
 sayi2=0;
 barb2=0;
 yil2=0;
 storelicense=1;
	//akdevlet
	onay=0;
	//sanayisim
	sanayisim_maas=0;
	sanayisim_para=0;
	sanayisim_tcrb=0;
	sanayisim_sabt=0;
	//target 2023
	geri=3;
	//KarGames Baþarýmlarý
 basar=0;
 ssima1=0;
 ssima2=0;
 asima1=0;
 asima2=0;
 asima3=0;
 tkma1=0;
  trgta1=0;
 trgta2=0;
	printf("Prozess abgescholossen.\n");
	main();
}
int karoshometr()
{
//Ana Ekran
 yerm1=0;
 tip1=0;
 figure1=0;
 akdev1=0;
 akyak1=0;
 asim1=0;
 ssim1=0;
 gtt1=0;
 t20231=0;
 tkm10=0;
 sayi10=0;
 barb10=0;
 yil10=0;
 vki11=0;
	printf("Ýþlem Tamamlandý.\n");
	gelstarttr();
}
int karoshomeen()
{
//Ana Ekran
 yerm1=0;
 tip1=0;
 figure1=0;
 akdev1=0;
 akyak1=0;
 asim1=0;
 ssim1=0;
 gtt1=0;
 t20231=0;
 tkm10=0;
 sayi10=0;
 barb10=0;
 yil10=0;
 vki11=0;
	printf("Process completed.\n");
	gelstarten();
}
int karoshomede()
{
//Ana Ekran
 yerm1=0;
 tip1=0;
 figure1=0;
 akdev1=0;
 akyak1=0;
 asim1=0;
 ssim1=0;
 gtt1=0;
 t20231=0;
 tkm10=0;
 sayi10=0;
 barb10=0;
 yil10=0;
 vki11=0;
	printf("Process completed.\n");
	gelstartde();
}
int kargametr()
{
 basar=0;
 ssima1=0;
 ssima2=0;
 asima1=0;
 asima2=0;
 asima3=0;
 tkma1=0;
  trgta1=0;
 trgta2=0;
	printf("Ýþlem tamamlandý.\n");
}
//Yardým
int help()
{
	if(saveoft>1)
	kaydet();
	location=11153;
	silge(1);
	saat();
	nofbar();
	devshow();
	if(lang ==1)
	{
		if(karcon==0)
		{
			printf(" Dýþ Alan Ýletiþimi kapalý, KarSoft sunucularýna ulaþýlamýyor.\n");
			hata();
			mainimsi();
		}
		printf("KarOS Yardým ve Destek\n");
		printf("1=Çevrim içi KarOS Yardýmý\n");
		printf("2=Geliþmiþ Baþlatma\n");
		printf("3=Hatalarý bildirmek için bize ulaþýn.\n");
		printf("4=Ýpuçlarý uygulamasýný edinmek için KarStore'a uðrayýn.\n");
		navbar();
	}
	else if(lang==2)
	{
		if(karcon==0)
		{
			printf(" Dýþ Alan Ýletiþimi kapalý, KarSoft sunucularýna ulaþýlamýyor.\n");
			hata();
			mainimsi();
		}
		printf("Welcome to KarOS Help and Support\n");
		printf("1=Online KarOS Support\n");
		printf("2=Improved Start\n");
		printf("3=Contact us to report bugs.\n");
		printf("4=To get the Tips app, go to KarStore.\n");
		navbar();
	}
	else if(lang==3)
	{
		if(karcon==0)
		{
			printf(" Dýþ Alan Ýletiþimi kapalý, KarSoft sunucularýna ulaþýlamýyor.\n");
			hata();
			mainimsi();
		}
		printf("Willkommen bei der KarOS-Hilfe...\n");
		printf("1=Online KarOS Hilfen\n");
		printf("2=Verbesserter Start\n");
		printf("3=Kontaktieren Sie uns, um Fehler zu melden.\n");
		navbar();	
	}
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(lang==1)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Yönlendirme baþarýlý.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Yönlendirme baþarýlý.\n");
						help();
					}
					else 
					varybrsrhelper();
				}
				else if(lang==2)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Forwarding successful.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Forwarding successful.\n");
						help();
					}
					else 
					varybrsrhelper();	
				}
				else if(lang==3)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Weiterleitung erfolgreich.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Weiterleitung erfolgreich.\n");
						help();
					}
					else 
					varybrsrhelper();
				}
				break;
			case 2:
				if(lang==1)
				gelstarttr();
				else if(lang==2)
				gelstarten();
				else if(lang==3)
				gelstartde();
				break;
			case 3:
				if(lang==1)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Yönlendirme baþarýlý.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Yönlendirme baþarýlý.\n");
						help();
					}
					else 
					varybrsrhelper();
				}
				else if(lang==2)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Forwarding successful.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Forwarding successful.\n");
						help();
					}
					else 
					varybrsrhelper();	
				}
				else if(lang==3)
				{
					if(varybrsr==1)
					{
						system("start chrome sites.google.com/view/karsoftware/destek");
						printf("Weiterleitung erfolgreich.\n");
						help();
					}
					else if(varybrsr==2)
					{
						system("start msedge sites.google.com/view/karsoftware/destek");
						printf("Weiterleitung erfolgreich.\n");
						help();
					}
					else 
					varybrsrhelper();
				}
				break;
			case 4:
				if(lang==1)
				karstoretr();
				else if(lang==2)
				karstoreen();
				else if(lang==3)
				karstore0de();
				break;
			case 7:
				if(lang==1)
				fazlatr();
				else if(lang==2)
				fazlaen();
				else if(lang==3)
				fazlade();
				break;
			case 8:
				if(lang==1)
				quicktr();
				else if(lang==2)
				quicken();
				else if(lang==3)
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				help();
				break;
		}
	}
	else
	{
		hata();
		help();
	}
	
}
//Kod Sistemi
int codsystr()
{
	if(saveoft>1)
	kaydet();
	location=11152;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Kod:\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	int a;
	scanf("%d",&a);
		switch(a)
		{
		//ana menü
			case 11:
				calculatortr();
				break;
			case 12:
				notepadtr();
				break;
			case 13:
				cityfindtr();
				break;
			case 14:
				karstoretr();
				break;
			case 151:
				vergihometr();
				break;
			case 152:
				settingstr();
				break;
			case 153:
				help();
				break;
			case 154:
				system("start");
				fazlatr();
				break;
			case 150:
				shutdowntr();
				break;
			//karstore kodlarý
			case 141:
				kasaratr();
				break;
			case 142:
				appstr();
				break;
			case 143:
				gamestr();
				break;
			case 144:
				storesettr();
				break;
			//Temel Sistem Bileþenleri
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			//Ayarlar
			default:
				printf("\a\n");
				codsystr();
				break;
		}
	
	
}
int codsysen()
{
	location=12152;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Code:\n");
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
		switch(a)
		{
			//main menu
			case 11:
				calculatoren();
				break;
			case 12:
				notepaden();
				break;
			case 13:
				cityfinden();
				break;
			case 14:
				karstoreen();
				break;
			case 151:
				vergihomeen();
				break;
			case 152:
				settingsen();
				break;
			case 153:
				help();
				break;
			case 150:
				shutdownen();
				break;
			//karstore kodlarÄ±
			case 141:
				kasaraen();
				break;
			case 142:
				appsen();
				break;
			case 143:
				gamesen();
				break;
			case 144:
				storeseten();
				break;
			//Basic System Parts
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			//Settings
			default:
				printf("\a\n");
				codsysen();
				break;
		}
}
int codsysde()
{
	location=13152;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("\n");
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
		switch(a)
		{
			//main menu
			case 11:
				calculatorde();
				break;
			case 12:
				notepadde();
				break;
			case 13:
				cityfind0de();
				break;
			case 14:
				karstore0de();
				break;
			case 151:
				vergihome0de();
				break;
			case 152:
				settingsde();
				break;
			case 153:
				help();
				break;
			case 150:
				shutdownde();
				break;
			//karstore kodlarÄ±
			case 141:
				kasaraen();
				break;
			case 142:
				appsen();
				break;
			case 143:
				gamesen();
				break;
			case 144:
				storeseten();
				break;
			//Basic System Parts
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			//Settings
			default:
				printf("\a\n");
				codsysde();
				break;
		}
}
//Hesap Makinesi
int calculatortr0()
{
	location=1101;
	appno=1;
	silge(0);
	saat();
	if(calerisim==0)
	{
		printf("Bu uygulama devre dýþý býrakýlmýþ, etkinleþtirip tekrar deneyin.\n");
		mainimsi();
	}
	else if(calerisim==1)
	calculatortr();
}
int calculatortr()
{
	location=11010;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Hesap Makinesi\n");
	printf("1=Toplama\n");
	printf("2=Çýkarma\n");
	printf("3=Çarpma\n");
	printf("4=Bölme\n");
	printf("5=Ýkinci Sayfa->\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				caltr01();
				break;
			case 2:
				caltr02();
				break;
			case 3:
				caltr03();
				break;
			case 4:
				caltr04();
				break;
			case 5:
				calculatortr2();
				break;
			case 8:
				quicktr();
				break;
			case 7:
				mainimsi();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatortr();
				break;
		}	
	}
	else
	{
		hata();
		calculatortr();
	}
}
int calculatortr2()
{
	location=11010;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Hesap Makinesi\n");
	printf("1=Mod Alma\n");
	printf("2=Üs Alma\n");
	printf("3=Karekök Alma\n");
	printf("4=Hesap Makinesi Ayarlarý\n");
	printf("5=     Birinci Sayfa    <--\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				caltr05();
				break;
			case 2:
				caltr06();
				break;
			case 3:
				caltr07();
				break;
			case 5:
				calculatortr();
				break;
			case 8:
				quicktr();
				break;
			case 4:
				calsettr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatortr2();
				break;
			}
	}
	else
	{
		hata();
		calculatortr2();
	}
}
int caltr01()
{
	location=11011;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Toplama seçildi\n");
	printf("Ýlk sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Ýkinci sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr01();	
	}
	c=a+b;
	printf("Sonuç %d\n",c);
	calculatortr();
}
int caltr02()
{
	location=11012;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Çýkarma seçildi\n");
	printf("Ýlk sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Ýkinci sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr02();	
	}
	c=a-b;
	printf("Sonuç %d\n",c);
	calculatortr();
}
int caltr03()
{
	location=11013;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Çarpma seçildi\n");
	printf("Ýlk sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Ýkinci sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr03();	
	}
	c=a*b;
	printf("Sonuç %d\n",c);
	calculatortr();
}
int caltr04()
{
	location=11014;
	if (calint==0)
	{
		int fflush(FILE *stream);
		fflush(stdin);
		float a,b;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Bölme seçildi\n");
		printf("Ýlk sayýyý yazýn\n");
		printf("---------> ");
		scanf("%f",&a);
		printf("Ýkinci sayýyý yazýn\n");
		printf("---------> ");
		scanf("%f",&b);
		if(b==0)
		{
			printf("Paydaya 0 yazmak tanýmsýz yapar,tekrar deneyin.\a\n");
			caltr04();
		}
		if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr04();	
	}
		c=a/b;
		printf("Sonuç %f\n",c);
		calculatortr();
	}
	else if(calint==1)
	{
		int a,b,d;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Bölme seçildi\n");
		printf("Ýlk sayýyý yazýn\n");
		printf("---------> ");
		scanf("%d",&a);
		printf("Ýkinci sayýyý yazýn\n");
		printf("---------> ");
		scanf("%d",&b);
		c=a/b;
		d=a%b;
		printf("Sonuç: %f\n",c);
		printf("Kalan: %d\n",d);
		calculatortr();
	}
}
int caltr05()
{
	location=11015;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Mod Alma seçildi\n");
	printf("Ýlk sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Ýkinci sayýyý yazýn\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr05();	
	}
	c=a%b;
	printf("Sonuç %d\n",c);
	calculatortr();
}
int caltr06()
{
	location=11016;
	float a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Üs Alma seçildi.\nNot:Ondalýklý sayýlar yazarken virgül kullanýn.\n");
	printf("Tabaný yazýn\n");
	printf("---------> ");
	scanf("%f",&a);
	printf("Üssü yazýn\n");
	printf("---------> ");
	scanf("%f",&b);
	if(a||b>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr06();	
	}
	c=pow(a,b);
	printf("Sonuç %.4f\n",c);
	calculatortr();
}
int caltr07()
{
	location=11017;
	float a;
	float c;
	silge(0);
	saat();
	nofbar();
	printf("Karekök Alma seçildi\nNot:Ondalýklý sayýlar yazarken virgül kullanýn\n");
	printf("Ýlk sayýyý yazýn\n");
	printf("---------> ");
	scanf("%f",&a);
	if(a>100000)
	{
		printf("Çok büyük bir sayý girdiniz, daha küçük sayýlar deneyin.\n");
		hata();
		caltr07();	
	}
	c=sqrtf(a);
	printf("Sonuç %.2f\n",c);
	calculatortr();
}
int calsettr()
{
	location=11018;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Hesap Makinesi Ayarlarý\n");
	if(calint==0)
	printf("1=Bölme iþleminde kalaný göster\n");
	else if(calint==1)
	printf("1=Bölme iþleminde kalaný gösterme\n");
	printf("2=Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calint==0)
				calint=1;
				else if(calint==1)
				calint=0;
				calsettr();
				break;
			case 2:
				printf("Hesap Makinesi\n");
				printf("Versiyon: 4.3\n");
				printf("KarSoft, 2025\n");
				printf("Bu uygulama KarOS 4 yazýlýmý için geliþtirilmiþtir.\n");
				calsettr();
				break;
			case 7:
				calculatortr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calsettr();
				break;
		}
	}
	else
	{
		hata();
		calsettr();
	}
}
int calculatoren0()
{
	location=1201;
	if(calerisim==0)
	{
		printf("This app is disabled, enable it and try again.\n");
		mainimsi();
	}
	else if(calerisim==1)
	calculatoren();
}
int calculatoren()
{
	location=12010;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Calculator\n");
	printf("1=Addition\n");
	printf("2=Subtraction\n");
	printf("3=Multiplication\n");
	printf("4=Division\n");
	printf("5=Second Page -->\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				calen01();
				break;
			case 2:
				calen02();
				break;
			case 3:
				calen03();
				break;
			case 4:
				calen04();
				break;
			case 5:
				calculatoren2();
				break;
			case 8:
				quicken();
				break;
			case 7:
				mainimsi();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatoren();
				break;
		}	
	}
	else
	{
		hata();
		calculatoren();
	}
}
int calculatoren2()
{
	location=12010;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Calculator\n");
	printf("1=Mode Retrieval\n");
	printf("2=Exponentiation\n");
	printf("3=Square Root\n");
	printf("4=Calculator Settings\n");
	printf("5=     First Page    <--\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				calen05();
				break;
			case 2:
				calen06();
				break;
			case 3:
				calen07();
				break;
			case 5:
				calculatoren();
				break;
			case 8:
				quicken();
				break;
			case 4:
				calseten();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatoren2();
				break;
			}
	}
	else
	{
		hata();
		calculatoren2();
	}
}
int calen01()
{
	location=12011;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Addition selected.\n");
	printf("Write the first number\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Write the second number\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen01();	
	}
	c=a+b;
	printf("Conclusion %d\n",c);
	calculatoren();
}
int calen02()
{
	location=12012;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Subtraction selected\n");
	printf("Write the first number\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Write the second number\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen02();	
	}
	c=a-b;
	printf("Conclusion %d\n",c);
	calculatoren();
}
int calen03()
{
	location=12013;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Multiplication selected\n");
	printf("Write the first number\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Write the second number\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen03();	
	}
	c=a*b;
	printf("Conclusion %d\n",c);
	calculatoren();
}
int calen04()
{
	location=12014;
	if (calint==0)
	{
		int fflush(FILE *stream);
		fflush(stdin);
		float a,b;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Partition selected\n");
		printf("Type the first number\n");
		printf("---------> ");
		scanf("%f", &a);
		printf("Type the second number\n");
		printf("---------> ");
		scanf("%f",&b);
		if(b==0)
		{
			printf("Typing 0 in the denominator makes the result undefined, try again.\a\n");
			calen04();
		}
		c=a/b;
		printf("Result: %f\n",c);
		calculatoren();
	}
	else if(calint==1)
	{
		int a,b,d;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Partition selected\n");
		printf("Type the first number\n");
		printf("---------> ");
		scanf("%d",&a);
		printf("Type the second number\n");
		printf("---------> ");
		scanf("%d",&b);
		c=a/b;
		d=a%b;
		printf("Result  : %f\n",c);
		printf("Reminder: %d\n",d);
		calculatoren();
	}
}
int calen05()
{
	location=12015;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Mode Retrieval selected\n");
	printf("Write the first number\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Write the second number\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen05();	
	}
	c=a%b;
	printf("Conclusion %d\n",c);
	calculatoren();
}
int calen06()
{
	location=12016;
	float a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Exponentiation process selected.\nNote: Use commas when writing decimal numbers.\n");
	printf("Type the floor\n");
	printf("---------> ");
	scanf("%f",&a);
	printf("Type the base\n");
	printf("---------> ");
	scanf("%f",&b);
	if(a||b>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen06();	
	}
	c=pow(a,b);
	printf("Conclusion %.4f\n",c);
	calculatoren();
}
int calen07()
{
	location=12017;
	float a;
	float c;
	silge(0);
	saat();
	nofbar();
	printf("Taking Square Root selected.\nNote: Use commas when writing decimal numbers.\n");
	printf("Write the first number\n");
	printf("---------> ");
	scanf("%f",&a);
	if(a>100000)
	{
		printf("You entered a number that is too large, try smaller numbers.\n");
		hata();
		calen07();	
	}
	c=sqrtf(a);
	printf("Conclusion %.2f\n",c);
	calculatoren();
}
int calseten()
{
	location=12018;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Calculator Settings\n");
	printf("1=Show remainder in division\n");
	printf("2=About\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calint==0)
				calint=1;
				else if(calint==1)
				calint=0;
				calseten();
				break;
			case 2:
				printf("Calculator\n");
				printf("Version: 4.3\n");
				printf("KarSoft, 2025\n");
				printf("This app developed for KarOS 4.\n");
				calseten();
				break;
			case 7:
				calculatoren();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calseten();
				break;
		}
	}
	else
	{
		hata();
		calseten();
	}
}
int calculatorde0()
{
	location=1301;
	if(calerisim==0)
	{
		printf("Diese App ist deaktiviert, aktivieren Sie sie und versuchen Sie es erneut.\n");
		mainimsi();
	}
	else if(calerisim==1)
	calculatorde();
}
int calculatorde()
{
	location=13010;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Taschenrechner\n");
	printf("1=Ergänzung\n");
	printf("2=Subtraktion\n");
	printf("3=Multiplikation\n");
	printf("4=Aufteilung\n");
	printf("5=Zweite Seite -->\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				calde01();
				break;
			case 2:
				calde02();
				break;
			case 3:
				calde03();
				break;
			case 4:
				calde04();
				break;
			case 5:
				calculatorde2();
				break;
			case 8:
				quickde();
				break;
			case 7:
				mainimsi();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatorde();
				break;
		}	
	}
	else
	{
		hata();
		calculatoren();
	}
}
int calculatorde2()
{
	location=13010;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Taschenrechner\n");
	printf("1=Modusabruf\n");
	printf("2=Potenzierung\n");
	printf("3=Quadratwurzel\n");
	printf("4=Rechnereinstellungen\n");
	printf("5=     Erste Seite    <--\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				calde05();
				break;
			case 2:
				calde06();
				break;
			case 3:
				calde07();
				break;
			case 5:
				calculatorde();
				break;
			case 8:
				quickde();
				break;
			case 4:
				calsetde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calculatorde2();
				break;
			}
	}
	else
	{
		hata();
		calculatorde2();
	}
}
int calde01()
{
	location=13011;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Zusatz ausgewählt.\n");
	printf("Schreiben Sie die erste Zahl\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Schreibe die zweite Zahl\n");
	printf("---------> ");
	scanf("%d",&b);
	c=a+b;
	if(a||b>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde01();	
	}
	printf("Fazit %d\n",c);
	calculatorde();
}
int calde02()
{
	location=13012;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Subtraktion ausgewählt\n");
	printf("Schreiben Sie die erste Zahl\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Schreibe die zweite Zahl\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde02();	
	}
	c=a-b;
	printf("Fazit %d\n",c);
	calculatorde();
}
int calde03()
{
	location=13013;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Multiplikation ausgewählt\n");
	printf("Schreiben Sie die erste Zahl\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Schreibe die zweite Zahl\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde03();	
	}
	c=a*b;
	printf("Fazit %d\n",c);
	calculatorde();
}
int calde04()
{
	location=13014;
	if (calint==0)
	{
		int fflush(FILE *stream);
		fflush(stdin);
		float a,b;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Partition ausgewählt\n");
		printf("Geben Sie die erste Zahl ein\n");
		printf("---------> ");
		scanf("%f", &a);
		printf("Geben Sie die zweite Zahl ein\n");
		printf("---------> ");
		scanf("%f",&b);
		if(b==0)
		{
			printf("Wenn Sie 0 in den Nenner eingeben, wird das Ergebnis undefiniert, versuchen Sie es erneut.\a\n");
			calen04();
		}
		c=a/b;
		printf("Ergebnis: %f\n",c);
		calculatoren();
	}
	else if(calint==1)
	{
		int a,b,d;
		float c;
		silge(0);
		saat();
		nofbar();
		printf("Partition ausgewählt\n");
		printf("Geben Sie die erste Zahl ein\n");
		printf("---------> ");
		scanf("%d",&a);
		printf("Geben Sie die zweite Zahl ein\n");
		printf("---------> ");
		scanf("%d",&b);
		c=a/b;
		d=a%b;
		printf("Ergebnis  : %f\n",c);
		printf("Erinnerung: %d\n",d);
		calculatoren();
	}
}
int calde05()
{
	location=13015;
	int a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Modus Abruf ausgewählt\n");
	printf("Schreiben Sie die erste Zahl\n");
	printf("---------> ");
	scanf("%d",&a);
	printf("Schreibe die zweite Zahl\n");
	printf("---------> ");
	scanf("%d",&b);
	if(a||b>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde05();	
	}
	c=a%b;
	printf("Fazit %d\n",c);
	calculatorde();
}
int calde06()
{
	location=13016;
	float a,b,c;
	silge(0);
	saat();
	nofbar();
	printf("Potenzierungsverfahren ausgewählt.\nHinweis:Verwenden Sie beim Schreiben von Dezimalzahlen Kommas.\n");
	printf("Geben Sie den Boden ein\n");
	printf("---------> ");
	scanf("%f",&a);
	printf("Geben Sie die Basis ein\n");
	printf("---------> ");
	scanf("%f",&b);
	if(a||b>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde06();	
	}
	c=pow(a,b);
	printf("Fazit %.4f\n",c);
	calculatorde();
}
int calde07()
{
	location=13017;
	float a;
	float c;
	silge(0);
	saat();
	nofbar();
	printf("Quadratwurzel ziehen ausgewählt.\nHinweis:Verwenden Sie beim Schreiben von Dezimalzahlen Kommas.\n");
	printf("Geben Sie den Boden ein\n");
	printf("---------> ");
	scanf("%f",&a);
	if(a>100000)
	{
		printf("Sie haben eine zu große Zahl eingegeben. Versuchen Sie es mit kleineren Zahlen.\n");
		hata();
		calde01();	
	}
	c=sqrtf(a);
	printf("Fazit %.2f\n",c);
	calculatorde();
}
int calsetde()
{
	location=13018;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Rechnereinstellungen\n");
	printf("1=Zeige den Rest bei der Division\n");
	printf("2=Über\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(calint==0)
				calint=1;
				else if(calint==1)
				calint=0;
				calsetde();
				break;
			case 2:
				printf("Taschenrechner\n");
				printf("Version: 4.3\n");
				printf("KarSoft, 2025\n");
				printf("Diese App wurde für KarOS 4 entwickelt\n");
				calsetde();
				break;
			case 7:
				calculatorde();
				break;
			case 8:
				quickde();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				calsetde();
				break;
		}
	}
	else
	{
		hata();
		calsetde();
	}
}
//KarNotes
int notepadtr0()
{
	location=1102;
	if(noterisim==0)
	{
		printf("Bu uygulama devre dýþý býrakýlmýþ, etkinleþtirip tekrar deneyin.\n");
		mainimsi();
	}
	else if(noterisim==1)
	notepadtr();
}
int notepaden0()
{
	location=1202;
	if(noterisim==0)
	{
		printf("This app is disabled, enable it and try again.\n");
		mainimsi();
	}
	else if(noterisim==1)
	notepaden();
}
int notepadde0()
{
	location=1302;
	if(noterisim==0)
	{
		printf("Diese App ist deaktiviert, aktivieren Sie sie und versuchen Sie es erneut.\n");
		mainimsi();
	}
	else if(noterisim==1)
	notepadde();
}
void notEkletr(FILE *dosya,int uzanti) {
    char notAdi[64];
    char notIcerik[1024];
    
    fflush(stdin);
    
	switch(uzanti)
	{
		case 0:
			printf("Lütfen not adýný girin:");
    		fgets(notAdi, sizeof(notAdi), stdin);
	
    		printf("Lütfen not içeriðini girin:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
			fprintf(dosya, "isim: %s", notAdi);
  			fprintf(dosya, "Not: %s", notIcerik);
  			break;
  		case 1:
 			printf("Lütfen kod içeriðini girin:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
  			fprintf(dosya, "%s", notIcerik); 
			break;
		default:
			printf("Hatalý seçim, lütfen geçerli bir seçenek seçiniz.\n");
			break;				
	}

    printf("Not baþarýyla eklendi.\n");
    
	fclose(dosya);//yeni
    notepadtr0();
}
void notEkleen(FILE *dosya,int uzanti) {
    char notAdi[64];
    char notIcerik[1024];
    
    fflush(stdin);
    
	switch(uzanti)
	{
		case 0:
			printf("Please enter note name:");
    		fgets(notAdi, sizeof(notAdi), stdin);
	
    		printf("Please enter note content:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
			fprintf(dosya, "Name: %s", notAdi);
  			fprintf(dosya, "Note: %s", notIcerik);
  			break;
  		case 1:
 			printf("Please enter note content:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
  			fprintf(dosya, "%s", notIcerik); 
			break;
		default:
			printf("Incorrect selection, please select a valid option.\n");
			break;				
	}

    printf("Note added successfully.\n");
    
    fclose(dosya);//yeni
    notepaden0();
}
void notEklede(FILE *dosya,int uzanti) {
    char notAdi[64];
    char notIcerik[1024];
    
    fflush(stdin);
    
	switch(uzanti)
	{
		case 0:
			printf("Bitte geben Sie den Notiznamen ein:");
    		fgets(notAdi, sizeof(notAdi), stdin);
	
    		printf("Bitte geben Sie den Notizinhalt ein:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
			fprintf(dosya, "Name: %s", notAdi);
  			fprintf(dosya, "Notiz: %s", notIcerik);
  			break;
  		case 1:
 			printf("Bitte geben Sie den Notizinhalt ein:");
   	 		fgets(notIcerik, sizeof(notIcerik), stdin);
   	 		
  			fprintf(dosya, "%s", notIcerik); 
			break;
		default:
			printf("Falsche Auswahl, bitte wählen Sie eine gültige Option.\n");
			break;				
	}

    printf("Notiz erfolgreich hinzugefügt.\n");
    
    fclose(dosya);//yeni
    notepadde0();
}
void notlariGostertr(FILE *dosya) {
	
	silge(1);
	saat();
	nofbar();
    printf("\n--- Notlar ---\n");
    
   	dosya = fopen("karnotestxt.txt", "r");
	rewind(dosya); 

    char satir[1024];
    
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }
	
	fclose(dosya);//yeni
    printf("\n--- Son ---\n\n\n");
	
	
	// deneysel baþlangýcý	
	printf("\n--- Kodlar ---\n");
    
   	dosya = fopen("karnotesc.c", "r");
	rewind(dosya); 
	
	memset(satir, 0, sizeof(satir));
    
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }

    printf("\n--- Son ---\n");
    fclose(dosya);//yeni
    //deneysel sonu
	
    notepadtr0();
}
void notlariGosteren(FILE *dosya) {
	silge(1);
	saat();
	nofbar();
    printf("\n--- Notes ---\n");
    
    dosya = fopen("karnotestxt.txt", "r");
    rewind(dosya);

    char satir[1024];
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }

    printf("\n--- End ---\n\n\n");
    
    // deneysel baþlangýcý	
	printf("\n--- Codes ---\n");
    
   	dosya = fopen("karnotesc.c", "r");
	rewind(dosya); 
	
	memset(satir, 0, sizeof(satir));
    
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }

    printf("\n--- End ---\n");
    fclose(dosya);//yeni
    //deneysel sonu
    notepaden0();
}
void notlariGosterde(FILE *dosya) {
	silge(1);
	saat();
	nofbar();
    printf("\n--- Anmerkungen ---\n");
    
    dosya = fopen("karnotestxt.txt", "r");
    rewind(dosya);

    char satir[1024];
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }

    printf("\n--- Ende ---\n\n\n");
    
    	// deneysel baþlangýcý	
	printf("\n--- Codes ---\n");
    
   	dosya = fopen("karnotesc.c", "r");
	rewind(dosya); 
	
	memset(satir, 0, sizeof(satir));
    
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    }

    printf("\n--- Ende ---\n");
    fclose(dosya);//yeni
    //deneysel sonu
    notepadde0();
}
int notepadtr() {
	FILE *dosya;
	silge(1);
	saat();
	nofbar();
        printf("1=Not Ekle\n2=Notlarý Göster\n");
        navbar();
        printf("Lütfen bir seçenek girin:\n");
        char c=getch();
		switch(c)
		{
			case '1':
				printf("Not:Karnotes þu anda türkçe karakterleri desteklememektedir, lütfen notlarýnýzý buna dikkat ederek alýnýz!\n");
				printf("Not:Notlarýnýzý yazdýktan hemen sonra göremeyebilirsiniz, karnotesdan çýktýktan sonra görünür halde olacaklardýr.\n");//yeni
				printf("1. .txt\n2. .c\n");
				printf("Not defteri uzantýsýný seçiniz:\n");
				char c=getch();
				switch(c)
				{
					case '1':
						    dosya = fopen("karnotestxt.txt", "a+");
						    if (dosya == NULL) {
						        printf("Not defteri dosyasý oluþturulamadý.");
						        return 1;
							}
							notEkletr(dosya,0);
							break;
					case '2':
							dosya = fopen("karnotesc.c", "w+");
							if (dosya == NULL) {
						        printf("Not defteri dosyasý oluþturulamadý.");
						        return 1;
							}
							notEkletr(dosya,1);	
							break;
				}
				break;
			case '2':
				notlariGostertr(dosya);
				break;
			case '7':
				trstart();
				break;
			case '8':
				quicktr();
				break;
			case '9':
				mainimsi();
				break;	
			default:
				hata();
				notepadtr();
				break;
		}

    fclose(dosya);
    return 0;
}
int notepaden() {
	FILE *dosya;
	silge(1);
	saat();
	nofbar();
        printf("1=Add Notes\n2=Show Notes\n");
        navbar();
        printf("Please enter an option:\n");
        char c=getch();
		switch(c)
		{
			case '1':
				printf("1. .txt\n2. .c\n");
				printf("Select the notebook extension:\n");
				char c=getch();
				switch(c)
				{
					case '1':
						    dosya = fopen("karnotestxt.txt", "a+");
						    if (dosya == NULL) {
						        printf("Failed to create notebook file.");
						        return 1;
							}
							notEkleen(dosya,0);
							break;
					case '2':
							dosya = fopen("karnotesc.c", "w+");
							if (dosya == NULL) {
						        printf("Failed to create notebook file.");
						        return 1;
							}
							notEkleen(dosya,1);	
							break;
				}
				break;
			case '2':
				notlariGosteren(dosya);
				break;
			case '7':
				trstart();
				break;
			case '8':
				quicktr();
				break;
			case '9':
				mainimsi();
				break;	
			default:
				hata();
				notepadtr();
				break;
		}

    fclose(dosya);
    return 0;
}
int notepadde() {
	FILE *dosya;
	silge(1);
	saat();
	nofbar();
        printf("1=Notizen hinzufügen\n2=Notizen anzeigen\n");
        navbar();
        printf("Bitte geben Sie eine Option ein:\n");
        char c=getch();
		switch(c)
		{
			case '1':
				printf("1. .txt\n2. .c\n");
				printf("Wählen Sie die Notebook-Erweiterung aus:\n");
				char c=getch();
				switch(c)
				{
					case '1':
						    dosya = fopen("karnotestxt.txt", "a+");
						    if (dosya == NULL) {
						        printf("Die Notebookdatei konnte nicht erstellt werden.");
						        return 1;
							}
							notEklede(dosya,0);
							break;
					case '2':
							dosya = fopen("karnotesc.c", "w+");
							if (dosya == NULL) {
						        printf("Die Notebookdatei konnte nicht erstellt werden.");
						        return 1;
							}
							notEklede(dosya,1);	
							break;
				}
				break;
			case '2':
				notlariGosterde(dosya);
				break;
			case '7':
				trstart();
				break;
			case '8':
				quicktr();
				break;
			case '9':
				mainimsi();
				break;	
			default:
				hata();
				notepadde();
				break;
		}

    fclose(dosya);
    return 0;
}
//Þehir Bulma
int cityfindtr0()
{
	location=1103;
	if(cityerisim==0)
	{
		printf("Bu uygulama devre dýþý býrakýlmýþ, etkinleþtirip tekrar deneyin.\n");
		mainimsi();
	}
	else if(cityerisim==1)
	citytr();
}
int cityfinden0()
{
	location=1203;
	if(cityerisim==0)
	{
		printf("This app is disabled, enable it and try again.\n");
		mainimsi();
	}
	else if(cityerisim==1)
	cityfinden();
}
int cityfindde0()
{
	location=1303;
	if(cityerisim==0)
	{
		printf("Diese App ist deaktiviert, aktivieren Sie sie und versuchen Sie es erneut.\n");
		mainimsi();
	}
	else if(cityerisim==1)
	cityfind0de();
}
int cityfind0de()
{
	location=13030;
	if(lang==3)
	{
		if(varylang==1)
		cityfindtr();
		else if(varylang==2)
		cityfinden();
	}
}
int citytr()
{
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Þehirler Uygulamasý\n");
	printf("Yapmak istediðiniz iþlevi seçin.\n");
	printf("1=Þehrin  adýný yazýn.\n");
	printf("2=Þehir Plakasýný yazýn.\n");
	printf("5=Türkiye Hakkýnda\n");
	printf("6=Þehir Uygulamasý Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				cityplakatr();
				break;	
			case 2:
				cityfindtr();
				break;
			case 6:
				cityabouttr();
				break;
			case 5:
				printf("Türkiye\n");
				printf("-Kurucusu Mustafa Kemal Atatürk'tür.\n");
				printf("-Resmi dili: Türkçe\n");
				printf("-Para birimi: Türk Lirasý (TRY)\n");
				printf("-Baþkenti Ankara'dýr.\n");
				printf("-En büyük þehri Ýstanbul'dur.\n");
				printf("-Milli marþý Ýstiklal Marþý'dýr.\n");
				printf("-Kuruluþ Tarihi: 29 Ekim 1923(100 yýl önce)\n");
				printf("-81 ili vardýr.\n");
				printf("-Nüfusu 85 milyon 279 bin 553'tür.(2023)\n");
				printf("-30 büyükþehri vardýr.\n");
				printf("-Telefon kodu +90'dýr.\n");
				printf("-Dünya genelinde ilk 500 sýralamasýnda 3 üniversitesi vardýr.\n");
				printf("-Zorunlu eðitim 12 yýldýr.\n");
				printf("-Birleþmiþ Milletler'e üyedir.\n");
				printf("-Türk Devletleri Teþkilatýna üyedir.\n");
				printf("-NATO'nun kurucu üyesidir.\n");
				printf("-Avrupa Birliði'ne girme çalýþmalarý devam etmektedir.\n");
				printf("-IMF'ye göre 1 trilyon 154 milyar 600 milyon dolar milli geliri vardýr.\n");
				printf("-IMF'ye göre dünyanýn 17. büyük ekonomisidir.\n");
				printf("-IMF'ye göre milli gelirden 13 bin 384 dolar kiþi baþýan düþmektedir.\n");
				citytr();
				break;
			case 7:
				mainimsi();
				break;
			case 8:
	 			quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				citytr();
				break;
		}
	}
	else
	{
		hata();
		citytr();
	}
}
int cityfindtr()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=11030;
	silge(1);
	saat();
	nofbar();
	devshow();
	int a;
	printf("Geri dönmek için 99'u tuþlayýn.\n");
	printf("Plaka Numarasýný Yazýn: ");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			city01();
			break;
		case 2:
			city02();
			break;
		case 3:
			city03();
			break;
		case 4:
			city04();
			break;
		case 5:
			city05();
			break;
		case 6:
			city06();
			break;
		case 7:
			city07();
			break;	
		case 8:
			city08();
			break;	
		case 9:
			city09();
			break;	
		case 10:
			city10();
			break;
		case 11:
			city11();
			break;
		case 12:
			city12();
			break;
		case 13:
			city13();
			break;
		case 14:
			city14();
			break;
		case 15:
			city15();
			break;
		case 16:
			city16();
			break;
		case 17:
			city17();
			break;
		case 18:
			city18();
			break;
		case 19:
			city19();
			break;
		case 20:
			city20();
			break;
		case 21:
			city21();
			break;
		case 22:
			city22();
			break;
		case 23:
			city23();
			break;
		case 24:
			city24();
			break;
		case 25:
			city25();
			break;
		case 26:
			city26();
			break;
		case 27:
			city27();
			break;
		case 28:
			city28();
			break;
		case 29:
			city29();
			break;
		case 30:
			city30();
			break;
		case 31:
			city31();
			break;
		case 32:
			city32();
			break;
		case 33:
			city33();
			break;
		case 34:
			city34();
			break;
		case 35:
			city35();
			break;
		case 36:
			city36();
			break;
		case 37:
			city37();
			break;
		case 38:
			city38();
			break;
		case 39:
			city39();
			break;
		case 40:
			city40();
			break;
		case 41:
			city41();
			break;
		case 42:
			city42();
			break;
		case 43:
			city43();
			break;
		case 44:
			city44();
			break;
		case 45:
			city45();
			break;
		case 46:
			city46();
			break;
		case 47:
			city47();
			break;
		case 48:
			city48();
			break;	
		case 49:
			city49();
			break;	
		case 50:
			city50();
			break;	
		case 51:
			city51();
			break;
		case 52:
			city52();
			break;
		case 53:
			city53();
			break;
		case 54:
			city54();
			break;
		case 55:
			city55();
			break;
		case 56:
			city56();
			break;
		case 57:
			city57();
			break;
		case 58:
			city58();
			break;
		case 59:
			city59();
			break;
		case 60:
			city60();
			break;
		case 61:
			city61();
			break;
		case 62:
			city62();
			break;
		case 63:
			city63();
			break;
		case 64:
			city64();
			break;
		case 65:
			city65();
			break;
		case 66:
			city66();
			break;
		case 67:
			city67();
			break;
		case 68:
			city68();
			break;
		case 69:
			city69();
			break;
		case 70:
			city70();
			break;
		case 71:
			city71();
			break;
		case 72:
			city72();
			break;
		case 73:
			city73();
			break;
		case 74:
			city74();
			break;
		case 75:
			city75();
			break;
		case 76:
			city76();
			break;
		case 77:
			city77();
			break;
		case 78:
			city78();
			break;
		case 79:
			city79();
			break;
		case 80:
			city80();
			break;
		case 81:
			city81();
			break;
		case 99:
			citytr();
			break;
		default:
			hata();
			cityfindtr();
			break;
		
	}
}
int cityplakatr()
{
	char i[16];
	int j;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("%s","Türkçe karaktersiz þekilde bir þehir giriniz(Örnek giriþ Istanbul):");
	scanf("%15s",i);
	i[0]=toupper(i[0]);
	for(j=1;i[j]!='\0';j++)
	{
		i[j]=tolower(i[j]);
	}
	char *sehir[82]={"NULL","Adana", "Adiyaman", "Afyonkarahisar", "Agri", "Amasya", "Ankara", "Antalya", "Artvin", "Aydin", "Balikesir", "Bilecik", "Bingol",
	"Bitlis", "Bolu", "Burdur", "Bursa", "Canakkale", "Cankýrý", "Corum", "Denizli", "Diyarbakýr", "Edirne", "Elazýg", "Erzincan", "Erzurum", "Eskisehir",
	"Gaziantep", "Giresun", "Gumushane", "Hakkari", "Hatay", "Isparta", "Mersin", "Istanbul", "Izmir", "Kars", "Kastamonu", "Kayseri", "Kirklareli", "Kirþehir",
	"Kocaeli", "Konya", "Kutahya", "Malatya", "Manisa", "Kahramanmaras", "Mardin", "Mugla", "Mus", "Nevsehir", "Nigde", "Ordu", "Rize", "Sakarya", "Samsun",
	"Siirt", "Sinop", "Sivas", "Tekirdag", "Tokat", "Trabzon", "Tunceli", "Sanlýurfa", "Usak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman",
	"Kirikkale", "Batman", "Sýrnak", "Bartýn", "Ardahan", "Igdýr", "Yalova", "Karabuk", "Kilis", "Osmaniye", "Duzce"};
	for(j=1;j<=81;j++){
		if(!strcmp(i,sehir[j])){
			printf("%s ilinin plakasý: %d\n\n",sehir[j],j);
			citytr();
			break;
		}
	}
	if(j==82){
		hata();
		citytr();
	}
}
int cityabouttr()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Þehir Bulma Uygulamasý\n");
	printf("Sürüm: 4.2\n");
	printf("Bilgilendirmeler:\n");
	printf("Ülke: Türkiye\n");
	printf("Þehir verileri= TÜÝK'ten alýnmýþtýr.\n");
	printf("Ekonomi ve milli gelir verileri IMF'den alýnmýþtýr.\n");
	printf("KarOS 4 için tasarlanmýþtýr.\n");
	printf("KarSoft, 2025\n");
	citytr();
}
city01()
{
	silge(0);
	saat();
	nofbar();
	printf("ADANA\n");
	printf("Plaka Kodu  : 01\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 2,2 Mn\n");
	printf("Ýlçe Sayýsý : 15\n");
	printf("Telefon Kodu: 322\n");
	citytr();
}
city02()
{
	silge(0);
	saat();
	nofbar();
	printf("ADIYAMAN\n");
	printf("Plaka Kodu  : 02\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,6Mn\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 416\n");
	citytr();
}
city03()
{
	silge(0);
	saat();
	nofbar();
	printf("AFYONKARAHÝSAR\n");
	printf("Plaka Kodu  : 03\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,7\n");
	printf("Ýlçe Sayýsý : 18\n");
	printf("Telefon Kodu: \272n");
	citytr();
}
city04()
{
	silge(0);
	saat();
	nofbar();
	printf("AÐRI\n");
	printf("Plaka Kodu  : 04\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,5Mn\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 472\n");
	citytr();
}
city05()
{
	silge(0);
	saat();
	nofbar();
	printf("AMASYA\n");
	printf("Plaka Kodu  : 05\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,3 Mn\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 358\n");
	citytr();
}
city06()
{
	silge(0);
	saat();
	nofbar();
	printf("ANKARA\n");
	printf("Plaka Kodu  : 06\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Büyüþehir\n");
	printf("Nüfusu      : 5,7 Milyon\n");
	printf("Ýlçe Sayýsý : 25\n");
	printf("Özelliði    : Baþkent\n");
	printf("Telefon Kodu: +90 (312)\n");
	citytr();
}
city07()
{
	silge(0);
	saat();
	nofbar();
	printf("ANTALYA\n");
	printf("Plaka Kodu  : 07\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 2,5Mn\n");
	printf("Ýlçe Sayýsý : 19\n");
	printf("Telefon Kodu: 242\n");
	citytr();
}
city08()
{
	silge(0);
	saat();
	nofbar();
	printf("ARTVÝN\n");
	printf("Plaka Kodu  : 08\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,1Mn\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 466\n");
	citytr();
}
city09()
{
	silge(0);
	saat();
	nofbar();
	printf("AYDIN\n");
	printf("Plaka Kodu  : 09\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,1Mn\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 256\n");
	citytr();
}
city10()
{
	silge(0);
	saat();
	nofbar();
	printf("BALIKESÝR\n");
	printf("Plaka Kodu  : 10\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,2Mn\n");
	printf("Ýlçe Sayýsý : 20\n");
	printf("Telefon Kodu: 266\n");
	citytr();
}
city11()
{
	silge(0);
	saat();
	nofbar();
	printf("BÝLECÝK\n");
	printf("Plaka Kodu  : 11\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,2Mn\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 228\n");
	citytr();
}
city12()
{
	silge(0);
	saat();
	nofbar();
	printf("BÝNGÖL\n");
	printf("Plaka Kodu  : 12\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,2mn\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 426\n");
	citytr();
}
city13()
{
	silge(0);
	saat();
	nofbar();
	printf("BÝTLÝS\n");
	printf("Plaka Kodu  : 13\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 434\n");
	citytr();
}
city14()
{
	silge(0);
	saat();
	nofbar();
	printf("BOLU\n");
	printf("Plaka Kodu  : 14\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,3Mn\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 374\n");
	citytr();
}
city15()
{
	silge(0);
	saat();
	nofbar();
	printf("BURDUR\n");
	printf("Plaka Kodu  : 15\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,2Mn\n");
	printf("Ýlçe Sayýsý : 11\n");
	printf("Telefon Kodu: 248\n");
	citytr();
}
city16()
{
	silge(0);
	saat();
	nofbar();
	printf("BURSA\n");
	printf("Plaka Kodu  : 16\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 3,0 Mn\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 224\n");
	citytr();
}
city18()
{
	silge(0);
	saat();
	nofbar();
	printf("ÇANKIRI\n");
	printf("Plaka Kodu  : 18\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,1Mn\n");
	printf("Ýlçe Sayýsý : 12\n");
	printf("Telefon Kodu: 376\n");
	citytr();
}
city17()
{
	silge(0);
	saat();
	nofbar();
	printf("ÇANAKKALE\n");
	printf("Plaka Kodu  : 17\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,5Mn\n");
	printf("Ýlçe Sayýsý : 12\n");
	printf("Telefon Kodu: 286\n");
	citytr();
}
city19()
{
	silge(0);
	saat();
	nofbar();
	printf("ÇORUM\n");
	printf("Plaka Kodu  : 19\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,5Mn\n");
	printf("Ýlçe Sayýsý : 14\n");
	printf("Telefon Kodu: 364\n");
	citytr();
}
city20()
{
	silge(0);
	saat();
	nofbar();
	printf("DENÝZLÝ\n");
	printf("Plaka Kodu  : 20\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Büyüksehir\n");
	printf("Nüfusu      : 1Mn\n");
	printf("Ýlçe Sayýsý : 19\n");
	printf("Telefon Kodu: 258\n");
	citytr();
}
city21()
{
	silge(0);
	saat();
	nofbar();
	printf("DÝYARBAKIR\n");
	printf("Plaka Kodu  : 21\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,7Mn\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 412\n");
	citytr();
}
city22()
{
	silge(0);
	saat();
	nofbar();
	printf("EDÝRNE\n");
	printf("Plaka Kodu  : 22\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,4Mn\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 284\n");
	citytr();
}
city23()
{	
	silge(0);
	saat();
	nofbar();
	printf("ELAZIÐ\n");
	printf("Plaka Kodu  : 23\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 0,6Mn\n");
	printf("Ýlçe Sayýsý : 11\n");
	printf("Telefon Kodu: 424\n");
	citytr();
}
city24()
{
	silge(0);
	saat();
	nofbar();
	printf("ERZÝNCAN\n");
	printf("Plaka Kodu  : 24\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,2Mn\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 446\n");
	citytr();
}
city25()
{
	silge(0);
	saat();
	nofbar();
	printf("ERZURUM\n");
	printf("Plaka Kodu  : 25\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : \n");
	printf("Ýlçe Sayýsý : \n");
	printf("Telefon Kodu: \n");
	citytr();
}
city26()
{
	silge(0);
	saat();
	nofbar();
	printf("ESKÝÞEHÝR\n");
	printf("Plaka Kodu  : 26\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 0,8\n");
	printf("Ýlçe Sayýsý : 14\n");
	printf("Telefon Kodu: 222\n");
	citytr();
}
city27()
{
	silge(0);
	saat();
	nofbar();
	printf("GAZÝANTEP\n");
	printf("Plaka Kodu  : 27\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 2\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 342\n");
	citytr();
}
city28()
{
	silge(0);
	saat();
	nofbar();
	printf("GÝRESUN\n");
	printf("Plaka Kodu  : 28\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,4\n");
	printf("Ýlçe Sayýsý : 16\n");
	printf("Telefon Kodu: 454\n");
	citytr();
}
city29()
{
	silge(0);
	saat();
	nofbar();
	printf("GÜMÜÞHANE\n");
	printf("Plaka Kodu  : 29\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,1\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 456\n");
	citytr();
}
city30()
{
	silge(0);
	saat();
	nofbar();
	printf("HAKKARÝ\n");
	printf("Plaka Kodu  : 30\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 4\n");
	printf("Telefon Kodu: 438\n");
	citytr();
}
city31()
{
	silge(0);
	saat();
	nofbar();
	printf("HATAY(ANTAKYA)\n");
	printf("Plaka Kodu  : 31\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,6\n");
	printf("Ýlçe Sayýsý : 15\n");
	printf("Telefon Kodu: 326\n");
	citytr();
}
city32()
{
	silge(0);
	saat();
	nofbar();
	printf("ISPARTA\n");
	printf("Plaka Kodu  : 32\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,4\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 246\n");
	citytr();
}
city33()
{
	silge(0);
	saat();
	nofbar();
	printf("MERSÝN (ÝÇEL)\n");
	printf("Plaka Kodu  : 33\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,8\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 324\n");
	citytr();
}
city34()
{
	silge(0);
	saat();
	nofbar();
	printf("ISTANBUL\n");
	printf("Plaka Kodu  : 34\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 15,46 Milyon\n");
	printf("Ýlçe Sayýsý : 40\n");
	printf("Telefon Kodu: +90 212 ve +90 216\n");
	citytr();
}
city35()
{
	silge(0);
	saat();
	nofbar();
	printf("ÝZMÝR\n");
	printf("Plaka Kodu  : 35\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 4,36 Milyon\n");
	printf("Ýlçe Sayýsý : 30\n");
	printf("Telefon Kodu: +90 232\n");
	citytr();
}
city36()
{
	silge(0);
	saat();
	nofbar();
	printf("KARS\n");
	printf("Plaka Kodu  : 36\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 474\n");
	citytr();
}
city37()
{
	silge(0);
	saat();
	nofbar();
	printf("KASTAMONU\n");
	printf("Plaka Kodu  : 37\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 20\n");
	printf("Telefon Kodu: 366\n");
	citytr();
}
city38()
{
	silge(0);
	saat();
	nofbar();
	printf("KAYSERÝ\n");
	printf("Plaka Kodu  : 38\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,3\n");
	printf("Ýlçe Sayýsý : 16\n");
	printf("Telefon Kodu: 352\n");
	citytr();
}
city39()
{
	printf("KIRKLARELÝ\n");
	printf("Plaka Kodu  : 39\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Þehir\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 288\n");
	citytr();
}
city40()
{
	printf("KIRÞEHÝR\n");
	printf("Plaka Kodu  : 40\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 386\n");
	citytr();
}
city41()
{
	printf("KOCAELÝ-ÝZMÝT\n");
	printf("Plaka Kodu  : 41\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 12\n");
	printf("Telefon Kodu: 262\n");
	citytr();
}
city42()
{
	printf("KONYA\n");
	printf("Plaka Kodu  : 42\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 31\n");
	printf("Telefon Kodu: 332\n");
	citytr();
}
city43()
{
	printf("KÜTAHYA\n");
	printf("Plaka Kodu  : 43\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 274\n");
	citytr();
}
city44()
{
	printf("MALATYA\n");
	printf("Plaka Kodu  : 44\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 422\n");
	citytr();
}
city45()
{
	printf("MANÝSA\n");
	printf("Plaka Kodu  : 45\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 236\n");
	citytr();
}
city46()
{
	printf("KAHRAMANMARAÞ\n");
	printf("Plaka Kodu  : 46\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 11\n");
	printf("Telefon Kodu: 344\n");
	citytr();
}
city47()
{
	printf("MARDÝN\n");
	printf("Plaka Kodu  : 47\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 10\n");
	printf("Telefon Kodu: 482\n");
	citytr();
}
city48()
{
	printf("MUÐLA\n");
	printf("Plaka Kodu  : 48\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 252\n");
	citytr();
}
city49()
{
	printf("MUÞ\n");
	printf("Plaka Kodu  : 49\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 436\n");
	citytr();
}
city50()
{
	printf("NEVÞEHÝR\n");
	printf("Plaka Kodu  : 50\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 384\n");
	citytr();
}
city51()
{
	printf("NÝÐDE\n");
	printf("Plaka Kodu  : 51\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 388\n");
	citytr();
}
city52()
{
	printf("ORDU\n");
	printf("Plaka Kodu  : 52\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 19\n");
	printf("Telefon Kodu: 452\n");
	citytr();
}
city53()
{
	printf("RÝZE\n");
	printf("Plaka Kodu  : 53\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Þehir\n");
	printf("Ýlçe Sayýsý : 15\n");
	printf("Telefon Kodu: \n");
	citytr();
}
city54()
{
	printf("SAKARYA\n");
	printf("Plaka Kodu  : 54\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Ýlçe Sayýsý : 16\n");
	printf("Telefon Kodu: 264\n");
	citytr();
}
city55()
{
	printf("SAMSUN\n");
	printf("Plaka Kodu  : 55\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,3\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 362\n");
	citytr();
}
city56()
{
	printf("SÝÝRT\n");
	printf("Plaka Kodu  : 56\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 484\n");
	citytr();
}
city57()
{
	printf("SÝNOP\n");
	printf("Plaka Kodu  : 57\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 368\n");
	citytr();
}
city58()
{
	printf("SÝVAS\n");
	printf("Plaka Kodu  : 10\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 0,6\n");
	printf("Ýlçe Sayýsý : 17\n");
	printf("Telefon Kodu: 346\n");
	citytr();
}
city59()
{
	printf("TEKÝRDAÐ\n");
	printf("Plaka Kodu  : 59\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1\n");
	printf("Ýlçe Sayýsý : 11\n");
	printf("Telefon Kodu: 282\n");
	citytr();
}
city60()
{
	printf("TOKAT\n");
	printf("Plaka Kodu  : 60\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,6\n");
	printf("Ýlçe Sayýsý : 12\n");
	printf("Telefon Kodu: 356\n");
	citytr();
}
city61()
{
	printf("TRABZON\n");
	printf("Plaka Kodu  : 10\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 0,8\n");
	printf("Ýlçe Sayýsý : 18\n");
	printf("Telefon Kodu: 462\n");
	citytr();
}
city62()
{
	printf("TUNCELÝ\n");
	printf("Plaka Kodu  : 10\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : \n");
	printf("Nüfusu      : 0,08\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 428\n");
	citytr();
}
city63()
{
	printf("ÞANLIURFA\n");
	printf("Plaka Kodu  : 63\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 2\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 414\n");
	citytr();
}
city64()
{
	printf("UÞAK\n");
	printf("Plaka Kodu  : 64\n");
	printf("Bölgesi     : Ege\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 276\n");
	citytr();
}
city65()
{
	printf("VAN\n");
	printf("Plaka Kodu  : 65\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 1,1\n");
	printf("Ýlçe Sayýsý : 13\n");
	printf("Telefon Kodu: 432\n");
	citytr();
}
city66()
{
	printf("YOZGAT\n");
	printf("Plaka Kodu  : 66\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,4\n");
	printf("Ýlçe Sayýsý : 14\n");
	printf("Telefon Kodu: 354\n");
	citytr();
}
city67()
{
	printf("ZONGULDAK\n");
	printf("Plaka Kodu  : 67\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,5\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 372\n");
	citytr();
}
city68()
{
	printf("AKSARAY\n");
	printf("Plaka Kodu  : 68\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,4\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 382\n");
	citytr();
}
city69()
{
	printf("BAYBURT\n");
	printf("Plaka Kodu  : 69\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,08\n");
	printf("Ýlçe Sayýsý : 4\n");
	printf("Telefon Kodu: 458\n");
	citytr();
}
city70()
{
	printf("KARAMAN\n");
	printf("Plaka Kodu  : 70\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 338\n");
	printf("Telefon Kodu: 338\n");
	citytr();
}
city71()
{
	printf("KIRIKKALE\n");
	printf("Plaka Kodu  : 71\n");
	printf("Bölgesi     : Ýç Anadolu\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 9\n");
	printf("Telefon Kodu: 318\n");
	citytr();
}
city72()
{
	printf("BATMAN\n");
	printf("Plaka Kodu  : 72\n");
	printf("Bölgesi     : Gümeydoðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,6\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 488\n");
	citytr();
}
city73()
{
	printf("ÞIRNAK\n");
	printf("Plaka Kodu  : 73\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Büyükþehir\n");
	printf("Nüfusu      : 0,5\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 486\n");
	citytr();
}
city74()
{
	printf("BARTIN\n");
	printf("Plaka Kodu  : 74\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,1\n");
	printf("Ýlçe Sayýsý : 4\n");
	printf("Telefon Kodu: 378\n");
	citytr();
}
city75()
{
	printf("ARDAHAN\n");
	printf("Plaka Kodu  : 75\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Nüfusu      : 0,09\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 478\n");
	citytr();
}
city76()
{
	printf("IÐDIR\n");
	printf("Plaka Kodu  : 76\n");
	printf("Bölgesi     : Doðu Anadolu\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,1\n");
	printf("Ýlçe Sayýsý : 4\n");
	printf("Telefon Kodu: 476\n");
	citytr();
}
city77()
{
	printf("YALOVA\n");
	printf("Plaka Kodu  : 77\n");
	printf("Bölgesi     : Marmara\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 226\n");
	citytr();
}
city78()
{
	printf("KARABÜK\n");
	printf("Plaka Kodu  : 78\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,2\n");
	printf("Ýlçe Sayýsý : 6\n");
	printf("Telefon Kodu: 370\n");
	citytr();
}
city79()
{
	printf("KÝLÝS\n");
	printf("Plaka Kodu  : 79\n");
	printf("Bölgesi     : Güneydoðu Anadolu\n");
	printf("Durumu      : Ýl\n");
	printf("Nüfusu      : 0,1\n");
	printf("Ýlçe Sayýsý : 4\n");
	printf("Telefon Kodu: 348\n");
	citytr();
}
city80()
{
	printf("OSMANÝYE\n");
	printf("Plaka Kodu  : 80\n");
	printf("Bölgesi     : Akdeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,5\n");
	printf("Ýlçe Sayýsý : 7\n");
	printf("Telefon Kodu: 328\n");
	citytr();
}
city81()
{
	printf("DÜZCE\n");
	printf("Plaka Kodu  : 81\n");
	printf("Bölgesi     : Karadeniz\n");
	printf("Durumu      : il\n");
	printf("Nüfusu      : 0,3\n");
	printf("Ýlçe Sayýsý : 8\n");
	printf("Telefon Kodu: 380\n");
	citytr();
}
int cityfinden()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=12030;
	int a;
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("\n\nCity Finder\n");
	printf("99=Main Mrnu\n");
	printf("Write: ");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("Adana\n");
		cityfinden();
			break;
		case 2:
			printf("Adýyaman\n");
		cityfinden();
			break;
		case 3:
			printf("Afyonkarahisar\n");
		cityfinden();
			break;
		case 4:
			printf("Aðrý\n");
		cityfinden();
			break;
		case 5:
			printf("Amasya\n");
		cityfinden();
			break;
		case 6:
			printf("Ankara\n");
		cityfinden();
			break;
		case 7:
			printf("Antalya\n");
		cityfinden();
			break;	
		case 8:
			printf("Artvin\n");
		cityfinden();
			break;	
		case 9:
			printf("Aydýn\n");
		cityfinden();
			break;	
		case 10:
			printf("Balýkesir\n");
		cityfinden();
			break;
		case 11:
			printf("Bilecik\n");
		cityfinden();
			break;
		case 12:
			printf("Bingöl\n");
		cityfinden();
			break;
		case 13:
			printf("Bitlis\n");
		cityfinden();
			break;
		case 14:
			printf("Bolu\n");
		cityfinden();
			break;
		case 15:
			printf("Burdur\n");
		cityfinden();
			break;
		case 16:
			printf("Bursa\n");
		cityfinden();
			break;
		case 17:
			printf("Çanakkale\n");
		cityfinden();
			break;
		case 18:
			printf("Çankýrý\n");
		cityfinden();
			break;
		case 19:
			printf("Çorum\n");
		cityfinden();
			break;
		case 20:
			printf("Denizli\n");
		cityfinden();
			break;
		case 21:
			printf("Diyarbakýr\n");
		cityfinden();
			break;
		case 22:
			printf("Edirne\n");
		cityfinden();
			break;
		case 23:
			printf("Elazýð\n");
		cityfinden();
			break;
		case 24:
			printf("Erzincan\n");
		cityfinden();
			break;
		case 25:
			printf("Erzurum\n");
		cityfinden();
			break;
		case 26:
			printf("Eskiþehir\n");
		cityfinden();
			break;
		case 27:
			printf("Gaziantep\n");
		cityfinden();
			break;
		case 28:
			printf("Giresun\n");
		cityfinden();
			break;
		case 29:
			printf("Gümüþhane\n");
		cityfinden();
			break;
		case 30:
			printf("Hakkari\n");
		cityfinden();
			break;
		case 31:
			printf("Hatay\n");
		cityfinden();
			break;
		case 32:
			printf("Isparta\n");
		cityfinden();
			break;
		case 33:
			printf("Mersin(Ýçel)\n");
		cityfinden();
			break;
		case 34:
			printf("Ýstanbul\n");
		cityfinden();
			break;
		case 35:
			printf("Ýzmir\n");
		cityfinden();
			break;
		case 36:
			printf("Kars\n");
		cityfinden();
			break;
		case 37:
			printf("Kastamonu\n");
		cityfinden();
			break;
		case 38:
			printf("Kayseri\n");
		cityfinden();
			break;
		case 39:
			printf("Kýrklareli\n");
		cityfinden();
			break;
		case 40:
			printf("Kýrþehir\n");
		cityfinden();
			break;
		case 41:
			printf("Kocaeli(izmit)\n");
		cityfinden();
			break;
		case 42:
			printf("Konya\n");
		cityfinden();
			break;
		case 43:
			printf("Kütahya\n");
		cityfinden();
			break;
		case 44:
			printf("Malatya\n");
		cityfinden();
			break;
		case 45:
			printf("Manisa\n");
		cityfinden();
			break;
		case 46:
			printf("Kahramanmaraþ\n");
		cityfinden();
			break;
		case 47:
			printf("Mardin\n");
		cityfinden();
			break;
		case 48:
			printf("Muðla\n");
		cityfinden();
			break;	
		case 49:
			printf("Muþ\n");
		cityfinden();
			break;	
		case 50:
			printf("Nevþehir\n");
		cityfinden();
			break;	
		case 51:
			printf("Niðde\n");
		cityfinden();
			break;
		case 52:
			printf("Ordu\n");
		cityfinden();
			break;
		case 53:
			printf("Rize\n");
		cityfinden();
			break;
		case 54:
			printf("Sakarya\n");
		cityfinden();
			break;
		case 55:
			printf("Samsun\n");
		cityfinden();
			break;
		case 56:
			printf("Siirt\n");
		cityfinden();
			break;
		case 57:
			printf("Sinop\n");
		cityfinden();
			break;
		case 58:
			printf("Sivas\n");
		cityfinden();
			break;
		case 59:
			printf("Tekirdað\n");
		cityfinden();
			break;
		case 60:
			printf("Tokat\n");
		cityfinden();
			break;
		case 61:
			printf("Trabzon\n");
		cityfinden();
			break;
		case 62:
			printf("Tunceli\n");
		cityfinden();
			break;
		case 63:
			printf("Þanlýurfa\n");
		cityfinden();
			break;
		case 64:
			printf("Uþak\n");
		cityfinden();
			break;
		case 65:
			printf("Van\n");
		cityfinden();
			break;
		case 66:
			printf("Yozgat\n");
		cityfinden();
			break;
		case 67:
			printf("Zonguldak\n");
		cityfinden();
			break;
		case 68:
			printf("Aksaray\n");
		cityfinden();
			break;
		case 69:
			printf("Bayburt\n");
		cityfinden();
			break;
		case 70:
			printf("Karaman\n");
		cityfinden();
			break;
		case 71:
			printf("Kýrýkkale\n");
		cityfinden();
			break;
		case 72:
			printf("Batman\n");
		cityfinden();
			break;
		case 73:
			printf("Þýrnak\n");
		cityfinden();
			break;
		case 74:
			printf("Bartýn\n");
		cityfinden();
			break;
		case 75:
			printf("Ardahan\n");
		cityfinden();
			break;
		case 76:
			printf("Iðdýr\n");
		cityfinden();
			break;
		case 77:
			printf("Yalova\n");
		cityfinden();
			break;
		case 78:
			printf("Karabük\n");
		cityfinden();
			break;
		case 79:
			printf("Kilis\n");
		cityfinden();
			break;
		case 80:
			printf("Osmaniye\n");
		cityfinden();
			break;
		case 81:
			printf("Düzce\n");
		cityfinden();
		break;	
		case 99:
			mainimsi();
			break;
		default:
			printf("City not found, try again.\n\a");
			scanf("");
			cityfinden();
			break;
		
	}
	scanf("");
}
//Vergi Hesaplama
int vergihometr0()
{
	location=1151;
	silge(0);
	saat();
	if(vererisim==0)
	{
		printf("Bu uygulama devre dýþý býrakýlmýþ, etkinleþtirip tekrar deneyin.\n");
		hata();
		mainimsi();
	}
	else if(vererisim==1)
	vergihometr();
}
int vergihomeen0()
{
	location=1251;
	silge(0);
	saat();
	if(vererisim==0)
	{
		printf("This app is disabled, enable it and try again.\n");
		mainimsi();
	}
	else if(vererisim==1)
	vergihomeen();
}
int vergihomede0()
{
	location=1351;
	silge(0);
	saat();
	if(vererisim==0)
	{
		printf("Diese App ist deaktiviert, aktivieren Sie sie und versuchen Sie es erneut.\n");
		mainimsi();
	}
	else if(vererisim==1)
	vergihome0de();
}
int vergihome0de()
{
	location=13510;
	if(lang==3)
	{
		if(varylang==1)
		vergihometr();
		else if(varylang==2)
		vergihomeen();
	}
}
int vergihometr()
{
	location=11510;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Vergi Hesaplama Uygulamasý\n");
	printf("Hesaplamak istediðiniz türü seçin.\n");
	printf("1=Mobil\n");
	printf("2=Konsol\n");
	printf("3=Döviz Kurlarý\n");
	printf("4=Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				doviztr();
				break;
			case 2:
				konsoltr();
				break;
			case 3:
				currencytr();
				break;
			case 4:
				vergiabotr();
				break;
			case 7:
				fazlatr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				vergihometr();
				break;
		}	
	}
	else
	{
		hata();
		vergihometr();
	}
}
int doviztr()
{
	location=11511;
	float a;
	int b;
	float c;
	float d;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Döviz Kurunu giriniz:");
	scanf("%f",&a);
	printf("Cihazýnýzýn Döviz Kuru türünden fiyatýný yazýnýz:");
	scanf("%d",&b);
	c=(b*a);
	d=(c*103.6/100)+c;
	printf("Girdiðiniz döviz kuru                    : %.2fTL\n",a);
	printf("Cihazýnýzýn yurt dýþý fiyatý             : %d  \n",b);
	printf("Cihazýnýzýn Türkiye Fiyatý               : %.2fTL\n",c);
	printf("Kültür Bakanlýðý Payý (1)                : %.2fTL\n",c/100);
	printf("TRT Payý(12)                             : %.2fTL\n",c/8.3);
	printf("ÖTV Tutarý(50)                           : %.2fTL\n",c/2);
	printf("KDV Tutarý(20)                           : %.2fTL\n",c/5),
	printf("Cihazýnýzýn vergili yaklaþýk fiyatý      : %.2fTL\n",d);
	printf("Asgari ücret ile çalýþmanýz gereken ay   : %.2f Ay\n",d/22104);
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				vergihometr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				doviztr();
				break;
		}
	}
	else
	{
		hata();
		doviztr();
	}
}
int konsoltr()
{
	location=11512;
	float a;
	int b;
	int c;
	int d;
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("Döviz Kurunu giriniz:");
	scanf("%f",&a);
	printf("Cihazýnýzýn Döviz Kuru Cinsinden Fiyatýný Yazýnýz:");
	scanf("%d",&b);
	c=(b*a);
	d=(c*72.8/100)+c;
	printf("Girdiðiniz döviz kuru         : %.2fTL\n",a);
	printf("Konsolun yurt dýþý fiyatý     : %d  \n",b);
	printf("Konsolun Türkiye Fiyatý       : %dTL\n",c);
	printf("Konsolun  vergili fiyatý      : %dTL\n",d);
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				vergihometr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				konsoltr();
				break;
		}
	}
	else
	{
		hata();
		konsoltr();
	}
}
int currencytr()
{
	silge(1);
	saat();
	nofbar();
	devshow();
	if(karcon==0)
	{
		printf("Dýþ Alan Ýletiþimi Kapalý, Döviz Kuruna eriþilemiyor.\n");
		printf("Eriþmek için Dýþ Alan Ýletiþimi'ni açýn.\n");
		vergihometr();
	}
	else if(karcon==1)
	{
		printf("Döviz Kurlarý\n");
		printf("1=Foreks\n");
		printf("Serbest Piyasa\n");
		printf("2=Ziraat Bankasý\n");
		printf("3=Ýþ Bankasý\n");
		navbar();
		int fflush(FILE *stream);
		fflush(stdin);
		char giris=getch();
		if(isdigit(giris)==1)
		{
			int a=giris-'0';
			switch(a)
			{
				case 1:
					if(varybrsr==1)
					system("start chrome https://www.foreks.com/doviz/");
					else if(varybrsr==2)
					system("start msedge https://www.foreks.com/doviz/");
					printf("Yölendirildi.\n");
					currencytr();
					break;	
				case 2:
					if(varybrsr==1)
					system("start chrome https://www.ziraatbank.com.tr/tr");
					else if(varybrsr==2)
					system("start msedge https://www.ziraatbank.com.tr/tr");
					printf("Yölendirildi.\n");
					currencytr();
					break;
				case 3:
					if(varybrsr==1)
					system("start chrome https://www.isbank.com.tr/doviz-kurlari");
					else if(varybrsr==2)
					system("start msedge https://www.isbank.com.tr/doviz-kurlari");
					printf("Yölendirildi.\n");
					currencytr();
					break;
				case 7:
					vergihometr();
					break;
				case 8:
					quicktr();
					break;
				case 9:
					mainimsi();
					break;	
				default:
					hata();
					currencytr();
					break;	
			}
		}
		else
		{
			hata();
			currencytr();
		}
	}
}
int vergiabotr()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("KarOS Yerel Vergi Hesaplama Uygulamasý\n");
	printf("Ülke : Türkiye\n");
	printf("Sürüm: 4.2\n");
	printf("KarSoft, 2025\n");
	printf("1=Güncellemeleri Denetle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				updatetr();
				break;	
			case 7:
				vergihometr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				vergiabotr();
				break;
		}
	}
	else
	{
		hata();
		vergiabotr();
	}
	
}
int vergihomeen()
{
	location=12510;
	silge(1);
	saat();
	nofbar();
	devshow();
	printf("Tax Calculator App\n");
	printf("Select the type you want to calculate.\n");
	printf("1=Mobile\n");
	printf("2=Console\n");
	printf("3=About\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				dovizen();
				break;
			case 2:
				konsolen();
				break;
			case 3:
				vergiaboen();
				break;
			case 7:
				fazlaen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				vergihomeen();
				break;
		}	
	}
	else
	{
		hata();
		vergihomeen();
	}
}
int dovizen()
{
	location=12511;
	float a;
	int b;
	int c;
	int d;
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("\nTax Calculator\n");
	printf("Enter the Dollar Rate:");
	scanf("%f",&a);
	printf("Write the Price of Your Phone in Dollars:");
	scanf("%d",&b);
	c=(b*a);
	d=(c*96.47/100)+c;
	printf("Entered Dollar Rate     : %.2fTL",a);
	printf("Taxed price of the phone: %dTL",d);
	scanf("");
	vergihomeen();
}
int konsolen()
{
	location=12512;
	float a;
	int b;
	int c;
	int d;
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("Enter the Dollar Rate:");
	scanf("%f",&a);
	printf("Write the Price of Your Phone in Dollars:");
	scanf("%d",&b);
	c=(b*a);
	d=(c*69.92/100)+c;
	printf("Entered Dollar Rate           : %.2fTL\n",a);
	printf("Device's abroad price         : %d  \n",b);
	printf("Device's Turkiye Price        : %dTL\n",c);
	printf("Taxed price of the device     : %dTL\n",d);
	scanf("");
	vergihomeen();
}
int vergiaboen()
{
	silge(0);
	saat();
	nofbar();
	devshow();
	printf("KarOS Local Tax Calculation App\n");
	printf("Country : Türkiye\n");
	printf("Version: 4.2\n");
	printf("KarSoft, 2025\n");
	printf("1=Check for Updates\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				updateen();
				break;	
			case 7:
				vergihomeen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				vergiaboen();
				break;
		}
	}
	else
	{
		hata();
		vergiaboen();
	}
	
}
//karstore
//KarStore Services
//Kaydetme Servisi
int storekaydet()
{
	strlog=fopen("karstorelog.txt","w+");
	crtstrlog();
	fprintf(strlog,"%d%d%d%d%d",mgzlog[0],mgzlog[1],mgzlog[2],mgzlog[3],mgzlog[4]);
	fclose(strlog);
}
int crtstrlog()
{
	int bos1=3;
	int bos2=3;
	mgzlog[0]=asims;
	mgzlog[1]=ssims;
	mgzlog[2]=trgts;
	mgzlog[3]=bos1;
	mgzlog[4]=bos2;
}
int okustr()
{
	int bos1;
	int bos2;
	strlog=fopen("karstorelog.txt","r");
	fscanf(strlog,"%d",&mgzlog);	
	int i; 
    int basamak; 
    for (i = 0; i < 5; i++) 
    {
        basamak = mgzlog[0] % 10; 
        mgzlog[0] = mgzlog[0] / 10; 
		if(i==0)
		bos2=basamak;
		else if(i==1)
		bos1=basamak;
		else if(i==2)
		trgts=basamak;
		else if(i==3)
		ssims=basamak;
		else if(i==4)
		asims=basamak;
    }
    setsave1();
    setsave2();
    setsave3();
}
int setsave1()
{
	int a,b,c;
	if(asims==1)
	{
		a=1;
		b=1;
		c=1;
	}
	else if(asims==2)
	{
		a=1;
		b=1;
		c=0;
	}
	else if(asims==3)
	{
		a=1;
		b=0;
		c=1;
	}
	else if(asims==4)
	{
		a=1;
		b=0;
		c=0;
	}
	else if(asims==5)
	{
		a=0;
		b=1;
		c=1;
	}
	else if(asims==6)
	{
		a=0;
		b=1;
		c=0;
	}
	else if(asims==7)
	{
		a=0;
		b=0;
		c=1;
	}
	else if(asims==8)
	{
		a=0;
		b=0;
		c=0;
	}
	asima1=1;
	asima2=b;
	asima3=c;
}
int setsave2()
{
	int a,b,c;
	if(ssims==1)
	{
		a=1;
		b=1;
		c=1;
	}
	else if(ssims==2)
	{
		a=1;
		b=1;
		c=0;
	}
	else if(ssims==3)
	{
		a=1;
		b=0;
		c=1;
	}
	else if(ssims==4)
	{
		a=1;
		b=0;
		c=0;
	}
	else if(ssims==5)
	{
		a=0;
		b=1;
		c=1;
	}
	else if(ssims==6)
	{
		a=0;
		b=1;
		c=0;
	}
	else if(ssims==7)
	{
		a=0;
		b=0;
		c=1;
	}
	else if(ssims==8)
	{
		a=0;
		b=0;
		c=0;
	}
	ssima1=a;
	ssima2=b;
	tkma1=c;
}
int setsave3()
{
	int a,b,c;
	if(trgts==1)
	{
		a=1;
		b=1;
		c=1;
	}
	else if(trgts==2)
	{
		a=1;
		b=1;
		c=0;
	}
	else if(trgts==3)
	{
		a=1;
		b=0;
		c=1;
	}
	else if(trgts==4)
	{
		a=1;
		b=0;
		c=0;
	}
	else if(trgts==5)
	{
		a=0;
		b=1;
		c=1;
	}
	else if(trgts==6)
	{
		a=0;
		b=1;
		c=0;
	}
	else if(trgts==7)
	{
		a=0;
		b=0;
		c=1;
	}
	else if(trgts==8)
	{
		a=0;
		b=0;
		c=0;
	}
	trgta1=a;
	trgta2=b;
	saya1=c;
}
//Diðer
int backzone2()
{
	switch(location)
	{
		case 21:
			karstoretr0();
			break;
		case 22:
			karstoreen0();
			break;
		case 211:
			karstoretr();
			break;
		case 221:
			karstoreen();
			break;
		case 23:
			karstore0de();
			break;
		case 21111:
			appstr();
			break;
		case 21112:
			appstr2();
			break;
		case 22111:
			appsen();
			break;
		case 22112:
			appsen2();
			break;
		case 21123:
			gamestr();
			break;
		case 22123:
			gamesen();
			break;
		case 21121:
			kasaratr();
			break;
		case 22121:
			kasaraen();
			break;
		case 21141:
			kargamestr();
			break;
		case 22141:
			kargamesen();
			break;
		case 21181:
			storesettr();
			break;
		case 22181:
			storeseten();	
			break;
	}
}
int karstoretr0()
{
	location=21;
	if(karcon==0)
	{
		printf("Cihazýnýzýn Dýþ Alan Ýletiþimi kapalý.\n");
		printf("Onu açýp tekrar deneyin.\n");
		mainimsi();
	}
	if(kaserisim==0 && kascon==0)
	{
		printf("KarStore'a baðlanýlamýyor.\n");
		printf("Hata Kodu: ERRKAS00\n");
		mainimsi();
	}
	else if(kaserisim==1 && kascon==0)
	{
		printf("KarStore'a baðlanýlamýyor.\n");
		printf("Hata Kodu: ERRKAS10\n");
		mainimsi();
	}
	else if(kaserisim==0 && kascon==1)
	{
		printf("KarStore Services çalýþmýyor.\n");
		mainimsi();
	}
	else if(kaserisim==1 && kascon==1)
	{
		karstoretr();
	}
}
int karstoreen0()
{
	location=22;
	if(karcon==0)
	{
		printf("Your device's Outdoor Communication is turned off.\n");
		printf("Open it and try again.\n");
		mainimsi();
	}
	if(kaserisim==0 && kascon==0)
	{
		printf("Couldn't connect KarStore.\n");
		printf("Error Code: ERRKAS00\n");		
		mainimsi();
	}
	else if(kaserisim==1 && kascon==0)
	{
		printf("Couldn't connect KarStore.\n");
		printf("Error Code: ERRKAS10\n");
		mainimsi();
	}
	else if(kaserisim==0 && kascon==1)
	{
		printf("KarStore Services doesn't work.\n");
		mainimsi();
	}
	else if(kaserisim==1 && kascon==1)
	{
		karstoreen();
	}
}
int karstore0de()
{	
	if(lang==3)
	{
		if(varylang==1)
		karstoretr0();
		else if(varylang==2)
		karstoreen0();
	}
	
}
int basarser()
{
	basar=ssima1+ssima2+asima1+asima2+tkma1+asima3+trgta1+trgta2;
}
int kuicktr()
{
	silge(1);
	saat();
	nofbar();
	oku();
    printf("KarStore Hýzlý Menüsü\n");
    printf("1=Uygulama veya Oyun Ara\n");
    printf("2=Uygulamalar\n");
    printf("3=Oyunlar\n");
    printf("4=Hesabým ve Ayarlar\n");
    if(karos<2)
    printf("5=KarStore for Windows Ayarlarý ve Çýkýþ\n");
    if(karos>29)
    navbar();
    int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaratr();
				break;
			case 2:
				appstr();
				break;
			case 3:
				gamestr();
				break;
			case 4:
				storesettr();
				break;
			case 5:
				if(karos<2)
				main();
				kuicktr();
				break;
			case 7:
				backzone2();
				break;
			case 8:
				if(karos>29)
				quicktr();
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kuicktr();
				break;
		}
		
	}
	else
	{
		hata();
		kuicktr();
	}
}
int kuicken()
{
	silge(1);
	saat();
	nofbar();
	oku();
    printf("KarStore Quick Menu\n");
    printf("1=Search Apps or Games\n");
    printf("2=Apps\n");
    printf("3=Games\n");
    printf("4=My Account and Settings\n");
    if(karos<2)
    printf("5=KarStore for Windows Settings and Exit\n");
    if(karos>29)
    navbar();
    int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			kasaraen();
			break;
		case 2:
			appsen();
			break;
		case 3:
			gamesen();
			break;
		case 4:
			storeseten();
			break;
		case 5:
			if(karos<2)
			main();
			kuicken();
			break;
		case 7:
			backzone2();
			break;
		case 8:
			if(karos>29)
			quicken();
			kuicken();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			kuicken();
			break;
	}
}
int homestore()
{
	if(figure1==1)
	{
		printf("6=KarDraw\n");
		home=1;
	}
	else if(akdev1==1)
	{
		printf("6=AK Devlet\n");
		home=1;
	}
	else if(akyak1==1)
	{
		printf("6=KarYakýt\n");
		home=1;
	}
	else if(asim1==1)
	{
		printf("6=APFL Simulator\n");
		home=1;
	}
	else if(ssim1==1)
	{
		printf("6=Sanayi Simulator\n");
		home=1;
	}
	else if(t20231==1)
	{
		printf("6=Target 2023\n");
		home=1;
	}
	else if(tkm10==1)
	{
		printf("6=Taþ Kaðýt Makas\n");
		home=1;
	}
	else if(sayi10==1)
	{
		printf("6=Sayý Tahmin\n");
		home=1;
	}
	else if(barb10==1)
	{
		printf("6=Barbut\n");
		home=1;
	}
	else if(yil10==1)
	{
		printf("6=Snake Game\n");
		home=1;
	}
	else if(gtt1==1)
	{
		printf("6=ÐTT\n");
		home=1;
	}
	else if(tip1==1)
	{
		printf("6=Tips\n");
		home=1;
	}
	else if(yerm1==1)
	{
		printf("6=Yer Ýmleri\n");
		home=1;
	}
	else if(vki11==1)
	{
		printf("6=VKÝ\n");
		home=1;
	}
	if(figure1==2)
	{
		printf("7=KarDraw\n");
	}
	else if(akdev1==2)
	{
		printf("7=AK Devlet\n");
	}
	else if(akyak1==2)
	{
		printf("7=KarYakýt\n");
	}
	else if(asim1==2)
	{
		printf("7=APFL Simulator\n");
	}
	else if(ssim1==2)
	{
		printf("7=Sanayi Simulator\n");
	}
	else if(t20231==2)
	{
		printf("7=Target 2023\n");
	}
	else if(tkm10==2)
	{
		printf("7=Taþ Kaðýt Makas\n");
	}
	else if(sayi10==2)
	{
		printf("7=Sayý Tahmin\n");
	}
	else if(barb10==2)
	{
		printf("7=Barbut\n");
	}
	else if(yil10==2)
	{
		printf("7=Snake Game\n");
	}
	else if(gtt1==2)
	{
		printf("7=ÐTT\n");
	}
	else if(tip1==2)
	{
		printf("7=Tips\n");
	}
	else if(yerm1==2)
	{
		printf("7=Yer Ýmleri\n");
	}
	else if(vki11==2)
	{
		printf("7=VKÝ\n");
	}
}
int asimsave(int a,int b, int c)
{
	if(a==1)
	{
		if(b==1)
		{
			if(c==1)
			asims=1;
			else if(c==0)
			asims=2;
		}
		else if(b==0)
		{
			if(c==1)
			asims=3;
			else if(c==0)
			asims=4;
		}
	}
	if(a==0)
	{
		if(b==1)
		{
			if(c==1)
			asims=5;
			else if(c==0)
			asims=6;
		}
		else if(b==0)
		{
			if(c==1)
			asims=7;
			else if(c==0)
			asims=8;
		}
	}
}
int ssimsave(int a,int b,int c)
{
	if(a==1)
	{
		if(b==1)
		{
			if(c==1)
			ssims=1;
			else if(c==0)
			ssims=2;
		}
		else if(b==0)
		{
			if(c==1)
			ssims=3;
			else if(c==0)
			ssims=4;
		}
	}
	if(a==0)
	{
		if(b==1)
		{
			if(c==1)
			ssims=5;
			else if(c==0)
			ssims=6;
		}
		else if(b==0)
		{
			if(c==1)
			ssims=7;
			else if(c==0)
			ssims=8;
		}
	}
}
int trgtsave(int a,int b,int c)
{
	if(a==1)
	{
		if(b==1)
		{
			if(c==1)
			trgts=1;
			else if(c==0)
			trgts=2;
		}
		else if(b==0)
		{
			if(c==1)
			trgts=3;
			else if(c==0)
			trgts=4;
		}
	}
	if(a==0)
	{
		if(b==1)
		{
			if(c==1)
			trgts=5;
			else if(c==0)
			trgts=6;
		}
		else if(b==0)
		{
			if(c==1)
			trgts=7;
			else if(c==0)
			trgts=8;
		}
	}
}
//KarStore Ekranlarý
int karstoretr()
{
	int fflush(FILE *stream);
	fflush(stdin);
	location=211;
	oku();
	basarser();
	silge(1);
    printf("--------------------------------------------------------------\n");
    saat();
    nofbar();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Arama Yapmak için 1'e basýn...                   |\n");
	printf("  |_________________________________________________|\n");
	printf("  ___   ___       ________       __________          \n");
	printf(" |   | |   |     |        |     |    __    |         \n");
	printf(" |___| |___|     |  ____  |     |   |  |   |         \n");
	printf("  ___   ___      |_|    |_|     |   |__|   |         \n");
	printf(" |   | |   |                    |  |    |  |         \n");
	printf(" |___| |___|                    |__|____|__|         \n");
	printf("2=Uygulamalar    3=Oyunlar     4=Hesabým ve Ayarlar  \n");
	printf("                                                     \n");
	printf("-YENÝ-KarStore artýk baþarýmlarýnýzý kaydediyor!     \n");
	printf("-YENÝ-Artýk uygulamalarýn yapýmcýlarýný              \n");
	printf("görebilirsiniz!\n");
	navbar();
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 2:
				appstr();
				break;
			case 3:
				gamestr();
				break;
			case 4:
				storesettr();
				break;
			case 1:
				kasaratr();
				break;
			case 8:
				kuicktr();
				break;
			case 7:
				mainimsi();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				karstoretr();
				break;	
		}
	}
	else
	{
		hata();
		karstoretr();
	}
}
int karstoreen()
{
	location=221;
	basarser();
	silge(1);
	saat();
	nofbar();
	oku();
	printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Press 1 for Search...                            |\n");
	printf("  |_________________________________________________|\n");
	printf("  ___   ___       ________       __________          \n");
	printf(" |   | |   |     |        |     |    __    |         \n");
	printf(" |___| |___|     |  ____  |     |   |  |   |         \n");
	printf("  ___   ___      |_|    |_|     |   |__|   |         \n");
	printf(" |   | |   |                    |  |    |  |         \n");
	printf(" |___| |___|                    |__|____|__|         \n");
	printf("   2=Apps         3=Games   4=My Account and Settings\n");
	printf("                                                     \n");
	printf("-NEW-KarStore saves your files!                      \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 2:
				appsen();
				break;
			case 3:
				gamesen();
				break;
			case 4:
				storeseten();
				break;
			case 1:
				kasaraen();
				break;
			case 7:
				mainimsi();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				karstoreen();
				break;	
		}
	}
	else
	{
		hata();
		karstoreen();
	}
	
}
int appstr()
{
	location=21111;
	basarser();
	silge(1);
    printf("--------------------------------------------------------------\n");
    saat();
    nofbar();
    oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Arama Yapmak için 1'e basýn...                   |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("                       Uygulamalar                   \n");
	printf("-Öne Çýkanlar--------------------                    \n");
	printf("KarOS'u ve KarStore'u keþfedin:                      \n");
	printf("2=Ýpuçlarý                                           \n");
	printf("Þekiller çizip eðlenin:                              \n");
	printf("3=KarDraw                                            \n");
	printf("Kilonuza dikkat edin:                                \n");
	printf("4=VKÝ Hesaplama                                      \n");
	printf("                                                     \n");
	printf("5=                1. Sayfa    2. Sayfa---->          \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaratr();
				break;
			case 2:
				tiptr1();
				break;
			case 3:
				figuretr1();
				break;
			case 4:
				vki1();
				break;
			case 5:
				appstr2();
				break;
			case 8:
				kuicktr();
				break;
			case 7:
				karstoretr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				appstr();
				break;
		}
		
	}
	else
	{
		hata();
		appstr();
	}
	
}
int appstr2()
{
	location=21112;
	basarser();
	silge(1);
    printf("--------------------------------------------------------------\n");
    saat();
    nofbar();
    oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Arama Yapmak için 1'e basýn...                   |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("                       Uygulamalar                   \n");
	printf(" Öne Çýkanlar                                        \n");
	printf("Akarykaýt fiyatlarýný öðrenin:                       \n");
	printf("2=KarYakýt                                           \n");
	printf("Favori internet sayfalarýna göz atýn:                \n");
	printf("3=Yer Ýmleri                                         \n");
	printf("                                                     \n");
	printf("5=        <-----1. Sayfa    2. Sayfa                 \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaratr();
				break;
			case 2:
				akyakit1();
				break;
			case 3:
				yerm10();
				mainimsi();
				break;
			case 5:
				appstr();
				break;
			case 8:
				kuicktr();
				break;
			case 7:
				karstoretr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				appstr2();
				break;
		}
	}
	else
	{
		hata();
		appstr2();
	}
}
int appsen()
{
	location=22111;
	basarser();
    printf("--------------------------------------------------------------\n");
    silge(1);
	saat();
	nofbar();
	oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Press 1 for search...                            |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("                       Applications                  \n");
	printf("-The Featured---------------------                   \n");
	printf("Use KarOS more efficiently:                          \n");
	printf("2=Tips                                               \n");
	printf("Have fun drawing shapes:                             \n");
	printf("3=KarDraw                                            \n");
	printf("Surf on the Internet:                                \n");
	printf("4=Bookmarks                                          \n");
	printf("                                                     \n");
	printf("5=                1. Page    2. Page---->            \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaraen();
				break;
			case 2:
				tiptr1();
				//		Developer Tips
				//		1-Most things are categorized in KarOS, do CTRL+F, type where you go to the section.Thats all!
				//      2-The numbers next to the categories are the location of the app created by the makers..
				//      3=KarOS 3 Development Start=09.08.2022-09.2022
				break;
			case 3:
				figureen1();
				break;
			case 4:
				yerm10();
				mainimsi();
				break;
			case 5:
				appsen2();
				break;
			case 8:
				kuicken();
				break;
			case 7:
				karstoreen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				appsen();
				break;
		}
		
	}
	else
	{
		hata();
		appsen();
	}
	
}
int appsen2()
{
	location=22112;
	basarser();
    printf("--------------------------------------------------------------\n");
    silge(1);
	saat();
	nofbar();
	oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Press 1 for search...                            |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("                      Applications                   \n");
	printf(" The Featured                                        \n");
	printf("Find out how much your trip will cost:               \n");
	printf("2=KarYakýt                                           \n");
	printf("Find out if your weight is good for your height:     \n");
	printf("3=Body-Mass Index                                    \n");
	printf("5=        <-----1. Page    2. Page                   \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaraen();
				break;
			case 2:
				akyakiten1();
				break;
			case 3:
				vki1();
				break;
			case 5:
				appsen();
				break;
			case 8:
				kuicken();
				break;
			case 7:
				karstoreen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				appsen2();
				break;
		}
	}
	else
	{
		hata();
		appsen2();
	}
}
int gamestr()
{
	location=21123;
	basarser();
	silge(1);
    printf("--------------------------------------------------------------\n");
    saat();
    nofbar();
    oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Arama Yapmak için 1'e basýn...                   |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("               Oyunlar                               \n");
	printf("Ülkenizi yönetip seçimleri kazanýn:                  \n");
	printf("2=Target 2023                                        \n");
	printf("Rastgele sayýyý tahmin edebilecek misiniz:           \n");
	printf("3=Sayý Tahmin                                        \n");
	printf("Oyun baþarýmlarýný görüntüleyin:                     \n");
	printf("4=KarGames                                           \n");
	printf("Oyunlar bu kadar mý? Tabi ki hayýr, arama kýsmýndan  \n");
	printf("Daha fazla oyun bulabilirsiniz!                      \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaratr();
				break;
			case 2:
				target20231();
				break;
			case 3:
				sayi1();
				break;
			case 4:
				if(karos==20)
				{
					printf("Sisteminiz bu uygulamayý desteklemiyor.\n\a");
					gamestr();
				}
				else
				kargamestr();
				break;
			case 8:
				kuicktr();
				break;
			case 7:
				saniye();
				karstoretr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				gamestr();
				break;
		}
	}
	else
	{
		hata();
		gamestr();
	}
}
int gamesen()
{
	location=22123;
	basarser();
	silge(1);
	saat();
	nofbar();
	oku();
	printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("   _________________________________________________ \n");
	printf("  |Press 1 for Search...                            |\n");
	printf("  |_________________________________________________|\n");
	printf("                                                     \n");
	printf("               Games                                 \n");
	printf("Work in Industry:                                    \n");
	printf("2=Industry Simulator                                 \n");
	printf("Are you guess random number:                         \n");
	printf("3=Guess Number                                       \n");
	printf("Show ahcived ahcivements:                            \n");
	printf("4=KarGames                                           \n");
	printf("Of course, the games are not that much.              \n");
	printf("You can find more in the search section!             \n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				kasaraen();
				break;	
			case 2:
				sanayisim1();
				break;
			case 3:
				sayi1();
				break;
			case 4:
				if(karos==20)
				{
					printf("Your system don't supported.\n\a");
					gamesen();
				}
				else
				kargamesen();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				quicken();
				break;
			case 9:
				mainimsi();
				break;		
			default:
				hata();
				gamesen();
				break;
		}
	}
	else
	{
		hata();
		gamesen();
	}
	
}
int myappstr()
{
	silge(1);
	saat();
	nofbar();
	oku();
	printf("Lisanslý Uygulamalarýnýz----------------------------------\n");
	printf("%d uygulama ve oyunun lisansý mevcut, keyfini çýkarýn.\n",yerm2+tip2+figure2+akdev2+gtt2+akyak2+asim2+ssim2+t20232+tkm2+sayi2+barb2+yil2+eko2+1);
	if(tip2==1)
	printf("-Ýpuçlarý\n");
	if(yerm2==1)
	printf("-Yer Ýmleri\n");
	if (figure2==1)
	printf("-Þekil Çizme\n");
	if (akdev2==1)
	printf("-AK Devlet\n");
	if(gtt2==1)
	printf("-ÐTT\n");
	if(akyak2==1)
	printf("-KarYakýt\n");
	if(asim2==1)
	printf("-APFL Simulator\n");
	if(ssim2==1)
	printf("-Sanayi Simulator\n");
	if(t20232==1)
	printf("-Target 2023\n");
	if(tkm2==1)
	printf("-Taþ Kaðýt Makas\n");
	if(sayi2==1)
	printf("-Sayý Tahmin\n");
	if(barb2==1)
	printf("-Barbut\n");
	if(yil2==1)
	printf("-Yýlan Oyunu\n");
	if(eko2==1)
	printf("-Ekonomi Simulator-Beta\n");
	printf("-KarGames\n");
	storesettr();
}
int myappsen()
{
	silge(1);
	saat();
	nofbar();
	oku();
	printf("Your Licensed Apps----------------------------------\n");
	printf("%d application and game licenses are available.\n",yerm2+tip2+figure2+akdev2+gtt2+akyak2+asim2+ssim2+t20232+tkm2+sayi2+barb2+yil2+eko2+1);
	if(tip2==1)
	printf("-Tips\n");
	if(yerm2==1)
	printf("-Bookmarks\n");
	if (figure2==1)
	printf("-Figure Drawing\n");
	if (akdev2==1)
	printf("-AK Devlet\n");
	if(gtt2==1)
	printf("-ÐTT\n");
	if(akyak2==1)
	printf("-KarYakýt\n");
	if(asim2==1)
	printf("-APFL Simulator\n");
	if(ssim2==1)
	printf("-Sanayi Simulator\n");
	if(t20232==1)
	printf("-Target 2023\n");
	if(tkm2==1)
	printf("-Taþ Kaðýt Makas\n");
	if(sayi2==1)
	printf("-Sayý Tahmin\n");
	if(barb2==1)
	printf("-Barbut\n");
	if(yil2==1)
	printf("-Snake Game\n");
	if(eko2==1)
	printf("-Ekonomi Simulator-BETA\n");
	printf("-KarGames\n");
	storeseten();
}
int kasaratr()
{
	location=21121;
	int fflush(FILE *stream);
	fflush(stdin);
	silge(1);
    printf("--------------------------------------------------------------\n");
    saat();
    nofbar();
    oku();
    printf("      __   _    _  ___   _     _     _               \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
	printf("Bir uygulama veya oyun bulun.                        \n");
	printf("KarOS içindeki uygulamalarý mý arýyorsunuz?          \n");
	printf("Yüklü gelen uygulamalar burada gösterilmez.          \n");
	printf("Pro uygulamalarýný görmek için ayarlara gidin.       \n");
	printf("   _________________________________________________ \n");
	printf("  |Aramak istediðinizin ilk harfini girin...        |\n");
	char a=getch();
	if(a=='a')
	{
		printf("1=KarYakýt\n");
		printf("2=Apfl SÝmulator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				apflsim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='A')
	{
		printf("1=KarYakýt\n");
		printf("2=Apfl SÝmulator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				apflsim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='b')
	{
		printf("1=Barbut\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				barbut1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='B')
	{
		printf("1=Barbut\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				barbut1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='i')
	{
		printf("1=Ýpuçlarý\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				tiptr1();
				karstoretr();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='Ý')
	{
		printf("1=Ýpuçlarý\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				tiptr1();
				karstoretr();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='ý')
	{
		printf("1=Ýpuçlarý\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				tiptr1();
				karstoretr();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='I')
	{
		printf("1=Ýpuçlarý\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				tiptr1();
				karstoretr();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='K')
	{
		printf("1=KarYakýt\n");
		printf("2=KarGames\n");
		printf("3=KarDraw\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				kargamestr();
				break;
			case 3:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='k')
	{
		printf("1=KarYakýt\n");
		printf("2=KarGames\n");
		printf("3=KarDraw\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				kargamestr();
				break;
			case 3:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='s')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=KarDraw(Þekil Çizme)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='S')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=KarDraw(Þekil Çizme)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='þ')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=KarDraw(Þekil Çizme)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='Þ')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=KarDraw(Þekil Çizme)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 2:
				figuretr1();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='t')
	{
		printf("1=Target 2023\n");
		printf("2=Taþ Kaðýt Makas\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				target20231();
				break;
			case 2:
				tkm1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='T')
	{
		printf("1=Target 2023\n");
		printf("2=Taþ Kaðýt Makas\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				target20231();
				break;
			case 2:
				tkm1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='v')
	{
		printf("1=Vki Hesaplama\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				vki1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='V')
	{
		printf("1=Vki Hesaplama\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				vki1();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
		}
	}
	else if(a=='y')
	{
		printf("1=Yýlan Oyunu\n");
		printf("2=Yer Ýmleri\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				yilan1();
				break;
			case 2:
				yerm10();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
				
		}
	}
	else if(a=='Y')
	{
		printf("1=Yýlan Oyunu\n");
		printf("2=Yer Ýmleri\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				yilan1();
				break;
			case 2:
				yerm10();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaratr();
				break;
				
		}
	}
	else
	{
		printf("Eþleþme bulunamadý.\n");
		hata();
		karstoretr();
	}
}
int kasaraen()
{
	location=22121;
	int fflush(FILE *stream);
	fflush(stdin);
    printf("--------------------------------------------------------------\n");
    silge(1);
	saat();
	nofbar();
	oku();
    printf("      __   _    _  ___   _     _     _                        \n");
	printf("|_/  |__| |_)  |_   |   | |   |_)   |_                        \n");
	printf("| |  |  | | |   _|  |   |_|   | |   |_                        \n");
	printf("Find apps and games.                                          \n");
	printf("Are you looking for applications in KarOS?                    \n");
	printf("Installed applications are not shown here.                    \n");
	printf("Go to settings to see pro apps.                               \n");
	printf("   __________________________________________________________ \n");
	printf("  |Type the first letter of what you want to search for...   |\n");
	char a=getch();
	if(a=='a')
	{
		printf("1=KarYakýt\n");
		printf("2=Apfl SÝmulator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				apflsim1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='A')
	{
		printf("1=KarYakýt\n");
		printf("2=Apfl SÝmulator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				apflsim1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='b')
	{
		printf("1=Barbut\n");
		printf("2=Bookmarks\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				barbut1();
				break;
			case 2:
				yerm10();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='B')
	{
		printf("1=Barbut\n");
		printf("2=Bookmarks\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				barbut1();
				break;
			case 2:
				yerm10();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='f')
	{
		printf("1=KarDraw(Figure Drawing)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				figureen1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='F')
	{
		printf("1=KarDraw(Figure Drawing)\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				figureen1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='k')
	{
		printf("1=KarYakýt\n");
		printf("2=KarGames\n");
		printf("3=KarDraw\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				kargamesen();
				break;
			case 3:
				figureen1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='K')
	{
		printf("1=KarYakýt\n");
		printf("2=KarGames\n");
		printf("3=KarDraw\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				akyakit1();
				break;
			case 2:
				kargamesen();
				break;
			case 3:
				figureen1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='s')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=Snake\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 2:
				yilan1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='S')
	{
		printf("1=Sanayi Simulator\n");
		printf("2=Snake\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				sanayisim1();
				break;
			case 2:
				yilan1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='t')
	{
		printf("1=Target 2023\n");
		printf("2=Taþ Kaðýt Makas\n");
		printf("3=Tips\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				target20231();
				break;
			case 2:
				tkm1();
				break;
			case 3:
				tiptr1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='T')
	{
		printf("1=Target 2023\n");
		printf("2=Taþ Kaðýt Makas\n");
		printf("3=Tips\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				target20231();
				break;
			case 2:
				tkm1();
				break;
			case 3:
				tiptr1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='v')
	{
		printf("1=Vki Calculator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				vki1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else if(a=='V')
	{
		printf("1=Vki Calculator\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				vki1();
				break;
			case 7:
				karstoreen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				kasaraen();
				break;
		}
	}
	else
	{
		hata();
		karstoreen();
	}
}
int kargamestr()
{
	location=21141;
	basarser();
	if(storelicense==0)
	{
		printf("KarStore lisansýnýzda sorun var, lütfen KarSoft Destek'e baþvurun.\n");
		printf("1=Web sayfasýna ilerle\n");
		printf("2=Geri\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				if(karcon==0)
				{
					printf("Dýþ Alan Ýletiþimi kapalý, açýp tekrar deneyin.\n");
					kargamestr();
				}
				else
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/destek");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/destek");
				}
				printf("Yönlendirildi.\n");
				karstoretr();
				break;
			case 2:
				karstoretr();
				break;
			default:
				hata();
				karstoretr();
		}	
	}
	else
	{
		silge(1);
		saat();
		nofbar();
		oku();
		kaydet();
		printf("KarGames\n");
		printf("Oyunlarýnýz hakkýnda bilgiler.\n");
		printf("Baþarýmlarýnýz\n");
		printf("Seviyeniz:\n");
		if(basar<4)
		printf("Çaylak\n");
		else if(basar<7)
		printf("Acemi\n");
		else if(basar<10)
		printf("Usta\n");
		printf("Oyununuzu seçin.\n");
		printf("1=APFL Simulator\n");
		printf("2=Sanayi SÝmulator\n");
		printf("3=Taþ Kaðýt Makas\n");
		printf("4=Target 2023\n");
		printf("5=Sayý Tahmin\n");
		printf("6=Ekonomi Simulator\n");
		navbar();
		int fflush(FILE *stream);
		fflush(stdin);
		char giris=getch();
		if(isdigit(giris)==1)
		{
			int a=giris-'0';
			switch(a)
			{
				case 1:
					printf("APFL Simulator Baþarýmlarý\n");
					printf("%d/3 Tamamlandý\n",asima1+asima2+asima3);
					printf("1=Son APFL Bükücü     Durum: %d\n",asima1);
					printf("2=Nazi Ýkinci         Durum: %d\n",asima2);
					printf("3=Artýk Yogg          Durum: %d\n",asima3);
					asimsave(asima1,asima2,asima3);
					kargamestr();
					break;
				case 2:
					printf("Sanayi Simulator Baþarýmlarý\n");
					printf("%d/2 Tamamlandý\n",ssima1+ssima2);
					printf("1=-Dükkaným!          Durum: %d\n",ssima1);
					printf("2=Nazi ya...          Durum: %d\n",ssima2);
					ssimsave(ssim1,ssim2,tkma1);
					kargamestr();
					break;
				case 3:
					printf("Taþ Kaðýt Makas Baþarýmlarý\n");
					printf("%d/1 Tamamlandý\n",tkma1);
					printf("1=Ýmkansýzý Baþarmak! Durum: %d\n",tkma1);
					ssimsave(ssim1,ssim2,tkma1);
					kargamestr();
					break;
				case 4:
					printf("Target 2023 Baþarýmlarý\n");
					printf("%d/2 Tamamlandý\n",trgta1+trgta2);
					printf("1=Aaaa, Sarp! Bu bizim egg!                    Durum: %d\n",trgta1);
					printf("2=Þahlandým resmen, bu kadar mý fark eder?     Durum: %d\n",trgta2);
					trgtsave(trgta1,trgta2,saya1);
					kargamestr();
					break;
				case 5:
					printf("Sayý Tahmin Baþarýmlarý\n");
					printf("%d/1 Tamamlandý\n",saya1);
					printf("1=Hile var ama!    Durum: %d\n",saya1);
					trgtsave(trgta1,trgta2,saya1);
					kargamestr();
				case 6:
					printf("Ekonomi Simulator Baþarýmlarý\n");
					printf("%d/1 Tamamlandý\n",ekoa1);
					printf("-LED Lamba daha iyidir...                      Durum: %d\n",ekoa1);
					kargamestr();
				case 8:
					kuicktr();
					break;
				case 7:
					karstoretr();
					break;
				case 9:
					mainimsi();
					break;
				default:
					hata();
					kargamestr();
					break;
			}
		}
		else
		{
			hata();
			kargamestr();
		}
	}
}
int kargamesen()
{
	location=22141;
	basarser();
	if(storelicense==0)
	{
		printf("There is a problem with your KarStore license, please contact KarSoft Support.\n");
		printf("1=Go to Web Site\n");
		printf("2=Back\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				if(karcon==0)
				{
					printf("Outdoor Communication is disabled, turn it on and try again.\n");
					kargamesen();
				}
				else
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/destek");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/destek");
				}
				printf("Redirected.\n");
				karstoreen();
				break;
			case 2:
				karstoreen();
				break;
			default:
				hata();
				karstoreen();
		}	
	}
	else
	{
		silge(1);
		saat();
		nofbar();
		oku();
		kaydet();
		printf("KarGames\n");
		printf("Information about your games.\n");
		printf("Your achievements\n");
		printf("Your level:\n");
		if(0<basar || basar<5)
		printf("Noob\n");
		if(4<basar || basar<9)
		printf("Beginner\n");
		if(8<basar)
		printf("Pro\n");
		printf("Select your Game\n");
		printf("1=APFL Simulator\n");
		printf("2=Sanayi SÝmulator\n");
		printf("3=Taþ Kaðýt Makas\n");
		printf("4=Target 2023\n");
		printf("5=Sayý Tahmin\n");
		navbar();
		int fflush(FILE *stream);
		fflush(stdin);
		char giris=getch();
		if(isdigit(giris)==1)
		{
			int a=giris-'0';
			switch(a)
			{
				case 1:
					printf("APFL Simulator achievements\n");
					printf("%d/3 Completed\n",asima1+asima2+asima3);
					printf("1=Son APFL Bükücü     Status: %d\n",asima1);
					printf("2=Nazi Ýkinci         Status: %d\n",asima2);
					printf("3=Artýk Yogg          Status: %d\n",asima3);
					kargamesen();
					break;
				case 2:
					printf("Sanayi Simulator achievements\n");
					printf("%d/2 Completed\n",ssima1+ssima2);
					printf("1=-Dükkaným!          Status: %d\n",ssima1);
					printf("2=Nazi ya...          Status: %d\n",ssima2);
					kargamesen();
					break;
				case 3:
					printf("Taþ Kaðýt Makas achievements\n");
					printf("%d/1 Completed\n",tkma1);
					printf("1=Ýmkansýzý Baþarmak! Status: %d\n",tkma1);
					kargamesen();
					break;
				case 4:
					printf("Target 2023 achievements\n");
					printf("%d/2 Completed\n",trgta1+trgta2);
					printf("1=Aaaa, Sarp! Bu bizim egg!                    Status: %d\n",trgta1);
					printf("2=Þahlandým resmen, bu kadar mý fark eder?     Status: %d\n",trgta2);
					kargamesen();
					break;
				case 5:
					printf("Sayý Tahmin achievements\n");
					printf("%d/1 Completed\n",saya1);
					printf("1=Hile var ama!    Status: %d\n",saya1);
					kargamesen();
				case 6:
					printf("Ekonomi Simulator Achievements\n");
					printf("%d/1 Completed\n",ekoa1);
					printf("-LED Lamba daha iyidir...                      Status: %d\n",ekoa1);
					kargamestr();
				case 8:
					kuicken();
					break;
				case 7:
					karstoreen();
					break;
				case 9:
					mainimsi();
					break;
				default:
					hata();
					kargamesen();
					break;
			}
		}
		else
		{
			hata();
			kargamesen();
		}
	}
}
int storesettr() 
{
	location=21181;
	basarser();
	silge(1);
	saat();
	nofbar();
	oku();
	if(storelicense==0)
	{
		printf("KarStore lisansýnýzda sorun var, lütfen KarSoft Destek'e baþvurun.\n");
		printf("1=Web sayfasýna ilerle\n");
		printf("2=Geri\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				if(karcon==0)
				{
					printf("Dýþ Alan Ýletiþimi kapalý, açýp tekrar deneyin.\n");
					storesettr();
				}
				else
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/destek");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/destek");
				}
				printf("Yönlendirildi.\n");
				karstoretr();
				break;
			case 2:
				karstoretr();
				break;
			default:
				hata();
				karstoretr();
		}	
	}
	else
	{
	    printf("      __   _    _  ___   _     _     _               \n");
		printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
		printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
		printf("Hesabým ve Ayarlar                                   \n");
		printf("1=Eriþim Kýsýtlama\n");
		printf("2=KarOS Pro Uygulamalarý\n");
		printf("3=KarOS Edisyonlarý\n");
		printf("4=Uygulamalarým\n");
		printf("5=Kaydetme Durumu\n");
		printf("6=Hakkýnda\n");
		navbar();
		int fflush(FILE *stream);
		fflush(stdin);
		char giris=getch();
		if(isdigit(giris)==1)
		{
			int a=giris-'0';
			switch(a)
			{
				case 6:
					printf("KarStore Hakkýnda\n");
					printf("Sürüm          : 4.0.1\n");
					printf("Yapý           : 2417GY\n");
					printf("Düzeltme Yamasý: Nisan 2024\n");
					printf("Durum          : Resmi\n");
					printf("KarStore Services Hakkýnda\n");
					printf("Sürüm: 4.0\n");	
					printf("KarSoft, 2024\n");
					printf("Cihaz Hakkýnda\n");
					switch(karos)
					{
						case 1:
							printf("OS: Windows\n");
							printf("Windows Sürümü:\n");
							system("ver");
							storesettr();
							break;
						case 40:
							printf("OS: KarOS 4 Home\n");
							printf("KarOS Edisyonunuzu yükseltmek için iletiþime geçin.\n");
							storesettr();
							break;
						case 41:
							printf("OS: KarOS 4 Pro\n");
							storesettr();
							break;
						case 42:
							printf("OS: KarOS 4 Dev\n");
							storesettr();
							break;
						default:
							printf("OS: Saptanmadý\n");
							if(karos<40)
							{
								printf("Kullandýðýnýz KarOS sürümü çok eski veya bu sürüm desteklemiyor.\n");
								printf("KarSoft Destek ile iletiþime geçin.\n");
								printf("Hata Kodu: ERRKAS06\n");
								storesettr();
							}
							printf("Bu durum yeni KarOS güncellemelerinde veya henüz desteklenmeyen iþletim sistemlerinde olabilir.\n");
							printf("KarSoft Destek ile iletiþime geçin.\n");
							printf("Hata Kodu: ERRKAS05\n");
							storesettr();
							break;
					}
					break;
				case 1:
					storesetsectr();
					break;
				case 3:
					karedtr();
					break;
				case 4:
					myappstr();
					break;
				case 2:
					if(karos==31||karos==41)
					{
						protr();
					}
					else
					{
						printf("Mevcut edisyonunuz desteklemiyor, kullanmak için KarOS Pro edisyonu satýn alýn.\n");
						printf("Eðer edisyonunuz Pro ve bu sayfayý görüyorsanýz, bizimle iletiþime geçin.\n");
						printf("Hata Kodu: ERRKAS007\n");
						storesettr();
					}
					break;
				case 5:
					storesavetr();
					break;
				case 7:
					karstoretr();
					break;
				case 8:
					kuicktr();
					break;
				case 9:
					mainimsi();
					break;
				default:
					hata();
					storesettr();
					break;		
			}	
		}
		else
		{
			hata();
			storesettr();
		}
	}
}
int storeseten()
{
	location=22181;
	basarser();
	silge(1);
	saat();
	nofbar();
	oku();
	if(storelicense==0)
	{
		printf("There is a problem with your KarStore license, please contact KarSoft Support.\n");
		printf("1=Go to website\n");
		printf("2=Back\n");
		int b;
		scanf("%d",&b);
		switch(b)
		{
			case 1:
				if(karcon==0)
				{
					printf("Outdoor Communication is turned off, turn it on and try again.\n");
					storeseten();
				}
				else
				{
					if(varybrsr==1)
					system("start chrome sites.google.com/view/karsoftware/destek");
					else if(varybrsr==2)
					system("start msedge sites.google.com/view/karsoftware/destek");
				}
				printf("Redirected.\n");
				karstoreen();
				break;
			case 2:
				karstoreen();
				break;
			default:
				hata();
				karstoreen();
		}	
	}
	else
	{
	    printf("      __   _    _  ___   _     _     _               \n");
		printf("|_/  |__| |_)  |_   |   | |   |_)   |_               \n");
		printf("| |  |  | | |   _|  |   |_|   | |   |_               \n");
		printf("Account and Settings                                 \n");
		printf("1=Access Restriction\n");
		printf("2=My Apps\n");
		printf("3=Saving Status\n");
		printf("4=About\n");
		navbar();
		int fflush(FILE *stream);
		fflush(stdin);
		char giris=getch();
		if(isdigit(giris)==1)
		{
			int a=giris-'0';
			switch(a)
			{
				case 4:
					printf("KarStore About\n");
					printf("Version        : 4.0.1 \n");
					printf("Build          : 2417GY\n");
					printf("Hotfix patch   : April 2024\n");
					printf("Status         : Legal\n");
					printf("KarStore Services About\n");
					printf("Version: 4.0\n");	
					printf("KarSoft, 2024\n");
					printf("About Device\n");
					switch(karos)
					{
						case 1:
							printf("OS: Windows\n");
							system("ver");
							storeseten();
							break;
						case 40:
							printf("OS: KarOS 4 Home\n");
							storeseten();
							break;
						case 41:
							printf("OS: KarOS 4 Pro\n");
							storeseten();
							break;
						case 42:
							printf("OS: KarOS 4 Dev\n");
							storeseten();
							break;
							break;
						default:
							printf("OS: Unknown\n");
							printf("This may happen with new KarOS updates or operating systems that are not yet supported.\n");
							printf("Contact KarSoft Support.\n");
							printf("Error Code: ERRKAS05\n");
							storeseten();
							break;
					}
					break;
				case 1:
					storesetsecen();
					break;
				case 2:
					myappsen();
					break;
				case 3:
					storesaveen();
					break;
				case 7:
					karstoreen();
					break;
				case 8:
					kuicken();
					break;
				case 9:
					mainimsi();
					break;
				default:
					hata();
					storeseten();
					break;		
			}	
		}
		else
		{
			hata();
			storeseten();
		}
	}
}
int storesetsectr()
{
	basarser();
	silge(1);
	saat();
	nofbar();
	printf("Kýsýtlamak istedðiniz uygulamayý seçin.\n");
	printf(" Uygulama Adý                    Durumu\n");
	if(figure0==0)
	printf("1=KarDraw                      Devre dýþý\n");
	else if(figure0==1)
	printf("1=KarDraw                         Etkin\n");
	if(akdev0==0)
	printf("2=Ak Devlet                    Devre dýþý\n");
	else if(akdev0==1)
	printf("2=Ak Devlet                       Etkin\n");
	if(akyak0==0)
	printf("3=KarYakýt                     Devre dýþý\n");
	else if(akyak0==1)
	printf("3=KarYakýt                        Etkin\n");
	if(asim0==0)
	printf("4=APFL Simulator                Devre dýþý\n");
	else if(asim0==1)
	printf("4=APFL Simulator                  Etkin\n");
	if(ssim0==0)
	printf("5=Sanayi Simulator              Devre dýþý\n");
	else if(ssim0==1)
	printf("5=Sanayi Simulator                Etkin\n");
	if(t20230==0)
	printf("6=Target 2023                   Devre dýþý\n");
	else if(t20230==1)
	printf("6=Target 2023                     Etkin\n");
	if(tkm0==0)
	printf("7=Taþ-Kaðýt-Makas               Devre dýþý\n");
	else if(tkm0==1)
	printf("7=Taþ-Kaðýt-Makas                 Etkin\n");
	if(sayi0==0)
	printf("8=Sayý Tahmin                   Devre dýþý\n");
	else if(sayi0==1)
	printf("8=Sayý Tahmin                     Etkin\n");
	if(barb0==0)
	printf("9=Barbut                        Devre dýþý\n");
	else if(barb0==1)
	printf("9=Barbut                          Etkin\n");
	if(yil0==0)
	printf("10=Yýlan Oyunu                  Devre dýþý\n");	
	else if(yil0==1)
	printf("10=Yýlan Oyunu                    Etkin\n");
	if(gtt0==0)	
	printf("11=ÐTT                          Devre dýþý\n");
	else if(gtt0==1)	
	printf("11=ÐTT                            Etkin\n");
	if(vki0==0)
	printf("12=VKÝ                          Devre dýþý\n");
	if(vki0==1)
	printf("12=VKÝ                            Etkin\n");
	if(yerm0==0)
	printf("13=Yer Ýmleri                   Devre dýþý\n");
	else if(yerm0==1)
	printf("13=Yer Ýmleri                     Etkin\n");
	if(eko0==0)
	printf("14=Ekonomi Simulator            Devre dýþý\n");
	else if(eko0==1)
	printf("14=Ekonomi Simulator              Etkin\n");
	printf("Ýpuçlarý veya KarGames uygulamasýný mý arýyorsunuz?\n");
	printf("Bu uygulamalar temel uygulama olduðundan devre dýþý býrakýlamaz.\n");
	printf("99=Ana Menü\n");
	printf("999=Geri-KarStore Ayarlarý\n");
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
		switch(a)
		{
			case 1:
				if(figure0==1)
				figure0=0;
				else if(figure0==0)
				figure0=1;
				storesetsectr();
				break;
			case 2:
				if(akdev0==1)
				akdev0=0;
				else if(akdev0==0)
				akdev0=1;
				storesetsectr();
				break;
			case 3:
				if(akyak0==1)
				akyak0=0;
				else if(akyak0==0)
				akyak0=1;
				storesetsectr();
				break;
			case 4:
				if(asim0==1)
				asim0=0;
				else if(asim0==0)
				asim0=1;
				storesetsectr();
				break;
			case 5:
				if(ssim0==1)
				ssim0=0;
				else if(ssim0==0)
				ssim0=1;
				storesetsectr();
				break;
			case 6:
				if(t20230==1)
				t20230=0;
				else if(t20230==0)
				t20230=1;
				storesetsectr();
				break;
			case 7:
				if(tkm0==1)
				tkm0=0;
				else if(tkm0==0)
				tkm0=1;
				storesetsectr();
				break;
			case 8:
				if(sayi0==1)
				sayi0=0;
				else if(sayi0==0)
				sayi0=1;
				storesetsectr();
				break;
			case 9:
				if(barb0==1)
				barb0=0;
				else if(barb0==0)
				barb0=1;
				storesetsectr();
				break;
			case 10:
				if(yil0==1)
				yil0=0;
				else if(yil0==0)
				yil0=1;
				storesetsectr();
				break;
			case 11:
				if(gtt0==1)
				gtt0=0;
				else if(gtt0==0)
				gtt0=1;
				storesetsectr();
				break;
			case 12:
				if(vki0==1)
				vki0=0;
				else if(vki0==0)
				vki0=1;
				storesetsectr();
				break;
			case 13:
				if(yerm0==1)
				yerm0=0;
				else if(yerm0==0)
				yerm0=1;
				storesetsectr();
				break;
			case 14:
				if(eko0==1)
				eko0=0;
				else if(eko0==0)
				eko0=1;
				storesetsectr();
				break;
			case 999:
				storesettr();
				break;
			case 99:
				mainimsi();
				break;	
			default:
				hata();
				storesetsectr();
				break;
			}
	
}
int storesetsecen()
{
	basarser();
	silge(1);
	saat();
	nofbar();
	printf("Select the app you want to restrict.\n");
	printf(" App Name                         Status\n");
	if(figure0==0)
	printf("1=KarDraw                         Disabled\n");
	else if(figure0==1)
	printf("1=KarDraw                          Enabled\n");
	if(akdev0==0)
	printf("2=Ak Devlet                       Disabled\n");
	else if(akdev0==1)
	printf("2=Ak Devlet                       Enabled\n");
	if(akyak0==0)
	printf("3=KarYakýt                        Disabled\n");
	else if(akyak0==1)
	printf("3=KarYakýt                        Enabled\n");
	if(asim0==0)
	printf("4=APFL Simulator                   Disabled\n");
	else if(asim0==1)
	printf("4=APFL Simulator                  Enabled\n");
	if(ssim0==0)
	printf("5=Sanayi Simulator                 Disabled\n");
	else if(ssim0==1)
	printf("5=Sanayi Simulator                Enabled\n");
	if(t20230==0)
	printf("6=Target 2023                      Disabled\n");
	else if(t20230==1)
	printf("6=Target 2023                     Enabled\n");
	if(tkm0==0)
	printf("7=Taþ-Kaðýt-Makas                  Disabled\n");
	else if(tkm0==1)
	printf("7=Taþ-Kaðýt-Makas                 Enabled\n");
	if(sayi0==0)
	printf("8=Sayý Tahmin                      Disabled\n");
	else if(sayi0==1)
	printf("8=Sayý Tahmin                     Enabled\n");
	if(barb0==0)
	printf("9=Barbut                           Disabled\n");
	else if(barb0==1)
	printf("9=Barbut                          Enabled\n");
	if(yil0==0)
	printf("10=Yýlan Oyunu                     Disabled\n");	
	else if(yil0==1)
	printf("10=Yýlan Oyunu                    Enabled\n");
	if(gtt0==0)	
	printf("11=ÐTT                             Disabled\n");
	else if(gtt0==1)	
	printf("11=ÐTT                            Enabled\n");
	if(vki0==0)
	printf("12=VKÝ                             Disabled\n");
	if(vki0==1)
	printf("12=VKÝ                            Enabled\n");
	if(yerm0==0)
	printf("13=Bookmarks                       Disabled\n");
	else if(yerm0==1)
	printf("13=Bookmarks                      Enabled\n");
	if(eko0==0)
	printf("14=Ekonomi Simulator               Disabled\n");
	else if(eko0==1)
	printf("14=Ekonomi Simulator              Enabled\n");
	printf("Looking for tips or the KarGames app?\n");
	printf("Since the Tips app is an essential app, it cannot be disabled.\n");
	printf("99=Main Menu\n");
	printf("999=Back-KarStore Settings\n");
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
		switch(a)
		{
			case 1:
				if(figure0==1)
				figure0=0;
				else if(figure0==0)
				figure0=1;
				storesetsecen();
				break;
			case 2:
				if(akdev0==1)
				akdev0=0;
				else if(akdev0==0)
				akdev0=1;
				storesetsecen();
				break;
			case 3:
				if(akyak0==1)
				akyak0=0;
				else if(akyak0==0)
				akyak0=1;
				storesetsecen();
				break;
			case 4:
				if(asim0==1)
				asim0=0;
				else if(asim0==0)
				asim0=1;
				storesetsecen();
				break;
			case 5:
				if(ssim0==1)
				ssim0=0;
				else if(ssim0==0)
				ssim0=1;
				storesetsecen();
				break;
			case 6:
				if(t20230==1)
				t20230=0;
				else if(t20230==0)
				t20230=1;
				storesetsecen();
				break;
			case 7:
				if(tkm0==1)
				tkm0=0;
				else if(tkm0==0)
				tkm0=1;
				storesetsecen();
				break;
			case 8:
				if(sayi0==1)
				sayi0=0;
				else if(sayi0==0)
				sayi0=1;
				storesetsecen();
				break;
			case 9:
				if(barb0==1)
				barb0=0;
				else if(barb0==0)
				barb0=1;
				storesetsecen();
				break;
			case 10:
				if(yil0==1)
				yil0=0;
				else if(yil0==0)
				yil0=1;
				storesetsecen();
				break;
			case 11:
				if(gtt0==1)
				gtt0=0;
				else if(gtt0==0)
				gtt0=1;
				storesetsecen();
				break;
			case 12:
				if(vki0==1)
				vki0=0;
				else if(vki0==0)
				vki0=1;
				storesetsecen();
				break;
			case 13:
				if(yerm0==1)
				yerm0=0;
				else if(yerm0==0)
				yerm0=1;
				storesetsecen();
				break;
			case 14:
				if(eko0==1)
				eko0=0;
				else if(eko0==0)
				eko0=1;
				storesetsecen();
				break;
			case 999:
				storeseten();
				break;
			case 99:
				mainimsi();
				break;	
			default:
				hata();
				storesetsecen();
				break;
		}	
}
int storesavetr()
{
	silge(1);
	saat();
	nofbar();
	kaydet();
	printf("KarStore Ayarlarý\n");
	printf("Kaydetme Durumu\n");
	if(svstore==1)
	printf("KarGames baþarýmlarýnýz kaydediliyor.\n");
	else if(svstore==0)
	printf("KarGmaes baþarýmlarýnýz kaydedilmiyor.\n");
	storesettr();
}
int storesaveen()
{
	silge(1);
	saat();
	nofbar();
	kaydet();
	printf("KarStore Settings\n");
	printf("Saving Status\n");
	if(svstore==1)
	printf("KarGames Ahcievements saving.\n");
	else if(svstore==0)
	printf("KarGmaes Ahcievements not saving.\n");
	storeseten();
}
int karedtr()
{
	basarser();
	silge(1);
	saat();
	nofbar();
	printf("KarOS Edisyonlarý satýn alýn.\n");
	printf("---------------------------------------------------------------------\n");
	printf("KarOS Dev 60,00 Türk Lirasý\n");
	printf("Destekli sürümler: KarOS 4\n");
	printf("KarOS Dev Ayrýcalýklarý:\n");
	printf("-KarOS Temel Parçalarý sayýlan kodlar* hariç tüm uygulamalarýn kodlarýna eriþim\n");
	printf("-Major güncellemelerde betalar\n");
	printf("-Geri bildirim ve önerilerde öncelik sizin\n");
	printf("KarOS Dev sürümünün kopyasýný satýn almak için aþaðýdaki e-posta adresi ile iletiþime geçin.\n");
	printf("*Temel Parça sayýlan fonksiyonlar:\n");
	printf("-Boot, Temel Parçalar, KarOS Ana Ekraný, Ayarlar, Hýzlý Menü, Geliþmiþ Baþlatma, KarStore Services, KarStore\n");
	printf("----------------------------------------------------------------------------\n");
	printf("KarOS Pro 30,00 Türk Lirasý\n");
	printf("Destekli sürümler: KarOS 4\n");
	printf("-Daha hýzlý bir KarOS deneyimi\n");
	printf("-KarOS Pro edisyonuna özel uygulama ve oyunlar\n");
	printf("Ýletiþim Bilgileri-------------------------------------\n");
	printf("inckaros@gmail.com\n");
	printf("****Daha detaylý bilgi için web sayfasýný ziyaret edin.\n");
	printf("----------------------------------------------------------------\n");
	scanf("");
	karstoretr();
}
int protr()
{
	basarser();
	silge(1);
	saat();
	nofbar();
	oku();
	printf("KarOS Pro ayrýcalýklarýna hoþ geldiniz...\n");
	printf("KarOS Pro ile sizi;\n");
	printf("-Temalar\n");
	printf("-Daha performanslý bir KarOS deneyimi\n");
	printf("-Özel KarStore uygulamalarý ve oyunlarý\n");
	printf("-Daha çýkmamýþ beta yazýlýmlar bekliyor.\n");
	printf("--------------------------------------------------------------\n");
	printf("KarOS Pro özel 2 uygulama ve 1 oyun mevcut.\n");
	printf("1=AK Devlet\n");
	printf("2=ÐTT\n");
	printf("3=Ekonomi Simulator-BETA\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				akdevlet1();
				break;
			case 2:
				gttt1();
				break;
			case 3:
				ekom1();
				break;
			case 7:
				storesettr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				protr();
				break;
		}
	}
	else
	{
		hata();
		protr();
	}
		
}
//Ýpuçlarý
int tiptr1()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýpuçlarý Uygulamasý\n");
	printf("Uygulama Sürümü  : 3.0\n");
	printf("Güncelleme Tarihi: 29.01.2024\n");
	printf("Yapýmcý          : KarSoft\n");
	printf("Bu uygulama en iyi KarOS 4'de çalýþýr.\n");
	printf("Açýklama---------------------\n");
	printf("KarOS deneyiminizi iyileþtirin,\n");
	printf("Yeni Özellikler öðrenin.\n");
	printf("Yenilikler:\n");
	printf("-KarStore 4 ipuçlarý eklendi.\n");
	printf("-Hatalar giderildi.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.0 ve üzeri\n");
	printf("KarStore Services: 2.6 ve üzeri\n");
	printf("Windows Desteði  : Mevcut deðil\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesabýma ekle\n");
	navbar();
	if(karos>29)
	{
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				if(tip0==0)
				{
					printf("Eriþim engellendi.\n");
					appstr();
				}
				else if(tip0==1)
				{
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					tip1=1;
					tiptr();
				}
				break;
			case 2:
				if(tip2==1)
				{
					if(home==1)
					{
						tip1=2;
						printf("Ana Ekrana eklendi.\n");
						tiptr1();
					}
					else
					{
						tip1=1;
						printf("Ana Ekrana eklendi.\n");
						tiptr1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					tiptr1();
				}
				break;
			case 3:
				tip2=1;
				printf("Lisansý hesabýnýza eklendi.\n");
				tiptr1();
				break;
			case 7:
				appstr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				tiptr1();
				break;		
		}
	}
	else
	{
		printf("Mevcut yazýlýmýnýz bu uygulamayý desteklemiyor.\n");
		appstr();
	}
}
int tiptr()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýpuçlarý------------------------------------------------\n");
	if(karos<40)
	{
		printf("Görünüþe bakýlýrsa KarOS 4 kullanmýyorsunuz.\n");
		printf("KarOS 4 ile sizi;\n");
		printf("1=Ekranýnýzý, verilerinizi kaydeden\n");
		printf("2=Sürekli güncellenen ve optimize edilen\n");
		printf("3=En akýcý ve sorunsuz bir yazýlým bekliyor.\n");
	}
	printf("Genel Kullaným için Ýpuçlarý\n");
	printf("1=KarOS Pro edisyonu satýn aldýðýnýzda özel uygulamalara eriþebilirsiniz.\n");
	printf("2=Canýnýz mý sýkýldý? Target 2023 adlý oyunu deneyin.\n");
	printf("3=KarStore Hýzlý Menüsünden dilinizi seçmeye gidebilirsiniz.\n");
	printf("4=Artýk websitelerini ziyaret etmek KarOS ile daha kolay!\n");
	printf("5=Ýpuçlarý uygulamasý artýk KarStore içinde deðildir.\n");
	printf("6=KarOS anahtarýný her seferinde girmekten sýkýldýnýz mý?\n");
	printf("-Yedekleme kodu alýn. Kaldýðýnýz yerden devam edin.\n");
	printf("7=Yepyeni bir KarOS güncellemesi testleri baþladý.\n");	
	printf("-----------------------------------------------------------\n");
	printf("KarOS 4 ve Yenilikler\n");
	printf("1=Ayarlar çok mu karmaþýk?\nKarOS 4 ile ayarlar uygulamasý kategorizelendirilmiþtir.\n");
	printf("2=Ana Ekran arka planý çok mu sade? Artýk 3 farklý renk olarak ayarlayabilirsiniz.\n");
	printf("3=Artýk navigasyon çubuðu ve saat gibi özellikleri kiþisel zevke göre ayarlayabilirsiniz.\n");
	printf("4=Sesle Kullaným uygulamasý ile açmak istediðiniz uygulamayý söylemeniz yeterli.*\n");
	printf("5=En güncel þehir bulma uygulamasý ile daha fazla bilgiye ulaþýn.\n");
	printf("6=Yenilikler bitmedi! KarSoft web sayfasýný ziyaret ederek daha fazla bilgi edinebilirsiniz.\n");
	if(karos==1 || karos>39)
	printf("-----------------------------------------------------------------\n");
	printf("KarStore 4.0 ve Yenilikler\n");
	printf("1=Artýk KarStore kazanýlan baþarýmlarý kaydediyor.\n");
	printf("2=Bir sürü güncel uygulama!\n");
	printf("3=Daha fazlasý için KarSoft web sayfasýný ziyaret edin.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 7:
				if(lang==1)
				appstr();
				else if(lang==2)
				appsen();
				else if(lang==3)
				{
					if(varylang==1)
					appstr();
					else if(varylang==2)
					appsen();
				}
				break;
			case 8:
				if(lang==1)
				kuicktr();
				else if(lang==2)
				kuicken();
				else if(lang==3)
				{
					if(varylang==1)
					kuicktr();
					else if(varylang==2)
					kuicken();
				}
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				tiptr();
				break;
		}
	}
	else
	{
		hata();
		tiptr();
	}	
	appstr();
}
//Yer Ýmleri
int yerm10()
{
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("Yer Ýmleri Uygulamasý\n");
	printf("Uygulama Sürümü  : 2.1\n");
	printf("Güncelleme Tarihi: 29.01.2024\n");
	printf("Yapýmcý          : KarSoft\n");
	printf("Bu uygulama en iyi KarOS 3.5 üzerinde çalýþýr.\n");
	printf("Açýklama---------------------\n");
	printf("Sýk kullanýlan web sayfalarýna eriþin.\n");
	printf("Yenilikler:\n");
	printf("-Site alan adlarý güncellendi.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 2.6 ve üzeri\n");
	printf("Windows Desteði  : Mevcut deðil\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesabýma ekle\n");
	navbar();
	if(karos<29)
	{
		printf("Cihazýnýz desteklemiyor, yazýlýmýnýzý yükseltin.\n");
		karstoretr();
	}
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(yerm0==0)
			{
				printf("Eriþim engellendi.\n");
				appstr();
			}
			else if(yerm0==1)
			{
				yerm();
			}
			break;
		case 2:
			if(yerm2==1)
			{
				if(home==1)
				{
					yerm1=2;
					printf("Ana Ekrana eklendi.\n");
					yerm10();
				}
				else
				{
					yerm1=1;
					printf("Ana Ekrana eklendi.\n");
					yerm10();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				yerm10();
			}
			break;
		case 3:
			yerm2=1;
			printf("Lisansý hesabýnýza eklendi.\n");
			yerm10();
			break;
		case 7:
			appstr();
			break;
		case 8:
			kuicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			yerm10();
			break;		
	}
}
int yerm()
{
	silge(1);
	saat();
	nofbar();
	if(karcon==0)
	{
		printf("Dýþ Alan Ýletiþimi kapalý.\n");
		printf("Sunuculara baðlanýlamýyor.\n");
		printf("Açýp tekrar deneyin.\n");
		appstr();
	}
	printf("Yer Ýmleri\n");
	printf("1=Sosyal Medya\n");
	printf("2=Haber Kanallarý\n");
	printf("3=Kategorisiz\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				yerso();
				break;
			case 2:
				yerha();
				break;
			case 3:
				yerko();
				break;
			case 7:
				karstoretr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				yerm();
				break;
		}
	}
	else
	{
		hata();
		yerm();
	}
}
yerso()
{
	silge(1);
	saat();
	nofbar();
	printf("Sosyal Medya yer imleri\n");
	printf("1=Instagram\n");
	printf("2=Youtube\n");
	printf("3=Facebook\n");
	printf("4=X(Twitter)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome instagram.com");
				else if(varybrsr==2)
				system("start msedge instagram.com");
				printf("Yönlendirildi.\n");
				yerso();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome youtube.com");
				else if(varybrsr==2)
				system("start msedge youtube.com");
				printf("Yönlendirildi.\n");
				yerso();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome facebook.com");
				else if(varybrsr==2)
				system("start msedge facebook.com");
				printf("Yönlendirildi.\n");
				yerso();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome x.com");
				else if(varybrsr==2)
				system("start msedge x.com");
				printf("Yönlendirildi.\n");
				yerso();
				break;
			case 7:
				yerm();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				yerso();
				break;
		}
	}
	else
	{
		hata();
		yerso();
	}
}
yerha()
{
	silge(1);
	saat();
	nofbar();
	printf("Haber yer imleri\n");
	printf("1=TRT Haber\n");
	printf("2=YouTube\n");
	printf("3=NTV\n");
	printf("4=X(Twitter)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome https://www.youtube.com/watch?v=-Lrxv1_i3qc");
				else if(varybrsr==2)
				system("start msedge https://www.youtube.com/watch?v=-Lrxv1_i3qc");
				printf("Yönlendirildi.\n");
				yerha();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome youtube.com");
				else if(varybrsr==2)
				system("start msedge youtube.com");
				printf("Yönlendirildi.\n");
				yerha();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://www.youtube.com/watch?v=-RORLrBwJD0");
				else if(varybrsr==2)
				system("start msedge https://www.youtube.com/watch?v=-RORLrBwJD0");
				printf("Yönlendirildi.\n");
				yerha();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome x.com");
				else if(varybrsr==2)
				system("start msedge x.com");
				printf("Yönlendirildi.\n");
				yerha();
				break;
			case 7:
				yerm();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				yerha();
				break;
		}
	}
	else
	{
		hata();
		yerha();
	}
}
yerko()
{
	silge(1);
	saat();
	nofbar();
	printf("kategorisiz yer imleri\n");
	printf("1=WhatsApp\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome web.whatsapp.com");
				else if(varybrsr==2)
				system("start msedge web.whatsapp.com");
				printf("Yönlendirildi.\n");
				yerko();
				break;
			case 7:
				yerm();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				yerko();
				break;
		}
	}
	else
	{
		hata();
		yerko();
	}
}
//Þekil Çizme
int figuretr1()
{
	silge(1);
	saat();
	nofbar();
	printf("KarDraw (Þekil Çizme) Uygulamasý\n");
	printf("Uygulama Sürümü  : 4.0\n");
	printf("Güncelleme Tarihi: 29.12.2023\n");
	printf("Yapýmcý          : KarSoft\n");
	printf("Bu uygulama en iyi KarOS 4.0'da çalýþýr.\n");
	printf("Açýklama---------------------\n");
	printf("Dilediðiniz boyutta þekiller çizin!\n");
	printf("Yenilikler:\n");
	printf("-KarOS 4 için optimize edildi.\n");
	printf("-Hakkýnda sayfasý eklendi.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 3.0 ve üzeri\n");
	printf("Windows Desteði  : Mevcut\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesabýma ekle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(figure0==0)
				{
					printf("Eriþim engellendi.\n");
					appstr();
				}
				else if(figure0==1)
				{
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					figure2=1;
					if(varylang==1)
					figuretr();
					else if(varylang==2)
					figureen();
				}
				break;
			case 2:
				if(figure2==1)
				{
					if(home==1)
					{
						figure1=2;
						printf("Ana Ekrana eklendi.\n");
						figuretr1();
					}
					else
					{
						figure1=1;
						printf("Ana Ekrana eklendi.\n");
						figuretr1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					figuretr1();
				}
				break;
			case 3:
				figure2=1;
				printf("Lisansý hesabýnýza eklendi.\n");
				figuretr1();
				break;
			case 7:
				appstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				figuretr1();
				break;		
		}
	}
	else
	{
		hata();
		figuretr1();
	}
}
figureen1()
{
	silge(1);
	saat();
	nofbar();
	printf("KarDraw App\n");
	printf("App Version  : 2.1.2\n");
	printf("Date of update: 29.12.2023\n");
	printf("Explanation---------------------\n");
	printf("Draw shapes in any size you want!\n");
	printf("Whta's New:\n");
	printf("-Added new app page.\n");
	printf("System Requirentments-------------\n");
	printf("Device           : KarOS 3.5 and above\n");
	printf("KarStore Services: 3.0 and above\n");
	printf("Windows Support  : Supported\n");
	printf("1=Start\n");
	printf("2=Add Home Screen\n");
	printf("3=Add license my account\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(figure0==0)
				{
					printf("Access denied.\n");
					appstr();
				}
				else if(figure0==1)
				{
					figure1=1;
					if(varylang==1)
					figuretr();
					else if(varylang==2||lang==2)
					figureen();
				}
				break;
		case 2:
				if(figure2==1)
				{
					if(home==1)
					{
						figure2=2;
						printf("Added Home Screen.\n");
						figureen1();
					}
					else
					{
						figure2=1;
						printf("Added Home Screen.\n");
						figureen1();
					}
				}
				else
				{
					printf("The application could not be added to the home screen, try to add the license of the application first.\n");
					figureen1();
				}
				break;
			case 3:
				figure2=1;
				printf("The license has been added to your account.\n");
				figureen1();
				break;
			case 7:
				appsen();
				break;
			case 8:
				kuicken();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				figureen1();
				break;		
		}	
	}
	else
	{
		hata();
		figureen1();
	}
}
figuretr()
{
	silge(1);
	saat();
	nofbar();
	printf("KarDraw\n");
	printf("Çizilmesini istediðiniz þekli seçin\n");
	printf("1=Üçgen\n");
	printf("2=Dörtgen\n");
	printf("3=Ok\n");
	printf("4=Ters Ok\n");
	printf("5=Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				ucgentr();
				break;
			case 2:
				dortgentr();
				break;
			case 3:
				ok();
				break;
			case 4:
				tersok();
				break;
			case 5:
				printf("KarDraw for KarOS\n");
				printf("Bu uygulama KarOS 4.0 için tasarlandý.\n");
				printf("KarSoft, 2024\n");
				figuretr();
				break;
			case 7:
				appstr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				figuretr();
				break;
		}
	}
	else
	{
		hata();
		figuretr();
	}
}
figureen()
{
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("--------------------------------------------Figure Drawing-----------------------------------------\n");
	printf("Choose the shape you want drawn\n");
	printf("1=Triangle\n");
	printf("2=Quadrangle\n");
	printf("7=Back\n");
	printf("8=Quick Menu\n");
	printf("9=Main Menu\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			ucgenen();
			break;
		case 2:
			dortgenen();
			break;
		case 7:
			appsen();
			break;
		case 8:
			quicken();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			figureen();
			break;
	}
}
ucgentr()
{
	silge(1);
	saat();
	nofbar();
	printf("---------------------------------Üçgenler-------------------------------------\n");
	printf("Çizmek istediðiniz üçgen çeþidini seçin\n");
	printf("1=Sola Yatýk Üçgen\n");
	printf("2=Saða Yatýk Üçgen\n");
	printf("3=Düz Üçgen\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			ucgen01tr();
			break;
		case 2:
			ucgen02tr();
			break;
		case 3:
			ucgen03tr();
			break;
		case 7:
			saniye();
			figuretr();
			break;
		case 8:
			kuicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			ucgentr();
			break;
	}
}
ucgenen()
{
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("---------------------------------Triangles-------------------------------------\n");
	printf("Select the type of triangle you want to draw:\n");
	printf("1=Left Leaning Triangle\n");
	printf("2=Right Leaning Triangle\n");
	printf("3=Flat Triangle\n");
	printf("7=Back-Shape Drawing\n");
	printf("9=Main Menu\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			ucgen01en();
			break;
		case 2:
			ucgen02en();
			break;
		case 3:
			ucgen03en();
			break;
		case 7:
			saniye();
			figureen();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("Wrong choice, try again.\a\n");
			ucgenen();
			scanf("");
			break;
	}	
}
ucgen01tr()
{	
	int a;
	int b;
	int c;
	silge(1);
	saat();
	nofbar();
	printf("\nÜçgeninizin uzunluðu kaç birim olsun?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
	c=b;
		for(c;c>=1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgentr();
}
ucgen01en()
{
	int a;
	int b;
	int c;
	time_t mytime;
    mytime = time(NULL);
	printf("\nWhat is the length of your triangle?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
	c=b;
		for(c;c>=1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgenen();	
}
ucgen02tr()
{
	int a;
	int b;
	int c; 
	int d;
	silge(1);
	saat();
	nofbar();
	printf("\nÜçgeninizin uzunluðu kaç birim olsun?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=a-b;
		for(c;c>=1;c--)
		{
			printf(" ");
		}
		
		for(d=b;d>=1;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgentr();
}
ucgen02en()
{
	int a;
	int b;
	int c; 
	int d;
	time_t mytime;
    mytime = time(NULL);
	printf("\nWhat is the length of your triangle?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=a-b;
		for(c;c>=1;c--)
		{
			printf(" ");
		}
		
		for(d=b;d>=1;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgenen();
}
ucgen03tr()
{
	int a;
	int b;
	int c; 
	int d;
	silge(1);
	saat();
	nofbar();
	printf("\nÜçgeninizin uzunluðu kaç birim olsun?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=a-b;
		for(c;c>=1;c--)
		{
			printf(" ");
		}
		
		for(d=b*2-1;d>=1;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgentr();
	
}
ucgen03en()
{
	int a;
	int b;
	int c; 
	int d;
	time_t mytime;
    mytime = time(NULL);
	printf("\nWhat is the length of your triangle?:");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=a-b;
		for(c;c>=1;c--)
		{
			printf(" ");
		}
		
		for(d=b*2-1;d>=1;d--)
		{
			printf("*");
		}
		printf("\n");
	}
	ucgenen();
	
}
dortgentr()
{
	silge(1);
	saat();
	nofbar();
	printf("------------------------------Dörtgenler-----------------------------\n");
	printf("Çizmek istediðiniz dörtgeni seçiniz:\n");
	printf("1=Ýçi dolu dikdörtgen\n");
	printf("2=Ýçi boþ dikdörtgen\n");
	printf("7=Geri-Þekil Çizme\n");
	printf("9=Ana Menü\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			saniye();
			dortgen01tr();
			break;
		case 2:
			saniye();
			dortgen02tr();
			break;
		case 7:
			saniye();
			figuretr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			dortgentr();
			scanf("");
			break;
	}
}
dortgenen()
{
	time_t mytime;
    mytime = time(NULL);
    printf("%s",ctime(&mytime));
	printf("------------------------------Quadrangles-----------------------------\n");
	printf("Select the rectangle you want to draw\n");
	printf("1=Solid rectangle\n");
	printf("2=Hollow rectangle\n");
	printf("7=Back-Shape Drawing\n");
	printf("9=Main Menu\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			saniye();
			dortgen01en();
			break;
		case 2:
			saniye();
			dortgen02en();
			break;
		case 7:
			saniye();
			figureen();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("Wrong Selection, try again.\a\n");
			dortgenen();
			scanf("");
			break;
	}
}
dortgen01tr()
{
	int a;
	int b;
	int c;
	silge(1);
	saat();
	nofbar();
	printf("Dikdörtgeninizin eni kaç birim olsun? ");
	scanf("%d",&a);
	
	printf("Dikdörtgeninizin boyu kaç birim olsun? ");
	scanf("%d",&b);
	
	for(b;b>0;b--)
	{
	c=a;
		for(a;a>0;a--)
		{
			printf("*");	
		}
	printf("\n");
	a=c;
	}
	dortgentr();
}
dortgen01en()
{
	int a;
	int b;
	int c;
	
	printf("What is the width of your rectangle? ");
	scanf("%d",&a);
	
	printf("What is the length of your rectangle? ");
	scanf("%d",&b);
	
	for(b;b>0;b--)
	{
	c=a;
		for(a;a>0;a--)
		{
			printf("*");	
		}
	printf("\n");
	a=c;
	}
	dortgenen();	
}
dortgen02tr()
{
	int a;
	int b;
	int c;
	int d;
	silge(1);
	saat();
	nofbar();
	printf("Ýçi boþ dikdörtgeninizin eni kaç birim olsun? ");
	scanf("%d",&a);
	c=a;
	
	printf("Ýçi boþ dikdörtgeninizin boyu kaç birim olsun? ");
	scanf("%d",&b);
	d=b;
	
	for(b;b>0;b--)
	{
		for(a;a>0;a--)
		{
			if(b==d || b==1)
			{
				printf("*");
			}
			else
			{
				if(a==c || a==1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			
		}
	printf("\n");
	a=c;
	}
	dortgentr();
}
dortgen02en()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("What is the width of your hollow rectangle? ");
	scanf("%d",&a);
	c=a;
	
	printf("What is the size of your hollow rectangle? ");
	scanf("%d",&b);
	d=b;
	
	for(b;b>0;b--)
	{
		for(a;a>0;a--)
		{
			if(b==d || b==1)
			{
				printf("*");
			}
			else
			{
				if(a==c || a==1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			
		}
	printf("\n");
	a=c;
	}
	dortgenen();	
}
ok()
{
	int a,b;
	silge(1);
	saat();
	nofbar();
	printf("\nOkunuzun uzunluðunu yazýnýz:");
	scanf("%d",&a);
	int wd=(2*a-1)/10,wd2=wd;
	printf("Okunuzun üçgen kýsmýnýn uzunluðunu giriniz:");
	scanf("%d",&b);
	printf("\n");
	if(b>a)
	{
		printf("Geçersiz deðer\n\n");
		ok();
	}
	else
	{
		int e=a-b,spc=b-1,b2=b;
		for(b;b>0;b--)
		{
			int c,d;
			c=b-1;
			d=2*(b2-c)-1;
			for(c;c>0;c--)
			{
				printf(" ");
			}
			for(d;d>0;d--)
			{
				printf("*");
			}
			printf("\n");
		}
		for(e;e>0;e--)
		{
			wd2=wd;
			int spc2=spc;
			spc2-=(wd-1)/2;
			for(spc2;spc2>0;spc2--)
			{
				printf(" ");
			}
			for(wd2;wd2>0;wd2--)
			{
				printf("*");
			}
			printf("\n");
		}
		figuretr();
	}
}
tersok()
{
	int a,b;
	silge(1);
	saat();
	nofbar();
	printf("\nTers okunuzun uzunluðunu yazýnýz:");
	scanf("%d",&a);
	int wd=(2*a-1)/10,wd2=wd;
	printf("Ters okunuzun üçgen kýsmýnýn uzunluðunu giriniz:");
	scanf("%d",&b);	
	printf("\n");
	if(b>a)
	{
		printf("Geçersiz deðer\n\n");
		tersok();
	}
	else
	{
		int e=a-b,spc=b-1,b2=b;
		for(e;e>0;e--)
		{
			wd2=wd;
			int spc2=spc;
			spc2-=(wd-1)/2;
			for(spc2;spc2>0;spc2--)
			{
				printf(" ");
			}
			for(wd2;wd2>0;wd2--)
			{
				printf("*");
			}
			printf("\n");
		}
		for(b;b>0;b--)
		{
			int c,d;
			c=b2-b;
			d=2*(b2-c)-1;
			for(c;c>0;c--)
			{
				printf(" ");
			}
			for(d;d>0;d--)
			{
				printf("*");
			}
			printf("\n");
		}
		figuretr();
	}
}
//Ak Devlet
int akdevlet1()
{
	silge(1);
	saat();
	nofbar();
	printf("AK Devlet Uygulamasý\n");
	printf("Uygulama sürümü  : 3.3\n");
	printf("Güncelleme Tarihi: 30.03.2024\n");
	printf("Yapýmcý          : Ak Cumhurbaþkanlýðý Dijital Ýþler Ofisi\n");
	printf("Açýklama---------------------\n");
	printf("Ülke hakkýnda bilgi alýn, gelirinize bakýn, vergileri öðrenin.\n");
	printf("Yenilikler:\n");
	printf("-Bilgiler eklendi ve gelirler güncellendi\n");
	printf("-Vatandaþ Bilgi eklendi.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 3.0 ve üzeri\n");
	printf("Windows Desteði  : Mevcut ancak beklendiði gibi çalýþmayabilir.\n");
	if(karos==20)
	{
		printf("Sisteminiz bu uygulamayý desteklemiyor, lütfen sisteminizi güncelleyin.\n");
		karstoretr();
	}
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(akdev0==0)
				{
					printf("Eriþim engellendi.\n");
					appstr();
				}
				else if(akdev0==1)
				{
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					akdev2=1;
					akdevlet();
				}
				break;
			case 2:
				if(akdev2==1)
				{
					if(home==1)
					{
						akdev1=2;
						printf("Ana Ekrana eklendi.\n");
						akdevlet1();
					}
					else
					{
						akdev1=1;
						printf("Ana Ekrana eklendi.\n");
						akdevlet1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					akdevlet1();
				}
				break;
			case 3:
				akdev2=1;
				printf("Uygulama hesabýnýza eklendi.\n");
				akdevlet1();
				break;
			case 7:
				appstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				akdevlet1();
				break;		
		}
	}
	else
	{
		hata();
		akdevlet1();
	}	
}
akdevlet()
{
	silge(1);
	saat();
	nofbar();
	printf("AK CUMHURÝYETÝ DEVLETÝ ELEKTRONÝK ÝZLEME UYGULAMASI\n");
	printf("Gitmek istediðiniz bölümü seçin.\n");
	printf("1=Ýl, Ýlçe ve Müdürlükleri\n");
	printf("2=Gelir ve Vergi Daðýlýmý\n");
	printf("3=Yönetimler\n");
	printf("4=Vatandaþ Hakkýnda\n");
	printf("5=Uygulama Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				printf("Yönlendiriliyorsunuz...\n");
				akililce();
				break;
			case 2:
				printf("Yönlendiriliyorsunuz...\n");
				vergilendirme();
				break;
			case 3:
				printf("Yönlendiriliyorsunuz...\n");
				akyonetim();
				break;
			case 4:
				printf("Yönlendiriliyorsunuz...\n");
				vatandasbilgi();
			case 5:
				akhakkinda();
				break;
			case 7:
				appstr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				akdevlet();
				break;		
		}	
	}
	else
	{
		hata();
		akdevlet();
	}
}
akililce()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýl, Ýlçe ve Müdürlükleri---------------------------------\n");
	printf("Ýlk önce bakacaðýnýz ilin, sonra ilçenin kodunu yazýn.\n");
	printf("1=Ðötüken\n");
	printf("2=Akova\n");
	printf("3=Borkara\n");
	printf("4=Dursa\n");
	printf("5=Dolu\n");
	printf("6=Kazarya\n");
	printf("7=Eðrice\n");
	printf("8=Alova\n");
	printf("9=Bilmeyecik\n");
	printf("10=Oldþehir\n");
	printf("11=Balinaser\n");
	printf("12=Boncukdað\n");
	printf("13=Bahçeli\n");
	printf("14=Visa\n");
	printf("15=Antenkule\n");
	printf("16=Yedirme\n");
	printf("97=Geri\n");
	printf("99=Ana Menü\n");
	int fflush(FILE *stream);
	fflush(stdin);
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			gotuken();
			break;
		case 2:
			akova();
			break;
		case 3:
			borkara();
			break;
		case 4:
			dursa();
			break;
		case 5:
			dolu();
			break;
		case 6:
			kazarya();
			break;
		case 7:
			egrice();
			break;
		case 8:
			alova();
			break;
		case 9:
			bilmeyecik();
			break;
		case 10:
			oldsehir();
			break;
		case 11:
			balinaeser();
			break;
		case 12:
			boncukdag();
			break;
		case 97:
			akdevlet();
			break;
		case 99:
			mainimsi();
			break;
		default:
			printf("Seçtiðiniz þehir daha eklenmedi veya hatalý seçim yaptýnýz.\n\a");
			akililce();
			break;
		}
}
int gotuken()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Börekli\n");
	printf("2=Ðötüken\n");
	printf("3=Çörekli\n");
	printf("4=Kutulu\n");
	printf("5=Karayurt\n");
	printf("6=Hakhisar\n");
	int ak2;
	scanf("%d",&ak2);
	switch(ak2)
	{
		case 1:
			printf("0101=Börekli\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(ÐTT)\n");
			printf("Þehir içi ulaþým detayý     : Otobüs hatlarý ve metro mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: 3. Nesil altyapý mevcut.(500/50Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O1 Ðötüken-Akova Otoyolu\n");
			printf("Demiryolu Bilgisi           : T1 ve T2 ve þehir içi M1 VE M3 metrolarý\n");
			printf("Kaðýt Sayýsý                : 26\n");
			printf("Sanal Durum                 : Güncel\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0102=Ðötüken\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(ÐTT)\n");
			printf("Þehir içi ulaþým detayý     : Metro, metrobüs, ekspres ve otobüs hatlarý mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: 3. Nesil altyapý mevcut(1000/100 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O1 Ðötüken-Akova Otoyolu, O20 Ðötüken Çevreyolu\n");
			printf("Otoyol Bilgisi              : O5 Otoyolu(Çalýþmalar Baþladý)\n");
			printf("Demiryolu Bilgisi           : T1, M3, M6\n");
			printf("Planlanan Demiryollarý      : M7\n");
			printf("Kaðýt Sayýsý                : 133\n");
			printf("Sanal Durum                 : Ýnþa halinde\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("0103=Çörekli\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(ÐTT)\n");
			printf("Þehir içi ulaþým detayý     : Otobüs hatlarý mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: Tamamlandý(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : T2\n");
			printf("Kaðýt Sayýsý                : 9\n");
			printf("Sanal Durum                 : Ýnþa halinde\n");
			scanf("");
			akililce();
			break;
		case 4:
			printf("0104=Kutulu\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(ÐTT)\n");
			printf("Þehir içi ulaþým detayý     : Otobüs hatlarý mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: Tamamlandý(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O20 Ðötüken Çevreyolu\n");
			printf("Demiryolu Bilgisi           : Planlanýyor, M3\n");
			printf("Kaðýt Sayýsý                : 11\n");
			printf("Sanal Durum                 : Ýnþa halinde\n");
			scanf("");
			akililce();
			break;
		case 5:
			printf("0105=Karayurt\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Genelinde mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 12\n");
			printf("Sanal Durum                 : Ýnþa halinde\n");
			scanf("");
			akililce();
			break;
		case 6:
			printf("0106=Hakhisar\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(ÐTT)\n");
			printf("Þehir içi ulaþým detayý     : Otobüs hatlarý ve metro mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 8\n");
			printf("Sanal Durum                 : Ýnþa halinde\n");
			scanf("");
			akililce();
			break;
		default:
			akililce();
			break;
		}
}
int akova()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Karaþehir\n");
	printf("2=Akova-Merkez\n");
	printf("3=Bahçeciler\n");
	printf("4=Kaþýkça\n");
	printf("5=Demirköy\n");
	printf("6=Gecegören\n");
	printf("7=Zekitepe\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0201=Karaþehir\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut\n");
			printf("Þehir içi ulaþým detayý     : Otobüs mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: Tamamlandý(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O1 Ðötüken-Akova Çevreyolu\n");
			printf("Demiryolu Bilgisi           : T1\n");
			printf("Kaðýt Sayýsý                : 25\n");
			printf("Sanal Durum                 : Þehirlerarasý yolu yapýlýyor.\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0202=Akova\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(AKULAÞIM)\n");
			printf("Þehir içi ulaþým detayý     : Metro ve metrobüs mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: 3. Nesil altyapý Mevcut(1000/100Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O1, O30, O30A, O31, O32, O4\n");
			printf("Demiryolu Bilgisi           : M2 Metrosu, T1 planlanýyor.\n");
			printf("Planlanan Demiryollarý      : M9-M10-M11-M12\n");
			printf("Kaðýt Sayýsý                : 75\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("0203=Bahçeciler\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(AKULAÞIM)\n");
			printf("Þehir içi ulaþým detayý     : Metro mevcut.\n");
			printf("Fiber Altyapý Destek Bilgisi: Yaygýn(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O2, O30, O30B, O31, O32\n");
			printf("Demiryolu Bilgisi           : M2 Metrosu\n");
			printf("Kaðýt Sayýsý                : 19\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 4:
			printf("0204=Kaþýkça\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Genelde mevcut(200/30 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O4 Gargara Otoyolu\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 15\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 5:
			printf("0205=Demirköy\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut (200/30 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 10\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 6:
			printf("0206=Gecegören\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Kýsmi olarak mevcut (130/15 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 9\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 7:
			printf("0207=Zekitepe\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Veri yok\n");
			printf("Mobil Altyapý Bilgisi       : 5G kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 8\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
			}
}
int borkara()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Koyunören\n");
	printf("2=Eskimahalle\n");
	printf("3=Kursaklar\n");
	printf("4=Elmasdað\n");
	printf("5=Boypazarý\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0301=Koyunören\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Tamamlandý(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 17\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0302=Eskimahalle\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(Ulaþým ve Ýletiþim Bakanlýðý)\n");
			printf("Fiber Altyapý Destek Bilgisi: Kýsmen mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : T3\n");
			printf("Kaðýt Sayýsý                : 16\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("0303=Kursaklar\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(Ulaþým ve Ýletiþim Bakanlýðý)\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O4 Otoyolu\n");
			printf("Demiryolu Bilgisi           : T3\n");
			printf("Kaðýt Sayýsý                : 18\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 4:
			printf("0304=Elmasdað\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(Ulaþým ve Ýletiþim Bakanlýðý)\n");
			printf("Fiber Altyapý Destek Bilgisi: Genel olarak Mevcut(500/100Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : T3\n");
			printf("Kaðýt Sayýsý                : 11\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 5:
			printf("0305=Boypazarý\n");
			printf("Tamamlanma Durumu           : 100 Tamamlandý\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 13\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
			}
}
int dursa()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Dursa(Merkez)\n");
	printf("2=Ýnedeniz\n");
	printf("3=Keremgazi\n");
	printf("4=Demlik\n");
	printf("5=Mustafakemalpaþa\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0401=Dursa\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil ancak planlanýyor\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(1000/100Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : O4 Otoyolu, O40 Dursa Çevreyolu(P)\n");
			printf("Demiryolu Bilgisi           : T4 M8 planlanýyor...\n");
			printf("Kaðýt Sayýsý                : 38\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0402=Ýnedeniz\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 10\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("0403=Keremgazi\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Kýsmen mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Yok.\n");
			printf("Demiryolu Bilgisi           : T4\n");
			printf("Kaðýt Sayýsý                : 18\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 4:
			printf("0404=Demlik\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : T4\n");
			printf("Kaðýt Sayýsý                : 11\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		case 5:
			printf("0405=Mustafakemalpaþa\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(500/50Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : T4\n");
			printf("Kaðýt Sayýsý                : 12\n");
			printf("Sanal Durum                 : Bilgi Yok\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int dolu()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Dolu(Merkez)\n");
	printf("2=Nerede\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0501=Dolu\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Kýsmi olarak mevcut(130/15Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : O5 Otoyolu(Üzerinde çalýþýlýyor)\n");
			printf("Kaðýt Sayýsý                : 11\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0502=Nerede\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 12\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int kazarya()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Kazarya(Merkez)\n");
	printf("2=Yayca\n");
	printf("3=Karayazý\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0601=Kazarya\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Veri yok\n");
			printf("Mobil Altyapý Bilgisi       : Veri yok\n");
			printf("Otoyol Bilgisi              : O5 Otoyolu(P)\n");
			printf("Kaðýt Sayýsý                : 5\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0602=Yayca\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Veri yok\n");
			printf("Mobil Altyapý Bilgisi       : Veri yok\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Kaðýt Sayýsý                : 3\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("0603=Karayazý\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Veri yok\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE mevcut\n");
			printf("Otoyol Bilgisi              : Yok.\n");
			printf("Kaðýt Sayýsý                : Veri yok\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}		
	
}
int egrice()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Eðrice(Merkez)\n");
	printf("2=Kaynaþsýz\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0701=Eðrice\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Bilgi Yok.\n");
			printf("Demiryolu Bilgisi           : M5 planlanýyor...\n");
			printf("Kaðýt Sayýsý                : 13\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0702=Kaynaþsýz\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 12\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int alova()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Alova(Merkez)\n");
	printf("2=Elmalý\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0801=Alova\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Bilgi Yok.\n");
			printf("Kaðýt Sayýsý                : 11\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0802=Elmalý\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 12\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int bilmeyecik()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Bilmeyecik(Merkez)\n");
	printf("2=Hamzaeli\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("0901=Bilmeyecik\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Bilgi Yok\n");
			printf("Kaðýt Sayýsý                : 11\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("0902=Hamzaeli\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 12\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int oldsehir()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Oldþehir(Merkez)\n");
	printf("2=Ýnzik\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("1001=Oldþehir\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut(OLDUL)\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Metro mevcut veya inþa halinde.(M4)\n");
			printf("Kaðýt Sayýsý                : 14\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("1002=Ýnzik\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 9\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int balinaeser()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Daldýrma\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("1101=Daldýrma\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Altyapý mevcut(500/100 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Planlý yok\n");
			printf("Kaðýt Sayýsý                : 11\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int boncukdag()
{
	silge(1);
	saat();
	nofbar();
	printf("Ýlçeler\n");
	printf("1=Boncukdað(Merkez)\n");
	printf("2=Thorluk\n");
	printf("3=Hayrandolu\n");
	printf("4=Nalkara\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("1201=Boncukdað\n");
			printf("Tamamlanma Durumu           : 65\n");
			printf("Þehir içi ulaþým bilgisi    : Metrobüs planlanýyor.\n");
			printf("Fiber Altyapý Destek Bilgisi: Kýsmi olarak mevcut(200/30 Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : O2 Otoyolu(P), O2A\n");
			printf("Kaðýt Sayýsý                : 9\n");
			scanf("");
			akililce();
			break;
		case 2:
			printf("1202=Thorluk\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 8\n");
			scanf("");
			akililce();
			break;
		case 3:
			printf("1203=Hayrandolu\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 8\n");
			scanf("");
			akililce();
			break;
		case 4:
			printf("1204=Nalkara\n");
			printf("Tamamlanma Durumu           : 100\n");
			printf("Þehir içi ulaþým bilgisi    : Mevcut deðil\n");
			printf("Fiber Altyapý Destek Bilgisi: Mevcut(200/30Mbps)\n");
			printf("Mobil Altyapý Bilgisi       : 5G ve LTE kapsama alaný kýsmen mevcut\n");
			printf("Otoyol Bilgisi              : Mevcut ve planlý otoyol yok.\n");
			printf("Demiryolu Bilgisi           : Bilgi yok.\n");
			printf("Kaðýt Sayýsý                : 8\n");
			scanf("");
			akililce();
			break;
		default:
			hata();
			akililce();
			break;
	}
}
int vergilendirme()
{
	silge(1);
	saat();
	nofbar();
	printf("AK CUMHURÝYETÝ Maliye ve Ekonomi Bakanlýðý\n");
	printf("Gelir ve Vergi Ýzleme (GEVÝ) Baþkanlýðý\n");
	printf("Burada verileriniz koruma altýndadýr.\n");
	printf("1=Bireysel Giriþ\n");
	printf("2=Yönetici Giriþi\n");
	navbar();
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("5 haneli numaranýzý giriniz: \n");
			int b;
			scanf("%d",&b);
			switch(b)
			{
				case 21002:
					onay=1;
					ak2(1);
					break;
				case 21016:
					onay=1;
					ak16(1);
					break;
				case 21023:
					onay=1;
					ak23(1);
					break;
				case 21028:
					onay=1;
					ak28(1);
					break;
				case 21031:
					onay=1;
					ak31(1);
					break;
				case 21032:
					onay=1;
					ak32(1);
					break;
				case 21038:
					onay=1;
					ak38(1);
					break;
				case 21048:
					onay=1;
					ak48(1);
					break;
				case 21051:
					onay=1;
					ak51(1);
					break;
				case 21054:
					onay=1;
					ak54(1);
					break;
				case 21056:
					onay=1;
					ak56(1);
					break;	
				case 21058:
					onay=1;
					ak58(1);
				case 21059:
					onay=1;
					ak59(1);
					break;
				case 21062:
					onay=1;
					ak62(1);
					break;
				case 21064:
					onay=1;
					ak64(1);
					break;
				case 21067:
					onay=1;
					ak67(1);
					break;
				case 21071:
					onay=1;
					ak71(1);
					break;
				case 21074:
					onay=1;
					ak74(1);
					break;
				case 21075:
					onay=1;
					ak75(1);
					break;
				case 21076:
					onay=1;
					ak76(1);
					break;
				case 21079:
					onay=1;
					ak79(1);
					break;
				case 21084:
					onay=1;
					ak84(1);
					break;
				case 21093:
					onay=1;
					ak93(1);
					break;
				case 21096:
					onay=1;
					ak96(1);
					break;
				case 21097:
					onay=1;
					ak97(1);
					break;
				case 21099:
					onay=1;
					ak99(1);
					break;
				case 21109:
					onay=1;
					ak109(1);
					break;
				case 21116:
					onay=1;
					ak116(1);
					break;
				case 21121:
					onay=1;
					ak121(1);
					break;
				case 21140:
					onay=1;
					ak140(1);
					break;
				case 7:
					akdevlet();
					break;
				case 8:
					quicktr();
					break;
				case 9:
					mainimsi();
					break;
				default:
					printf("Lütfen Okul Numaranýzý baþýndaki 21 ile yazýnýz.(21xxx)\a\n");
					vergilendirme();
					break;
			}
			break;
		case 2:
			printf("Yönetici kodunu girin: ");
			onay=0;
			long long int a;
			scanf("%u",&a);
			if (a=112233445566889900)
			{
				printf("Baþarýlý\n");
				printf("1=Toplam Gelir\n");
				printf("2=Hediye\n");
				printf("3=Arsa Sayýsý(Kaldýrýldý)\n");
				printf("4=EDV\n");
				printf("5=FMV\n");
				printf("6=Giderleriniz\n");
				printf("7=Net Gelir\n");
				printf("No        1     2    3     4    5    6      7\n");
				ak2(1);
				ak16(1);
				ak23(1);
				ak28(1);
				ak31(1);
				ak32(1);
				ak38(1);
				ak48(1);
				ak51(1);
				ak54(1);
				ak56(1);
				ak58(1);
				ak59(1);
				ak62(1);
				ak64(1);
				ak67(1);
				ak71(1);
				ak74(1);
				ak75(1);
				ak76(1);
				ak79(1);
				ak84(1);
				ak93(1);
				ak96(1);
				ak97(1);
				ak99(1);
				ak109(1);
				ak116(1);
				ak121(1);
				ak140(1);
				printf("---------------------------------------------------------------\n\n");
				vergilendirme();	
			}				
			else 
			{
				printf("Baþarýsýz, uygulama güvelik amacýyla kapatýlýyor...\a\n");
				mainimsi();
				break;
			}
			break;
		case 7:
			akdevlet();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("Hatalý seçim, güvenlik amaçlý uygulama kapanýyor...\a\n");
			mainimsi();
			break;
	}
}
int akyonetim()
{
	silge(1);
	saat();
	nofbar();
	printf("AK Cumhurbaþkanlýk Kayýt Arþivi ve\n");
	printf("AK Ýçiþleri Bakanlýðý taraflarýndan saðlanan verilerle hazýrlanmýþtýr.\n");
	printf("Hükümetler ve Baþlýca Yapýlanlar-------------------------\n");
	printf("Kuruluþ Dönemi(1-)\n");
	printf("Mevcut Dönem: 4. AK Hükümeti\n");
	printf("Baþlangýç Tarihi: Eylül 2024\n");
	printf("Bitiþ Tarihi    :  Mart 2024(Uzatýlmýþ: Nisan 2024)\n");
	printf("Dönem Numarasýný girin: \n");
	printf("Örnek: 1\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("1.AK HÜKÜMETÝ\n");
			printf("Süresi       :04.2022-07.2022(Uzatýlmýþ: 10.2022)\n");
			printf("Cumhurbaþkaný: Arda Yürekli\n");
			printf("Yardýmcýlarý : Kerem Doðan, Mazhar Hamza Özden\n");
			printf("Ýcraatlarý:\n");
			printf("-Ðötüken Devlet Hastanesi\n");
			printf("-T-1 Demiryolu Hattý\n");
			printf("-Börekli Devlet Hastanesi Tünelli Kavþaðý\n");
			printf("-O-1 Börekli-Börekli OSB Otoyolu\n");
			printf("-Börekli Metrosu\n");
			printf("-AKSARAY\n");
			printf("-2022 Anayasasý\n");
			printf("-AKSAN\n");
			printf("-Karaþehir Devlet Hastanesi\n");
			printf("-Karaþehir Kavþaðý\n");
			printf("-Yenilenen Börekli OSB\n");
			printf("-Karaþehir Köprülü Kavþaðý\n");
			printf("-Yeni Ðötüken Fiber Altyapýsý\n");
			printf("-Akova Köprülü Kavþaðý\n");
			printf("-Börekli Fiber Altyapýsý\n");
			printf("-Akova Metrosu\n");
			printf("-Karaþehir Fiber Altyapýsý\n");
			printf("-Ýþleyen Kavþaðý\n");
			printf("-O-1 Karaþehir-Börekli Otoyolu\n");
			printf("-Saðlýk Ocaklarý\n");
			printf("-Hak Meydaný\n");
			printf("-Akova Altyapýsý\n");
			printf("-Aðaçlýk Bulvarý\n");
			printf("-Geniþletilmiþ Börekli-Ðötüken Yolu(D100)\n");
			printf("-Koyunören Fiber Altyapýsý\n");
			printf("-Ðötüken Fen Lisesi\n");
			printf("-Ðötüken Üniversitesi\n");
			printf("-Üniversiteye özel altyapý\n");
			printf("-Akova Þehir Hastanesi\n");
			printf("-O-1 Karaþehir-Akova Otoyolu\n");
			printf("-Börekli Karaþehir Alternatif Yolu\n");
			printf("-Yeni Ekonomi Yasasý ve Vergiler\n");
			printf("-Yeni ve büyük Börekl Devlet Hastanesi\n");
			printf("-Akova Ýþleyen Caddesi\n");
			printf("-Akova Çevreyolu\n");
			printf("-Ðötüken Çevreyolu\n");
			printf("-Akova Köprüsü\n");
			akyonetim();
			break;
		case 2:
			printf("2. AK Hükümeti(10.2022-03.2023)\n");
			printf("Cumhurbaþkaný: Arda Yürekli\n");
			printf("Yardýmcýlarý : Mazhar Hamza Özden\n");
			printf("Ðötüken      : Arda Yürekli\n");
			printf("Akova        : Kerem Doðan\n");
			printf("Borkara      : Ahmed Zafer Erayman\n");
			printf("Dolu         : Mustafa Batmaz\n");
			printf("Ýcraatlarý:\n");
			printf("-Börekli arþivlendi.\n");
			printf("-O4 Otoyolu temeli atýldý.\n");
			printf("-Ðötüken Þehir Hastanesi\n");
			printf("-O31 Akova 2. Çevreyolu\n");
			printf("-Büyük faiz indirimleri\n");
			printf("-Ýlk tamamlanan ilçeler\n");
			printf("-2023 Kitapçýklarý\n");
			printf("-Arda Yürekli Üniversitesi\n");
			printf("-Hak Merkez\n");
			printf("-Doðan Güneþ Tiyarosu\n");
			printf("-Ðötüken(Merkez) tamamlandý.\n");
			printf("-Hakhisar Devlet Hastanesi\n");
			printf("-800 Yataklý Boypazarý Devlet Hastanesi\n");
			printf("-Hakhisar Stadyumu\n");
			printf("-Ðötüken Tamamen tamamlandý.\n");
			printf("-Akova Tüneli O32 yapýldý.\n");
			printf("2023\n");
			printf("-HakTelekom merkez binasý yapýldý.\n");
			printf("-KarSAT 1A uydusu fýrlatýldý.\n");
			printf("-Tüpütak ARGE merkezi ve genel binasý yapýldý.\n");
			printf("-Ðötüken Adalet Sarayý yapýldý.\n");
			printf("-Millet Kýraathaneleri yapýlmaya baþlandý.\n");
			printf("-Ýlçe Gençlik Merkezleri yaygýnlaþtýrýldý.\n");
			printf("-Ðötüken Eðitim ve Araþtýrma Hastanesi yapýldý.\n");
			printf("-Mart 2022 de planlanan 36 vilayet baþlangýcý Ocak 2023'te tamamlandý.\n");
			printf("-Ðötüken Þehir Hastanesi yapýldý.\n");
			printf("-Ðötüken Havalimaný yapýldý.\n");
			printf("-600 yataklý Bahçeçiler Devlet Hastanesi yapýldý.\n");
			printf("-Kadir Özdemir Eðitim ve Araþtýrma Hastanesi yapýldý.\n");
			printf("-Tüpütak kuruldu.\n");
			printf("-DEPEN, Yerel Afet Yönetim binalarý yaygýnlaþtýrýldý.\n");
			printf("-O4 Gargara Otoyolu Etap-1 tamamlandý.\n");
			printf("-Güvenli evler yapýlmaya baþlandý.\n");
			printf("-MKA Köprüsü yapýldý.\n");
			printf("-Ülkenin en büyüðü Bahçeciler OSB hizmete girdi.\n");
			akyonetim();
			break;
		case 3:
			printf("3. AK Hükümeti(03.23-09.23)\n");
			printf("Cumhurbaþkaný: Arda Yürekli\n");
			printf("Yardýmcýlarý : Kerem Doðan\n");
			printf("Ana Baþkan   : Mazhar Hamza Özden\n");
			printf("icraatlarý;\n");
			printf("-Borkara tamamlandý.\n");
			printf("-Zamana yetiþme düþüþe geçirildi.\n");
			printf("-Çörekli Barajý yapýldý.\n");
			printf("-O4 Otoyolu 2. ve 4. etap hizmete baþladý.\n");
			printf("-Þimdiye kadarki en büyük 2. OSB, Nerede OSB yapýldý.\n");
			printf("-Ýnedeniz OSB yapýldý.\n");
			printf("-Gargara-2 bölgesine baþlandý.\n");
			printf("-Gargara-1 ve 36 ilçesi tamamlandý.\n");
			printf("-O2 Akrupa Otoyolu inþasý baþladý.\n");
			printf("-Sýnýr kapýsý inþa edildi.\n");
			printf("-Gargara-2 Bölgesinde 20 ilçe tamamlandý.\n");
			printf("-O2 Otoyolu için þehir giriþ çýkýþlarý inþa edildi.\n");
			printf("-Yeni ve modern OSB'ler tasarlandý ve bir kýsmý inþa edildi.\n");
			printf("-Bazý devlet þirketleri özelleþtirildi.\n");
			akyonetim();
			break;
		case 4:
			printf("4. AK Hükümeti(09.23-04.24)\n");
			printf("Cumhurbaþkaný: Arda Yürekli\n");
			printf("Yardýmcýlarý : Ahmed Zafer Erayman, Mazhar Hamza Özden, Mustafa Batmaz\n");
			printf("Ana Baþkan   : Kerem Doðan\n");
			printf("Ýcraatlarý;\n");
			printf("-HayraSU hizmete geçirildi.\n");
			printf("-Yeni yasalar oluþturuldu.\n");
			printf("-AB üye adayý olundu.\n");
			printf("-AB üyelik fasýllarý baþlatýldý.\n");
			printf("-1 fasýl tamamlandý ve kapatýldý.\n");
			printf("-Kalkýnma temelli ekonomi için adýmlar atýldý.\n");
			printf("-Þehirler tamamlanýyor.\n");
			printf("-O2A Otoyolu yapýlýyor.\n");
			printf("-O4 Otoyolu tamamlandý.\n");
			printf("-T4 Hattý 1. etap tamamlandý.\n");
			printf("-T1 hattý Karaþehir'e uzatýldý.\n");
			printf("-Ülkenin en büyük OSB: Yedirme OSB\n");
			printf("-10'dan fazla metro hattý projesi\n");
			printf("-Ðötüken R1 Þehir Hastanesi-Hak Merkez Metrobüs Hattý\n");
			printf("-AB üyeliði 3 fasýl tamamlandý.\n");
			printf("-AB Baþkanlýðý kuruldu.\n");
			printf("-M6 Ðötüken Metrosu\n");
			printf("-Bankýr Bulvarý Akova'ya yapýldý.\n");
			
			akyonetim();
			break;			
		case 7:
			akdevlet();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			akyonetim();
			break;
	}
}
int vatandasbilgi()
{
	silge(1);
	saat();
	nofbar();
	printf("Vatandaþ Bilgi Merkezi-------------------------------\n");
	printf("1=Bireysel Giriþ\n");
	printf("2=Yönetici Giriþi\n");
	int ak;
	scanf("%d",&ak);
	switch(ak)
	{
		case 1:
			printf("5 haneli numaranýzý giriniz: \n");
			int b;
			scanf("%d",&b);
			switch(b)
			{
				case 21002:
					yonet=1;
					ak2(2);
					break;
				case 21016:
					yonet=1;
					ak16(2);
					break;
				case 21023:
					yonet=1;
					ak23(2);
					break;
				case 21028:
					yonet=1;
					ak28(2);
					break;
				case 21031:
					yonet=1;
					ak31(2);
					break;
				case 21032:
					yonet=1;
					ak32(2);
					break;
				case 21038:
					yonet=1;
					ak38(2);
					break;
				case 21048:
					yonet=1;
					ak48(2);
					break;
				case 21051:
					yonet=1;
					ak51(2);
					break;
				case 21054:
					yonet=1;
					ak54(2);
					break;
				case 21056:
					yonet=1;
					ak56(2);
					break;	
				case 21058:
					yonet=1;
					ak58(2);
				case 21059:
					yonet=1;
					ak59(2);
					break;
				case 21062:
					yonet=1;
					ak62(2);
					break;
				case 21064:
					yonet=1;
					ak64(2);
					break;
				case 21067:
					yonet=1;
					ak67(2);
					break;
				case 21071:
					yonet=1;
					ak71(2);
					break;
				case 21074:
					yonet=1;
					ak74(2);
					break;
				case 21075:
					yonet=1;
					ak75(2);
					break;
				case 21076:
					yonet=1;
					ak76(2);
					break;
				case 21079:
					yonet=1;
					ak79(2);
					break;
				case 21084:
					yonet=1;
					ak84(2);
					break;
				case 21093:
					yonet=1;
					ak93(2);
					break;
				case 21096:
					yonet=1;
					ak96(2);
					break;
				case 21097:
					yonet=1;
					ak97(2);
					break;
				case 21099:
					yonet=1;
					ak99(2);
					break;
				case 21109:
					yonet=1;
					ak109(2);
					break;
				case 21116:
					yonet=1;
					ak116(2);
					break;
				case 21121:
					yonet=1;
					ak121(2);
					break;
				case 21140:
					yonet=1;
					ak140(2);
					break;
				case 7:
					akdevlet();
					break;
				case 8:
					quicktr();
					break;
				case 9:
					mainimsi();
					break;
				default:
					printf("Lütfen Okul Numaranýzý baþýndaki 21 ile yazýnýz.(21xxx)\a\n");
					vergilendirme();
					break;
			}
			break;
		case 2:
			printf("Yönetici kodunu girin: ");
			yonet=0;
			long long int a;
			scanf("%u",&a);
			if (a=112233445566889900)
			{
				ak2(2);
				ak16(2);
				ak23(2);
				ak28(2);
				ak31(2);
				ak32(2);
				ak38(2);
				ak48(2);
				ak51(2);
				ak54(2);
				ak56(2);
				ak58(2);
				ak59(2);
				ak62(2);
				ak64(2);
				ak67(2);
				ak71(2);
				ak74(2);
				ak75(2);
				ak76(2);
				ak79(2);
				ak84(2);
				ak93(2);
				ak96(2);
				ak97(2);
				ak99(2);
				ak109(2);
				ak116(2);
				ak121(2);
				ak140(2);
				printf("---------------------------------------------------------------\n\n");
				vergilendirme();	
			}				
			else 
			{
				printf("Baþarýsýz, uygulama güvelik amacýyla kapatýlýyor...\a\n");
				mainimsi();
				break;
			}
			break;
		case 7:
			akdevlet();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("Hatalý seçim, güvenlik amaçlý uygulama kapanýyor...\a\n");
			mainimsi();
			break;
	}
}
int akhakkinda()
{
	saat();
	printf("Resmi AK CUMHURÝYETÝ DEVLETÝ bilgi uygulamasýdýr.\n");
	printf("Hazýrlayan: AK Cumhurbaþkanlýðý Teknoloji Baþkanlýðý\n");
	printf("Katkýda bulunanlar: KarSoft, 2024\n");
	printf("Vatandaþ verileri hazýrlanýrken ve eklenirken veriler Ýçiþleri Bakanlýðý tarafýndan verilmiþ ve hazýrlanmýþ olup\n");
	printf("kiþisel veriler KarSoft ile paylaþýlmamýþtýr.\n");
	printf("Burada bulunan gelir ve normal veriler depolanmaz, sadece gösterilir.\n");
	printf("Siz dýþýnda kimse eriþemez.\n");
	printf("Sürüm: 3.3\n");
	akdevlet();
}
int ak2(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21002=09000  0300  1300  0900  0000  1700  6300\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Ahmed! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2   0    4     5     6      7\n");
			printf("21002=09000  0300  1300  0900  0000  1700  6300\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Ahmed Kebap Salonlarý\n");
			printf("2=Cumhurbaþkanlýðý Yardýmcýlýðý\n");
			printf("Hediye Bilgisi:\n");
			printf("1=Cumhurbaþkanýnýn gönlünden koptu.\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21002=A272E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 07.02.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}
	
}
int ak16(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21016=23000  0000  5500  2300  2000  4500  13000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Arda! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2   3    4     5     6      7\n");
			printf("21016=23000  0000  5500  2300  2000  4500  13000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Cumhurbaþkaný= 7.000 \n");
			printf("2=ArBANK       = 9.000 \n");
			printf("3=ArPet        = 7.000 \n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21016=A612E1\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 11.02.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}	
}
int ak23(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21023=08500  0000  1500  0900  1000  2000  5000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Berat! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2   3    4     5     6      7\n");
			printf("21023=08500  0000  1500  0900  1000  2000  5000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Berat Otel\n");
			printf("2=\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21023=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
int ak28(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21028=04000  2500  0600  0200  0000  1200  4700\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Dilara! 2023 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3     4     5     6     7\n");
			printf("21028=04000  2500  0600  0200  0000  1200  4700\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Güldal Çiçekçilik\n");
			printf("2=\n");
			printf("Hediye Bilgisi:\n");
			printf("1=Cumhurbaþkaný hocalýðý\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21028=D803K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 30.03.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Amasya\n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
int ak31(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21031=09000  0000  1300  0900  0000  2200  6500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Ece! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21031=09000  0000  1300  0900  0000  2200  6500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Ecenazeler\n");
			printf("2=\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21031=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak32(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21032=06000  0000  0800  0500  0000  1700  3500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Ecrin! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2    3    4     5     6      7\n");
			printf("21032=06000  0000  0800  0500  0000  1700  3500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Boks Salonu\n");
			printf("2=\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21032=E232K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 13.12.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak38(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21038=06000  2000  0800  0500  0000  1300  5900\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Elif! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2   0    4     5     6      7\n");
			printf("21038=06000  2000  0800  0500  0000  1300  5900\n");
			printf("Kazançlarýnýz:\n");	
			printf("1=Bilim Evi\n");
			printf("2=\n");
			printf("Hediye Bilgisi:\n");
			printf("1=Eðitim Bakanlýðý Bilimi Yayma Desteði=750\n");
			printf("2=Tüpütak Bilim Desteði=1250\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21038=E875K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 07.05.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
ak48(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21048=02800  0300  0200  0000  0000  1000  1900\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Furkan! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21048=02800  0300  0200  0000  0000  1000  1900\n");
			printf("Kazançlarýnýz:\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21048=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			vatandasbilgi();
		}
	}
}
ak51(int x)
{
	if(x==1)
	{
			if(onay==0)
		{
			printf("21051=10000  0000  1500  1000  0000  3000  5500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Melih! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21051=10000  0000  1500  1000  0000  3000  5500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=PS Cafe\n");
			printf("2=Stadyum\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21051=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			vatandasbilgi();
		}
	}
}
ak54(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21054=09000  0000  1000  0800  0200  3500  4500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Eray! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2    3    4     5     6      7\n");
			printf("21054=09000  0000  1000  0800  0200  3500  4500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Eray Fýrýn\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21054=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
ak56(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21056=07000  0000  0800  0500  0000  2000  4200\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Selim! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam VERgi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21056=07000  0000  0800  0500  0000  2000  4200\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Selim Ormaný\n");
			printf("2=Helvacý\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21056=I634E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 23.04.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}	
}		
ak58(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21058=08000  0000  1200  0500  0000  2000  4300\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Ýpek! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21058=08000  0000  1200  0500  0000  2000  4300\n");
			printf("Kazançlarýnýz:\n");
			printf("1=AGEV\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21058=I821K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 22.11.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Ordu\n");
			printf("Ýkamet Yeri : Afyonkarahisar\n");
			yonet=0;
			vatandasbilgi();
		}
	}	
}
ak59(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21059=08000  0000  0800  0500  0000  2000  5200\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Ýrem! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2    3    4     5     6      7\n");
			printf("21059=08000  0000  0800  0500  0000  2000  5200\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Ýrem AVM\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21059=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			vatandasbilgi();
		}
	}		
}
ak62(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21062=05000  0000  0500  0200  0000  1500  3000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Kadir! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2    3     4     5     6      7\n");
			printf("21062=05000  0000  0500  0200  0000  1500  3000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Doktorluk ve Hocalýk\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21062=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			yonet=0;
			vatandasbilgi();
		}
	}		
}
int ak64(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21064=12000  0000  3800  1200  2000  3200  5000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Kerem! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21064=12000  0000  3800  1200  2000  3200  5000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Akova Belediyesi\n");
			printf("2=Cumhurbaþkanlýðý Yardýmcýlýðý\n");
			printf("3=KarSoft\n");
			printf("4=Doðan Ýnþaat\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21064=K427E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 22.07.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
	
	
}
int ak67(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21067=13000  0000  3000  1300  1200  5000  5000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Hamza! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3   4     5     6      7\n");
			printf("21067=13000  0000  3000  1300  1200  5000  5000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Hamza Sinema\n");
			printf("2=Cumhurbaþkanlýðý Yardýmcýlýðý\n");
			printf("3=Ýnternet Kafe\n");
			printf("4=Çevrimiçi oyun servisleri\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21067=H727E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 02.07.2008\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak71(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21071=09000  0000  1500  0900  0000  2000  5500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Efe! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2    3    4     5     6      7\n");
			printf("21071=09000  0000  1500  0900  0000  2000  5500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Spor Salonu\n");
			onay=0;
			vergilendirme();
		}
		}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21071=M113E1\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 01.03.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Mersin\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}	
}
ak74(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21074=10000  0000  2000  1000  0000  3500  4500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Melek! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21074=10000  0000  2000  1000  0000  3500  4500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Melek-Su Kahveci\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21074=M452K2\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 05.08.2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak75(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21075=08000  0000  0700  0500  0000  2200  5000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Meral! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21075=08000  0000  0700  0500  0000  2200  5000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Meralopter\n");
			onay=0;
			vergilendirme();
		}	
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21075=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: ..2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak76(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21076=06500  0000  1000  0500  0000  2000  3500\n");
		}
		else if(onay==1)
		{
			printf("Kiþi isteði sebebiyle bireysel eriþim kapalýdýr.\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21076=XXXXXX\n");
		}
		else if(yonet==1)
		{
			printf("Kiþi isteði sebebiyle bireysel eriþim kapalýdýr.\n");
			vatandasbilgi();
		}
	}	
}
ak79(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21079=10000  0000  2000  1000  0700  2500  5500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Mýsta! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21079=10000  0000  2000  1000  0700  2500  5500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Ýþsiz Mühendislik\n");
			printf("2=Cumhurbaþkanlýðý Yardýmcýlýðý\n");
			printf("3=Dernek\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21079=M990E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 09.10.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak84(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21084=09500  0000  2500  0900  1100  3000  4000\n");
		}
		else if(onay==1)
		{
			printf("Kiþi isteði sebebiyle bireysel eriþim kapalýdýr.\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21084=XXXXXX\n");
		}
		else if(yonet==1)
		{
			printf("Kiþi isteði sebebiyle bireysel eriþim kapalýdýr.\n");
			vatandasbilgi();
		}
	}	
}
ak93(int x)
{
	if(x==1)
	{
			if(onay==0)
		{
			printf("21093=02800  0300  0200  0000  0000  1100  1800\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Özge! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21093=02800  0300  0200  0000  0000  1100  1800\n");
			printf("Kazançlarýnýz:\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21093=Ö322K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 22.02.2008\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
ak97(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21097=06000  0000  0500  0200  0000  2200  3300\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Sena! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21097=06000  0000  0500  0200  0000  2200  3300\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Sena Bakkal\n");
			printf("2=Sena Pastanesi\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21097=S703K0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 21.03.2008\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : Yozgat\n");
			printf("Ýkamet Yeri : Yozgat\n");
			vatandasbilgi();
		}
	}	
}
ak96(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21096=10000  0000  1600  1000  0000  2800  5600\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Selin! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21096=10000  0000  1600  1000  0000  2800  5600\n");
			printf("Kazançlarýnýz:\n");
			printf("1=SELDER\n");
			printf("2=Düðün Salonu\n");
			printf("3=Kiraz Kýrtasiye\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21096=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 18.05.2008\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
int ak99(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21099=02800  3000  0600  0200  0000  1200  4000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Serhat! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21099=02800  3000  0600  0200  0000  1200  4000\n");
			printf("Kazançlarýnýz:\n");
			printf("Hediye Bilgisi:\n");
			printf("Sanat Katkýsý\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21099=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 0.0.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
	
}
int ak109(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21109=08000  0000  0900  0500  0000  1400  5500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Yunus! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21109=08000  0000  0900  0500  0000  1400  5500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=LDP\n");
			onay=0;
			vergilendirme();
		}
	}	
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21109=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 12.11.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ankara\n");
			vatandasbilgi();
		}
	}
}
int ak116(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21116=05500  0000  0500  0200  0000  1500  3500\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Zeynep! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=Kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21116=05500  0000  0500  0200  0000  1500  3500\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Tanyýldýzý Kýraathanesi\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21116=\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: ..2007\n");
			printf("Cinsiyet    : Kýz\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : \n");
			yonet=0;
			vatandasbilgi();
		}
	}	
}
int ak121(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21121=08000  0000  1200  0500  0000  2800  4000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Yusuf! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21121=08000  0000  1200  0500  0000  2800  4000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=Yusuf BerBer\n");
			printf("2=BerBoks     \n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21121=Y166E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 06.06.2007\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : \n");
			printf("Ýkamet Yeri : Ýstanbul\n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
int ak140(int x)
{
	if(x==1)
	{
		if(onay==0)
		{
			printf("21140=09000  0000  2000  0900  0300  3000  4000\n");
		}
		else if(onay==1)
		{
			printf("Merhaba, Faruk! 2024 yýlý için vergi hesaplamalarý aþaðýdadýr.\n");
			printf("1=Toplam Gelir\n");
			printf("2=Hediye\n");
			printf("3=kesilen Toplam Vergi\n");
			printf("4=EDV\n");
			printf("5=GÝV\n");
			printf("6=Giderleriniz\n");
			printf("7=Net Gelir\n");
			printf("No        1    2     3    4     5     6      7\n");
			printf("21140=09000  0000  2000  0900  0300  3000  4000\n");
			printf("Kazançlarýnýz:\n");
			printf("1=DEToplon\n");
			onay=0;
			vergilendirme();
		}
	}
	else if(x==2)
	{
		if(yonet==0)
		{
			printf("21140=F051E0\n");
		}
		else if(yonet==1)
		{
			printf("Bu veriler kiþisel verilerin korunmasý ýþýðýnda gizlidir, kiþi ad soyadý gözükmeyecektir.\n");
			printf("Doðum Tarihi: 15.11.2006\n");
			printf("Cinsiyet    : Erkek\n");
			printf("Doðum Yeri  : Ankara\n");
			printf("Ýkamet Yeri : Ankara\n");
			yonet=0;
			vatandasbilgi();
		}
	}
}
//Gtt
gttt1()
{
	silge(1);
	saat();
	nofbar();
	printf("Ðötüken Toplu Taþýma Uygulamasý\n");
	printf("Uygulama sürümü   : 3.0\n");
	printf("Güncellenme tarihi: 30.03.2024\n");
	printf("Yapýmcý           : GBB\n");
	printf("Bu uygulama en iyi KarOS 3.5 üzerinde çalýþýr.\n");
	printf("Açýklama---------------------\n");
	printf("Ðötüken ve ilçelerinde otobüs, metro ve metrobüs hatlarýný öðrenin.\n");
	printf("Yenilikler:\n");
	printf("-Yeni hatlar eklendi.\n");
	printf("-Tasarýmda iyileþmeler yapýldý.\n");
	printf("-Son Durum eklendi.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 2.5 ve üzeri\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(gtt0==0)
				{
					printf("Eriþim engellendi.\n");
					appstr();
				}
				else if(gtt0==1)
				{
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					gtt2=1;
					gtt();
				}
				break;
			case 2:
				if(gtt2==1)
				{
					if(home==1)
					{
						gtt1=2;
						printf("Ana Ekrana eklendi.\n");
						gttt1();
					}
					else
					{
						gtt1=1;
						printf("Ana Ekrana eklendi.\n");
						gttt1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					gttt1();
				}
				break;
			case 3:
				gtt2=1;
				printf("Uygulama hesabýnýza eklendi.\n");
				gttt1();
			case 7:
				protr();
				break;
			case 8:
				quicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				gttt1();
				break;	
		}	
		
	}
	else
	{
		hata();
		gttt1();
	}
}
gtt()
{
	silge(1);
	saat();
	nofbar();
	printf("Ðötüken Durum--------------------\n");
	printf("Yol Durumu:\n");
	printf("-AKSaray arkasýndaki bulvarda metrobüs yolu çalýþmasý\n");
	printf("-Börekli'de doðalgaz boru hattý döþeniyor.\n");
	printf("ÐTT-Ðötüken Toplu Taþýma Uygulamasý\n");
	printf("1=Otobüs Hatlarý\n");
	printf("2=Metro Hatlarý\n");
	printf("3=Metrobüs Hatlarý\n");
	printf("4=Duraklar\n");
	printf("3=Filtreye göre bulma(Yakýnda)\n");
	printf("6=Bilgi\n");
	navbar();
	int g;
	scanf("%d",&g);
	switch(g)
	{
		case 1:
			gtthatlar();
			break;
		case 2:
			gttmetro();
			gtt();
			break;
		case 3:
			gtt();
			//gttara();
			break;
		case 4:
			gttdurak();
			break;
		case 6:
			gttinfo();
			break;
		case 7:
			appstr();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			gtt();
			break;
	}
}
gtthatlar()
{
	silge(1);
	saat();
	nofbar();
	printf("Otobüs Hatlarý:\n");
	printf("NOT=Ðötüken Merkez için otobüs hatlarý çalýþmalarý sürüyor.\n");
	printf("Börekli---------------------\n");
	printf("101- BAL-AGEV-Stadyum\n");
	printf("Duraklarý: 010101-010103-010105-010107-010109-010111-010113-\n010114-010112-010110-010108-010106-010104-010102\n");
	printf("102- Hastane-Sanayi-Belediye\n");
	printf("Duraklarý: 010101-010115-010117-010120-010109-\n010107-010119-010118-010116-010102\n");
	printf("ÐÖTÜKEN---------------------------------\n");
	printf("201- 1. Ay-Saray-Hak Meydaný\n");
	printf("Duraklarý: 0102114-0102116-010242-010240-010211-010201-010203-\n010205-010206-010213-010217-010219-010276-010275-\n010220-010218-010214-010204-010202-010212-010239-0102107-0102108-0102115\n");
	printf("202- Üniversite-Bakanlýklar-Hak Meydaný\n");
	printf("Duraklarý: 0102114-010246-010244-0102E7-0102E8-010240-010211-\n010207-010209-010213-010217-010219-010220-010218-\n010214-010210-010208-010212-010239-010243-010245-0102113\n");
	printf("203- 1. Ay-Bakanlýklar\n");
	printf("Duraklarý: \n");
	printf("204- Üniversite- Hak Meydaný\n");
	printf("Duraklarý: \n");
	printf("205- Hak Merkez- Hak Meydaný\n");
	printf("Duraklarý: \n");
	printf("206- Hak Merkez- Hak Evler\n");
	printf("Duraklarý: \n");
	printf("207- Hak Merkez- Bakanlýklar- AKSaray\n");
	printf("Duraklarý: \n");
	printf("208- Otogar-Akteras-1. Ay\n");
	printf("Duraklarý: \n");
	printf("Çörekli---------------------\n");
	printf("301-Hastane-Gar-Aþçýlýk\n");
	printf("Duraklarý: 010301-010303-010309-010311-010312-010310-010304-010302\n");
	printf("302-Hastane-Gar-Akevler\n");
	printf("Duraklarý: 010301-010303-010305-010310-010308-010306-010304-010302\n");
	printf("303-Hastane-Akevler\n");
	printf("Duraklarý: 010301-010303-010305-010307-010302\n");
	printf("Kutulu----------------------\n");
	printf("401-OSB-Hastane-AkPark\n");
	printf("Duraklarý: 010419-010420-010417-010404-010402-010412-010410-010408-010409-010411-010413-010415\n");
	printf("402-Müze-AkPark-Otogar\n");
	printf("Duraklarý: 010416-010414-010412-010410-010408-010406-010404-010407-010409-010411-010413-010415\n");
	printf("Hakhisar--------------------\n");
	printf("601-Otogar-Stadyum\n");
	printf("Duraklarý: 010601-010612-010610-010607-010608-010606-010604-010602\n");
	printf("602-Belediye-Stadyum-AVM\n");
	printf("Duraklarý: 010601-010612-010610-010607-010608-010609-010611-010614-010602\n");
	printf("603-Belediye-AKEvler-AVM\n");
	printf("Duraklarý: 010601-010612-010610-010606-010615-010617-010618-\n010616-010605-010609-010611-010614-010602\n");
	printf("604-Otogar-AKEvler\n");
	printf("Duraklarý: 010601-010603-010615-010617-010618-010616-010614-010602\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Metro Hatlarý:\n");
	printf("Börekli----------------------\n");
	printf("M1-Otogar-Stadyum-Tren Garý");
	printf("M3-BaþkentRAY\n");
	printf("Ðötüken----------------------\n");
	printf("M3-BaþkentRAY\n");
	printf("M6-Havalimaný-Þehir Hastanesi-Otogar\n");
	printf("---------------------------------------------------------------------------------\n");
	printf("Ekspres Hatlarý:\n");
	printf("Ðötüken-----------------------\n");
	printf("U1-Ðötüken Üniversitesi içi Hattý\n");
	printf("Metrobüs Hatlarý:\n");
	printf("R1-Ðötüken Þehir Hastanesi-AKSaray-Hak Meydan\n");
	gtt();
}
int gttmetro()
{
	silge(1);
	saat();
	nofbar();
	printf("Þehirde Bulunan Metro Hatlarý------------------------------\n");
	printf("1=M1-Börekli Metrosu\n");
	printf("2=M3-BaþkentRAY\n");
	printf("3=M6-Havalimaný-Merkez Bankasý\n");
	printf("Plananan Metro Hatlarý: M7\n");
	navbar();
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("M1 Metrosu-------------------\n");
			printf("Baþlangýç Noktasý: Börekli Otobüs Terminali\n");
			printf("Bitiþ Noktasý    : Börekli Eski Tren Garý\n");
			printf("Ýstasyon Sayýsý  : 8\n");
			printf("Yapým Baþlangýcý : \n");
			printf("Yapým Bitiþi     : \n");
			printf("Durumu           : Hizmette\n");
			printf("Açýklamasý       : Börekli Ýlçe Metrosu\n");
			printf("Duraklarý        : M107-M106-M105-M101-M102-M103-M105(1)-M104");
			gttmetro();
			break;
		case 2:
			printf("M3 Metrosu-------------------\n");
			printf("Baþlangýç Noktasý: Börekli Otobüs Terminali\n");
			printf("Bitiþ Noktasý    : Hak Meydaný- Kutulu da sonlanacak\n");
			printf("Ýstasyon Sayýsý  : 8- 3 tane daha eklenecek\n");
			printf("Yapým Baþlangýcý : 2023\n");
			printf("Yapým Bitiþi     : Tahmini: Haziran 2025\n");
			printf("Durumu           : 2/3 etap hizmette\n");
			printf("Açýklamasý       : BaþkentRAY: Börekli-Ðötüken-Kutulu\n");
			printf("Duraklarý        : M108-\n");
			gttmetro();
			break;
		case 3:
			printf("M6 Metrosu-------------------\n");
			printf("Baþlangýç Noktasý: Ðötüken AiRPORT\n");
			printf("Bitiþ Noktasý    : AK Merkez Bankasý\n");
			printf("Ýstasyon Sayýsý  : 10\n");
			printf("Yapým Baþlangýcý : Ocak 2024\n");
			printf("Yapým Bitiþi     : Mart 2024\n");
			printf("Durumu           : Hizmette\n");
			printf("Açýklamasý       : Havalimaný-Þehir Hastanesi-Otogar Metrosu\n");
			printf("Duraklarý        : M601-M602-M603-M604-M605-M606-M607-M608-M609-M302\n");
			gttmetro();
			break;
		case 7:
			gtt();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			gttmetro();
			break;
	}
}
int gttdurak()
{
	silge(1);
	saat();
	nofbar();
	printf("5 Haneli Durak Numaranýzý girin.\n");
	printf("Baþa 0 koymadan yazýnýz.\n");
	printf("Uygulama sadece Börekli için geçerlidir.\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 10101:
			printf("Otoyol Giriþi\n");
			printf("Geçen Hatlar:101-102\n");
			gttdurak();
			break;
		case 10102:
			printf("Otoyol Giriþi\n");
			printf("Geçen Hatlar:101-102\n");
			gttdurak();
			break;
		case 10103:
			printf("Börekli Anadolu Lisesi\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10104:
			printf("Börekli Anadolu Lisesi\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10105:
			printf("Selimiyedim Camii\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10106:
			printf("Selimiyedim Camii\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10107:
			printf("Benzin Ýstasyonu\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10108:
			printf("Benzin Ýstasyonu\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10109:
			printf("Belediye\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10110:
			printf("Belediye\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10111:
			printf("Stadyum\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10112:
			printf("Stadyum\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10113:
			printf("Alýþveriþ Merkezi\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10114:
			printf("Alýþveriþ Merkezi\n");
			printf("Geçen Hatlar:101\n");
			gttdurak();
			break;
		case 10115:
			printf("Aðaçlýk Metro\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
		case 10116:
			printf("Aðaçlýk Metro\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
		case 10117:
			printf("Yeni Devlet Hastanesi\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
		case 10118:
			printf("Yeni Devlet Hastanesi\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
		case 10119:
			printf("Börekli OSB\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
		case 10120:
			printf("Börekli OSB\n");
			printf("Geçen Hatlar:102\n");
			gttdurak();
			break;
	}
}
int gttinfo()
{
	silge(1);
	saat();
	nofbar();
	printf("Ðötüken Toplu Taþýma Uygulamasý (ÐTT)\n");
	printf("Bu uygulama sayesinde Ðötüken'de toplu ulaþým kolaylaþacak.\n");
	printf("Sürüm: 3.0\n");
	printf("Bu uygulama KarOS 4 için optimize edilmiþtir.\n");
	printf("Ðötüken Büyükþehir Belediyesi\n");
	printf("Bu uygulama KarSoft katkýlarýyla kazýrlanmýþtýr.\n");
	gtt();
}
//Akaryakýt
akyakit1()
{
	silge(1);
	saat();
	nofbar();
	printf("KarYakýt Uygulamasý\n");
	printf("Uygulama Sürümü   : 3.2.2\n");
	printf("Güncellenme Tarihi: 07.04.2024\n");
	printf("Yapýmcý           : KarSoft\n");
	printf("Açýklama---------------------\n");
	printf("Yolunuzun kaç lira tuttuðunu öðrenmek için harika bir uygulama.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 3.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-KarSoft Türkiye Discord sunucusuna bakýn.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(akyak0==0)
			{
				printf("Eriþim engellendi.\n");
				appstr();
			}
			else if(akyak0==1)
			{
				akyak2=1;
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				akyakit();
			}
			break;
		case 2:
			if(akyak2==1)
			{
				if(home==1)
				{
					akyak1=2;
					printf("Ana Ekrana eklendi.\n");
					akyakit1();
				}
				else
				{
					akyak1=1;
					printf("Ana Ekrana eklendi.\n");
					akyakit1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				akyakit1();
			}
			break;
		case 3:
			akyak2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			akyakit1();
			break;
		case 7:
			appstr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			akyakit1();
			break;
			
	}	
}
akyakiten1()
{
	silge(1);
	saat();
	nofbar();
	printf("KarYakýt Application\n");
	printf("App Version   : 3.2.2\n");
	printf("Updated Date: 07.04.2024\n");
	printf("Explanation---------------------\n");
	printf("It's a great app to find out how much your road costs.\n");
	printf("What's new:\n");
	printf("-Go to KarSoft Türkiye in Discord\n");
	printf("1=Start\n");
	printf("2=Add to Home Screen\n");
	printf("3=Add license to account\n");
	printf("7=Back-Applications\n");
	printf("9=Main Menu\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(akyak0==0)
			{
				printf("Access Denied.\n");
				appsen();
			}
			else if(akyak0==1)
			{
				printf("Press any key and press Enter to open it.\n");
				scanf("");
				akyakiten();
			}
			break;
		case 2:
			if(akyak2==1)
			{
				akyak1=1;
				printf("Added to Home Screen.\n");
				akyakiten1();
			}
			else
			{
				printf("The application could not be added to the home screen, first try to add the license of the application.\n");
				akyakiten1();
			}
			break;
		case 3:
			akyak2=1;
			printf("The application license has been added to your account.\n");
			akyakiten1();
			break;
		case 7:
			appsen();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("Wrong choice, try again.\a\n");
			akyakiten1();
			break;
			
	}		
}
int akyakit()
{
	if(karcon==0)
	{
		silge(0);
		saat();
		nofbar();
		printf("Bu uygulama internet eriþimi olmadan kullanýlamaz.\n");
		printf("Dýþ Alan Ýletiþimi Kapalý.\n");
		printf("Dýþ Alan Ýletiþimi'ni açýp tekrar deneyin.\n");
		mainimsi();
	}
	silge(0);
	saat();
	nofbar();
	printf("-------------------------------------KarYakýt---------------------------------\n");
	printf("1=Bir rotanýn yaklaþýk ne kadar tuttuðunu hesapla\n");
	printf("2=Benzinlik fiyatlarý\n");
	printf("3=Þarj Ýstasyonlarý\n");
	printf("4=Çevre ve Yakýt\n");
	printf("5=KarYakýt Hakkýnda\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				rota();
				break;
			case 2:
				benstoretr();
				break;
			case 3:
				sarjstoretr();
				break;
			case 4:
				cevretr();
				break;
			case 5:
				printf("KarYakýt\n");
				printf("Webde, Windows'da, KarOS'ta ve mobilde.\n");
				printf("Uygulamanýn bu sürümü KarOS 4 için optimize edildi.\n");
				printf("Bölge: Türkiye\n");
				printf("Sürüm: 3.2.2 \n");
				printf("Yapým Numarasý : 2417FY\n");
				printf("Düzeltme Yamasý: Nisan 2024\n");
				printf("KarSoft, 2024\n");
				if(karos==0)
				{
					printf("KarYakýt Windows Uygulamasý\n");
				}
				akyakit();
				break;
			case 7:
				if(karos>19)
				appstr();
				akyakit();
				break;
			case 8:
				if(karos>29)
				kuicktr();
				akyakit();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				akyakit();
				break;
		}	
	}
	else
	{
		hata();
		akyakit();
	}
	
}
int akyakiten()
{
	if(karcon==0)
	{
		silge(0);
		saat();
		nofbar();
		printf("This application cannot be used without internet access.\n");
		printf("Outdoor Communications Off.\n");
		printf("Turn on Outdoor Communication and try again.\n");
		mainimsi();
	}
	silge(0);
	saat();
	nofbar();
	printf("-------------------------------------KarYakýt---------------------------------\n");
	printf("1=Calculate the approximate cost of a route\n");
	printf("2=Gas station prices\n");
	printf("3=Charging Stationsý\n");
	printf("5=About KarYakýt\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				rotaen();
				break;
			case 2:
				benstoreen();
				break;
			case 3:
				sarjstoreen();
				break;
			case 5:
				printf("KarYakýt\n");
				printf("For  Mobile, Web, Windows and KarOS\n");
				printf("This version of the app is optimized for KarOS 4.\n");
				printf("Region: Türkiye\n");
				printf("Version: 3.2.2 \n");
				printf("Build No    : 2417FY\n");
				printf("Hotfix Patch: April 2024\n");
				printf("KarSoft, 2024\n");
				if(karos==0)
				{
					printf("KarYakýt for Windows App\n");
				}
				akyakiten();
				break;
			case 7:
				if(karos>19)
				appsen();
				akyakiten();
				break;
			case 8:
				if(karos>29)
				kuicken();
				akyakiten();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				akyakiten();
				break;
		}	
	}
	else
	{
		hata();
		akyakiten();
	}
	
}
int benstoretr()
{
	silge(1);
	saat();
	nofbar();
    printf("Bölge: Türkiye\n");
	printf("Bakmak istediðiniz akaryakýt firmasýný seçin.\n");
	printf("1=Shell\n");
	printf("2=Petrol Ofisi\n");
	printf("3=Opet\n");
	printf("4=Türkiye Petrolleri\n");
	printf("5=BP\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome https://www.shell.com.tr/suruculer/shell-yakitlari/akaryakit-pompa-satis-fiyatlari.html");
				else if(varybrsr==2)
				system("start msedge https://www.shell.com.tr/suruculer/shell-yakitlari/akaryakit-pompa-satis-fiyatlari.html");
				printf("Yönlendirildi.\n");
				benstoretr();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome https://www.petrolofisi.com.tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.petrolofisi.com.tr/akaryakit-fiyatlari");
				printf("Yönlendirildi.\n");
				benstoretr();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://www.opet.com.tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.opet.com.tr/akaryakit-fiyatlari");
				printf("Yönlendirildi.\n");
				benstoretr();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://www.tppd.com.tr/tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.tppd.com.tr/tr/akaryakit-fiyatlari");
				printf("Yönlendirildi.\n");
				benstoretr();
				break;
			case 5:
				if(varybrsr==1)
				system("start chrome https://www.bp.com/tr_tr/turkey/home/urun-ve-hizmetler/akaryakit-ve-pompa-fiyatlari.html");
				else if(varybrsr==2)
				system("start msedge https://www.bp.com/tr_tr/turkey/home/urun-ve-hizmetler/akaryakit-ve-pompa-fiyatlari.html");
				printf("Yönlendirildi.\n");
				benstoretr();
				break;
			case 7:
				akyakit();
				break;
			case 8:
				if(karos>29)
				kuicktr();
				benstoretr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				benstoretr();
				break;
		}
	}
	else
	{
		hata();
		benstoretr();
	}
}
int benstoreen()
{
	silge(1);
	saat();
	nofbar();
    printf("Region: Türkiye\n");
	printf("Select the fuel company you want to look at.\n");
	printf("1=Shell\n");
	printf("2=Petrol Ofisi\n");
	printf("3=Opet\n");
	printf("4=Türkiye Petrolleri\n");
	printf("5=BP\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome https://www.shell.com.tr/suruculer/shell-yakitlari/akaryakit-pompa-satis-fiyatlari.html");
				else if(varybrsr==2)
				system("start msedge https://www.shell.com.tr/suruculer/shell-yakitlari/akaryakit-pompa-satis-fiyatlari.html");
				printf("Redirected.\n");
				benstoreen();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome https://www.petrolofisi.com.tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.petrolofisi.com.tr/akaryakit-fiyatlari");
				printf("Redirected.\n");
				benstoreen();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://www.opet.com.tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.opet.com.tr/akaryakit-fiyatlari");
				printf("Redirected.\n");
				benstoreen();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://www.tppd.com.tr/tr/akaryakit-fiyatlari");
				else if(varybrsr==2)
				system("start msedge https://www.tppd.com.tr/tr/akaryakit-fiyatlari");
				printf("Redirected.\n");
				benstoreen();
				break;
			case 5:
				if(varybrsr==1)
				system("start chrome https://www.bp.com/tr_tr/turkey/home/urun-ve-hizmetler/akaryakit-ve-pompa-fiyatlari.html");
				else if(varybrsr==2)
				system("start msedge https://www.bp.com/tr_tr/turkey/home/urun-ve-hizmetler/akaryakit-ve-pompa-fiyatlari.html");
				printf("Redirected.\n");
				benstoreen();
				break;
			case 7:
				akyakiten();
				break;
			case 8:
				if(karos>29)
				kuicken();
				benstoreen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				benstoreen();
				break;
		}
	}
	else
	{
		hata();
		benstoreen();
	}
}
int sarjstoretr()
{
	silge(1);
	saat();
	nofbar();
	printf("Þarj Ýstasyonlarý\n");
	printf("1=Eþarj\n");
	printf("2=ZES\n");
	printf("3=Tesla\n");
	printf("4=Togg Trugo\n");
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome https://esarj.com/harita");
				else if(varybrsr==2)
				system("start msedge https://esarj.com/harita");
				printf("Yönlendirildi.\n");
				sarjstoretr();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome https://zes.net/sarj-istasyonlari");
				else if(varybrsr==2)
				system("start msedge https://zes.net/sarj-istasyonlari");
				printf("Yönlendirildi.\n");
				sarjstoretr();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://www.tesla.com/tr_tr/findus");
				else if(varybrsr==2)
				system("start msedge https://www.tesla.com/tr_tr/findus");
				printf("Yönlendirildi.\n");
				sarjstoretr();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://trugo.com.tr/network");
				else if(varybrsr==2)
				system("start msedge https://trugo.com.tr/network");
				printf("Yönlendirildi.\n");
				sarjstoretr();
				break;
			case 7:
				akyakit();
				break;
			case 8:
				if(karos>29)
				kuicktr();
				sarjstoretr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sarjstoretr();
				break;
		}
	}
	else
	{
		hata();
		sarjstoretr();
	}
}
int sarjstoreen()
{
	silge(1);
	saat();
	nofbar();
	printf("Charge Stations\n");
	printf("1=Eþarj\n");
	printf("2=ZES\n");
	printf("3=Tesla\n");
	printf("4=Togg Trugo\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(varybrsr==1)
				system("start chrome https://esarj.com/harita");
				else if(varybrsr==2)
				system("start msedge https://esarj.com/harita");
				printf("Redirected.\n");
				sarjstoreen();
				break;
			case 2:
				if(varybrsr==1)
				system("start chrome https://zes.net/sarj-istasyonlari");
				else if(varybrsr==2)
				system("start msedge https://zes.net/sarj-istasyonlari");
				printf("Redirected.\n");
				sarjstoreen();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://www.tesla.com/tr_tr/findus");
				else if(varybrsr==2)
				system("start msedge https://www.tesla.com/tr_tr/findus");
				printf("Redirected.\n");
				sarjstoreen();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://trugo.com.tr/network");
				else if(varybrsr==2)
				system("start msedge https://trugo.com.tr/network");
				printf("Redirected.\n");
				sarjstoreen();
				break;
			case 7:
				akyakiten();
				break;
			case 8:
				if(karos>29)
				kuicken();
				sarjstoreen();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sarjstoreen();
				break;
		}
	}
	else
	{
		hata();
		sarjstoreen();
	}
}
int cevretr()
{
	silge(0);
	saat();
	nofbar();
	printf("Çevre Hakkýnda\n");
	printf(" Elektrikli araçlar içten yanmalý motora sahip olmadýðýndan,\n");
	printf("diðer araçlar kadar çevreye zarar vermezler.\n");
	printf(" Ve ayrýca doðru þarj ile bütçenizi rahatlatabilirsiniz.\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 7:
			akyakit();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			cevretr();
			break;
	}
}
int rota()
{
	silge(1);
	saat();
	nofbar();
	printf("1=Mesafe girin\n");	
	printf("2=Google Haritalar ile öðrenin.\n");
	printf("3=Yandex Navi ile öðrenin.\n");
	printf("4=Here Maps ile öðrenin.\n");
	printf("5=Tarayýcýyý aç\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				bilinen_hesaplama();
				break;	
			case 2:
				if(varybrsr==1)
				system("start chrome www.google.com/maps");
				else if(varybrsr==2)
				system("start msedge www.google.com/maps");
				printf("Yönlendirildi.\n");
				rota();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://yandex.com.tr/harita/");
				else if(varybrsr==2)
				system("start msedge https://yandex.com.tr/harita/");
				printf("Yönlendirildi.\n");
				rota();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://wego.here.com/");
				else if(varybrsr==2)
				system("start msedge https://wego.here.com/");
				printf("Yönlendirildi.\n");
				rota();
				break;
			case 5:
				if(varybrsr==1)
				system("start chrome");
				else if(varybrsr==2)
				system("start msedge");
				printf("Yönlendirildi.\n");
				rota();
				break;
			case 7:
				akyakit();
				break;
			case 8:
				if(karos>29)
				kuicktr();
				akyakit();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				rota();
				break;
		}
	}
	else
	{
		hata();
		rota();
	}
}
int rotaen()
{
	silge(1);
	saat();
	nofbar();
	printf("1=I know my route\n");	
	printf("2=Google Maps\n");
	printf("3=Yandex Navi\n");
	printf("4=Here WeGo\n");
	printf("5=Open Your Browser\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				known_calculation();
				break;	
			case 2:
				if(varybrsr==1)
				system("start chrome www.google.com/maps");
				else if(varybrsr==2)
				system("start msedge www.google.com/maps");
				printf("Redirected.\n");
				rotaen();
				break;
			case 3:
				if(varybrsr==1)
				system("start chrome https://yandex.com.tr/harita/");
				else if(varybrsr==2)
				system("start msedge https://yandex.com.tr/harita/");
				printf("Redirected.\n");
				rotaen();
				break;
			case 4:
				if(varybrsr==1)
				system("start chrome https://wego.here.com/");
				else if(varybrsr==2)
				system("start msedge https://wego.here.com/");
				printf("Redirected.\n");
				rotaen();
				break;
			case 5:
				if(varybrsr==1)
				system("start chrome");
				else if(varybrsr==2)
				system("start msedge");
				printf("Redirected.\n");
				rotaen();
				break;
			case 7:
				akyakiten();
				break;
			case 8:
				if(karos>29)
				kuicken();
				akyakiten();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				rotaen();
				break;
		}
	}
	else
	{
		hata();
		rotaen();
	}
}
int bilinen_hesaplama()
{
	int c;
	silge(1);
	saat();
	nofbar();
	printf("\nYolculuðunuzu hangi akaryakýt çeþidi ile yapacaðýnýzý seçiniz:\n");
	printf("1=LPG\n");
	printf("2=Benzin\n");
	printf("3=Motorin\n");
	printf("4=Elektrik\n");
	navbar();
	
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			bilinen_hesaplama_gaz();
			break;
		case 2:
			bilinen_hesaplama_benzin();
			break;
		case 3:
			bilinen_hesaplama_mazot();
			break;
		case 4:
			bilinen_hesaplama_elektrik();
			break;
		case 7:
			rota();
			break;
		case 8:
			quicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			akyakit();
			break;
	}
}
int known_calculation()
{
	int c;
	silge(1);
	saat();
	nofbar();
	printf("\nChoose which fuel type you will make your trip with:\n");
	printf("1:LPG\n");
	printf("2:Gasoline\n");
	printf("3:Diesel\n");
	navbar();
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			known_calculation_gas();
			break;
		case 2:
			known_calculation_gasoline();
			break;
		case 3:
			known_calculation_diesel();
			break;
		case 7:
			rotaen();
			break;
		case 8:
			quicken();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			akyakiten();
			break;
	}	
}
int bilinen_hesaplama_elektrik()
{
	float km;
	float elektrik;
	float fiyat;
	float elektrik_kwh=0.18;
	silge(1);
	saat();
	nofbar();
	printf("\n\nRotanýzýn kaç km olduðunu yazýnýz:");
	scanf("%f",&km);
	
	printf("\nGüncel elektrik ücretini yazýnýz:");
	scanf("%f",&elektrik);
	
	fiyat=(elektrik*km)/elektrik_kwh;
	printf("Yaklaþýk olarak bu rota yaklaþýk %.2fTL tutacaktýr\n",fiyat);
	printf("Hem paranýzý hem çevrenizi korudunuz.\n");
	akyakit();
}
int bilinen_hesaplama_gaz()
{
	float km;
	float gaz;
	float fiyat;
	float gaz_litre=11.36;
	silge(1);
	saat();
	nofbar();
	printf("\n\nRotanýzýn kaç km olduðunu yazýnýz:");
	scanf("%f",&km);
	
	printf("\nGüncel gaz fiyatýný yazýnýz:");
	scanf("%f",&gaz);
	
	fiyat=(gaz*km)/gaz_litre;
	printf("Güncel LPG fiyatlarýna göre bu rota yaklaþýk %.2fTL tutacaktýr\n",fiyat);
	akyakit();
}
int known_calculation_gas()
{
	float km;
	float gaz;
	float fiyat;
	float gaz_litre=11.36;
	silge(1);
	saat();
	nofbar();
	printf("\n\nWrite how many kilometers your route is:");
	scanf("%f",&km);
	
	printf("\nWrite the current gas price:");
	scanf("%f",&gaz);
	
	fiyat=(gaz*km)/gaz_litre;
	printf("According to the current LPG prices, this route will cost approximately %.2fTL.\n",fiyat);
	akyakiten();	
}
int bilinen_hesaplama_benzin()
{
	float km;
	float benzin;
	float fiyat;
	float benzin_litre=14.7;
	silge(1);
	saat();
	nofbar();
	printf("\n\nRotanýzýn kaç km olduðunu yazýnýz:");
	scanf("%f",&km);
	
	printf("\nGüncel benzin fiyatýný yazýnýz:");
	scanf("%f",&benzin);
	
	fiyat=(benzin*km)/benzin_litre;
	printf("Güncel Benzin fiyatlarýna göre bu rota yaklaþýk %.2fTL tutacaktýr\n",fiyat);
	akyakit();
}
int known_calculation_gasoline()
{
	float km;
	float benzin;
	float fiyat;
	float benzin_litre=14.7;
	silge(1);
	saat();
	nofbar();
	printf("\n\nWrite how many kilometers your route is:");
	scanf("%f",&km);
	
	printf("\nEnter the current gasoline price:");
	scanf("%f",&benzin);
	
	fiyat=(benzin*km)/benzin_litre;
	printf("According to the current Gasoline prices, this route will cost approximately %.2fTL.\n",fiyat);
	akyakiten();	
}
int bilinen_hesaplama_mazot()
{
	float km;
	float mazot;
	float fiyat;
	float mazot_litre=22.22;
	silge(1);
	saat();
	nofbar();
	printf("\n\nRotanýzýn kaç km olduðunu yazýnýz:");
	scanf("%f",&km);
	
	printf("\nGüncel mazot fiyatýný yazýnýz:");
	scanf("%f",&mazot);
	
	fiyat=(mazot*km)/mazot_litre;
	printf("Güncel Motorin fiyatlarýna göre bu rota yaklaþýk %.2fTL tutacaktýr\n",fiyat);
	akyakit();
}
int known_calculation_diesel()
{
	float km;
	float mazot;
	float fiyat;
	float mazot_litre=22.22;
	silge(1);
	saat();
	nofbar();
	printf("\n\nWrite how many kilometers your route is:");
	scanf("%f",&km);
	
	printf("\nEnter the current diesel price:");
	scanf("%f",&mazot);
	
	fiyat=(mazot*km)/mazot_litre;
	printf("According to the current diesel prices, this route will cost approximately %.2fTL.\n",fiyat);
	akyakiten();	
}
//vki
vki1()
{
	silge(1);
	saat();
	nofbar();
	printf("Vücut Kitle Endeksi Uygulamasý\n");
	printf("Uygulama Sürümü   : 1.1\n");
	printf("Güncellenme Tarihi: 29.12.2023\n");
	printf("Yapýmcý           : https://www.evrenselkod.com\n");
	printf("Bu uygulama en iyi KarOS 4.0'da çalýþýr.\n");
	printf("Açýklama---------------------\n");
	printf("Kilonuzun boyunuza göre iyi olup olmadýðýný öðrenin.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 3.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Hatalar giderildi.\n");
	printf("-KarOS 4 için optimize edildi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(vki0==0)
				{
					printf("Eriþim engellendi.\n");
					appstr();
				}
				else if(vki0==1)
				{
					vki2=1;
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					vki();
				}
				break;
			case 2:
				if(vki2==1)
				{
					if(home==1)
					{
						vki11=2;
						printf("Ana Ekrana eklendi.\n");
						vki1();
					}
					else
					{
						vki11=1;
						printf("Ana Ekrana eklendi.\n");
						vki1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					vki1();
				}
				break;
			case 3:
				vki2=1;
				printf("Uygulama lisansý hesabýnýza eklendi.\n");
				vki1();
				break;
			case 7:
				appstr();
				break;
			case 8:
				kuicktr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				vki1();
				break;
				
		}	
		
	}
	else
	{
		hata();
		vki1();
	}
		
}
int vki()
{
	silge(1);
	saat();
	nofbar();
     double boy,kilo,ind;
     printf("Kilonuz : "); 
	 scanf("%lf",&kilo);
     printf("Metre Cinsinden Boyunuz : "); 
	 scanf("%lf",&boy);
     ind=kilo/(boy*boy);
     printf("Vucut kitle indeksiniz : %f \n", ind);
     if(ind<18)
     {
          printf("Zayýf\n");
          mainimsi();}
     else if(ind>=18 && ind<25)
          {
		  printf("Normal\n");
          mainimsi();}
     else if(ind>=25 && ind<30)
     {
          printf("Kilolu\n");
          mainimsi();}
     else if(ind>=30 && ind<40)
     {
          printf("Obez\n");
          mainimsi();}
     else
     {
          printf("Ýleri Derece Obez\n");
          mainimsi();}
}
//APFL Simulator
apflsim1()
{
	kaydet();
	printf("APFL Simulator Oyunu\n");
	printf("Oyun Sürümü       : 2.2.1\n");
	printf("Güncellenme Tarihi: 30.01.2024\n");
	printf("Açýklama---------------------\n");
	printf("APFL'ye gitmeden APFL'yi bilmek artýk mümkün, sizde oynayýn iki farklý  baþarýlý sondan birini görün.\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Oyun sonlarý artýk buraya yönlendirecek.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(asim0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(asim0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				apflsim();
			}
			break;
		case 2:
			if(asim2==1)
			{
				if(home==1)
				{
					asim1=2;
					printf("Ana Ekrana eklendi.\n");
					apflsim1();
				}
				else
				{
					asim1=1;
					printf("Ana Ekrana eklendi.\n");
					apflsim1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				apflsim1();
			}
			break;
		case 3:
			asim2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			apflsim1();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			apflsim1();
			break;
			
	}
}
apflsim()
{
	printf("Oyun baþlatýlýyor...\n");
	saniye();
	int a=1;
	while (a<350)
	{
		printf("\n");
		a++;
	}
	printf("\t\t\t\t\tKarGames STUDIOS sunar...\n");
	printf("\t\t\t\t\t\tA\n");
	printf("\t\t\t\t\t\tP\n");
	printf("\t\t\t\t\t\tF\n");
	printf("\t\t\t\t\t\tL\n");
	printf("\t\t\t\t\tSimulator\t2.0\n\n");	
	printf("Merhaba, biraz uzun bir paragraf olacak, ama önemli deðil.\n");
	printf("Geçen yýl ayý gibi calýþmayarak bu okula geldin ve þimdi ne yapacaðýný düþünüyorsun...\n");
	printf("böyle düþünürken 1. yazýlýlarý oldun ve en iyi notun 72.\n");
	printf("Ailene düzelteceðine dair söz verdin ama ne yapacaðýn hakkýnda hiçbir fikrin yok.\n");
	printf("Þimdi 2. yazýlýlar yaklaþýyor. Yapabileceðin seçenekler aþaðýda, birini seç.\n");
	printf("1=Çalýþ\n");
	printf("2=Okullarýn kapanmasý için dua et.\n");
	int b;
	scanf("%d",&b);
	switch (b)
	{
		case 1:
			printf("\nAferin, sýnavlar basliyor...\n");
			apflsim01();
			break;
		case 2:
			printf("\nSýnavlar baþlýyor...\n");
			saniye();
			printf("Yazýk Kafana, okullar kapanmadý ve sen kitaplari bile açmadýðýn için okuma yazmayý unuttun.\n");
			printf("Sýnavlar açýklandý\nen iyi notun, 65 ailenle aran bozuldu, ne yapacaksýn?\n");
			apflsim06();
			break;
	}
}
apflsim01()
{
	printf("Sýnavlar baþladý ve sen ilk yaziliden 88 aldin, peki þimdi ne olacak?\n");
	printf("1=Zaten beceriyom, çalýþmýcam\n");
	printf("2=dewamke\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nBaþaramadýk abi\n");
			printf("Notlarýný yeniden düþürdün ve bu aileni gerçekten sinirlendirdi ve þimdi bir karar almaný bekliyorlar, kararýn ne?\n");
			apflsim06();
			break;
		case 2:
			printf("\nAferin, gaza gelmedin.\n");
			apflsim02();
			break;
	}
}
apflsim02()
{
	printf("2.Sýnavlar bitti ve Takdir alarak dönemi bitirdin.\n");
	printf("15 tatilde de bol bol oyun oynadýn.\n");
	printf("Ama þöyle bir tehlike var: Okul açýldýðýnda deneme olabilirsiniz, Seçenekler aþaðýda.\n");
	printf("1=Nolur, nolmaz calýþ\n");
	printf("2=Boþverrr, çalýþma.\n");
	int a;
	scanf("%d",&a);
	switch (a)
	{
		default:
			printf("\nÝyi kötü biþeyler yaptýn, helal olsun.\n");
			apflsim03();
			break;
	}
}
apflsim03()
{
	printf("2. Dönemin ilk yazýlýlarý baþlýyor...\n");
	saniye();
	printf("DERMÝÞÝÝÝÝÝÝÝÝÝÝM\n");
	printf("Bir sürü gezi olacaðý istihbaratýný aldýn.\n");
	printf("Napacaksin?\n");
	printf("1=Gidecem tabi ki, hep 10. sýnýflarý götürüyorlar zaten.\n");
	printf("2=Þurda YKS'ye kalmýþ 1000 küsür gün, ben gezmem aga\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nÝyi madem, gezmek senin de hakkýn.\n");
			apflsim04();
			break;
		case 2:
			printf(" \nOk knk, sen bilirsin.\n");
			apflsim05();
			break;
	}
}
apflsim04()
{
	printf("Gezidesin, þuan geziyorsun.\n");
	printf("Haydaaaa, Selim seni yedi.\n");
	printf("E, ne yapcaz?\n");
	printf("1=Afied\n");
	printf("2=AFied\n");
	int a;
	scanf("%d",&a);
	switch (a)
	{
		default:
			printf("\nOlsun, Yapacak biþey yok, Kaybettin.\n");
			apflsim1();
			break;
	}
}
apflsim05()
{
	printf("YA KENDÝN DÝYON 1000 KÜSÜR DÝYE, NE YKS'SI ARKADAÞ!\n");
	printf("Fazla ders çalýþmaktan psikolojin bozuldu ve en son fizik testinde yanlýþ yaptýðýn bir soruya kafa atarak beynini patlattýn\n");
	apflsim1();
}
apflsim06()
{
	printf("1=Çalýþýp notlarýmý düzelteceðim\n");
	printf("2=Sanayide iyi para var diyolar...\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim07();
			break;
		case 2:
			apflsim08();
			break;
	}
}
apflsim07()
{
	printf("\nAilen bunu kabul etti ama PC elden gitti ne yapacaksýn?\n");
	printf("1=PC'mi nasýl alabilirler, o zaman ders falan çalýþmýyorum!\n");
	printf("2=Hazýr PC yokken rahat rahat çalýþayým\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim09();
			break;
		case 2:
			apflsim10();
			break;
	}
	
}
apflsim08()
{
	printf("\nAilen düþündü ve mantýklý buldu burdan sonra sanayi simülatörüne yönlendiriliyorsunuz...\n");
	saniye();
	sanayisim1();
}
apflsim09()
{
	printf("\nZort ne kadar da mantýksýz bir düþünce\n");
	printf("Baban PC'ni kafanda patlattý, OYUN BÝTTÝ\n");
	printf("Baþarým kazanýldý!\n");
	asima3=1;
	printf("-Artýk Yogg\n");
	apflsim1();
}
apflsim10()
{
	printf("\nAferin mantýklý bir düþünce\n");
	saniye();
	printf("Ailene dua etmeye baþladýn çünkü þuan sayelerinde derslerden çok iyi anlýyorsun. napmalýsýn?\n");
	printf("1=O zaman sýnavlara kadar çalýþmama gerek yok\n");
	printf("2=Hazýr derslerim iyiken devam edeyim\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim11();
			break;
			
		case 2:
			apflsim12();
			break;
	}
}
apflsim11()
{
	printf("\nSýnavlar baþlýyor...\n");
	saniye();
	printf("Çalýþmalarýn seni kurtardý hadi yine iyisin!\n");
	saniye();
	printf("Bir etkinlik baþladý!\n");
	printf("Okulda gelecek hafta bir kermes olacaðý duyumunu aldýn ve sýnýfýn adýna yiyecek satacaklardan birisi olacaksýn\n");
	printf("Bu kermes sýnýfýn için çok önemli ve iþi batýrmaman lazým ,ne satacaðýna nasýl karar vereceksin?\n");
	printf("1=Anneme sorayým o mutlaka bir þey bulur\n");
	printf("2=Ýþimi saðlama alayým, ne yapacaðým kendim planlayým\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim13();
			break;
			
		case 2:
			apflsim14();
			break;
	}
}
apflsim12()
{
	printf("\nSýnavlar baþlýyor...\n");
	saniye();
	printf("Biraz daha çalýþsan 9. sýnýflarda 1. olcaktýn, maþallah\n");
	saniye();
	printf("Bir etkinlik baþladý!\n");
	printf("Okulda gelecek hafta bir kermes olacaðý duyumunu aldýn ve sýnýfýn adýna yiyecek satacaklardan birisi olacaksýn\n");
	printf("Bu kermes sýnýfýn için çok önemli ve iþi batýrmaman lazým ,ne satacaðýna nasýl karar vereceksin?\n");
	printf("1=Anneme sorayým o mutlaka bir þey bulur\n");
	printf("2=Ýþimi saðlama alayým, ne yapacaðým kendim planlayým\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim13();
			break;
			
		case 2:
			apflsim14();
			break;
	}	
}
apflsim13()
{
	printf("\nAnne ile konuþuluyor...\n");
	saniye();
	printf("Annen yaprak sarma, mercimek köftesi ve kýsýr yapacaðýný söyledi hadi yine iyisin!\n");
	printf("Annen iþleri olduðunu ama istersen seni bekletmeden bunlarý yapabileceðini söyledi sence ne zaman yapmalý?\n");
	printf("1=Ýþlerini bitirdikten sonra yapabilir zaten 1 hafta var kermese\n");
	printf("2=Ýki üç güne yapsa iyi olur\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim15();
			break;
			
		case 2:
			apflsim16();
			break;
	}
}
apflsim14()
{
	printf("\nMaliyeti düþük ve yapýmý kolay olan yiyecek ve içecekler araþtýrýlýyor...\n");
	saniye();
	printf("Araþtýrman sonucunda limonata yapmaya karar verdin ; 10kg limon ve 500g þeker aldýn.\n");
	printf("Limonatayý ne zaman yapacaksýn?\n");
	printf("1=Daha bir hafta var bi ara yaparým\n");
	printf("2=Bir iki güne yaparým\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim17();
			break;
			
		case 2:
			apflsim18();
			break;
	}
}
apflsim15()
{
	printf("\nAnnen iþlerini bitirdi ama yemek ikinizin de aklýndan çýktý ve kermese 1 gün kala son akþam aklýna geldi.\n");
	printf("Þansýna annen o akþam misafirliðe gitmiþti ve yemeði yetiþtirmesi imkansýz ,ne yapacaksýn?\n");
	printf("1=Evde olan þeylerden bir yiyecek hazýrlaya çalýþacaðým\n");
	printf("2=Yapacak bir þey yok,elim boþ gideceðim");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim19();
			break;
			
		case 2:
			apflsim20();
			break;
	}
	
}
apflsim16()
{
	printf("\nAnnen yemekleri yaptý, kermese hazýrsýn\n");
	apflsim21();
	
}
apflsim17()
{
	printf("\nLimotayý yapmak aklýndan çýktý kermese 1 gün kala aklýna geldi ama limonlar biraz kötü kokuyor, ne yapacaksýn?\n");
	printf("1=O kadar limon almýþým ,boþa mý alýndý bunlar?!\n");
	printf("2=Yapmasam daha iyi\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			apflsim19();
			break;
			
		case 2:
			apflsim20();
			break;
	}
	
}
apflsim18()
{
	printf("\nLimonatan hazýr, kermese hazýrsýn\n");
	apflsim21();
	
}
apflsim19()
{
	printf("\nKermes yapýlýyor...\n");
	saniye();
	printf("Sattýklarýn alýcýlarý zehirledi ve hepsi kusarak bayýldý\n");
	printf("Okuldan atýldýn, KAYBETTÝN\n");
	apflsim1();
}
apflsim20()
{
	printf("\nKermes yapýlýyor...\n");
	saniye();
	printf("Elin boþ geldiðin için arkadaþlarýný hayal kýrýklýðýna uðrattýn, kermeste katýlan 10 sýnýf arasýnda 8. oldunuz\n");
	printf("Kermes de bitti ve 9.sýnýfýn son sýnavlarýný olacaksýnýz\n");
	printf("Son sýnavlar olunuyor...\n");
	saniye();
	printf("Son sýnavlar da olundu ve 9.sýnfý bitirdin.\nTebrikler oyunu baþarýyla bitirdiniz!\n");
	printf("1.SON");
	printf("Baþarým kazanýldý!\n");
	printf("-Son APFL bükücü\n");
	asima1=1;
	apflsim1();
}
apflsim21()
{
	printf("\nKermes yapýlýyor...\n");
	saniye();
	printf("Kermeste standýnýz hiç rahat býrakýlmadý, kermese katýlan 10 sýnýf arasýnda 2. oldunuz!\n");
	printf("Kermes de bitti ve 9.sýnýfýn son sýnavlarýný olacaksýnýz\n");
	printf("Son sýnavlar olunuyor...\n");
	saniye();
	printf("Son sýnavlar da olundu ve 9.sýnfý 2. olarak bitirdin.\nTebrikler oyunu baþarýyla bitirdiniz!\n");
	printf("2.SON\n");
	printf("Baþarým alýndý!\n");
	printf("-Nazi ikinci\n");
	asima2=1;	
	apflsim1();
}
//Sanayi Simulator
sanayisim1()
{
	printf("Sanayi SÝmulator\n");
	printf("Oyun sürümü      : 2.1.1\n");
	printf("Güncelleme Tarihi: 30.01.2024\n");
	printf("Açýklama---------------------\n");
	printf("Sanayide çalýþýp kendi dükkanýnýz açmaya çalýþýn!\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Ana Ekrana ekleme eklendi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(ssim0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(ssim0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				sanayisim();
			}
			break;
		case 2:
			if(ssim2==1)
			{
				if(home==1)
				{
					ssim1=2;
					printf("Ana Ekrana eklendi.\n");
					sanayisim1();
				}
				else
				{
					ssim1=1;
					printf("Ana Ekrana eklendi.\n");
					sanayisim1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				sanayisim1();
			}
			break;
		case 3:
			ssim2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			sanayisim1();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			sanayisim1();
			break;
			
	}	
}
sanayisim()
{
	sanayisim_para=0;
	sanayisim_tcrb=0;
	printf("Oyun baþlatýlýyor...\n");
	saniye();
	printf("\t\t\t\t\tKarGames STUDIOS sunar...\n");
	printf("\t\t\t\t\t\tA\n");
	printf("\t\t\t\t\t\tP\n");
	printf("\t\t\t\t\t\tF\n");
	printf("\t\t\t\t\t\tL\n");
	printf("\t\t\t\t\tSanayi Simulator\t\n\n");	
	printf("Sanayi simülatörüne hoþ geldin!\n");
	printf("Buraya direkt veya APFLSim'de aldýðýn kararlar sayesinde gelmiþ olmalýsýn\n");
	printf("Ekonominin gidiþatý ve eðitim siteminin mantýksýzlýðý senin sanayide çalýþma isteðini körükledi ve þuan burdasýn!\n");
	printf("Ýlk seçimin bu olacak,hangisinde çýrak olarak çalýþacaksýn?\n");
	printf("1=Oto tamircisi\n");
	printf("2=Lastikçi\n");
	int a;
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("Oto tamirciye gidiliyor...\n");
			saniye();
			sanayisim01();
			break;
		case 2:
			printf("Lastikçiye gidiliyor...\n");
			saniye();
			sanayisim02();
			break;
	}
}
sanayisim01()
{
	int a;
	srand(time(NULL));
	a=rand()%3+1;
	if(a==1)
	{
		printf("\nUsta ile konuþuluyor...\n");
		saniye();
		printf("Ýþe alýnmadýnýz!\n");
		sanayisim1();
	}
	else
	{
		printf("\nUsta ikna ediliyor...\n");
		saniye();
		printf("Ýþe girmeyi baþardýn\n");
		sanayisim3();
	}	
}
sanayisim02()
{
	int a;
	srand(time(NULL));
	a=rand()%3+1;
	if(a==1)
	{
		printf("\nUsta ile konuþuluyor...\n");
		saniye();
		printf("Ýþe alýnmadýnýz!\n");
		sanayisim1();
	}
	else
	{
		printf("\nUsta ikna ediliyor...\n");
		saniye();
		printf("Aferim iþe girdin\n");
		sanayisim4();
	}	
}
sanayisim3()
{
	printf("\nUsta haftalýðýnýn 400TL olduðunu ve senin geliþimine göre bunun artabileceðini söyledi\n");
	printf("Usta ile pazarlýk yapacak mýsýn yoksa 400TLyi kabul edecek misin?\n");
	printf("1=400TL neymiþ bana nasýl yetsin!\n");
	printf("2=Ben risk almayým þimdilik 400TL olsun\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim5();
			break;
		case 2:
			sanayisim6();
			break;
	}
}
sanayisim4()
{
	printf("\nUsta sana para konusunda 2 teklif sundu. 1.si her zaman haftalýk 750TL kazanacaðýn, 2.si haftalýk 500TL ile baþlayýp geliþimine göre artabileceði teklif\n");
	printf("Hangisini seçeceksin?\n");
	printf("1.\n2.\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim_sabt=0;
			sanayisim7();
			break;
		case 2:
			sanayisim8();
			break;
	}
}
sanayisim5()
{
	printf("\nYazýk kafana usta adamla pazarlýk mý yapýlýr\n");
	printf("KOVULDUN!\n");
	sanayisim1();
}
sanayisim6()
{
	sanayisim_maas=400;
	sanayisim_para+=sanayisim_maas;
	printf("Para: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("\nAferim doðru karar\n");
	printf("Þimdi ilk iþ ne yapacaksýn?\n");
	printf("1=Ustamý izleyip tecrübe kazanacaðým\n");
	printf("2=Ustamýn dediklerini yapsam yeter\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim9();
			break;
		case 2:
			sanayisim10();
			break;
	}
}
sanayisim7()
{
	sanayisim_maas=750;
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Paraný nasýl alacaðýna karar verdiðine göre þimdi ne yapacaksýn?\n");
	printf("1=Lastik çeþitlerini ve ayrýntýlarýný öðreneceðim\n");
	printf("2=Ustama uymam yeterli");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim11();
			break;
		case 2:
			sanayisim12();
			break;
	}
}
sanayisim8()
{
	sanayisim_maas=500;
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Paraný nasýl alacaðýna karar verdiðine göre þimdi ne yapacaksýn?\n");
	printf("1=Lastik çeþitlerini ve ayrýntýlarýný öðreneceðim\n");
	printf("2=Ustama uymam yeterli");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim11();
			break;
		case 2:
			sanayisim12();
			break;
	}
}
sanayisim9()
{
	sanayisim_para+=sanayisim_maas;
	sanayisim_tcrb+=10;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Aha! Bir müþteri geliyor ama ustan yeni malzemeler satýn almaya gitti,ne yapacaksýn?\n");
	printf("1=Müþteriye ustamýn geleceðini söylerim\n");
	printf("2=Ben bakarým nolacak!\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim13();
			break;
		case 2:
			sanayisim14();
			break;
	}
}
sanayisim10()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Aha! Bir müþteri geliyor ama ustan yeni malzemeler satýn almaya gitti,ne yapacaksýn?\n");	
	printf("1=Müþteriye ustamýn geleceðini söylerim\n");
	printf("2=Ben bakarým nolacak!\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim13();
			break;
		case 2:
			sanayisim14();
			break;
	}
}
sanayisim11()
{
	sanayisim_para+=sanayisim_maas;
	sanayisim_tcrb+=10;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Ustan senden lastik almaný veya yerleri silmeni istedi hangisini yapacaksýn?\n");
	printf("1=Lastik alacaðým\n");
	printf("2=Yerleri sileceðim\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim15();
			break;
		case 2:
			sanayisim16();
			break;
	}
}
sanayisim12()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Ustan senden lastik almaný veya yerleri silmeni istedi hangisini yapacaksýn?\n");
	printf("1=Lastik alacaðým\n");
	printf("2=Yerleri sileceðim\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim15();
			break;
		case 2:
			sanayisim16();
			break;
	}
}
sanayisim13()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Ustan geldi ve müsteriyle ilgilendi,hiçbir þey deðiþmedi\n");
	printf("Artýk zam almak istiyorsun ve ustanýn gözüne girecek bir þey yapacaksýn,ne yapacaksýn?\n");
	printf("1=Arabalar hakkýnda daha çok þey öðrenip ara sýra müþterilerle ben ilgileneceðim\n");
	printf("2=Yerleri ýslak havluyla silip tertemiz yapacaðým\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim17();
			break;
		case 2:
			sanayisim18();
			break;
	}	
		
}
sanayisim14()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	if(sanayisim_tcrb>5)
	{
		sanayisim_tcrb+=10;
		printf("Ustan gelince müþteriyle ilgilendiðini gördü ve haftalýðýna 100TL zam yapacak!\n");
		sanayisim_maas+=100;
		printf("Ancak bu zam sana hala yetmiyor ve yeniden zam almak için bir þeyler yapmak istiyorsun, ne yapacaksýn?\n");
		printf("1=Arabalar hakkýnda daha çok þey öðrenip ara sýra müþterilerle ben ilgileneceðim\n");
		printf("2=Yerleri ýslak havluyla silip tertemiz yapacaðým\n");
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim17();
				break;
			case 2:
				sanayisim18();
				break;
		}
	}
	else
	{
		printf("Arabalar hakkýnda bilgin az olduðu için aracýn egzozunu sürücü koltuðuna monte ettin\n");
		printf("Ustan gelince bunu gördü ve seni Kovdu\n");
		printf("Kaybettiniz\n");
		sanayisim1();
	}	
}
sanayisim15()
{
	sanayisim_tcrb+=10;
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Bir müþteri geldi ve ustan onunla senin ilgilenmeni istiyor\n");
	printf("Müþteri bir kýþ lastiði istediðini söyledi ne yapacaksýn?\n");
	printf("1=Müþteri gelmiþ bakcam tabi\n");
	printf("2=Ustam baksýn bane\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim19();
			break;
		case 2:
			sanayisim20();
			break;
	}	
}
sanayisim16()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Bir müþteri geldi ve ustan onunla senin ilgilenmeni istiyor\n");
	printf("Müþteri bir kýþ lastiði istediðini söyledi ne yapacaksýn?\n");
	printf("1=Müþteri gelmiþ bakcam tabi\n");
	printf("2=Ustam baksýn bane\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			sanayisim19();
			break;
		case 2:
			sanayisim20();
			break;
	}	
}
sanayisim17()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);	
	if(sanayisim_tcrb>15)
	{
		sanayisim_tcrb+=10;
		printf("Ustan son zamanlardaki çabaný gördü ve haftalýðýna 150TL zam yaptý\n");
		sanayisim_maas+=150;
		printf("Artýk zam da aldýðýna göre artýk kendine bir þey satýn alabilecek güçtesin\n");
		printf("Almak istediðin þey bir bisiklet ve fiyatý 1600TL, alacak mýsýn?\n");
		printf("1=Evet\n");
		printf("2=Hayýr\n");
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim21();
				break;
			case 2:
				sanayisim22();
				break;
		}
	}
	else
	{
		printf("Hiçbir müþteri bilgisiz olduðun için senden memnun kalmadý ve diðer tamircileri tercih etmeye baþladýlar\n");
		printf("Ustan bundan rahatsýz oldu ve seni kovdu\n");
		printf("Kaybettiniz\n");
		sanayisim1();
	}
}
sanayisim18()
{
	printf("Yerleri o kadar temiz yaptýnýz ki ustanýzýn ayaðý kayýp bayýldý ve siz olayýn þokuyla tamirciyi terk ettiniz\n");
	printf("Sanýrým kendi isteðinle kovulmuþ oldun\n");
	printf("Kaybettiniz");
	sanayisim1();
}
sanayisim19()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	if(sanayisim_tcrb>15)
	{
		sanayisim_tcrb+=10;
		printf("Ustan bundan sonra müþterilere senin de bakabileceðini söyledi ve maaþýna 200TL zam yaptý\n");
		if(sanayisim_sabt=0)
		{
			sanayisim_maas+=200;
		}
		printf("Eðer ilk seçeneði seçmediysen artýk zam da aldýðýna göre artýk kendine bir þey satýn alabilecek güçtesin\n");
		printf("Almak istediðin þey bir bisiklet ve fiyatý 1600TL, alacak mýsýn?\n");
		printf("1=Evet\n");
		printf("2=Hayýr\n");
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim23();
				break;
			case 2:
				sanayisim22();
				break;
		}
	}
	else
	{
		printf("Hiçbir müþteri bilgisiz olduðun için senden memnun kalmadý ve diðer tamircileri tercih etmeye baþladýlar\n");
		printf("Bu yüzdden battýnýz ve ustan seni kovdu\n");
		printf("Kaybettiniz\n");
		sanayisim1();
	}	
}
sanayisim20()
{
	printf("Oturmaya mý geldin lastikçiye Allah aþkýna!\n");
	printf("Güzelce bir esnaf dayaðý yedikten sonra gözünü hastanede açtýn, çalýþamayacaðýn için otomatik olarak kovuldun\n");
	printf("Kaybettiniz\n");
	sanayisim1();
}
sanayisim21()
{
	if(sanayisim_para>=1600)
	{
		sanayisim_para-=1600;
		sanayisim_para+=sanayisim_maas;
		printf("\nPara: %dTL\n",sanayisim_para);
		printf("Tecrübe: %d\n",sanayisim_tcrb);
		printf("Bisikleti alman iþe giderken yorulmamaný saðladý ve artan enerjini de iþte kullanabildiðinden perfonmamsýn arttý\n");
		printf("Ustan bundan memnun kaldý ve haftalýðýn 50TL daha arttý\n");
		sanayisim_maas+=50;
		printf("1 yýl sonra...\n");
		saniye();
		sanayisim_para+=sanayisim_maas*52;
		printf("\nPara: %dTL\n",sanayisim_para);
		printf("Baya bir zaman geçti, þimdi ne yapacaksýn?\n");
		printf("1=Kendimi geliþtirmeye devam edeceðim\n"),
		printf("2=Ýþimi yapmam bana yeter\n");
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim24();
				break;
			case 2:
				sanayisim25();
				break;
		}
		
	}
	else
	{
		printf("Paran yetmediði için bisikleti alamadýn ve bunu kendi içinde büyütüp depresyona girdin\n");
		printf("Bu iþine de yansýdý ve bir aracý tamir ederken yakýt deposuna çakmak attýn; az kalsýn dükkan yanýyordu, haliyle kovuldun\n");
		printf("Kaybettiniz\n");
		sanayisim1();
	}
}
sanayisim22()
{
	sanayisim_para+=sanayisim_maas;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);
	printf("Hiçbir þey deðiþmedi\n");
	printf("1 yýl sonra...\n");
	saniye();
	sanayisim_para+=sanayisim_maas*52;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Baya bir zaman geçti, þimdi ne yapacaksýn?\n");
	printf("1=Kendimi geliþtirmeye devam edeceðim\n");
	printf("2=Ýþimi yapmam bana yeter\n");
	int a;
	scanf("%d",&a);
	switch(a)
		{
			case 1:
				sanayisim24();
				break;
			case 2:
				sanayisim25();
				break;
		}
		
}
sanayisim23()
{
	if(sanayisim_para>=1600)
	{
		sanayisim_para-=1600;
		sanayisim_para+=sanayisim_maas;
		printf("\nPara: %dTL\n",sanayisim_para);
		printf("Tecrübe: %d\n",sanayisim_tcrb);
		printf("Bisikleti alman iþe giderken yorulmamaný saðladý ve artan enerjini de iþte kullanabildiðinden perfonmamsýn arttý\n");
		printf("Ustan bundan memnun kaldý ve haftalýðýn 50TL daha arttý\n");
		if(sanayisim_sabt==0)
		{
			sanayisim_maas+=50;
		}
		printf("1 yýl sonra...");
		saniye();
		sanayisim_para+=sanayisim_maas*52;
		printf("Baya bir zaman geçti, þimdi ne yapacaksýn?\n");
		printf("1=Kendimi geliþtirmeye devam edeceðim\n");
		printf("2=Ýþimi yapmam bana yeter\n");
		int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim24();
				break;
			case 2:
				sanayisim25();
				break;
		}
	}
	else
	{
		printf("Paran yetmediði için bisikleti alamadýn ve bunu kendi içinde büyütüp depresyona girdin\n");
		printf("Bu iþine de yansýdý ve bir aracý tamir ederken yakýt deposuna çakmak attýn; az kalsýn dükkan yanýyordu, haliyle kovuldun\n");
		printf("Kaybettiniz");
		sanayisim1();
	}	
}
sanayisim24()
{
	sanayisim_tcrb+=10;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);	
	printf("2 yýl daha sonra...\n");
	saniye();
	sanayisim_para+=sanayisim_maas*104;
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Uzunca bir süre para biriktirdin ve kendi dükkanýný açmaya karar verdin, baþlangýçta ihtiyacýn olacak para 100K TL\n");
	printf("Bunu yapmak istediðine emin misin?\n");
	printf("1=Tabi ki\n");
	printf("2=Hayýr\n");
	int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim26();
				break;
			case 2:
				sanayisim27();
				break;
		}
	
}
sanayisim25()
{
	printf("\nPara: %dTL\n",sanayisim_para);
	printf("Tecrübe: %d\n",sanayisim_tcrb);	
	printf("2 yýl daha sonra...\n");
	saniye();
	sanayisim_para+=sanayisim_maas*104;
	printf("\nPara: %dTL\n",sanayisim_para);	
	printf("Uzunca bir süre para biriktirdin ve kendi dükkanýný açmaya karar verdin, baþlangýçta ihtiyacýn olacak para 100K TL\n");
	printf("Bunu yapmak istediðine emin misin?\n");
	printf("1=Tabi ki\n");
	printf("2=Hayýr\n");
	int a;
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				sanayisim26();
				break;
			case 2:
				sanayisim27();
				break;
		}
}
sanayisim26()
{
	if(sanayisim_para>100000 && sanayisim_tcrb>35)
	{
		printf("Paran ve tecrüben yettiði için dükkaný açabildin\n");
		printf("Tebrikler!,oyunu kazandýnýz\n");
		printf("Baþarým alýndý!\n");
		printf("-Dükkaným\n");
		ssima1=1;
		sanayisim1();
	}
	else
	{
		printf("Paran ve tecrüben yetmediði için dükkaný açamadýn ve ustan da kendi dükkanýný açmak istediðin için seni yanýnda istemediðini söyledi,kovuldun!\n");
		printf("Kaybettiniz\n");
		sanayisim1();
	}	
}
sanayisim27()
{
	printf("Ustan kendi dükkanýný açmak istediðini duyunca çok sinirlendi ve seni kovdu!\n");
	printf("Kaybettiniz\n");
	printf("Baþarým kazanýldý!\n");
	printf("-Nazi ya...\n");
	ssima2=1;
	sanayisim1();
}
//Target 2023
target20231()
{
	printf("Target 2023\n");
	printf("Oyun Sürümü      : 2.6.1\n");
	printf("Güncelleme Tarihi: 30.01.2024\n");
	printf("Açýklama---------------------\n");
	printf("2018 seçimlerinde cumhurbaþkaný oldun, 2023 seçimlerine kadar ülkeyi yönet ve þahlan!\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("Mart Güncellemesi 2023-----------------\n");
	printf("-Artýk oyun boyunca 3 kez geri alma hakkýna sahipsiniz.\n");
	printf("-Her seçimden sonra ekran temizleniyor.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(t20230==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(t20230==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				target2023();
			}
			break;
		case 2:
			if(t20232==1)
			{
				if(home==1)
				{
					t20231=2;
					printf("Ana Ekrana eklendi.\n");
					target20231();
				}
				else
				{
					t20231=1;
					printf("Ana Ekrana eklendi.\n");
					target20231();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				target20231();
			}
			break;
		case 3:
			t20232=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			target20231();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			target20231();
			break;
			
	}	
}
void (*fonksiyonlar[115])()={target_start,a1,a2,b1,b2,b3,b4,c1,c2,c3,c4,c5,c6,c7,c8,d1,d2,d3,d4,d5,d6,d7,d8,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,g1,g2,g3,g4,g5,g6,g7,g8,h1,h2,h3,h4,h5,h6,i1,i2,k1,k2,l1,l2,l3,l4,m1,m2,m3,m4,f13,f14,g9,g10,g11,g12,g13,g14,g15,g16,h7,h8,h9,h10,h11,h12,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,l5,l6,l7,l8};
//                                                                                                                                                                                                Target2023 ilk sürüm - Target2023 Temmuz sürümü öncesi fonksiyonlarý | Target2023 Temmuz sürümü fonksiyonlarý
int delay()
{
   int c, d;
   
   for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 32767; d++)
       {}
}
void icerik(int geri,char *tarih,float borc,int para,char *gelir,char *doviz,int mutluluk,int diplomasi,int ordu)
{
	if(para>1000 || para<-1000)
		printf("Kalan geri alma hakký= %d\nTarih:		%s\nDýþ borç:	%.2fK ARL\nPara:		%.2fM KRL\nGelir:		%s\nDöviz kuru:     1ARL=%sAKLR\nMutluluk:	%d\nDiplomasi:	%d\nOrdu:		%d\n",geri,tarih,borc,(float)para/1000,gelir,doviz,mutluluk,diplomasi,ordu);
	else
		printf("Kalan geri alma hakký= %d\nTarih:		%s\nDýþ borç:	%.2fK ARL\nPara:		%dK KRL\nGelir:		%s\nDöviz kuru:     1ARL=%sAKLR\nMutluluk:	%d\nDiplomasi:	%d\nOrdu:		%d\n",geri,tarih,borc,para,gelir,doviz,mutluluk,diplomasi,ordu);
}
void ifelse(int secim1,int secim2,int secimgeri)
{
	if(geri)
	{
		printf("3:Geri al\n");
	}
	char a;
	a=getch();
	if(a=='1')
	{
		system("cls");
		(*fonksiyonlar[secim1])();
	}
	else if(a=='2')
	{
		system("cls");
		(*fonksiyonlar[secim2])();
	}
	else if(a=='3' && geri)
	{
		geri--;
		printf("Bir önceki seçimine gidiyorsun...\n");
		delay();
		system("cls");
		(*fonksiyonlar[secimgeri])();
	}
	else
	{
		printf("Hatalý seçiminden dolayý rastgele bir seçenek seçilecek...\n");
		delay();
		srand(time(NULL));
		int secenek=rand()%2+1;
		if(secenek==1)
		{
			printf("1 numaralý seçenek seçildi...\n");
			delay();
			system("cls");
			(*fonksiyonlar[secim1])();
		}
		else
		{
			printf("2 numaralý seçenek seçildi...\n");
			delay();
			system("cls");
			(*fonksiyonlar[secim2])();
		}
	}
}
void kaybettiniz(int secimgeri)
{
	if(geri)
	{
		printf("Geri alýp tekrar denemek ister misin?\n");
		printf("1:Evet\n");
		printf("2:Hayýr\n");
		char a;
		a=getch();
		if(a=='1')
		{
			geri--;
			printf("Bir önceki seçimine gidiyorsun...\n");
			delay();
			system("cls");
			(*fonksiyonlar[secimgeri])();	
		}
		else
		{
			printf("KAYBETTÝNÝZ\n");
			target20231();
		}	
	}
	else
	{
		printf("KAYBETTÝNÝZ\n");
		target20231();  
	}	
}
void target2023()
{
	geri=3;
	printf("Oyuna baþlamadan önce bilgilendirme:\nOyun boyunca 3 kez yaptýðýnýz hamleleri geri alma hakkýna sahipsiniz\n");
	printf("Yükleniyor...\n");
	delay();
	system("cls");
	printf("Yýl: 2018\n");
	printf("Keremistan ülkesini önceki yöneticisinden beri Ardya devleti rahatsýz etmekte.\n");
	printf("Öyle ki ülkenin önceki yöneticisi artýk istifa etti ve yeni seçimlerle ülkenin baþýna sen geçtin\n");
	printf("Bakalým ülkeni kalkýndýrabilecek misin\n");
	printf("Yükleniyor...");
	delay();
	delay();
	system("cls");
	target_start();
}
void target_start()//0
{
	icerik(geri,"18 Haziran 2018",100,250,"50K KRL","1,000,000",30,25,40);
	printf("Seçimden bir sonraki gündesin. Ýlk olarak nasýl bir strateji izlemek istiyorsun?\n");
	printf("1:Sosyal devlet\n");
	printf("2:Ekonomik kalkýnma\n");
	char a;
	a=getch();
	if(a=='1')
	{
		system("cls");
		a1();
	}
	else if(a=='2')
	{
		system("cls");
		a2();
	}
	else
	{
		printf("Hatalý seçiminden dolayý rastgele bir seçenek seçilecek...\n");
		delay();
		srand(time(NULL));
		int secenek=rand()%2+1;
		if(secenek==1)
		{
			system("cls");
			a1();
		}
		else
		{
			system("cls");
			a2();
		}
	}
}
void a1()//1
{
	icerik(geri,"25 Haziran 2018",100,200,"50K KRL","1,000,002.5",32,25,40);
	printf("Halkýn için biraz para harcadýn ve mutluluðunu biraz arttýrdýn. Þimdi napacaksýn?\n");
	printf("1:Ayný þekilde devam et\n");
	printf("2:Ekonomik kalkýnmaya geç\n");
	ifelse(3,4,0);
}
void a2()//2
{
	icerik(geri,"25 Haziran 2018",100,175,"75K KRL","1,000,002.5",30,25,40);
	printf("Biraz fabrika kurdun ve yakýnda gelirin artacak. Þimdi napacaksýn?\n");
	printf("1:Ayný þekilde devam et\n");
	printf("2:Diplomasik iliþkilerini iyileþtir\n");
	ifelse(5,6,0);
}
void b1()//3
{
	icerik(geri,"2 Temmuz 2018",100,100,"50K KRL","1,000,005.3",35,25,40);
	printf("Halkýn için biraz daha para harcadýn ve mutluluðunu 3 birim daha arttýrdýn. Þimdi napacaksýn?\n");
	printf("1:Sosyal...\n");
	printf("2:ARTIK Ekonomik kalkýnmaya geç\n");
	ifelse(7,8,1);	
}
void b2()//4
{
	icerik(geri,"2 Temmuz 2018",100,100,"75K KRL","1,000,005.3",32,25,40);
	printf("Fabrikalar kurdun ve birkaç yatýrým yaptýn, gelirin arttý. Þimdi napacaksýn?\n");
	printf("1:Ayný þekilde devam et\n");
	printf("2:Orduya yatýrým yap\n");
	ifelse(9,10,1);
}
void b3()//5
{
	icerik(geri,"2 Temmuz 2018",100,50,"100K KRL","1,000,005.3",31,25,40);
	printf("Yeni kurduðun fabrikalarý çalýþmaya uygun hale getirdin ve iþçi alýmý yaptýn. Þimdi napacaksýn?\n");
	printf("1:Biraz dýþ borç faizi öde\n");
	printf("2:Diplomasik iliþkilerini güçlendir\n");
	ifelse(11,12,2);
}
void b4()//6
{
	icerik(geri,"2 Temmuz 2018",100,250,"75K KRL","1,000,005.3",30,28,40);
	printf("Ardya ülkesinin cumhurbaþkaný ile bir toplantýya katýldýn. Toplantýda hangi konu hakkýnda konuþacaksýnýz?\n");
	printf("1:Döviz kuru\n");
	printf("2:Ülkenin çýkarýna uygun bir anlaþma\n");
	ifelse(13,14,2);
}
void c1()//7
{
	icerik(geri,"9 Temmuz 2018",100,0,"50K KRL","1,000,007.6",37,25,40);
	printf("Tüm paraný sosyal alanda harcadýn ancak dýþ borcunun faizini ödeme vaktin geldi.\nEðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	printf("Tüm paraný harcamana raðmen faizi ödeyemedin\n");
	kaybettiniz(3);
}
void c2()//8
{
	icerik(geri,"9 Temmuz 2018",100,25,"75K KRL","1,000,007.6",35,25,40);
	printf("Birkaç fabrika kurdun ve gelirini arttýrdýn ancak dýþ borcunun faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	printf("Tüm paraný harcamana raðmen faizi ödeyemedin\n");
	kaybettiniz(3);
}
void c3()//9
{
	icerik(geri,"9 Temmuz 2018",100,25,"100K KRL","1,000,007.6",32,25,40);
	printf("Fabrikalar kurdun ve birkaç yatýrým yaptýn, gelirin arttý ancak dýþ borcunun faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	printf("Tüm paraný harcamana raðmen faizi ödeyemedin\n");
	kaybettiniz(4);
}
void c4()//10
{
	icerik(geri,"9 Temmuz 2018",100,75,"75K KRL","1,000,007.6",32,25,45);
	printf("Ordunu biraz geliþtirdin ancak dýþ borcunun faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	printf("Tüm paraný harcamana raðmen faizi ödeyemedin\n");
	kaybettiniz(4);
}		
void c5()//11
{
	icerik(geri,"9 Temmuz 2018",100,50,"100K KRL","1,000,007.6",31,25,40);
	printf("Son ödeme tarihi gelmeden 100K ücretli dýþ borç faizini ödedin. Þimdi napacaksýn?\n");
	printf("1:Para biriktir\n");
	printf("2:Miting yap\n");
	ifelse(15,16,5);
}
void c6()//12
{
	icerik(geri,"9 Temmuz 2018",100,150,"100K KRL","1,000,007.6",31,28,40);
	printf("Dýþ borçlarýnýn faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"9 Temmuz 2018",100,50,"100K KRL","1,000,007.6",31,28,40);
	printf("Dýþ borcunun faizini ödedin. Bundan sonraki faiz ödemeleri 4 hafta arayla 100K ücretle yapýlacaktýr.\n");
	printf("Ardya ülkesinin cumhurbaþkaný ile bir toplantýya katýldýn. Toplantýda hangi konu hakkýnda konuþacaksýnýz?\n");
	printf("1:Döviz kuru\n");
	printf("2:Ülkenin çýkarýna uygun bir anlaþma\n");
	ifelse(17,18,5);
}
void c7()//13
{
	icerik(geri,"9 Temmuz 2018",100,325,"75K KRL","1,000,007.6",30,28,40);
	printf("Dýþ borçlarýnýn faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"9 Temmuz 2018",100,225,"75K KRL","1,000,007.6",30,28,40);
	printf("Dýþ borcunun faizini ödedin. Bundan sonraki faiz ödemeleri 4 hafta arayla 100K ücretle yapýlacaktýr.\n");
	printf("Döviz kuru hakkýnda tartýþtýnýz ve aylýk faiz ücretlerine yüzde on zam yapýlmasý karþýlýðýn döviz kurunun haftalýk yüzde 0.5 düþmesinde anlaþtýnýz. Toplantýyý bitirebilir veya bir konu hakkýnda daha tartýþabilirsiniz\n");
	printf("1:Toplantýyý bitir\n");
	printf("2:Ülkenin çýkarýna uygun bir anlaþma yap\n");
	ifelse(19,20,6);
}
void c8()//14
{
	icerik(geri,"9 Temmuz 2018",100,325,"75K KRL","1,000,007.6",30,28,40);
	printf("Dýþ borçlarýnýn faizini ödeme vaktin geldi.\n Eðer paran yetmiyorsa önceki yönetici bu faizleri birkaç kez ertelediði için Ardya devletinin aðýr yaptýrýmlarý olacak. Faiz ücreti 100K KRL...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"9 Temmuz 2018",100,225,"75K KRL","1,000,007.6",30,22,40);
	printf("Dýþ borcunun faizini ödedin. Bundan sonraki faiz ödemeleri 4 hafta arayla 100K ücretle yapýlacaktýr.\n");	
	printf("Ardya ülkesinin cumhurbaþkaný ile bir savaþmazlýk antlaþmasý imzalamaya karar verdiniz ancak bu antlaþma hakkýnda tartýþýrken gergin bir ortam oluþtu. Bu antlaþma karþýlýðýnda sizden haftalýk gelirinizin yüzde yirmisini istiyorlar. Ne yapacaksýn?\n");
	printf("1:Kabul et\n");
	printf("2:Reddet\n");
	ifelse(21,22,6);
}
void d1()//15
{
	icerik(geri,"16 Temmuz 2018",100,150,"100K KRL","1,000,009.3",31,25,40);
	printf("1 hafta para biriktirdin. Bu sýrada halk düþük mutluluk ve yüksek döviz kuru nedeniyle isyan çýkardý. Þimdi napacaksýn?\n");
	printf("1:Ýsyaný bastýrmaya çalýþ\n");
	printf("2:Döviz kurunu düþürmeye çalýþ\n");
	ifelse(23,24,11);
}
void d2()//16
{
	icerik(geri,"16 Temmuz 2018",100,150,"100K KRL","1,000,009.3",31,25,40);
	printf("Mitingde halkýna ülkenin kötü durumundan haberdar olduðunu ve bunu düzeltmeye çalýþtýðýný söyledin.\n Ancak halk seni dinlemedi ve ekonominin kötü olduðunu söyleyip isyan çýkardýlar. Þimdi napacaksýn?\n");
	printf("1:Ýsyaný bastýrmaya çalýþ\n");
	printf("2:Döviz kurunu düþürmeye çalýþ\n");
	ifelse(23,24,11);
}
void d3()//17
{
	icerik(geri,"16 Temmuz 2018",100,150,"100K KRL","1,000,009.3",31,28,40);
	printf("Döviz kuru hakkýnda tartýþtýnýz ve aylýk faiz ücretlerine yüzde on zam yapýlmasý karþýlýðýn döviz kurunun haftalýk yüzde 0.5 düþmesinde anlaþtýnýz.\n Toplantýyý bitirebilir veya bir konu hakkýnda daha tartýþabilirsiniz\n");
	printf("1:Toplantýyý bitir\n");
	printf("2:Ülkenin çýkarýna uygun bir anlaþma yap\n");
	ifelse(25,26,12);
}
void d4()//18
{
	icerik(geri,"16 Temmuz 2018",100,150,"100K KRL","1,000,009.3",31,22,40);
	printf("Ardya ülkesinin cumhurbaþkaný ile bir savaþmazlýk antlaþmasý imzalamaya karar verdiniz.\nBu antlaþma karþýlýðýnda ülkenizin bir sonraki seçim zamanýna kadar birbirinize savaþ açmamayý kabul ettiniz.Þimdi ne yapacaksýnýz?\n");
	printf("1:Toplantýyý bitir\n");
	printf("2:Döviz kuru hakkýnda konuþ\n");
	ifelse(27,28,12);
}
void d5()//19
{
	icerik(geri,"16 Temmuz 2018",100,300,"75K KRL","995,007.5",30,30,40);
	printf("Toplantýyý bitirdiniz. Þimdi napacaksýnýz?\n");
	printf("1:Ekonomiye yatýrým yap\n");
	printf("2:Mutluluðu arttýr\n");
	ifelse(29,30,13);		
}
void d6()//20
{
	icerik(geri,"16 Temmuz 2018",100,300,"75K KRL","995,007.5",30,22,40);
	printf("Ardya ülkesinin cumhurbaþkaný ile bir savaþmazlýk antlaþmasý imzalamaya karar verdiniz ancak bu antlaþma hakkýnda tartýþýrken gergin bir ortam oluþtu.\n Bu antlaþma karþýlýðýnda sizden haftalýk gelirinizin yüzde yirmisini istiyorlar. Ne yapacaksýn?\n");
	printf("1:Kabul et\n");
	printf("2:Reddet\n");
	ifelse(31,32,13);
}
void d7()//21
{
	icerik(geri,"16 Temmuz 2018",100,285,"60K(75K - 15K antlaþma) KRL","1,000,009.3",25,25,40);	
	printf("Halk bu antlaþmayý kabul etmenize çok sinirlendi ve bir isyan çýkardýlar. Ne yapacaksýn?\n");
	printf("1:Ýsyaný bastýrmaya çalýþ\n");
	printf("2:Antlaþmanýn maddelerini deðiþtirmeye çalýþ\n");
	ifelse(33,34,14);
}
void d8()//22
{
	icerik(geri,"16 Temmuz 2018",100,300,"75K KRL","1,000,007.6",30,-99,40);
	printf("Toplantýda oluþan gergin ortamýn da etkisiyle Ardya devleti size savaþ ilan etti. Savaþ yapýlýyor...\n");	
	delay();
	system("cls");
	icerik(geri,"19 Temmuz 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("3 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(14);		
}
void e1()//23
{
	icerik(geri,"23 Temmuz 2018",100,0,"100K KRL","1,000,012.8",0,25,0);
	printf("Ýsyaný bastýrmakta baþarýsýz oldun. Ýç ayaklanmalar çýktý ve iþler çýðrýndan çýktý. Tüm bu olaylar sonucunda tam bir kaos ortamý oluþtu ve ülken darmadaðýn oldu\n");
	kaybettiniz(15);
}
void e2()//24
{
	icerik(geri,"23 Temmuz 2018",100,0,"100K KRL","998,876,2",12,25,40);
	printf("Tüm paraný harcamana raðmen döviz kurunu ancak yaklaþýk 1250KRL düþürebildin. Halkýn bu durumdan memnun kalmadý ve çýkan ayaklanmalar sonucunda ülken daðýldý\n");
	kaybettiniz(16);
}
void e3()//25
{
	icerik(geri,"23 Temmuz 2018",100,250,"100K KRL","995,007.5",31,30,40);
	printf("Toplantýyý bitirdiniz.Þimdi napacaksýnýz?\n");
	printf("1:Ekonomiye yatýrým yap\n");
	printf("2:Mutluluðu arttýr\n");
	ifelse(35,36,17);
}
void e4()//26
{
	icerik(geri,"23 Temmuz 2018",100,250,"100K KRL","995,007.5",31,22,40);
	printf("Ardya ülkesinin cumhurbaþkaný ile bir savaþmazlýk antlaþmasý imzalamaya karar verdiniz ancak bu antlaþma hakkýnda tartýþýrken gergin bir ortam oluþtu.\n Bu antlaþma karþýlýðýnda sizden haftalýk gelirinizin yüzde yirmisini istiyorlar. Ne yapacaksýn?\n");
	printf("1:Kabul et\n");
	printf("2:Reddet\n");
	ifelse(37,38,17);

}
void e5()//27
{
	icerik(geri,"23 Temmuz 2018",100,250,"100K KRL","1,000,012.8",31,40,40);
	printf("Toplantýyý bitirdiniz.Þimdi napacaksýnýz?\n");
	printf("1:Dýþ borcunu azaltmak için neler yapabileceðine bak.\n");
	printf("2:Mutluluðu arttýr.\n");
	ifelse(39,40,18);
}
void e6()//28
{
	icerik(geri,"23 Temmuz 2018",100,250,"100K KRL","1,000,012.8",31,40,40);
	printf("Döviz kuru hakkýnda tartýþtýnýz ve aylýk faiz ücretlerine yüzde on zam yapýlmasý karþýlýðýn döviz kurunun haftalýk yüzde 0.5 düþmesinde anlaþtýnýz.Toplantý bitti, þimdi ne yapacaksýnýz?\n");
	printf("1:Dýþ borcunu azaltmak için neler yapabileceðine bak.\n");
	printf("1:Mutluluðu arttýr.\n");
	ifelse(73,74,18);	
}
void e7()//29
{
	icerik(geri,"23 Temmuz 2018",100,100,"125K KRL","990,032.4",32,30,40);
	printf("Ýstihdamý arttýrdýn ve ekonomiyi iyileþtirici politikalar benimsedin. Þimdi napacaksýn?\n");
	printf("1:Dýþa baðýmlýlýðý azaltmak için neler yapabileceðine bak\n");
	printf("2:Ordunu geliþtir\n");
	ifelse(41,42,19);			
}
void e8()//30
{
	icerik(geri,"23 Temmuz 2018",100,100,"75K KRL","990,032.4",36,30,40);
	printf("Yeni üniversiteler,hastaneler ve sosyal tesisler yaptýn. Þimdi napacaksýn?\n");
	printf("1:Dýþa baðýmlýlýðý azaltmak için neler yapabileceðine bak\n");
	printf("2:Ordunu geliþtir\n");
	ifelse(43,44,19);
}
void e9()//31
{
	icerik(geri,"23 Temmuz 2018",100,360,"60K(75K - 15K antlaþma) KRL","990,032.4",24,25,40);
	printf("Kalan geri alma hakký= %d",geri);
	printf("Halk bu antlaþmayý kabul etmenize çok sinirlendi ve bir isyan çýkardýlar. Ne yapacaksýn?\n");
	printf("1:Ýsyaný bastýrmaya çalýþ\n");
	printf("2:Antlaþmanýn maddelerini deðiþtirmeye çalýþ\n");
	ifelse(45,46,20);
}
void e10()//32
{
	icerik(geri,"23 Temmuz 2018",100,300,"75K KRL","990,032.4",30,-99,40);
	printf("Toplantýda oluþan gergin ortamýn da etkisiyle Ardya devleti size savaþ ilan etti. Savaþ yapýlýyor...\n");	
	delay();
	system("cls");
	icerik(geri,"26 Temmuz 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("3 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(20);
}
void e11()//33
{
	icerik(geri,"23 Temmuz 2018",100,0,"60K(75K - 15K antlaþma) KRL","1,000,012.8",0,25,0);
	printf("Ýsyaný bastýrmakta baþarýsýz oldun. Ýç ayaklanmalar çýktý ve iþler çýðrýndan çýktý.\n Tüm bu olaylar sonucunda tam bir kaos ortamý oluþtu ve ülken darmadaðýn oldu\n");
	kaybettiniz(21);
}
void e12()//34
{
	icerik(geri,"23 Temmuz 2018",100,345,"60K(75K - 15K antlaþma) KRL","1,000,009.3",25,-99,40);	
	printf("Ardya devleti maddeleri deðiþtirtirmek istemenize sinirlendi ve savaþ çýkardý\n");
	delay();
	system("cls");
	icerik(geri,"26 Temmuz 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("3 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(21);
}
void f1()//35
{
	icerik(geri,"30 Temmuz 2018",100,100,"150K KRL","990,032.4",33,30,40);
	printf("Ýstihdamý arttýrdýn ve ekonomiyi iyileþtirici politikalar benimsedin. Þimdi napacaksýn?\n");
	printf("1:Gelirini daha da arttýr\n");
	printf("2:Hamzabeycan ülkesinin cumhurbaþkanýný çay içmeye davet et\n");
	ifelse(47,48,25);
}
void f2()//36
{
	icerik(geri,"30 Temmuz 2018",100,75,"100K KRL","990,032.4",37,30,40);
	printf("Yeni üniversiteler,hastaneler ve sosyal tesisler yaptýn. Þimdi napacaksýn?\n");
	printf("1:Ekonomiye yatýrým yap\n");
	printf("2:Hamzabeycan ülkesinin cumhurbaþkanýný çay içmeye davet et\n");
	ifelse(49,50,25);
}
void f3()//37
{
	icerik(geri,"30 Temmuz 2018",100,0,"-1M KRL","990,032.4",0,22,0);
	printf("Antlaþmayý kabul etmen sonucunda halk isyan çýkardý ve sen bu isyanlarý bastýramadýn. Ýsyanlarýn büyümesi sonucu ülken çöktü\n");
	kaybettiniz(26);
}
void f4()//38
{
	icerik(geri,"30 Temmuz 2018",100,350,"100K KRL","990,032.4",31,22,40);
	printf("Toplantýda oluþan gergin ortamýn da etkisiyle Ardya devleti size savaþ ilan etti. Savaþ yapýlýyor...\n");	
	delay();
	system("cls");
	icerik(geri,"3 Aðustos 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("4 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(26);
}
void f5()//39
{
	icerik(geri,"30 Temmuz 2018",100,350,"100K KRL","1,000,015.1",31,40,40);
	printf("Dýþ borcunu ödeyebilmek için AKLyi düþürmen ve gelirini arttýrman gerek.Bunun için ihracatýný arttýrmalýsýn.\nÝhracatý nasýl arttýracaksýn?\n");
	printf("1:Yerli otomobil üret.(350K KRL)");
	printf("2:Tarým yap.(225K KRL)");
	ifelse(75,76,27);
}
void f6()//40
{
	icerik(geri,"30 Temmuz 2018",100,50,"100K KRL","1,000,015.1",35,40,40);
	printf("Yeni kamu binalarý ve yeþil alanlar yaptýn.Artýk ihracata yönelmen lazým, ne yapacaksýn?\n");
	printf("1:Yerli otomobil üret.(350K KRL)");
	printf("2:Tarým yap.(225K KRL)");
	ifelse(77,78,27);
}
void f7()//41
{
	icerik(geri,"30 Temmuz 2018",100,225,"125K KRL","985,082.2",32,30,40);
	printf("Müjde geldi! Sondaj çalýþmalarýnda doðalgaz bulundu. Altyapýn hazýr yani hemen çýkarmaya baþlayabilirsin. Þimdi napacaksýn?\n");
	printf("1:Bunu bir devlet sýrrý yap ve halkýndan bile saklayarak çýkart\n");
	printf("2:Doðalgazý pazarlayabileceðin ülkeleri araþtýr ve doðalgazý kendin kullanman dýþýnda ihraç da et\n");
	ifelse(51,52,29);
}
void f8()//42
{
	icerik(geri,"30 Temmuz 2018",100,0,"125K KRL","985,082.2",32,20,80);
	printf("Ordunu birden iki katýna çýkarman Ardya devletini þüphelendirdi.\nZaten sana savaþ açmak için can atýyordu ve bunu bahane ederek savaþ ilan etti...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"3 Aðustos 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("4 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(29);
}
void f9()//43
{
	icerik(geri,"30 Temmuz 2018",100,175,"75K KRL","985,082.2",36,30,40);
	printf("Müjde geldi! Sondaj çalýþmalarýnda doðalgaz bulundu. Altyapýn hazýr yani hemen çýkarmaya baþlayabilirsin. Þimdi napacaksýn?\n");
	printf("1:Bunu bir devlet sýrrý yap ve halkýndan bile saklayarak çýkart\n");
	printf("2:Doðalgazý pazarlayabileceðin ülkeleri araþtýr ve doðalgazý kendin kullanman dýþýnda ihraç da et\n");
	ifelse(53,54,30);
}
void f10()//44
{
	icerik(geri,"30 Temmuz 2018",100,0,"75K KRL","985,082.2",36,30,80);
	printf("Ordunu birden iki katýna çýkarman Ardya devletini þüphelendirdi.\nZaten sana savaþ açmak için can atýyordu ve bunu bahane ederek savaþ ilan etti...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"3Aðustos 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("4 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(30);
}
void f11()//45
{
	icerik(geri,"30 Temmuz 2018",100,0,"60K(75K - 15K antlaþma) KRL","985,082.2",0,25,0);
	printf("Ýsyan büyüdü ve bastýramadýn, en sonunda da ülken çöktü\n");
	kaybettiniz(31);
}
void f12()//46
{
	icerik(geri,"30 Temmuz 2018",100,360,"60K(75K - 15K antlaþma) KRL","985,082.2",24,25,40);
	printf("Ardya devleti maddeleri deðiþtirtirmek istemenize sinirlendi ve savaþ çýkardý\n");
	delay();
	system("cls");
	icerik(geri,"3 Aðustos 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("4 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(31);
}
void f13()//73
{
	icerik(geri,"30 Temmuz 2018",100,350,"100K KRL","995,012.7",31,40,40);
	printf("Dýþ borcunu ödeyebilmek için AKLyi düþürmen ve gelirini arttýrman gerek.Bunun için ihracatýný arttýrmalýsýn.\nÝhracatý nasýl arttýracaksýn?\n");
	printf("1:Yerli otomobil üret.(350K KRL)");
	printf("2:Tarým yap.(225K KRL)");
	ifelse(79,80,28);
}
void f14()//74
{
	icerik(geri,"30 Temmuz 2018",100,50,"100K KRL","995,012.7",35,40,40);
	printf("Yeni kamu binalarý ve yeþil alanlar yaptýn.Artýk ihracata yönelmen lazým, ne yapacaksýn?\n");
	printf("1:Yerli otomobil üret.(350K KRL)");
	printf("2:Tarým yap.(225K KRL)");
	ifelse(81,82,28);	
}
void g1()//47
{
	icerik(geri,"6 Aðustos 2018",100,0,"200K KRL","985,082.2",33,30,40);
	printf("Tüm paraný yatýrým yapmaya harcadýn ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti yapacaðýný yaptý...\n");
	kaybettiniz(35);
}
void g2()//48
{
	icerik(geri,"6 Aðustos 2018",100,250,"150K KRL","985,082.2",33,50,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,150,"150K KRL","985,082.2",33,50,40);
	printf("Baþarým kazanýldý!---------------------------\n");
	printf("Aaaa, Sarp! Bu bizim egg!\n\n");
	trgta1=1;
	printf("Hamzabeycan cumhurbaþkanýyla çok iyi anlaþtýnýz ve dost olup çýktýnýz. En sonunda siz Ardya devletinden bahsettiniz.\n");
	printf("Hamzabeycan cumhurbaþkaný bu duyduklarýna çok üzüldü ve müttefik olmak istediðini söyledi.\nBunu kabul ettiniz ve þu an ne yapacaðýnýzý tartýþýyorsunuz.\n");
	printf("1:Bir yýl boyunca ikiniz de para biriktirip yatýrým yapýn ve Ardya devletine savaþ açýn\n");
	printf("2:Bir yýl boyunca ikiniz de para biriktirip yatýrým yapýn ama Ardya devletine savaþ açmayýn\n");
	ifelse(55,56,35);
}
void g3()//49
{
	icerik(geri,"6 Aðustos 2018",100,0,"100K KRL","985,082.2",37,30,40);
	printf("Tüm paraný yatýrým yapmaya harcadýn ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti yapacaðýný yaptý...\n");
	kaybettiniz(36);
}
void g4()//50
{
	icerik(geri,"6 Aðustos 2018",100,175,"100K KRL","985,082.2",37,60,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,75,"100K KRL","985,082.2",37,50,40);
	printf("Hamzabeycan cumhurbaþkanýyla çok iyi anlaþtýnýz ve dost olup çýktýnýz. En sonunda siz Ardya devletinden bahsettiniz.\n");
	printf("Hamzabeycan cumhurbaþkaný bu duyduklarýna çok üzüldü ve müttefik olmak istediðini söyledi.\nBunu kabul ettiniz ve þu an ne yapacaðýnýzý tartýþýyorsunuz.\n");
	printf("1:Bir yýl boyunca ikiniz de para biriktirip yatýrým yapýn ve Ardya devletine savaþ açýn\n");
	printf("2:Bir yýl boyunca ikiniz de para biriktirip yatýrým yapýn ama Ardya devletine savaþ açmayýn\n");
	ifelse(55,56,36);
}
void g5()//51
{
	icerik(geri,"6 Aðustos 2018",100,350,"300K KRL","980,156.7",32,30,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,250,"300K KRL","980,156.7",32,30,40);
	printf("Basýna açýklamadan doðalgaz çýkartmaya baþladýn, haliyle giderlerin azaldýðý için gelirin arttý. Þimdi napacaksýn?\n");
	printf("1:Hamzabeycan ülkesinin cumhurbaþkanýný çay içmeye davet et\n");
	printf("2:Orduyu geliþtir\n");
	ifelse(57,58,41);
}
void g6()//52
{
	icerik(geri,"6 Aðustos 2018",100,225,"125K KRL","980,156.7",40,30,40);
	printf("Doðalgazý basýna açýklayarak çýkartmaya baþladýn. Ardya ülkesi bunu öðrenince ülkesinde doðalgazý olmadýðý için ülkendeki doðalgaza göz dikti.\n Ardya ülkesi sana savaþ açtý\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"11 Aðustos 2018",100,-50000,"-500K KRL","200,000,000",0,0,0);
	printf("5 gün sonunda savaþý kaybettiniz\n");
	kaybettiniz(41);
}
void g7()//53
{
	icerik(geri,"6 Aðustos 2018",100,250,"250K KRL","980,156.7",36,30,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,150,"250K KRL","980,156.7",36,30,40);
	printf("Basýna açýklamadan doðalgaz çýkartmaya baþladýn, haliyle giderlerin azaldýðý için gelirin arttý. Þimdi napacaksýn?\n");
	printf("1:Hamzabeycan ülkesinin cumhurbaþkanýný çay içmeye davet et\n");
	printf("2:Orduyu geliþtir\n");
	ifelse(59,60,43);
}
void g8()//54
{
	icerik(geri,"6 Aðustos 2018",100,175,"75K KRL","980,156.7",36,30,40);
	printf("Doðalgazý basýna açýklayarak çýkartmaya baþladýn. Ardya ülkesi bunu öðrenince ülkesinde doðalgazý olmadýðý için ülkendeki doðalgaza göz dikti.\nArdya ülkesi sana savaþ açtý\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"11 Aðustos 2018",100,-50000,"-500K KRL","200,000,000",0,0,0);
	printf("5 gün sonunda savaþý kaybettiniz\n");
	kaybettiniz(43);
}
void g9()//75
{
	icerik(geri,"6 Aðustos 2018",100,100,"100K KRL","1,000,017.9",32,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,0,"100K KRL","1,000,017.9",32,40,40);
	printf("Yerli otomobil yapmak için yatýrým yaptýn.Tahmini seri üretime baþlama tarihi:3 yýl sonra\nÞimdi napacaksýn?\n");
	printf("1:Üretilecek aracýn için endüstri 4.0 standartlarýnda bir fabrika inþaatýna baþla.(450K KRL)\n");
	printf("2:Üretilecek aracýn için endüstri 3.0 standartlarýnda bir fabrika inþaatýna baþla.(300K KRL)\n");
	ifelse(83,84,39);
}
void g10()//76
{
	icerik(geri,"6 Aðustos 2018",100,225,"100K KRL","1,000,017.9",32,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"6 Aðustos 2018",100,125,"100K KRL","1,000,017.9",32,40,40);
	printf("Tarým yapmak için yatýrým yaptýn.Tahmini ilk hasatý yapma tarihi:1.5 yýl sonra\nÞimdi napacaksýn?\n");
	printf("1:10.000 hektar tarým arazisi oluþtur.(200K KRL)\n");
	printf("2:5.000 hektar tarým arazisi oluþtur.(100K KRL)\n");
	ifelse(85,86,39);
}
void g11()//77
{
	icerik(geri,"6 Aðustos 2018",100,-200,"100K KRL","1,000,017.9",36,40,40);
	printf("Tüm paraný yerli otomobil için yatýrým yapmaya harcadýn hatta paran eksiye düþtü ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(40);
}
void g12()//78
{
	icerik(geri,"6 Aðustos 2018",100,-75,"100K KRL","1,000,017.9",36,40,40);
	printf("Tüm paraný tarým için yatýrým yapmaya harcadýn hatta paran eksiye düþtü ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(40);
}
void g13()//79
{
	icerik(geri,"6 Aðustos 2018",100,100,"100K KRL","990,037.6",32,40,40);
	printf("Paraný yerli otomobil için yatýrým yapmaya harcadýn ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(73);	
}
void g14()//80
{
	icerik(geri,"6 Aðustos 2018",100,225,"100K KRL","990,037.6",32,40,40);	
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 110K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");	
	icerik(geri,"6 Aðustos 2018",100,115,"100K KRL","990,037.6",32,40,40);
	printf("Tarým yapmak için yatýrým yaptýn.Tahmini ilk hasatý yapma tarihi:1.5 yýl sonra\nÞimdi napacaksýn?\n");
	printf("1:10.000 hektar tarým arazisi oluþtur.(200K KRL)\n");
	printf("2:5.000 hektar tarým arazisi oluþtur.(100K KRL)\n");
	ifelse(87,88,80);
}
void g15()//81
{
	icerik(geri,"6 Aðustos 2018",100,-200,"100K KRL","990,037.6",36,40,40);	
	printf("Tüm paraný yerli otomobil için yatýrým yapmaya harcadýn hatta paran eksiye düþtü ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(74);
}
void g16()//82
{
	icerik(geri,"6 Aðustos 2018",100,-75,"100K KRL","990,037.6",36,40,40);	
	printf("Tüm paraný tarým için yatýrým yapmaya harcadýn hatta paran eksiye düþtü ama...\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(74);	
}
void h1()//55
{
	printf("1 yýl sonra...\n\n");
	delay();
	icerik(geri,"5 Aðustos 2019",100,7730,"400K KRL","689,942",66,50,100);
	printf("Ýkinizin de ülkesi 1 yýl öncesine göre çok daha iyi hale geldi ve savaþý baþlattýnýz.\n");
	printf("Ama atladýðýnýz bir nokta vardý: Ardya ülkesini yenmek için hala yeterince güçlü deðildiniz\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"30 Aðustos 2019",100,0,"0K KRL","689,942",0,0,0);
	printf("25 gün süren savaþýn sonunda Hamzabeycan ve sen yenildin.\n");
	kaybettiniz(50);
}
void h2()//56
{
	printf("1 yýl sonra...\n\n");
	delay();
	icerik(geri,"5 Aðustos 2019",100,7730,"400K KRL","689,942",66,50,100);
	printf("Ýkinizin de ülkesi 1 yýl öncesine göre çok daha iyi hale geldi ama Ardya ülkesine saldýrmadýnýz.\n");
	printf("Þimdi iki yýl daha bekleyip ülkenizi geliþtirmeye devam edeceksiniz. Bu iki yýl içerisinde ne yapacaksýnýz?\n");
	printf("1:Ýki yýl boyunca ikiniz de para biriktirip yatýrým yapýn, biriktirdiðiniz paralarýn bir kýsmýyla antlaþma dýþýnda dövizi yüzde 0,5 daha düþürün ve Ardya devletine savaþ açýn\n");
	printf("2:Bir yýl boyunca ikiniz de para biriktirip yatýrým yapýn ve Ardya devletine savaþ açýn\n");
	ifelse(61,62,50);
}
void h3()//57
{
	icerik(geri,"13 Aðustos 2018",100,550,"300K KRL","975,255.9",32,30,40);
	printf("Hamzabeycan cumhurbaþkanýyla çok iyi anlaþtýnýz ve dost olup çýktýnýz. En sonunda yeni çýkarmaya baþladýðýnýz doðalgazdan bahsettiniz.\n");
	printf("Hamzabeycan cumhurbaþkaný doðalgazýnýzý kýskandý ve sana savaþ açacaðýný söyledi.\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	delay();
	system("cls");
	icerik(geri,"20 Aðustos 2018",100,0,"0K KRL","975,255.9",0,0,0);	
	printf("7 gün süren savaþýn sonucunda kaybettiniz\n");
	kaybettiniz(51);
}
void h4()//58
{
	icerik(geri,"13 Aðustos 2018",100,550,"300K KRL","975,255.9",37,30,80);
	printf("Doðalgazý basýna açýklayarak çýkartmaya baþladýn. Ardya ülkesi bunu öðrenince ülkesinde doðalgazý olmadýðý için ülkendeki doðalgaza göz dikti.\nArdya ülkesi sana savaþ açtý\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"18 Aðustos 2018",100,-50000,"-500K KRL","985,082.2",0,0,0);
	printf("5 gün sonucunda savaþý kaybettiniz\n");
	kaybettiniz(51);
}
void h5()//59
{
	icerik(geri,"13 Aðustos 2018",100,400,"250K KRL","975,255.9",36,30,40);
	printf("Hamzabeycan cumhurbaþkanýyla çok iyi anlaþtýnýz ve dost olup çýktýnýz. En sonunda yeni çýkarmaya baþladýðýnýz doðalgazdan bahsettiniz.\n");
	printf("Hamzabeycan cumhurbaþkaný doðalgazýnýzý kýskandý ve sana savaþ açacaðýný söyledi.\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	delay();
	system("cls");
	icerik(geri,"20 Aðustos 2018",100,0,"0K KRL","975,255.9",0,0,0);	
	printf("7 gün süren savaþýn sonucunda kaybettiniz\n");
	kaybettiniz(53);
}
void h6()//60
{
	icerik(geri,"13 Aðustos 2018",100,400,"250K KRL","975,255.9",36,30,80);
	printf("Ordunu birden iki katýna çýkarman Ardya devletini þüphelendirdi. Zaten sana savaþ açmak için can atýyordu ve bunu bahane ederek savaþ ilan etti...\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"18 Aðustos 2018",100,-99999,"-1M KRL","1,000,000,000",0,-999,0);
	printf("5 gün süren bir savaþýn sonunda çok aðýr bir yenilgi aldýn ve ülken çöktü.");
	kaybettiniz(53);
}
void h7()//83
{
	icerik(geri,"13 Aðustos 2018",100,-350,"100K KRL","1,000,020.0",32,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:1/156(hafta)\n");
	printf("Endüstri 4.0 standartlarýnda bir otomobil fakrikasýnýn inþaatýna baþladýn.Tahmini bitiþ zamaný:2 yýl sonra\n");
	printf("3 hafta sonra...\n");
	delay();
	icerik(geri,"3 Eylül 2018",100,-50,"100K KRL","1,000,035.1",32,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:4/156(hafta)\n");	
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faizi ödeyemedin ve Ardya devleti ekonomini çökertti.\n");
	kaybettiniz(83);
}
void h8()//84
{
	icerik(geri,"13 Aðustos 2018",100,-200,"100K KRL","1,000,017.9",32,40,40);	
	printf("KOGG otomobilinin seri üretimindeki ilerleme:1/156(hafta)\n");
	printf("Endüstri 3.0 standartlarýnda bir otomobil fakrikasýnýn inþaatýna baþladýn.Tahmini bitiþ zamaný:1.5 yýl sonra\n");
	printf("1.5 yýl sonra...\n");
	delay();
	system("cls");
	icerik(geri,"10 Þubat 2020",100,5300,"100K KRL","1,004,675.9",40,40,40);	
	printf("KOGG otomobilinin seri üretimindeki ilerleme:79/156(hafta)\n");
	printf("Fabrika inþaatý bitti ve bu sýrada paran da arttý.Þimdi ne yapacaksýn?\n");
	printf("1:Fabrikayý endüstri 4.0 standartlarýna yükselteceðim ve geniþleteceðim.(1M KRL)\n");
	printf("2:Diðer ülkelere aracýn reklamýný yapýp müþteri çekeceðim.(400K KRL)\n");
	ifelse(89,90,75);
}
void h9()//85
{
	icerik(geri,"13 Aðustos 2018",100,25,"100K KRL","1,000,020.0",31,40,40);
	printf("10.000 hektarlýk tarým alanýn yapýmý yaklaþýk 1 yýl sürecek ve binlerce çiftçi bu alanýn yapýmýnda yardýmcý olacak.\nAncak bu alan yaklaþýk 4 Ankara büyüklüðünde ve halk bu kadar büyük bir tarým alanýn yapýlmasýndan memnun olmadý./nHalkýnýn þartý bu alaný hiç aðaç kesmeden yapman yoksa isyan çýkaracaklar.\nNe yapacaksýn?\n");
	printf("1:Halkýn þartýný kabul et.(Tarým alanýnýn büyüklüðü 5.000 hektara düþecek)\n");
	printf("2:Halkýn þartýný reddet.\n");
	ifelse(91,92,76);
}
void h10()//86
{
	icerik(geri,"13 Aðustos 2018",100,125,"100K KRL","1,000,020.0",32,40,40);
	printf("5.000 hektarlýk tarým alanýn yapýmý yaklaþýk yarým yýl sürecek ve binlerce çiftçi bu alanýn yapýmýnda yardýmcý olacak.\n");	
	printf("Yarým yýl sonra...\n");
	delay();
	system("cls");
	icerik(geri,"11 Þubat 2019",100,2125,"100K KRL","1,001,429.5",34,40,40);
	printf("Tarým alaný tamamlandý ve bu sýrada paran da arttý artýk ekin ekebilirsin.(Hasat edebiliyor hale gelmeleri yaklaþýk 1.5 yýl sürecek)\n");
	printf("1.5 yýl sonra...");
	delay();
	system("cls");
	icerik(geri,"10 Aðustos 2020",100,7925,"100K KRL","1,005,064.8",41,40,40);
	printf("Ekinlerini hasat ettin ve satýyorsun.\n");
	printf("Ekinler satýlýyor...");
	delay();
	icerik(geri,"17 Aðustos 2020",100,97925,"1M KRL","950,346.5",48,40,40);
	printf("90 milyon KRL lik satýþ yaptýn ve tarým alanýn sayesinde haftalýk gelirin 900K KRL artarak 1M KRL oldu.\nBu kadar fazla satýþ yapman KRL ye olan güveni arttýrdý ve KRL de bir toparlanýþ bekleniyor.\n");
	printf("Þimdi ne yapacaksýn?\n");
	printf("1:Tarým alanlarýnýn verimini arttýr.\n");
	printf("2:Paraný döviz kurunu azaltmak için harcamaya baþla.\n");
	ifelse(93,94,76);
}
void h11()//87
{
	icerik(geri,"13 Aðustos 2018",100,15,"100K KRL","985,087.4",31,40,40);
	printf("10.000 hektarlýk tarým alanýn yapýmý yaklaþýk 1 yýl sürecek ve binlerce çiftçi bu alanýn yapýmýnda yardýmcý olacak.\nAncak bu alan yaklaþýk 4 Ankara büyüklüðünde ve halk bu kadar büyük bir tarým alanýn yapýlmasýndan memnun olmadý./nHalkýnýn þartý bu alaný hiç aðaç kesmeden yapman yoksa isyan çýkaracaklar.\nNe yapacaksýn?\n");
	printf("1:Halkýn þartýný kabul et.(Tarým alanýnýn büyüklüðü 5.000 hektara düþecek)\n");
	printf("2:Halkýn þartýný reddet.\n");
	ifelse(95,96,80);
}
void h12()//88
{
	icerik(geri,"13 Aðustos 2018",100,115,"100K KRL","985,087.4",31,40,40);
	printf("5.000 hektarlýk tarým alanýn yapýmý yaklaþýk yarým yýl sürecek ve binlerce çiftçi bu alanýn yapýmýnda yardýmcý olacak.\n");	
	printf("Yarým yýl sonra...\n");
	delay();
	system("cls");
	icerik(geri,"11 Þubat 2019",100,2065,"100K KRL","864,718.7",34,40,40);
	printf("Tarým alaný tamamlandý ve bu sýrada paran da arttý artýk ekin ekebilirsin.(Hasat edebiliyor hale gelmeleri yaklaþýk 1.5 yýl sürecek)\n");
	printf("1.5 yýl sonra...");
	delay();
	system("cls");
	icerik(geri,"10 Aðustos 2020",100,7655,"100K KRL","584,891.2",41,40,40);
	printf("Ekinlerini hasat ettin ve satýyorsun.\n");
	printf("Ekinler satýlýyor...");
	delay();
	icerik(geri,"17 Aðustos 2020",100,97655,"1M KRL","553,412.8",48,40,40);
	printf("90 milyon KRL lik satýþ yaptýn ve tarým alanýn sayesinde haftalýk gelirin 900K KRL artarak 1M KRL oldu.\nBu kadar fazla satýþ yapman KRL ye olan güveni arttýrdý ve KRL de bir toparlanýþ bekleniyor.\n");
	printf("Þimdi ne yapacaksýn?\n");
	printf("1:Tarým alanlarýnýn verimini arttýr.\n");
	printf("2:Paraný döviz kurunu azaltmak için harcamaya baþla.\n");
	ifelse(97,98,80);
}
void i1()//61
{
	printf("2 yýl sonra...\n\n");
	delay();
	icerik(geri,"2 Aðustos 2021",100,12000,"1M KRL","380,158",85,80,100);
	printf("Ýki yýl daha geçtikten sonra Hamzabeycan ülkesiyle birlikte çok daha güçlü hale geldiniz ve artýk savaþý baþlatýyorsunuz.\n");
	printf("Savaþ baþlýyor...\n");
	delay();
	printf("B-bu olamaz...\n");
	delay();
	printf("Vay be...");
	delay();
	system("cls");
	icerik(geri,"28 Eylül 2021",0,2000,"1M KRL","25,000",90,70,15);
	printf("Yaklaþýk 2 ay boyunca savaþtýnýz.\n");
	printf("Toplam 3 yýllýk emekleriniz en sonunda iþe yaradý ve Ardya ülkesini berbat bir hale getirmeyi baþardýnýz.\n");
	printf("Þimdi en önemli zaman geldi...\n");
	delay();
	printf("Antlaþma maddeleri neler olacak?\n");
	printf("1:Dýþ borçlarýmýz silinecek, döviz kuru 20K azalacak ve Ardya ülkesi sonraki seçime kadar Hamzabeycan ile bize her hafta gelirinin yüzde 25ini verecek\n");
	printf("2:Dýþ borçlarýmýz silinecek ve Ardya ülkesinin topraklarýndan çýkan petrol sonraki seçime kadar Hamzabeycan ile bizim olacak\n");
	ifelse(63,64,56);
}
void i2()//62
{
	printf("2 yýl sonra...\n\n");
	delay();
	icerik(geri,"2 Aðustos 2021",100,7730,"400K KRL","468,470.6",80,50,100);
	printf("Ýki yýl daha geçtikten sonra Hamzabeycan ülkesiyle birlikte çok daha güçlü hale geldiniz ve artýk savaþý baþlatýyorsunuz.\n");
	printf("Savaþ baþlýyor...\n");
	delay();
	printf("B-bu olamaz...\n");
	delay();
	system("cls");
	icerik(geri,"28 Eylül 2021",100,-9000,"3M KRL","468,470.6",0,0,0);
	printf("Yaklaþýk 2 ay boyunca savaþtýnýz ancak kazanamadýnýz.\n");
	kaybettiniz(56);
}
void i3()//89
{
	icerik(geri,"17 Þubat 2020",100,4400,"100K KRL","1,004,680.0",41,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:80/156(hafta)\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"17 Þubat 2020",100,4300,"100K KRL","1,004,680.0",41,40,40);
	printf("Fabrikanýn yükseltme iþlemi baþladý.Tahmini bitiþ zamaný:1 yýl sonra\n");
	printf("1 yýl sonra...\n");
	delay();
	system("cls");
	icerik(geri,"15 Þubat 2021",100,8200,"100K KRL","1,007,978.5",45,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:132/156(hafta)\n");
	printf("Fabrikanýn yükseltmesi tamamlandý, þu anda fabrika haftada 2000 araç üretebilme kapasitesine sahip.\nÞimdi ne yapacaksýn?\n");
	printf("1:Ülkenin her tarafýna elektrikli þarj istasyonlarý kur.\n");
	printf("2:Yerli elektrik üretimini arttýr.\n");
	ifelse(99,100,84);
}
void i4()//90
{
	icerik(geri,"10 Þubat 2020",100,5000,"100K KRL","1,004,680.0",41,40,40);	
	printf("KOGG otomobilinin seri üretimindeki ilerleme:80/156(hafta)\n");	
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"10 Þubat 2020",100,4900,"100K KRL","1,004,680.0",41,40,40);
	printf("KOGG un reklamýný yaptýn ve önsipariþ sayýsý %%25 arttý.\nÞimdi ne yapacaksýn?\n");
	printf("1:Ülkenin her tarafýna elektrikli þarj istasyonlarý kur.\n");
	printf("2:Yerli elektrik üretimini arttýr.\n");
	ifelse(101,102,84);
}
void i5()//91
{
	icerik(geri,"20 Aðustos 2018",100,125,"100K KRL","1,000,024.8",15,40,40);
	printf("Halkýn isteðini kabul ettin ancak bu sefer de çiftçiler tarým alanýn bir anda yarýya inmesi yüzünden zarar edeceklerini söyleyip isyan etti.\nÇiftçiler ve halk birbirine girdi.\n");	
	kaybettiniz(85);
}
void i6()//92
{
	icerik(geri,"20 Aðustos 2018",100,125,"100K KRL","1,000,024.8",15,40,40);
	printf("Halk þartlarýný kabul etmediðin için isyan çýkardý ve isyaný bastýramadýn.\n");
	kaybettiniz(85);
}
void i7()//93
{
	icerik(geri,"24 Aðustos 2020",100,98000,"1.3M KRL","950,250.0",48,40,40);
	printf("Tarým arazinin verimini arttýrdýn ve gelirin 300K KRL arttý.\nÞimdi ne yapacaksýn?\n");
	printf("1:Seçim vakti gelene kadar elde ettiðin geliri borcunu ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar elde ettiðin gelirin yarýsýný borcunu ödemede, yarýsýný gelirini arttýrmada harca.\n");
	ifelse(103,104,86);
}
void i8()//94
{
	icerik(geri,"24 Aðustos 2020",100,98925,"1M KRL","950,346.5",48,40,40);
	printf("Haftalýk gelirinin 200K KRL sini döviz kurunu düþürmede harcamaya karar verdin.\nÞimdi ne yapacaksýn?\n");
	printf("1:Seçim vakti gelene kadar gelirinin 200K eksiðini borcunu ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar gelirinin 200K eksiðinin yarýsýný borcunu ödemede, diðer yarýsýný gelirini arttýrmada harca.\n");
	ifelse(105,106,86);
}
void i9()//95
{
	icerik(geri,"20 Aðustos 2018",100,115,"100K KRL","980,161.9",15,40,40);
	printf("Halkýn isteðini kabul ettin ancak bu sefer de çiftçiler tarým alanýn bir anda yarýya inmesi yüzünden zarar edeceklerini söyleyip isyan etti.\nÇiftçiler ve halk birbirine girdi.\n");
	kaybettiniz(87);
}
void i10()//96
{
	icerik(geri,"20 Aðustos 2018",100,115,"100K KRL","980,161.9",15,40,40);
	printf("Halk þartlarýný kabul etmediðin için isyan çýkardý ve isyaný bastýramadýn.\n");
	kaybettiniz(87);
}
void i11()//97
{
	icerik(geri,"24 Aðustos 2020",100,97800,"1.3M KRL","550,645.7",48,40,40);
	printf("Tarým arazinin verimini arttýrdýn ve gelirin 300K KRL arttý.\nÞimdi ne yapacaksýn?\n");
	printf("1:Seçim vakti gelene kadar tarým arazisinden elde ettiðin geliri borcunu ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar tarým arazisinden elde ettiðin gelirin yarýsýný borcunu ödemede, yarýsýný gelirini arttýrmada harca.\n");
	ifelse(107,108,88);	
}
void i12()//98
{
	icerik(geri,"24 Aðustos 2020",100,97800,"1M KRL","550,645.7",48,40,40);
	printf("Haftalýk gelirinin 200K KRL sini döviz kurunu düþürmede harcamaya karar verdin.\nÞimdi ne yapacaksýn?\n");
	printf("1:Seçim vakti gelene kadar gelirinin 200K eksiðini borcunu ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar 200K eksiðinin yarýsýný borcunu ödemede, diðer yarýsýný gelirini arttýrmada harca.\n");
	ifelse(109,110,88);
}
void k1()//63
{
	icerik(geri,"5 Ekim 2021",0,4000,"2M KRL","5,000",95,70,15);
	printf("Önündeki en büyük sorunu ortadan kaldýrdýn. Artýk napacaksýn?\n");
	printf("1:Halkýma ve orduya önem vereceðim\n");
	printf("2:Ekonomiye ve diplomasiye önem vereceðim\n");
	ifelse(65,66,61);
}
void k2()//64
{
	icerik(geri,"5 Ekim 2021",0,4000,"2M KRL","5,000",95,70,15);
	printf("Önündeki en büyük sorunu ortadan kaldýrdýn. Artýk napacaksýn?\n");
	printf("1:Halkýma ve orduya önem vereceðim\n");
	printf("2:Ekonomiye ve diplomasiye önem vereceðim\n");
	ifelse(67,68,61);
}
void k3()//99
{
	onceki=99;
	icerik(geri,"22 Þubat 2021",100,7500,"100K KRL","1,008,000.9",47,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:132/156(hafta)\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"22 Þubat 2021",100,7400,"100K KRL","1,008,000.9",47,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:132/156(hafta)\n");
	printf("Ülkenin dört bir yanýnda elektrikli þarj istasyonlarý kuruldu, KOGG satýn alýnmaya baþlandýðý zaman rahatça þarj edilebilecek.\n");
	printf("Yaklaþýk yarým yýl sonra...\n");
	delay();
	icerik(geri,"9 Aðustos 2021",100,9300,"1.6M KRL","1,008,000.9",57,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,9300,"1.6M KRL","1,008,000.9",57,40,40);
	printf("KOGG otomobilinin seri üretimi baþladý ve haftalýk gelirin 1.5M KRL artarak 1.6M KRL oldu.\nÞimdi ne yapacaksýn?\n");
	printf("1:1 yýl boyunca KOGG otomobili üretiminden elde ettiðin geliri borç ödemede harca.\n");
	printf("2:1 yýl boyunca KOGG otomobili üretiminden elde ettiðin gelirin yarýsýný borç ödemede, yarýsýný geliri arttýrmada harca.\n");
	ifelse(111,112,89);
}
void k4()//100
{
	onceki=100;
	icerik(geri,"22 Þubat 2021",100,7500,"100K KRL","1,008,000.9",47,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:132/156(hafta)\n");
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"22 Þubat 2021",100,7400,"100K KRL","1,008,000.9",47,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:132/156(hafta)\n");
	printf("Ülkeye güneþ enerji panelleri kurarak yerli elektrik üretimini arttýrdýn.\nKOGG otomobili satýn alýnmaya baþlandýðý zaman rahatça þarj edilebilecek.\n");
	printf("Yaklaþýk yarým yýl sonra...\n");
	delay();
	icerik(geri,"9 Aðustos 2021",100,9300,"1.6M KRL","1,011,076.5",57,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,9300,"1.6M KRL","1,011,076.5",57,40,40);
	printf("KOGG otomobilinin seri üretimi baþladý ve haftalýk gelirin 1.5M KRL artarak 1.6M KRL oldu.\nÞimdi ne yapacaksýn?\n");
	printf("1:Seçim vakti gelene kadar KOGG otomobili üretiminden elde ettiðin geliri borç ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar KOGG otomobili üretiminden elde ettiðin gelirin yarýsýný borç ödemede, yarýsýný geliri arttýrmada harca.\n");
	ifelse(111,112,89);	
}
void k5()//101
{
	onceki=101;
	icerik(geri,"10 Þubat 2020",100,4200,"100K KRL","1,004,680.0",41,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:81/156(hafta)\n");	
	printf("Ülkenin dört bir yanýnda elektrikli þarj istasyonlarý kuruldu, KOGG satýn alýnmaya baþlandýðý zaman rahatça þarj edilebilecek.\n");
	printf("Yaklaþýk 1.5 yýl sonra...");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,10800,"1M KRL","1,011,076.5",51,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,10700,"1M KRL","1,011,076.5",51,40,40);	
	printf("KOGG otomobilinin seri üretimi baþladý ve haftalýk gelirin 900K KRL artarak 1M KRL oldu.\nÞimdi ne yapacaksýn?\n");	
	printf("1:Seçim vakti gelene kadar KOGG otomobili üretiminden elde ettiðin geliri borç ödemede harca.\n");
	printf("2:Seçim vakti gelene kadar KOGG otomobili üretiminden elde ettiðin gelirin yarýsýný borç ödemede, yarýsýný geliri arttýrmada harca.\n");
	ifelse(113,114,90);	
}
void k6()//102
{
	onceki=102;
	icerik(geri,"10 Þubat 2020",100,4200,"100K KRL","1,004,680.0",41,40,40);
	printf("KOGG otomobilinin seri üretimindeki ilerleme:81/156(hafta)\n");	
	printf("Ülkeye güneþ enerji panelleri kurarak yerli elektrik üretimini arttýrdýn.\nKOGG otomobili satýn alýnmaya baþlandýðý zaman rahatça þarj edilebilecek.\n");
	printf("Yaklaþýk 1.5 yýl sonra...");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,10800,"1M KRL","1,011,076.5",51,40,40);
	printf("4 haftalýk faiz ücretini ödeme zamaný geldi. Faizin ücreti 100K KRL\n");
	printf("Faiz ödeniyor...\n");
	delay();
	system("cls");
	icerik(geri,"9 Aðustos 2021",100,10700,"1M KRL","1,011,076.5",51,40,40);;	
	printf("KOGG otomobilinin seri üretimi baþladý ve haftalýk gelirin 900K KRL artarak 1M KRL oldu.\nÞimdi ne yapacaksýn?\n");	
	printf("1:1 yýl boyunca KOGG otomobili üretiminden elde ettiðin geliri borç ödemede harca.\n");
	printf("2:1 yýl boyunca KOGG otomobili üretiminden elde ettiðin gelirin yarýsýný borç ödemede, yarýsýný geliri arttýrmada harca.\n");
	ifelse(113,114,90);		
}
void k7()//103
{	
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",96.4,3000,"1.3M KRL","786,432.4",65,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene raðmen borcun sadece yaklaþýk 3.5K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 33.3 lük oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(93);
}
void k8()//104
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",45,3000,"121.5M KRL","786,432.4",65,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene ve gelirini arttýrmana raðmen borcun sadece yaklaþýk 55K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 45.3 lük oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(93);
}
void k9()//105
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",98.8,3000,"1M KRL","8057.0",65,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene ve dövizi oldukça fazla düþürmene raðmen borcun sadece yaklaþýk 1K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 29.8 lik oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(94);
}
void k10()//106
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",86.8,3000,"74.7M KRL","8057.0",65,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene,gelirini arttýrmana ve dövizi oldukça fazla düþürmene raðmen borcun sadece yaklaþýk 13K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 36.3 lük oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(94);
}
void k11()//107
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",67.6,3000,"1.3M KRL","4668.4",70,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene raðmen borcun sadece yaklaþýk 33K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 40.5 lik oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(97);
}
void k12()//108
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",0,900000,"121.5M KRL","4668.4",95,80,40);
	printf("3 yýl boyunca paranla gelirini arttýrdýn ve borcunun tamamýný ödedin,hatta paran arttý ve halkýn mutluluðunu arttýrdýn.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Son 5 yýlda ülkenin ekonomisini toparladýn, tarým için yatýrým yaptýn ve dövizi düþürdün.\n");
	printf("Dünya sýralamasýnda ekonomisi en iyi 25 ülke arasýna girdin. Halkýn senden çoðunlukla memnun.\n Ardya devletiyle de þuan barýþýksýnýz, savaþsýz ve huzurlu bir 5 yýldý.\n");
	printf("Seçimi yüzde 50.1 lik oyla kazandýn.\n");
	printf("KAZANDINIZ!\n");	
	target20231();
}
void k13()//109
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();
	icerik(geri,"5 Haziran 2023",95.5,3000,"1M KRL","989.3",70,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene ve dövizi düþürmene raðmen borcun sadece yaklaþýk 4.5K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 33.9 lük oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(98);
}
void k14()//110
{
	printf("Yaklaþýk 3 yýl sonra...\n");
	delay();	
	icerik(geri,"5 Haziran 2023",4.3,3000,"74.7M KRL","989.3",65,40,40);
	printf("3 yýl boyunca paranla borcunu ödemene,gelirini arttýrmana ve dövizi oldukça fazla düþürmene raðmen borcun sadece yaklaþýk 96K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 48.4 lük oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	kaybettiniz(98);	
}
void l1()//65
{
	printf("1 yýl daha sonra...\n");
	delay();
	icerik(geri,"4 Ekim 2022",0,16000,"2M KRL","10",100,70,100);
	printf("Bir yýl boyunca vatandaþlarýnla ilgilendin ve azami mutluluk seviyesine ulaþtýlar! Yeni stratejiniz ne olacak?\n");
	printf("1:Uzay teknolojilerine yatýrým yapacaðým.\n");
	printf("2:Yapay zeka teknolojisine yatýrým yapacaðým.\n");
	ifelse(69,70,63);
}
void l2()//66
{
	printf("1 yýl daha sonra...\n");
	delay();
	icerik(geri,"4 Ekim 2022",0,80000,"6M KRL","5",95,100,15);
	printf("Bir yýl boyunca ekonomi ve diplomasi ile ilgilendin ama...\n");
	delay();
	delay();
	printf("Hamzabeycan ülkesi sana ihanet etti, gerekçesi ise: Sen çok kazanion oldu. Ordunun güçsüz olmasýný da fýrsat bilip sana savaþ açtý...\n");
	delay();
	delay();
	printf("Bu kadar kýsa sürede ordunu toparlaman imkansýz. Ýþin zor.\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"29 Ekim 2022",0,5000,"1M KRL","1",40,100,0);
	printf("25 gün boyunca savaþtýnýz. Hamzabeycan ülkesinin sömürgesi oldun.\n");
	kaybettiniz(63);
}
void l3()//67
{
	printf("1 yýl daha sonra...\n");
	delay();
	icerik(geri,"4 Ekim 2022",0,20000,"2M KRL","10",95,70,100);
	printf("Bir yýl boyunca vatandaþlarýnla ilgilendin ve azami mutluluk seviyesine ulaþtýlar! Ama...\n");
	delay();
	delay();
	printf("Hamzabeycan ülkesi sana ihanet etti, gerekçesi ise: Ben senin petrolünü kýskaniom, benimki bana yetmio oldu...\n");
	delay();
	delay();
	printf("Hamzabeycan sana savaþ ilan etti, en azýndan ordun hazýr durumda.\n");
	printf("Savaþ yapýlýyor...");
	delay();
	delay();
	system("cls");
	icerik(geri,"25 Ekim 2022",0,4000,"2M KRL","10",90,70,50);
	printf("21 gün süren savaþ sonucunda siz kazandýnýz, Hamzabeycan ülkesinin aldýðý petrolleri de almaya baþladýnýz\n");
	printf("Hamza aglio\n");
	printf("Seçim zamaný yaklaþýyor, yeni yatýrýmlarýz neler olacak?\n");
	printf("1:Uzay teknolojilerine yatýrým yapacaðým.\n");
	printf("2:Yapay zeka teknolojisine yatýrým yapacaðým.\n");	
	ifelse(71,72,64);
}
void l4()//68
{
	printf("1 yýl daha sonra...\n");
	delay();
	icerik(geri,"4 Ekim 2022",0,4000,"6M KRL","5",95,100,15);
	printf("Bir yýl boyunca ekonomi ve diplomasi ile ilgilendin ama...\n");
	delay();
	delay();
	printf("Hamzabeycan ülkesi sana ihanet etti, gerekçesi ise: Sen çok kazanion oldu. Ordunun güçsüz olmasýný da fýrsat bilip sana savaþ açtý...\n");
	delay();
	delay();
	printf("Bu kadar kýsa sürede ordunu toparlaman imkansýz. Ýþin zor.\n");
	printf("Savaþ yapýlýyor...\n");
	delay();
	delay();
	system("cls");
	icerik(geri,"29 Ekim 2022",0,5000,"1M KRL","5",40,100,0);
	printf("25 gün boyunca savaþtýnýz. Hamzabeycan ülkesinin sömürgesi oldun.\n");
	kaybettiniz(64);
}
void l5()//111
{
	printf("Yaklaþýk 2 yýl sonra...");
	delay();
	icerik(geri,"5 Haziran 2023",97.7,2000,"1.6M KRL","66,342.5",68,40,40);
	printf("2 yýl boyunca paranla borcunu ödemene raðmen borcun sadece yaklaþýk 2K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 30.2 lik oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	if(onceki==99)
		kaybettiniz(99);
	else
		kaybettiniz(100);
}
void l6()//112
{
	printf("Yaklaþýk 2 yýl sonra...");
	delay();
	icerik(geri,"5 Haziran 2023",0,90000,"164.8M KRL","66,342.5",100,70,40);
	printf("2 yýl boyunca ve gelirini arttýrdýn ve borcunun tamamýný ödedin,hatta paran arttý ve halkýn mutluluðunu arttýrdýn.\n");
	printf("Yerli bir otomobil bile ürettin ve ihracatýný büyük ölçüde arttýrdýn!\n");
	printf("Dünya sýralamasýnda ekonomisi en iyi 20 ülke arasýna girdin. Halkýn senden memnun.\n Ardya devletiyle de þuan barýþýksýnýz, savaþsýz ve huzurlu bir 5 yýldý.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 51.2 lik oyla kazandýn.\n");
	printf("KAZANDINIZ!\n");
	target20231();
}
void l7()//113
{
	printf("Yaklaþýk 2 yýl sonra...");
	delay();	
	icerik(geri,"9 Aðustos 2021",99,10700,"1M KRL","100,543.1",70,40,40);
	printf("2 yýl boyunca paranla borcunu ödemene raðmen borcun sadece yaklaþýk 1K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 29.8 lik oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	if(onceki==101)
		kaybettiniz(101);
	else
		kaybettiniz(102);
}
void l8()//114
{
	printf("Yaklaþýk 2 yýl sonra...");
	delay();	
	icerik(geri,"9 Aðustos 2021",50.6,10700,"1M KRL","100,543.1",70,40,40);
	printf("2 yýl boyunca paranla borcunu ödemene raðmen borcun sadece yaklaþýk 50K ARLsini ödeyebildin.\n");
	printf("Seçime 4 gün var...\n");
	delay();
	printf("Seçimi yüzde 44.7 lik oyla kaybettin çünkü halk sana yeterince güvenmedi.\n");
	if(onceki==101)
		kaybettiniz(101);
	else
		kaybettiniz(102);
}
void m1()//69
{
	printf("1 yýla yakýn bir süre daha sonra...\n");
	printf("Seçime 2 gün var\n");
	delay();
	icerik(geri,"9 Haziran 2023",0,40000,"3M KRL","0.1",100,100,100);
	printf("Geçen son 7-8 ayda tam 14 tane uydu fýrlattýn. Bunun yanýnda geçen ay Aya ilk Keremistanlý da ayak bastý\n");
	printf("Dünya sýralamasýnda ekonomisi en iyi 10 ülke arasýna girdin. Halkýn da senden gayet memnun. Bu arada Hamzabeycan ülkesi ile ülkelerinizi de birleþtirdiniz\n");
	printf("Bunun sonucunda ülkenizin adý Kerzabeycan oldu\n");
	printf("2 gün sonra...\n");
	delay();
	printf("Seçimi yüzde 59.6 lýk oyla kazandýn, artýk ülke emin ellerde\n");
	printf("KAZANDINIZ!\n");
	target20231();
}
void m2()//70
{
	printf("1 yýla yakýn bir süre daha sonra...\n");
	printf("Seçime 2 gün var\n");
	delay();
	icerik(geri,"9 Haziran 2023",0,64000,"8M KRL","0.02",100,100,100);
	printf("Yapay zekanýn geliþmelerine geçmeden önce baþka bir haber: Hamzabeycan ülkesi ile ülkelerinizi birleþtirdiniz ve ülkenin yeni adý Kerzabeycan oldu.\n");	
	printf("Geçen son 7-8 ayda yapay zeka alanýnda çýðýr açtýn. Otomasyon ve geliþmiþ yazýlýmlar ülkenin her yerini sarmýþ durumda\n");
	printf("Fakat bunun yanýnda küçük bir sorunumuz var\n");
	printf("Yapay zeka o kadar geliþti ki artýk seçimlere gerek kalmadý, ülke için en iyi kararlarý oldukça ilerigörüþlü bir þekilde yapay zeka verebiliyor\n");
	printf("Yani artýk ülkeniz yapay zekayla yönetiliyor ama yapay zeka ülkenizi kendi çýkarlarýna göre mi yönetir bu artýk dizilerin,filmlerin konusu\n");
	printf("KAZANDINIZ?\n");
	target20231();
}
void m3()//71
{
	printf("1 yýla yakýn bir süre daha sonra...\n");
	printf("Seçime 2 gün var\n");
	delay();
	icerik(geri,"9 Haziran 2023",0,40000,"3M KRL","0.1",100,100,100);
	printf("Geçen son 7-8 ayda tam 14 tane uydu fýrlattýn. Bunun yanýnda geçen ay Aya ilk Keremistanlý da ayak bastý\n");
	printf("Dünya sýralamasýnda ekonomisi en iyi 10 ülke arasýna girdin. Halkýn da senden gayet memnun.\n");
	printf("2 gün sonra...\n");
	delay();
	printf("Seçimi yüzde 59.6 lýk oyla kazandýn artýk ülke emin ellerde\n");
	printf("KAZANDINIZ!\n");
	printf("Baþarým kazanýldý!------------------------\n");
	trgta2=1;
	printf("-Þahlandým resmen, bu kadar mý fark eder?\n");
	
	target20231();	
}
void m4()//72
{
	printf("1 yýla yakýn bir süre daha sonra...\n");
	printf("Seçime 2 gün var\n");
	delay();
	icerik(geri,"9 Haziran 2023",0,64000,"8M KRL","0.02",100,100,100);	
	printf("Geçen son 7-8 ayda yapay zeka alanýnda çýðýr açtýn. Otomasyon ve geliþmiþ yazýlýmlar ülkenin her yerini sarmýþ durumda\n");
	printf("Fakat bunun yanýnda küçük bir sorunumuz var\n");
	printf("Yapay zeka o kadar geliþti ki artýk seçimlere gerek kalmadý, ülke için en iyi kararlarý oldukça ilerigörüþlü bir þekilde yapay zeka verebiliyor\n");
	printf("Yani artýk ülkeniz yapay zekayla yönetiliyor ama yapay zeka ülkenizi kendi çýkarlarýna göre mi yönetir bu artýk dizilerin,filmlerin konusu\n");
	printf("KAZANDINIZ?\n");
	target20231();	
}
//Taþ Kaðýt Makas
tkm1()
{
	printf("Taþ Kaðýt Makas\n");
	printf("Oyun Sürümü      : 1.1\n");
	printf("Güncelleme Tarihi: 19.07.2022\n");
	printf("Açýklama---------------------\n");
	printf("Klasik Taþ Kaðýt Makas Oyunu\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Ana Ekrana ekleme eklendi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
		int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(tkm0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(tkm0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				tkm();
			}
			break;
		case 2:
			if(tkm2==1)
			{
				if(home==1)
				{
					tkm10=2;
					printf("Ana Ekrana eklendi.\n");
					tkm1();
				}
				else
				{
					tkm10=1;
					printf("Ana Ekrana eklendi.\n");
					tkm1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				tkm1();
			}
			break;
		case 3:
			tkm2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			tkm1();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			tkm1();
			break;
			
	}	
}
tkm()
{
	srand(time(NULL));
	
	int a,b,c;
	int puan_pc=0,puan_pe=0;
	printf("Taþ kaðýt makas oyununa hoþ geldiniz...\n");
	printf("Taþ=1, Kaðýt=2, Makas=3\n");
	for(c=0;c<5;c++)
	{
		a=rand()%3+1;
		printf("\nBir sayý giriniz:");
		scanf("%d",&b);
		if(b==a && a==1)
		{
			puan_pc+=0;
			puan_pe+=0;
		
			printf("Pc ve oyuncu taþ attý ve ikisi de puan alamadý\n\n");
	    }
	    else if(b==a && a==2)
	    {
	    	puan_pc+=0;
	    	puan_pe+=0;
	    	
	    	printf("Pc ve oyuncu kaðýt attý ve ikisi de puan alamadý\n\n");
		}
		else if(b==a && a==3)
		{
	    	puan_pc+=0;
	    	puan_pe+=0;
	    	
	    	printf("Pc ve oyuncu makas attý ve ikisi de puan alamadý\n\n");
		}
		
	    else if(b==1 && a==2)
	    {
	    	puan_pc+=1;
	    	puan_pe+=0;
	    	printf("Pc kaðýt , oyuncu taþ attý ve pc 1 puan kazandý \n\n");
		}
		else if(b==1 && a==3)
	    {
	    	puan_pc+=0;
	    	puan_pe+=1;
	    	printf("Pc makas , oyuncu taþ attý ve oyuncu 1 puan kazandý \n\n");
		}
		else if(b==2 && a==1)
	    {
	    	puan_pc+=0;
	    	puan_pe+=1;
	    	printf("Pc taþ , oyuncu kaðýt attý ve oyuncu 1 puan kazandý \n\n");
		}
		else if(b==2 && a==3)
	    {
	    	puan_pc+=1;
	    	puan_pe+=0;
	    	printf("Pc makas , oyuncu kaðýt attý ve pc 1 puan kazandý \n\n");
		}
		else if(b==3 && a==1)
	    {
	    	puan_pc+=1;
	    	puan_pe+=0;
	    	printf("Pc taþ, oyuncu makas attý ve pc 1 puan kazandý\n\n");
		}
		else if(b==3 && a==2)
	    {
	    	puan_pc+=0;
	    	puan_pe+=1;
	    	printf("Pc kaðýt , oyuncu makas attý ve oyuncu 1 puan kazandý \n\n");
		}
	}
		printf("Pc: %d\n",puan_pc);
		printf("Player1: %d\n\n",puan_pe);
		
		if(puan_pe==puan_pc)
		{
			printf("%00000000000.1 þansla berabere kaldýnýz\n");
			saniye();
			printf ("Oyun baþtan baþlatýlýyor...\n");
			printf("Baþarým kazanýldý!\n");
			printf("-Ýmkansýzý baþarmak!\n");
			tkma1=1;	
			tkm();
					
			
		}
		else if(puan_pc>puan_pe)
		{
			printf("Bilgisayara yenildiniz...");
			saniye();
			tkm1();
		}
		else if(puan_pe>puan_pc)
		{
			printf("Tebrikler kazandýnýz");
			saniye();
			tkm1();
		}
		
}	
//Sayý Tahmin
sayi1()
{
	silge(1);
	nofbar();
	saat();
	printf("Sayý Tahmin\n");
	printf("Oyun Sürümü      : 2.6\n");
	printf("Güncelleme Tarihi: 08.03.2022\n");
	printf("Açýklama---------------------\n");
	printf("Klasik Sayý Tahmin Oyunu\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.1 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Hatalar giderildi.\n");
	printf("-Baþarým eklendi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(sayi0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(sayi0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				sayi_tahmin();
			}
			break;
		case 2:
			if(sayi2==1)
			{
				if(home==1)
				{
					sayi10=2;
					printf("Ana Ekrana eklendi.\n");
					sayi1();
				}
				else
				{
					sayi10=1;
					printf("Ana Ekrana eklendi.\n");
					sayi1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				sayi1();
			}
			break;
		case 3:
			sayi2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			sayi1();
			break;
		case 7:
			gamestr();
			break;
		case 8:
			kuicktr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			hata();
			sayi1();
			break;
			
	}	
}
sayi_tahmin()
{
	srand(time(NULL));
	time_t mytime;
    mytime = time(NULL);
    silge(1);
    saat();
    nofbar();
	printf("1=Sayý aralýðýný kendin belirle\n");
	printf("2=Varsayýlan sayý aralýðýnda oyna(0-100)\n");
	navbar();
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{	
			case 1:
				kisisellestirilmis_sayi_tahmin();
				break;
			case 2:
				varsayilan_sayi_tahmin();
				break;
			case 7:
				sayi1();
				break;
			case 8:
				kuicktr();
			case 9:
				mainimsi();
				break;
			default:
				hata();
				sayi_tahmin();
				break;
		}
	}
	else
	{
		hata();
		sayi_tahmin();
	}
}		
kisisellestirilmis_sayi_tahmin()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	
	saat();
	printf("Sayi aralýðýný giriniz(örnek giriþ:15 45)\n");
	scanf("%d %d",&c,&d);
	
	a=rand()%(d-c);
	a+=c;
	
			printf("Bir sayý giriniz: \n");
			scanf("%d",&b);

				while(b!=a)
			{
			 if (b<a)
				{
					e++;
			 		printf("Daha büyük bir sayý deneyin. \n");
					scanf("%d",&b);
				}
				else if(b>a)
				{
					e++;
					printf("Daha küçük bir sayý deneyin. \n");	
					scanf("%d",&b);
				}
			
			}
			e++;
			printf("Tebrikler, kazandýnýz.\n");
			printf("Deneme sayýsý:%d\n",e);
			if(e==1)
			{
				saya1=1;
				printf("Baþarým kazanýldý.\n");
				printf("-Hile var ya!\n");
			}
			saniye();
			sayi1();
}
varsayilan_sayi_tahmin()
{
	int a;
	int b;
	int e;
	
	a=rand()%100;
			printf("Bir sayý giriniz: \n");
			scanf("%d",&b);

				while(b!=a)
			{
			 if (b<a)
				{
					e++;
			 		printf("Daha büyük bir sayý deneyin. \n");
					scanf("%d",&b);
				}
				else if(b>a)
				{
					e++;
					printf("Daha küçük bir sayý deneyin. \n");	
					scanf("%d",&b);
				}
			
			}
			e++;
			printf("Tebrikler, kazandýnýz.\n");
			printf("Deneme sayýsý:%d\n",e);
			if(e==1)
			{
				saya1=1;
				printf("Baþarým kazanýldý.\n");
				printf("-Hile var ya!\n");
			}
			saniye();
			sayi1();
}
//Barbut
barbut1()
{
	printf("Barbut\n");
	printf("Oyun Sürümü      : 1.1\n");
	printf("Güncelleme Tarihi: 19.07.2022\n");
	printf("Açýklama---------------------\n");
	printf("Klasik Barbut Oyunu\n");
	printf("Yenilikler:\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Ana Ekrana ekleme eklendi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(barb0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(barb0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				barbut();
			}
			break;
		case 2:
			if(barb2==1)
			{
				if(home==1)
				{
					barb10=2;
					printf("Ana Ekrana eklendi.\n");
					barbut1();
				}
				else
				{
					barb10=1;
					printf("Ana Ekrana eklendi.\n");
					barbut1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				barbut1();
			}
			break;
		case 3:
			barb2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			barbut1();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			barbut1();
			break;
			
	}	
}
barbut()
{
	enum Status{CONTINUE,WON,LOSE};
	int rollDice(void);

	{
		int sum;
		int myPoint;
		enum Status gameStatus;
		srand(time(NULL));
		sum=rollDice();
		switch (sum){
			case 7:
			case 11:
				gameStatus=WON;
				break;
			default:
				gameStatus=CONTINUE;
				myPoint=sum;
				printf("Puanýnýz:%d\n",myPoint);
				break;
		}
		while(CONTINUE==gameStatus){
			sum=rollDice();
			if(sum==myPoint) {
				gameStatus=WON;
				
			}
			else{
				if (7==sum) {
					gameStatus=LOSE;
				}
				
			}
		}
		if(WON==gameStatus)
		{
			printf("Oyuncu Kazandý\n");
			trstart();
		}
		
		else
		{
			printf("Oyunucu kaybetti\n");
			trstart();
		}
	scanf("");	
	}
}
int rollDice(void)
{
	int die1;
	int die2;
	int workSum;
	die1=1+(rand()%6);
	die2=1+(rand()%6);
	workSum=die1+die2;
	printf("Oyuncu attý:  %d+%d=%d\n",die1,die2,workSum);
	return workSum;
	}
//Yýlan Oyunu
yilan1()
{
	printf("Yýlan Oyunu\n");
	printf("Oyun Sürümü       : 1.2\n");
	printf("Güncellenme Tarihi: 01.08.2022\n");
	printf("Açýklama---------------------\n");
	printf("Klasik Yýlan Oyunu\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 2.3 ve üzeri\n");
	printf("KarStore Services: 2.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("-Ana Ekrana ekleme eklendi.\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(yil0==0)
			{
				printf("Eriþim engellendi.\n");
				gamestr();
			}
			else if(yil0==1)
			{
				printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
				scanf("");
				yilan();
			}
			break;
		case 2:
			if(yil2==1)
			{
				if(home==1)
				{
					yil0=2;
					printf("Ana Ekrana eklendi.\n");
					yilan1();
				}
				else
				{
					yil0=1;
					printf("Ana Ekrana eklendi.\n");
					yilan1();
				}
			}
			else
			{
				printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
				yilan1();
			}
			break;
		case 3:
			yil2=1;
			printf("Uygulama lisansý hesabýnýza eklendi.\n");
			yilan1();
			break;
		case 7:
			gamestr();
			break;
		case 9:
			mainimsi();
			break;
		default:
			printf("\a\n");
			yilan1();
			break;
			
	}	
}
int length;
int bend_no;
int len;
char key;
void record();
void load();
int life;
void Delay(long double);
void Move();
void Food();
int Score();
void Print();
void gotoxy(int x, int y);
void GotoXY(int x,int y);
void Bend();
void Boarder();
void Down();
void Left();
void Up();
void Right();
void ExitGame();
int Scoreonly();
struct coordinate
{
    int x;
    int y;
    int direction;
};
typedef struct coordinate coordinate;
coordinate head, bend[500],food,body[30];
int yilan()
{

    char key;

    Print();

    system("cls");

    load();

    length=5;

    head.x=25;

    head.y=20;

    head.direction=RIGHT;

    Boarder();

    Food(); //to generate food coordinates initially

    life=3; //number of extra lives

    bend[0]=head;

    Move();   //initialing initial bend coordinate

    return 0;

}
void Move()
{
    int a,i;

    do
    {

        Food();
        fflush(stdin);

        len=0;

        for(i=0; i<30; i++)

        {

            body[i].x=0;

            body[i].y=0;

            if(i==length)

                break;

        }

        Delay(length);

        Boarder();

        if(head.direction==RIGHT)

            Right();

        else if(head.direction==LEFT)

            Left();

        else if(head.direction==DOWN)

            Down();

        else if(head.direction==UP)

            Up();

        ExitGame();

    }
    while(!kbhit());

    a=getch();

    if(a==27)

    {

        system("cls");

        exit(0);

    }
    key=getch();

    if((key==RIGHT&&head.direction!=LEFT&&head.direction!=RIGHT)||(key==LEFT&&head.direction!=RIGHT&&head.direction!=LEFT)||(key==UP&&head.direction!=DOWN&&head.direction!=UP)||(key==DOWN&&head.direction!=UP&&head.direction!=DOWN))

    {

        bend_no++;

        bend[bend_no]=head;

        head.direction=key;

        if(key==UP)

            head.y--;

        if(key==DOWN)

            head.y++;

        if(key==RIGHT)

            head.x++;

        if(key==LEFT)

            head.x--;

        Move();

    }

    else if(key==27)

    {

        system("cls");

        exit(0);

    }

    else

    {

        printf("\a");

        Move();

    }
}
void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}
void load()
{
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Yükleniyor...");
    gotoxy(30,15);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=100000000; q++); //to display the character slowly
        printf("%c",177);
    }
    getch();
}
void Down()
{
    int i;
    for(i=0; i<=(head.y-bend[bend_no].y)&&len<length; i++)
    {
        GotoXY(head.x,head.y-i);
        {
            if(len==0)
                printf("v");
            else
                printf("*");
        }
        body[len].x=head.x;
        body[len].y=head.y-i;
        len++;
    }
    Bend();
    if(!kbhit())
        head.y++;
}
void Delay(long double k)
{
    Score();
    long double i;
    for(i=0; i<=(10000000); i++);
}
void ExitGame()
{
    int i,check=0;
    for(i=4; i<length; i++) //starts with 4 because it needs minimum 4 element to touch its own body
    {
        if(body[0].x==body[i].x&&body[0].y==body[i].y)
        {
            check++;    //check's value increases as the coordinates of head is equal to any other body coordinate
        }
        if(i==length||check!=0)
            break;
    }
    if(head.x<=10||head.x>=70||head.y<=10||head.y>=30||check!=0)
    {
        life--;
        if(life>=0)
        {
            head.x=25;
            head.y=20;
            bend_no=0;
            head.direction=RIGHT;
            Move();
        }
        else
        {
            system("cls");
            printf("Tüm Canlarýn Bitti\nBol Þans!!!\nÇýkmak için herhangi bir tuþa basýn.\n");
            record();
            exit(0);
            
        }
    }
}
void Food()
{
    if(head.x==food.x&&head.y==food.y)
    {
        length++;
        time_t a;
        a=time(0);
        srand(a);
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)

            food.y+=11;
    }
    else if(food.x==0)/*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)
            food.y+=11;
    }
}
void Left()
{
    int i;
    for(i=0; i<=(bend[bend_no].x-head.x)&&len<length; i++)
    {
        GotoXY((head.x+i),head.y);
        {
            if(len==0)
                printf("<");
            else
                printf("*");
        }
        body[len].x=head.x+i;
        body[len].y=head.y;
        len++;
    }
    Bend();
    if(!kbhit())
        head.x--;

}
void Right()
{
    int i;
    for(i=0; i<=(head.x-bend[bend_no].x)&&len<length; i++)
    {
        //GotoXY((head.x-i),head.y);
        body[len].x=head.x-i;
        body[len].y=head.y;
        GotoXY(body[len].x,body[len].y);
        {
            if(len==0)
                printf(">");
            else
                printf("*");
        }
        /*body[len].x=head.x-i;
        body[len].y=head.y;*/
        len++;
    }
    Bend();
    if(!kbhit())
        head.x++;
}
void Bend()
{
    int i,j,diff;
    for(i=bend_no; i>=0&&len<length; i--)
    {
        if(bend[i].x==bend[i-1].x)
        {
            diff=bend[i].y-bend[i-1].y;
            if(diff<0)
                for(j=1; j<=(-diff); j++)
                {
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y+j;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
            else if(diff>0)
                for(j=1; j<=diff; j++)
                {
                    /*GotoXY(bend[i].x,(bend[i].y-j));
                    printf("*");*/
                    body[len].x=bend[i].x;
                    body[len].y=bend[i].y-j;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
        }
        else if(bend[i].y==bend[i-1].y)
        {
            diff=bend[i].x-bend[i-1].x;
            if(diff<0)
                for(j=1; j<=(-diff)&&len<length; j++)
                {
                    /*GotoXY((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[len].x=bend[i].x+j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
            else if(diff>0)
                for(j=1; j<=diff&&len<length; j++)
                {
                    /*GotoXY((bend[i].x-j),bend[i].y);
                    printf("*");*/
                    body[len].x=bend[i].x-j;
                    body[len].y=bend[i].y;
                    GotoXY(body[len].x,body[len].y);
                    printf("*");
                    len++;
                    if(len==length)
                        break;
                }
        }
    }
}
void Boarder()
{
    system("cls");
    int i;
    GotoXY(food.x,food.y);   /*displaying food*/
    printf("F");
    for(i=10; i<71; i++)
    {
        GotoXY(i,10);
        printf("!");
        GotoXY(i,30);
        printf("!");
    }
    for(i=10; i<31; i++)
    {
        GotoXY(10,i);
        printf("!");
        GotoXY(70,i);
        printf("!");
    }
}
void Print()
{
    //GotoXY(10,12);
    printf("\tYýlan Oyununa Hoþ Geldiniz.(Devam için herhangi bir tuþa basýn)\n");
    getch();
    system("cls");
    printf("\tOyun Açýklamalarý:\n");
    printf("\n-> Ok tuþlarý ile yýlaný hareket ettirin.\n\n-> Ekranýn çeþitli koordinatlarýnda yemeniz gereken yiyecekler size saðlanacaktýr. Her yemek yediðinizde yýlanýn uzunluðu 1 element ve dolayýsýyla puan artacaktýr.\n\n-> Oyun baþlangýcýnda üç canýnýz bulunmaktadýr. Canýnýz kendinize veya duvara çarptýðýnýzda azalacaktýr.\n\n-> Herhangi bir tuþa basarak oyunu ortasýnda durdurabilirsiniz. Duraklatýlan oyuna devam etmek için baþka bir tuþa bir kez daha basýn\n\n-> esc basark çýkabilirsiniz. \n");
    printf("\n\nDevam için herhangi bir tuþa basýn...");
    if(getch()==27)
        exit(0);
}
void record()
{
    char plname[20],nplname[20],cha,c;
    int i,j,px;
    FILE *info;
    info=fopen("rekorlarým.txt","a+");
    getch();
    system("cls");
    printf("isminizi girin, bu rekorlarým.txt dosyasýna kaydedilecektir.\n");
    scanf("%[^\n]",plname);
    //************************
    for(j=0; plname[j]!='\0'; j++) //to convert the first letter after space to capital
    {
        nplname[0]=toupper(plname[0]);
        if(plname[j-1]==' ')
        {
            nplname[j]=toupper(plname[j]);
            nplname[j-1]=plname[j-1];
        }
        else nplname[j]=plname[j];
    }
    nplname[j]='\0';
    //*****************************
    //sdfprintf(info,"\t\t\tPlayers List\n");
    fprintf(info,"Oyuncu Adý :%s\n",nplname);
    //for date and time

    time_t mytime;
    mytime = time(NULL);
    fprintf(info,"Tarih:%s",ctime(&mytime));
    //**************************
    fprintf(info,"Skor:%d\n",px=Scoreonly());//call score to display score
    //fprintf(info,"\nLevel:%d\n",10);//call level to display level
    for(i=0; i<=50; i++)
        fprintf(info,"%c",'_');
    fprintf(info,"\n");
    fclose(info);
    printf("Wanna see past records press 'y'\n");
    cha=getch();
    system("cls");
    if(cha=='y')
    {
        info=fopen("rekorlarým.txt","r");
        do
        {
            putchar(c=getc(info));
        }
        while(c!=EOF);
    }
    fclose(info);
    trstart();
}
int Score()
{
    int score;
    GotoXY(20,8);
    score=length-5;
    printf("Skorunuz : %d",(length-5));
    score=length-5;
    GotoXY(50,8);
    printf("Kalan Canýnýz : %d",life);
    return score;
}
int Scoreonly()
{
    int score=Score();
    system("cls");
    return score;
}
void Up()
{
    int i;
    for(i=0; i<=(bend[bend_no].y-head.y)&&len<length; i++)
    {
        GotoXY(head.x,head.y+i);
        {
            if(len==0)
                printf("^");
            else
                printf("*");
        }
        body[len].x=head.x;
        body[len].y=head.y+i;
        len++;
    }
    Bend();
    if(!kbhit())
        head.y--;
}
ekom1()
{
	printf("Ekonomi Simulator\n");
	printf("Oyun Sürümü      : 0.2-BETA\n");
	printf("Güncelleme Tarihi: 29.12.2023\n");
	printf("Açýklama---------------------\n");
	printf("Elindeki materyaller ile mutluluðu arttýr!\n");
	printf("Sistem Gereksinimleri-------------\n");
	printf("Cihaz            : KarOS 3.5 ve üzeri\n");
	printf("KarStore Services: 3.0 ve üzeri\n");
	printf("Yenilikler:\n");
	printf("1=Baþlat\n");
	printf("2=Ana Ekrana Ekle\n");
	printf("3=Lisansý hesaba ekle\n");
	printf("7=Geri-Uygulamalar\n");
	printf("9=Ana Menü\n");
	if(workmode==1)
	{
		printf("Çalýþma modu açýk, kapatýp tekrar deneyin.\n");
		gamestr();
	}	
	int fflush(FILE *stream);
	fflush(stdin);
	char giris=getch();
	if(isdigit(giris)==1)
	{
		int a=giris-'0';
		switch(a)
		{
			case 1:
				if(eko0==0)
				{
					printf("Eriþim engellendi.\n");
					gamestr();
				}
				else if(eko0==1)
				{
					printf("Açmak için bir tuþa basýp Enter'a basýn.\n");
					scanf("");
					ekosim();
				}
				break;
			case 2:
				if(eko2==1)
				{
					if(home==1)
					{
						eko2=2;
						printf("Ana Ekrana eklendi.\n");
						ekom1();
					}
					else
					{
						eko2=1;
						printf("Ana Ekrana eklendi.\n");
						ekom1();
					}
				}
				else
				{
					printf("Uygulama ana ekrana eklenemedi, ilk önce uygulamanýn lisansýný eklemeye çalýþýn.\n");
					ekom1();
				}
				break;
			case 3:
				eko2=1;
				printf("Uygulama lisansý hesabýnýza eklendi.\n");
				ekom1();
				break;
			case 7:
				gamestr();
				break;
			case 9:
				mainimsi();
				break;
			default:
				hata();
				ekom1();
				break;
				
		}	
	}
	else
	{
		hata();
		ekom1();
	}
		
}
void delay2(int saniye)
{
    int milisaniye = 1000 * saniye;
 
    clock_t baslangic_zamani = clock();
 
    while (clock() < baslangic_zamani + milisaniye)
        ;
}
int rastgele(int min,int maks)
{
	srand(time(NULL));
	return ((rand() % (int)((maks + 1) - min)) + min);
}
void goster(int ay,int mutluluk,float faiz,float hazine_TL,float hazine_dolar,float doviz,float aylik_degisim,int rastgele_gelir)
{
	silge(1);
	saat();
	nofbar();
	printf("Ay:%d\n",ay++);
	printf("Mutluluk:%%%d\n",mutluluk);
	printf("Faiz:%%%.2f\n\n",faiz);
	printf("Hazinedeki TL:%.3f Mn\n",hazine_TL);
	printf("Hazinedeki dolar:%.3f Mn\n\n",hazine_dolar);
	printf("1 Dolar = %.4f TL\n",doviz);
	printf("Ay sonu dolar beklentisi:%.4f\n\n",doviz*aylik_degisim);
	printf("Bu ayki gelir:%d Mn TL\n\n\n",rastgele_gelir);	
}
int ekosim()
{
	setlocale(LC_ALL,"Turkish");
	
	int mutluluk=rastgele(75,90);
	float faiz=rastgele(0,8);
	
	float doviz=rastgele(10,20)/(float)10;
	float degisim=1.05;//döviz
	float degisim_rastgele;
	float aylik_degisim;
	
	int gelir=rastgele(10,25)*10;
	int rastgele_gelir;
	
	int ay=1;
	int secim;
	
	float hazine_TL=rastgele(25,60)*10;
	float hazine_dolar=rastgele(1,12)*10;
	
	int dolar_al;
	float alis;
	int dolar_sat;
	float satis;
	
	int faiz_degisim;
	float yatirim_katsayisi=1;
	
	while(mutluluk>10 && degisim>=0.5)
	{
		degisim_rastgele=rastgele(-10,10);
		aylik_degisim=degisim*(100+degisim_rastgele)/(float)100;
		rastgele_gelir=gelir*(100+degisim_rastgele)/(float)100;
		//debugger start
		//printf("(dbg)Aylýk deðiþim:%.2f\n",aylik_degisim);
		//printf("(dbg)Deðiþim:%.2f\n",degisim);
		//printf("(dbg)Gelir:%d\n\n",gelir);
		//debugger end
		goster(ay,mutluluk,faiz,hazine_TL,hazine_dolar,doviz,aylik_degisim,rastgele_gelir);
		
		printf("Bu ay dolar alýp satacak mýsýn?\n");
		printf("1:Dolar al.\n2:Dolar sat.\n3:Hiçbir þey yapma.\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				alis=(doviz*105)/100;
				printf("\n\n1 dolar alýrken ödeyeceðin para:%.4f TL\n",alis);
				printf("Kaç Mn dolar alacaðýný gir(Bu ay maksimum %.f milyon dolar alabilirsin):",(float)hazine_TL/alis);
				scanf("%d",&dolar_al);
				if(dolar_al*doviz<=hazine_TL && dolar_al>0)
				{
					hazine_TL-=dolar_al*doviz;
					hazine_dolar+=dolar_al;
					degisim*=((float)100+(dolar_al)/(float)5)/(float)100;
					//debugger start
			 		//printf("(dbg)Deðiþim:%.2f",degisim);
					//debugger end
				}
				else
				{
					printf("Geçersiz giriþ! Bir sonraki seçeneðe geçiliyor...\n\n");
				}
				break;
			case 2:
				satis=(doviz*95)/100;
				printf("\n\n1 dolar satarken alacaðýn para:%.4f TL\n",satis);
				printf("Kaç Mn dolar satacaðýný gir:");
				scanf("%d",&dolar_sat);
				if(dolar_sat<=hazine_dolar && dolar_sat>0)
				{
					hazine_dolar-=dolar_sat;
					hazine_TL+=satis*dolar_sat;
					degisim*=((float)100-(dolar_al)/(float)5)/(float)100;
					//debugger start
					//printf("(dbg)Deðiþim:%.2f",degisim);
					//debugger end
				}
				else
				{
					printf("Geçersiz giriþ!Bir sonraki seçeneðe geçiliyor...\n\n");
				}
				break;
			case 3:
				printf("Bir sonraki seçeneðe geçiliyor...");
				break;
			default:
				printf("Geçersiz giriþ! Sonraki seçeneðe geçiliyor...");
				break;
		}
		aylik_degisim=degisim*(100+degisim_rastgele)/(float)100;
		delay2(1);
		system("cls");
		goster(ay,mutluluk,faiz,hazine_TL,hazine_dolar,doviz,aylik_degisim,rastgele_gelir);
		
		printf("Bu ay faizi deðiþtirecek misin?\n");
		printf("1:Evet.\n2:Hayýr.\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				printf("Faizi kaç baz puan deðiþtirmek istediðinizi yazýnýz:");
				scanf("%d",&faiz_degisim);
				float eski_faiz=faiz;
				if((faiz_degisim+faiz*100)<=0)
				{
					printf("Geçersiz giriþ! Bir sonraki seçeneðe geçiliyor...\n");
				}
				else
				{
					faiz+=(float)faiz_degisim/(float)100;
					float faiz_degisim_orani;
					if(eski_faiz!=0)
					{
						faiz_degisim_orani=faiz-eski_faiz/eski_faiz;
					}
					else
					{
						faiz_degisim_orani=faiz-eski_faiz/1;
					}
					float deger_kaybi=faiz_degisim_orani/(float)2;
					degisim*=((float)100-deger_kaybi)/(float)100;
					mutluluk-=faiz_degisim_orani;
					yatirim_katsayisi=((float)100-faiz_degisim_orani)/(float)100;
					//debugger start
					//printf("(dbg)Yatýrým katsayýsý:%.2f\n",yatirim_katsayisi);
					//printf("(dbg)Deðiþim:%.2f",degisim);
					//debugger end
				}
				break;
			case 2:
				printf("Bir sonraki seçeneðe geçiliyor...\n");
				break;
			default:	
				printf("Geçersiz giriþ! Sonraki seçeneðe geçiliyor...\n");
				break;
		}
		aylik_degisim=degisim*(100+degisim_rastgele)/(float)100;
		delay2(1);
		system("cls");
		goster(ay,mutluluk,faiz,hazine_TL,hazine_dolar,doviz,aylik_degisim,rastgele_gelir);
		printf("Bu ay yatýrým yapacak mýsýn?\n");
		printf("1:Evet\n2:Hayýr\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				printf("Kaç milyon dolar yatýrým yapacaðýný gir:");
				int yatirim;
				scanf("%d",&yatirim);
				if(yatirim<=hazine_dolar && yatirim>0)
				{
					hazine_dolar-=yatirim;
					float deger_degisimi=(yatirim*yatirim_katsayisi)*doviz/(float)gelir;
					degisim*=((float)100-(deger_degisimi)*10)/(float)100;
					gelir*=((float)100+(deger_degisimi)*doviz*5)/(float)100;
					//debugger start
					//printf("(dbg)Deðer deðiþimi:%.2f\n",deger_degisimi);
					//printf("(dbg)Deðiþim:%.2f\n",degisim);
					//printf("(dbg)Gelir:%d\n",gelir);
					//delay(3);
					//debugger end
				}
				else
				{
					printf("Geçersiz giriþ!Bir sonraki aya geçiliyor...\n\n");
				}
				//debugger start
				//printf("Deðiþim:%.2f",degisim);
				//debugger end
				break;
			case 2:
				printf("Bir sonraki aya geçiliyor...");	
				break;
			default:
				printf("Geçersiz giriþ! Sonraki aya geçiliyor...");
				break;	
		}
		ay++;
		aylik_degisim=degisim*(100+degisim_rastgele)/(float)100;
		rastgele_gelir=gelir*(100+degisim_rastgele)/(float)100;	
		delay2(1);
		if(doviz>(float)0.001)
		{
			doviz*=aylik_degisim;	
		}
		else
		{
			doviz=0.001;
		}
		hazine_TL+=rastgele_gelir;
		float mutluluk_degisimi=(degisim-1)*10;
		if(mutluluk-mutluluk_degisimi<100)
		{
			mutluluk-=mutluluk_degisimi;	
		}
		else
		{
			mutluluk=100;
		}
		system("cls");
	}
	if(mutluluk<=10)
		printf("Halk çok mutsuz, kaybettin!");
		mainimsi();
	if(degisim<=0.75)
	{
		printf("Dolarý baþarýlý bir þekilde düþme eðilimine geçirdin, kazandýn!");
		if(ekoa1==0)
		{
			printf("Baþarým kazanýldý!\n");
			printf("-LED Lamba daha iyidir...\n");
			ekoa1=1;
		}
		mainimsi();
	}
	return 0;	
}