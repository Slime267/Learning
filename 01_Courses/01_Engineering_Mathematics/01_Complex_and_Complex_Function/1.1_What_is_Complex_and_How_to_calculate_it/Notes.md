# 复数及其代数运算

## 1 复数的概念

形如 $z = x+iy$, 其中$x$、$y$为**实数**，分别叫做**实部**和**虚部**, 记作
$$x = Re ( z ) ,y = Im ( z )$$

虚数单位$i$：  
$$i^2 = -1$$

- $x = 0,y \neq 0$ 时， $z = iy$ 为纯虚数； $y = 0$ 时， $z = x + i0$ 为实数
- 两复数相等的充要条件是**它们的实部和虚部分别相等**； $z = 0$， 当且仅当它的实部和虚部**均为 0**
- 复数**无法比较大小**

## 2 复数的运算

复数的和、积与商：
$$( x_1 + iy_1 ) \pm ( x_2 + iy_2 ) = ( x_1 + x_2 ) \pm i ( y_1 + y_2 )$$
$$( x_1 + iy_1 ) ( x_2 + iy_2 ) = ( x_1x_2 - y_1y_2 ) + i ( x_2y_1 + x_1y_2 )$$  
$$\frac{z_1}{z_2} = \frac{x_1x_2+y_1y_2}{x_2^2+y_2^2} + i\frac{x_2y_1-x_1y_2}{x_2^2+y_2^2}$$

共轭复数：  
$$若z = x + iy, 则\overline{z} = x - iy$$

- 复数的运算满足交换律、结合律和分配律
- 共轭复数运算性质：
  - $\overline{z_1 \pm z_2} = \overline{z_1} \pm \overline{z_2}, \overline{z_1z_2} = z_1z_2, \overline{\left(\frac{a}{b} \right)} = \frac{\overline{z_1}}{\overline{z_2}}$
  - $\overline{\overline{z}} = z$
  - $z\overline{z} = \left[Re(z)\right]^2 + \left[Im(z)\right]^2$
  - $z + \overline{z} = 2Re(z), z - \overline{z} = 2iIm(z)$
- 对于 $\frac{z_1}{z_2}$ ，考虑上下同乘 $\overline{z_2}$ ，得到上面的式子
- 对于 $\sqrt{a + ib}$ 的化简，考虑列等式 $\sqrt{a + ib} = x + iy$ ，求解得 $x$ 、 $y$
