# 复数的几何表示

## 1 复平面

### 1.1 什么是复平面

将复数 $z = x + iy$ 的实部 $x$ 和虚部 $y$ 分别对应到直角坐标系中的横轴和纵轴，则称该平面为**复平面**。其中，横轴又称实轴，纵轴称虚轴。

- 复平面**不包括**无穷远点

### 1.2 复数的模

对于 $P(x, y)$ ，向量 $\overrightarrow{OP}$ 的长度即为复数 $z = x + iy$ 的模或绝对值，记为

$$|z| = r = \sqrt{x^2 + y^2}$$

- $|x| \leq |z|, |y| \leq |z|$
- $|z| \leq |x| + |y|$
- $z\overline{z} = |z|^2 = |z^2|$

### 1.3 复数的幅角

在 $z \neq 0$ 时，以正实轴为始边，以 $\overrightarrow{OP}$ 为终边的角的弧度 $\theta$ 称为 $z$ 的幅角，记为  
$$Argz = \theta$$

其中，若 $-\pi < \theta_0 \leq pi$ ，则称 $\theta_0$ 为**幅角主值**，记为  
$$argz = \theta_0$$

- 任意一个复数有**无穷多个**幅角，即 $Argz = \theta_1 + 2k\pi$ ，其中 $k$ 为任意整数，即在幅角主值的基础上又多转了 $k$ 圈，同样可以回到 $\overrightarrow{OP}$
- 当 $z = 0$ 时，$|z| = 0$ ，幅角**无法确定**

### 1.4 平行四边形法则求复数和差

两个复数的加减法运算与其对应的向量的加减法运算一致

### 1.5 复数和差的模的性质

$$|z_1 + z_2| \leq |z_1| + |z_2|$$
$$|z_1 - z_2| \geq ||z_1| - |z_2||$$

- 一对共轭复数在复平面内关于实轴对称

### 1.6 复数的三角和指数表示

由 $\begin{cases} x = rcos\theta\\ y = rsin\theta\\ \end{cases}$ 得**复数的三角表示式**
$$z = r(cos\theta + i\sin\theta)$$

再由**欧拉公式** $e^{i\theta} = cos\theta + isin\theta$ 得**复数的指数表示式**
$$z = re^{i\theta}$$

- 记忆欧拉公式：$e^{i\pi} = 1$ 是欧拉公式在 $\theta = \pi$ 时的特殊值

## 2 复球面

### 2.1 南北极

一球与复平面**相切**，其上一点 $S$ 与原点 $O$ 重合，过 $S$ 作一直线与复平面垂直，该线与球交于另一点 $N$ ，则称 $S$ 为**南极**，$N$ 为**北极**

### 2.2 复球面

除 $N$ 点外，复球面上任意一点都与复平面上某一点对应，并规定 $N$ 点对应复平面上**无穷远点**，记作 $\infty$

球面上所有点都有**唯一扩展复数**与其对应，则称该球面为**复球面**

### 2.3 扩充复平面

包括**无穷远点**在内的复平面称为**扩充复平面**

- 复数 $\infty$ 的**模**为正无穷大，而不是指大小是正无穷大
- 复数 $\infty$ 没有实部、虚部、幅角等概念
- $\infty$ 的四则运算：
  - $\alpha + \infty = \infty + \alpha = \infty, (\alpha \neq 0)$
  - $\alpha - \infty = \infty - \alpha = \infty, (\alpha \neq 0)$
  - $\alpha \cdot \infty = \infty \cdot \alpha = \infty, (\alpha \neq 0)$
  - $\frac{\alpha}{\infty} = 0, \frac{\infty}{\alpha} = \infty(\alpha \neq 0), \frac{\alpha}{0} = \infty(\alpha \neq 0)$
