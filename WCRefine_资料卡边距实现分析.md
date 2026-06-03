# WCRefine 资料卡左右边距实现深度分析

## 一、核心发现：WCRefine 从不修改 MMUIButton.frame

经过对 `123456.c` 反编译代码的完整分析，**WCRefine 在资料卡边距实现上从未修改过 MMUIButton 或 UITableViewCell 的 frame.origin.x / size.width**。

## 二、WCRefine 的三步实现

### Step 1: 背景图内缩（~L6568-6589）

```c
// 读取配置
lVar13 = FUN_000c6960(uVar15, &cf_CellHorizontalMargin); // 边距值
lVar11 = 9;  // 默认 9
if (lVar13 != 0) lVar11 = lVar13;

// 创建背景图时传入缩小的尺寸
dVar22 = -2.0;                                    // x 偏移 -2
param_3 = param_3 + (double)lVar11 * -2.0;        // 宽度 -= margin * 2 ★
dVar24 = 0.0;

// 调用背景图创建函数（传入缩小后的宽度和偏移）
FUN_000cb900(dVar5, dVar23, param_3, param_4, uVar20);
```

**效果**：UIImageView（背景图）比 button 窄 `2*margin`，视觉上产生左右边距。

### Step 2: 圆角层内缩（~L9421-9437）

```c
// 读取边距和圆角
lVar8 = FUN_000c6960(uVar4, &cf_CellHorizontalMargin);
lVar6 = 9;
if (lVar8 != 0) lVar6 = lVar8;

// ★ 关键：创建圆角路径时直接使用内缩后的尺寸
FUN_000cb900((double)lVar6,                    // margin 值
             param_2,                          // y offset
             param_3 + (double)lVar6 * -2.0,   // width - margin*2 ★
             lVar3);                           // target view

// 设置圆角半径
FUN_000cb180((double)lVar9);                   // cornerRadius

// 应用到视图（flags=0xf 表示某种组合属性）
FUN_000cc8a0(view, value, 0xf);
```

**效果**：创建一个**内缩的圆角矩形 CAShapeLayer**，但注意——这不是 mask！

### Step 3: 边框跟随内缩路径（~L9703-9722）

```c
// 读取边框配置
iVar3 = FUN_000c3380(uVar4, &cf_ProfileCardBorderEnabled);
fVar18 = (float)FUN_000c5780(uVar4, &cf_ProfileCardBorderWidth);

// 获取边框颜色
FUN_0000e80c(&cf_ProfileCardBorderColorLight, &cf_ProfileCardBorderColorDark);

// 设置边框宽度和颜色（跟随同一个内缩路径）
FUN_000caa60(dVar19);                          // borderWidth
FUN_000ca9a0(view, value, borderColor);         // borderColor
```

## 三、WCRefine vs MioPlugin 对比

| 维度 | WCRefine | MioPlugin（当前失败版本） |
|------|----------|------------------------|
| **button.frame** | 不动 ✅ | 不动 ✅ |
| **背景图** | 内缩 `w -= 2*m` ✅ | 内缩 `w -= 2*m` ✅ |
| **圆角实现** | **CAShapeLayer sublayer**（非 mask） | `layer.cornerRadius` + `masksToBounds` |
| **边框实现** | **CAShapeLayer stroke**（跟随内缩路径） | `layer.borderWidth`（全宽） |
| **是否裁切内容** | **否**（sublayer 不影响内容） | **是**（masksToBounds=YES 或 mask） |
| **margin=30 时** | 内容完整 ✅ | 用户名消失 ❌ |

## 四、根因定位：为什么 MioPlugin 失败

### 失败原因 1: masksToBounds 裁切内容

MioPlugin 使用 `cell.layer.masksToBounds = YES`，当 margin=30 时：
- button 全宽 375px，子视图正常排布
- 但 `masksToBounds=YES` 会裁切超出 button bounds 的内容
- 如果圆角/边框是基于全宽的，那没问题
- **但如果配合任何 frame 缩小操作，子视图就会被裁**

