# ⚡ Flam R&D Edge Detection Project

### 📂 Structure

app/ → Android simulation (Kotlin)
jni/ → OpenCV C++ edge detection
web/ → Web viewer for output
screenshots/ → Project evidence



### 🧠 Features
- Simulates Android + C++ JNI flow
- Uses OpenCV (Canny Edge Detection)
- Displays final frame on a simple web page

### 🖼️ Output Example
1. Run `native.cpp` → Generates `edge_result.jpg`
2. Open `web/index.html` → View processed image
3. Check screenshots for proof

### ⚙️ Run Instructions
1. Open VS Code → Terminal
2. Navigate to `jni` folder:
cd jni

markdown
Copy code
3. Compile:

g++ native.cpp -o edge -IC:\tools\opencv\build\include -LC:\tools\opencv\build\x64\vc16\lib -lopencv_world4100

edge.exe

 Open `web/index.html` in your browser
