# 🚀 Proyecto: Control de Acceso y Gestión de Memoria RAM con Punteros — LPR 2026

## Escuela de Educación Secundaria Técnica N° 10 "Rogue One" — Vicente López

* **Curso:** 5° Año A/B — Especialidad Computación / Programación
* **Materia:** Laboratorio de Programación (LPR)
* **Profesor:** Prof. York
* **Estudiante:** Andor Cassian

---

## 📌 Descripción de la Actividad

Esta actividad aborda la gestión directa de memoria RAM mediante el uso de **punteros en C++**. Se desarrolla una aplicación de control de acceso que manipula direcciones físicas de memoria en formato hexadecimal (`0x...`), captura datos mediante desreferenciación (`*p`), y valida condiciones de acceso operando directamente sobre las direcciones de la pila de memoria (*Stack*).

---

## 👥 Integrantes (Entrega Individual)

* **Estudiante:** Andor Cassian
* **Curso / Grupo:** 5° — Grupo A/B
* **Especialidad:** Técnico en Informática/Programación

---

## 🛠️ Requisitos e Instalación

Para compilar y ejecutar este proyecto en Windows 10/11:

1. **Visual Studio Code:** Con las extensiones oficiales `C/C++` de Microsoft.
2. **Compilador MinGW (GCC/G++):** Configurado en las variables de entorno (`PATH` de Windows).
3. **Git for Windows:** Para la sincronización con GitHub.

---

## 🏃 Comandos de PowerShell para Windows 10/11 en Visual Studio Code

Asegúrate de estar parado en la raíz de la carpeta `CadenasPunteros` en tu terminal (`Ctrl + Ñ`).

1. **Compilar el código fuente con punteros:**
   ```powershell
   g++ src/main.cpp -o src/cadenaspunteros.exe