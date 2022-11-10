#  Quadruped Dog
 ### Integrantes:
 * Manuel Alejandro Pérez Carvajal 🧑‍🔧
 * Daniel Castellanos Flórez 🧑‍💻
 * Alejandro Fernández Astaiza 🧑‍💼
 * Eddy Santiago Delgado Caro 🧑🔬

  ## Introducción
  Este es el repositorio del proyecto de la asignatura **Sistemas Embebidos** del semestre 2022-II (Universidad Nacional de Colombia - Sede Bogotá). A continuación se mostrará el proyecto de un robot cuadrúpedo de SoC, donde a partir de un microprocesador y diferentes periféricos se realizan operaciones que permiten el movimiento del robot.

  *Requerimientos principales:* 
  * Comunicación dispositivo - Aplicación mediante WiFi.
  * Moviemiento simple e intuitivo acorde a las instrucciones dadas por el usuario.
  * Sistema de alimentación sencillo de reemplazar.

  *Otros requerimientos:* 
  * Amigable con el usuario.
  * Posibilidad de agregar funciones extra por medio de pines GPIO no programados.

  *Alcance:* Apto para todo el público que este interesado en el funcionamiento de un robot cuadrúpedo con similitudes animales.

  ## Diagrama de bloques
  A continuación, se presenta el diagrama de bloques general sobre el funcionamiento del robot.
    ![image1](/multimedia/Imagenes/introduccion/diagramabloques2.png)
  ## SoC
  A continuación, se presenta el SoC planteado.
    ![image2](/multimedia/Imagenes/introduccion/SOC2.jpg)

  ## Módulos
  Los módulos que fueron utilizados en la realización de este proyecto son:
  * ESP32 - WROOM 
  * Servomotores MG90S
  * INA219
  * MPU9250 
  * WS2812B
  * FT232RL
  * Mini360
  * Baterías 18650

  Para más información, consultar en la página 2 de la [Wiki](https://github.com/manperezca/quadruped-gas-detector/wiki/2.-M%C3%B3dulos)