### 失败原因 2: CAShapeLayer mask 裁切内容

MioPlugin 尝试用 `cell.layer.mask = maskLayer`（内缩路径）：
- mask 会把可见区域限制在内缩范围内
- margin=30 时，mask 可见区域从 x=30 开始
- 用户名 UILabel 的 origin.x < 30 → **被 mask 裁掉** ❌

### WCRefine 为什么成功

WCRefine 的 `FUN_000cb900` + `FUN_000cc8a0` 创建的是 **装饰性 sublayer**：
- 作为 `button.layer` 的 **普通 sublayer** 添加（不是 mask）
- 只负责绘制圆角背景和边框视觉效果
- **不影响 button 及其子视图的渲染和布局**
- 类似于"贴纸"——盖在上面但不遮挡下面的内容

## 五、正确修复方案

按照 WCRefine 的实现方式：

```objc
if (margin > 0) {
    // 1. cell.layer 保持原样（不设 cornerRadius、masksToBounds、borderWidth）
    cell.layer.cornerRadius = 0;
    cell.layer.masksToBounds = NO;
    cell.layer.borderWidth = 0;
    cell.layer.borderColor = nil;
    cell.layer.mask = nil;

    // 2. 创建内缩的圆角矩形路径
    CGRect insetRect = CGRectMake(margin, margin,
                                   cell.bounds.size.width - margin * 2,
                                   cell.bounds.size.height - margin * 2);
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:insetRect
                                                   cornerRadius:radius];

    // 3. 创建填充层（圆角背景色）→ 作为 sublayer 添加
    CAShapeLayer *bgShapeLayer = [CAShapeLayer layer];
    bgShapeLayer.path = path.CGPath;
    bgShapeLayer.fillColor = [UIColor whiteColor].CGColor; // 或配置的颜色
    bgShapeLayer.frame = cell.bounds;
    [cell.layer insertSublayer:bgShapeLayer atIndex:0];   // ★ sublayer，不是 mask！

    // 4. 创建描边层（边框）→ 作为 sublayer 添加
    if (config.listProfileCardBorderEnabled) {
        CAShapeLayer *borderShapeLayer = [CAShapeLayer layer];
        borderShapeLayer.path = path.CGPath;
        borderShapeLayer.fillColor = [UIColor clearColor].CGColor;
        borderShapeLayer.strokeColor = borderColor.CGColor;
        borderShapeLayer.lineWidth = borderWidth;
        borderShapeLayer.frame = cell.bounds;
        [cell.layer addSublayer:borderShapeLayer];          // ★ sublayer，不是 mask！
    }
}
```

## 六、WCRefine 关键函数映射

| 反编译函数名 | 推测对应 ObjC 方法 |
|-------------|------------------|
| `FUN_000cb900(margin, y, w-m*2, view)` | 创建内缩圆角 CAShapeLayer 并添加为 sublayer |
| `FUN_000cb180(radius)` | 设置 cornerRadius |
| `FUN_000cc8a0(view, val, flags)` | 应用圆角+裁切属性（flags=0xf/0xc/3 等） |
| `FUN_000cc8c0(view, val, 1)` | 设置 contentMode 或其他属性 |
| `FUN_0000e344(radius, view, type, color)` | 最终应用圆角+边框 |
| `FUN_000caa60(width)` | 设置边框宽度 |
| `FUN_000ca9a0(view, val, color)` | 设置边框颜色 |

## 七、注意事项

1. **WCRefine 的 `CellHorizontalMargin` 配置项同时控制列表 Cell 和资料卡的边距**，两者共用同一个值
2. **默认值是 9**（不是 0），说明 WCRefine 默认就有小边距
3. **背景图的 x 偏移固定是 -2**（`dVar22 = -2.0`），这是一个微调值
4. **圆角层的 flags 参数根据场景不同**：普通 Cell 用 0xf，折叠 Cell 用 0xc，资料卡可能用其他值
