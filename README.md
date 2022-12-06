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

  *Para más información, consultar en la [Wiki](https://github.com/manperezca/quadruped-gas-detector/wiki/2.-M%C3%B3dulos).*

  ## Esquema general
  En la realización del esquema del circuito se utiliza el software ***Kicad***, el cual también se usa para el ruteo de las pistas y ordenamiento en la placa debido a su fácil manejo.
  ![image10](https://github.com/manperezca/quadruped-gas-detector/blob/main/multimedia/Imagenes/esquemas/Esquema%20general.png)

  En principio se tiene un esquema general que cuenta con 5 etapas.
  *Para más información, consultar en la [Wiki](https://github.com/manperezca/quadruped-gas-detector/wiki/3.-Dise%C3%B1o-PCB#dise%C3%B1o-del-esquema).*

  ## Ruteo PCB
  Se rutea el circuito tomando en cuenta los diferentes tamaños de pistas, y así finalmente implementar la tierra, la cual ocupa la mayor cantidad de espacio posible debido que se requiere disminuir la impedancia producida lo máximo posible.

  ![image17](https://github.com/manperezca/quadruped-gas-detector/blob/main/multimedia/Imagenes/pcb/ruteo%20capa%20superior.png)

  ## PCB Física
  Con los diseños requeridos completados, se pide la placa a la empresa china [JLCPCB](https://jlcpcb.com/), la cual llegó en aproximadamente 1 semana.

  ![image21](https://github.com/manperezca/quadruped-gas-detector/blob/main/multimedia/Imagenes/pcb/PCB%20delantera.jpg)

  *Para más información con respecto al proceso de ruteo y fabricación de la placa, consultar en la [Wiki](https://github.com/manperezca/quadruped-gas-detector/wiki/3.-Dise%C3%B1o-PCB#ruteo-y-dise%C3%B1o-de-pcb).*

  ## Montaje
  Con las piezas diseñadas e impresas en 3D, se realiza el montaje de los servomotores en el cuerpo del robot.

  ![comps](https://github.com/manperezca/quadruped-gas-detector/blob/main/multimedia/Imagenes/montaje/completo%20superior.jpg)

  *Para más información con respecto al proceso de ruteo y fabricación de la placa, consultar en la [Wiki](https://github.com/manperezca/quadruped/wiki/5.-Montaje#montaje).*

  ## Pruebas Código
  En primera instancia se realizan pruebas en una tarjeta ESP32 de desarrollo, para comprobar que los servomotores funcionan, además de una buena implementación en el sistema operativo, que en este caso se utiliza `Zephyr.os`.

  ![prueba3](https://github.com/manperezca/quadruped-gas-detector/blob/main/multimedia/Pruebas/prueba3.gif)

  En dicha prueba se mueven dos servomotores de manera simultánea.

  *Para más información con respecto al proceso de ruteo y fabricación de la placa, consultar en la [Wiki](https://github.com/manperezca/quadruped/wiki/6.-Pruebas-preliminares#dos-servos-con-movimiento-suavizado).*

  ## Pruebas Placa Diseñada
  Luego de la resolución de una serie de problemas y contratiempos, se cambian los componentes de la placa y se envía el valor de ***PWM*** por una tarjeta de desarrollo. 

  ![pruebaf](https://github.com/manperezca/quadruped/blob/main/multimedia/Pruebas/pruebafinal.gif)

  En este prueba se mantiene la alimentación de la tarjeta de desarrollo con una fuente externa, y se logran mover cuatro de los servomotores.

  ## Finalización
  Finalmente se alimenta la tarjeta de desarrollo directamente con la placa diseñada. Esto permite que el robot cuadrúpedo pueda moverse por si mismo sin la necesidad de un cable externo.

  Proyecto completo

  ![diago](https://github.com/manperezca/quadruped/blob/main/multimedia/Imagenes/finalizacion/isometrica.png)

  Movimiento

  ![mont](https://github.com/manperezca/quadruped/blob/main/multimedia/Pruebas/movimiento-completo.gif)