# led-senkron-kontrol ✅![Wokwi CI](https://github.com/robotdevre/led_blink/actions/workflows/wokwi.yml/badge.svg)

Bu proje, Arduino Uno kartı kullanılarak iki LED’in aynı anda yanıp sönmesini sağlar. `delay()` fonksiyonu ile zamanlama sağlanır. Temel seviyede bir Arduino projesidir.

---

## 🔧 Kullanılan Malzemeler

- Arduino Uno  
- 2 x 220 Ohm direnç  
- 2 x LED (Kırmızı ve Yeşil)  
- Breadboard  
- Jumper kablolar  

---

## 🎯 Proje Amacı

- `digitalWrite()` fonksiyonu ile çıkış kontrolü yapmak  
- `delay()` fonksiyonu ile zamanlamayı öğrenmek  
- Temel devre kurulumlarını kavramak  
- LED’leri senkron şekilde kontrol etmek  

---

## 📷 Devre Şeması

📁 `diagram.json` dosyasında Wokwi uyumlu devre şeması bulunmaktadır.  
İstersen doğrudan [Wokwi üzerinde simüle etmek için buraya tıklayabilirsin.](https://wokwi.com)

---

## 💡 Kod

```cpp
int led1 = 8;
int led2 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(500); // 0.5 saniye açık

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(500); // 0.5 saniye kapalı
}
