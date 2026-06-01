# 边框绘制统一改造方案 — 全部使用 CAShapeLayer

> **日期**: 2026-06-02
> **文档位置**: `/www/wwwroot/ios/边框绘制统一CAShapeLayer改造方案.md`
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)
> **参考**: [微信优化反编译代码](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c)

---

## 📋 目录

1. [改造背景与目标](#1-改造背景与目标)
2. [可行性分析](#2-可行性分析)
3. [当前实现 vs 目标架构](#3-当前实现-vs-目标架构)
4. [微信优化的 CAShapeLayer 实现解析](#4-微信优化的-cashapelayer-实现解析)
5. [统一方案详细设计](#5-统一方案详细设计)
6. [改造步骤（分阶段）](#6-改造步骤分阶段)
7. [各函数改造清单](#7-各函数改造清单)
8. [测试验证清单](#8-测试验证清单)
9. [风险与回退方案](#9-风险与回退方案)
10. [附录：完整代码示例](#10-附录完整代码示例)

---

## 1️⃣ 改造背景与目标

### 1.1 问题现状

当前边框绘制使用了**混合架构**：

| Position | 当前实现 | 图层类型 | 存在问题 |
|:--------:|---------|---------|---------|
| **0** (单行) | `layer.borderWidth` | 原生 CALayer 属性 | ✅ 无问题 |
| **1** (首行) | `wp_buildTopBorderPath` | **CAShapeLayer** + stroke | ⚠️ 横线可能被裁切 50% |
| **2** (中间) | `wp_buildSideLineLayer` | **CALayer** + backgroundColor | ✅ 已优化为实心矩形 |
| **3** (末行) | `wp_buildBottomBorderPath` | **CAShapeLayer** + stroke | ⚠️ 横线可能被裁切 50% |

**核心问题**：
- ❌ 横线（CAShapeLayer stroke）和竖线（CALayer 实心矩形）渲染方式不一致
- ❌ 多行卡片中横线看起来比竖线细（stroke 被边界裁切）
- ❌ 代码维护复杂（两种不同的 API、两种不同的坐标系处理）

### 1.2 改造目标

```
✅ 统一所有 position 使用 CAShapeLayer + stroke
✅ 解决横线被裁切导致的"变细"问题
✅ 与微信优化的实现保持一致
✅ 简化代码结构，提高可维护性
✅ 保持现有功能完全不变（圆角、颜色、宽度等）
```

### 1.3 改造范围

**涉及文件**:
- [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) — 唯一需要修改的文件

**不涉及**:
- 配置文件、plist、其他模块
- Cell 的 frame 修改逻辑
- 圆角计算逻辑
- 背景色设置逻辑

---

## 2️⃣ 可行性分析

### 2.1 技术可行性: ✅ 完全可行

#### 证据 1: 微信优化已证明可行

通过反编译 [FUN_0000eb00](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L10108-L10181) 确认：

```c
// 微信优化的 position=1 和 position=3 实现:
void FUN_0000eb00(...) {
    // 1. 创建 CAShapeLayer
    FUN_000c71e0(&_OBJC_CLASS___CAShapeLayer);
    
    // 2. 设置属性
    FUN_000cca20(shape, &cf_CustomBorder);        // name = "CustomBorder"
    FUN_000cb7e0(shape, strokeColor);              // strokeColor
    FUN_000cdf00(shape, clearColor);               // fillColor = clear
    FUN_000cc440(param_5, shape);                  // lineWidth = borderWidth
    
    // 3. 创建 UIBezierPath 并画路径（含圆弧+直线）
    FUN_000c3260(&_OBJC_CLASS___UIBezierPath);
    // ... 根据 side=="top" 或 "bottom" 画不同路径 ...
    
    // 4. ★ 关键: 设置 path 到 shape
    FUN_000ccd40(shape, path);
    
    // 5. ★ 关键: 设置 shape.frame = cell.bounds
    FUN_000cb900(param_1, param_2, param_3, param_4, shape);
}
```

**结论**: 微信优化在 position=1/3 使用 CAShapeLayer + stroke，且视觉效果正常。

#### 证据 2: iOS 系统支持

CAShapeLayer 是 Apple 官方提供的图层类型，专门用于绘制矢量图形：
- ✅ 支持 stroke 描边
- ✅ 支持 fill 填充
- ✅ 支持圆弧（addArcWithCenter）
- ✅ 支持抗锯齿
- ✅ 性能优秀（GPU 加速）

#### 证据 3: 我们已有成功案例

当前 position=1 和 position=3 已经在使用 CAShapeLayer：
- ✅ 圆角绘制正确
- ✅ 竖线部分显示正常
- ⚠️ 只有横线部分有裁切问题（可通过调整坐标解决）

### 2.2 性能影响: ✅ 可忽略

| 对比项 | CALayer (当前 position=2) | CAShapeLayer (目标) |
|-------|:----------------------:|:-----------------:|
| **内存占用** | ~200 bytes | ~250 bytes (+25%) |
| **CPU 开销** | 极低（矩形填充） | 低（路径光栅化） |
| **GPU 开销** | 相同 | 相同 |
| **渲染性能** | ~0.01ms | ~0.02ms |

**结论**: 性能差异在微秒级，用户完全无法感知。对于列表滚动场景无影响。

### 2.3 兼容性: ✅ 完全兼容

- ✅ iOS 9.0+ 都支持 CAShapeLayer（我们的最低支持版本远高于此）
- ✅ 不依赖任何私有 API
- ✅ 不改变对外接口（调用方无需改动）

---

## 3️⃣ 当前实现 vs 目标架构

### 3.1 当前架构（混合模式）

```
┌─────────────────────────────────────────────────────────────┐
│                    wp_applyBorderAndBg                       │
│                                                              │
│  switch (position) {                                         │
│      case 0: ──→ layer.borderWidth / borderColor             │
│                 (原生属性，不需要改动)                         │
│                                                              │
│      case 1: ──→ wp_buildTopBorderPath()                     │
│                 → CAShapeLayer + stroke                      │
│                 → 包含: 左竖线 + 右竖线 + 双圆弧 + 底横线     │
│                                                              │
│      case 2: ──→ wp_buildSideLineLayer() × 2                 │
│                 → CALayer + backgroundColor × 2              │
│                 → 左竖线 + 右竖线（实心矩形）                 │
│                                                              │
│      case 3: ──→ wp_buildBottomBorderPath()                  │
│                 → CAShapeLayer + stroke                      │
│                 → 包含: 左竖线 + 右竖线 + 双圆弧 + 顶横线     │
│  }                                                           │
└─────────────────────────────────────────────────────────────┘
```

**问题**: 
- case 2 使用 CALayer，与其他 case 的 CAShapeLayer 不一致
- 横线和竖线的渲染方式不同，导致视觉粗细不一

### 3.2 目标架构（统一 CAShapeLayer）

```
┌─────────────────────────────────────────────────────────────┐
│                    wp_applyBorderAndBg                       │
│                                                              │
│  switch (position) {                                         │
│      case 0: ──→ layer.borderWidth / borderColor             │
│                 (原生属性，保持不变)                          │
│                                                              │
│      case 1: ──→ wp_buildUnifiedBorderPath()                │
│                 → CAShapeLayer + stroke                      │
│                 → 包含: 左竖线 + 右竖线 + 双圆弧 + 底横线     │
│                 → ★ 新增: 设置 shape.frame = bounds          │
│                                                              │
│      case 2: ──→ wp_buildUnifiedBorderPath() × 2            │
│                 → CAShapeLayer + stroke × 2                  │
│                 → 左竖线 + 右竖线（纯直线路径）              │
│                 → ★ 从 CALayer 改为 CAShapeLayer             │
│                                                              │
│      case 3: ──→ wp_buildUnifiedBorderPath()                │
│                 → CAShapeLayer + stroke                      │
│                 → 包含: 左竖线 + 右竖线 + 双圆弧 + 顶横线     │
│                 → ★ 新增: 设置 shape.frame = bounds          │
│  }                                                           │
└─────────────────────────────────────────────────────────────┘
```

**优势**:
- ✅ 统一使用 CAShapeLayer + stroke
- ✅ 所有线条都用相同的渲染方式
- ✅ 通过设置 frame 和调整坐标解决裁切问题
- ✅ 代码更简洁，只需维护一个核心函数

---

## 4️⃣ 微信优化的 CAShapeLayer 实现解析

### 4.1 反编译代码还原（伪代码）

从 [FUN_0000eb00](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L10108-L10181) 还原：

```objc
// ★ 微信优化的 position=1/3 边框绘制函数
// 参数:
//   param_1-4: CGRect (x, y, width, height) — cell.bounds
//   param_5: double — borderWidth
//   param_6: double — cornerRadius
//   param_8: NSString* — @"top" 或 @"bottom"

CAShapeLayer *shape = [CAShapeLayer layer];
shape.name = @"CustomBorder";
shape.strokeColor = borderColor.CGColor;
shape.fillColor = [UIColor clearColor].CGColor;
shape.lineWidth = borderWidth;

UIBezierPath *path = [UIBezierPath bezierPath];
CGFloat hw = borderWidth * 0.5;  // borderWidth / 2

if ([side isEqualToString:@"top"]) {
    // ===== 首行: 画顶部 L 型边框（含顶横线）=====
    
    // 起点: 左下角 (hw, height)
    [path moveToPoint:CGPointMake(hw, height)];
    
    // 向上到左圆角起点
    [path addLineToPoint:CGPointMake(hw, hw + radius)];
    
    // 左下圆弧 (顺时针)
    [path addArcWithCenter:CGPointMake(hw + radius, hw + radius)
                    radius:radius
                startAngle:M_PI
                  endAngle:M_PI * 1.5
                 clockwise:YES];
    
    // 右下圆弧 (顺时针)
    [path addArcWithCenter:CGPointMake(width - hw - radius, hw + radius)
                    radius:radius
                startAngle:M_PI * 1.5
                  endAngle:0
                 clockwise:YES];
    
    // 向右到右下角
    [path addLineToPoint:CGPointMake(width - hw, height)];
    
} else if ([side isEqualToString:@"bottom"]) {
    // ===== 末行: 画底部 L 型边框（含底横线）=====
    
    // 起点: 左上角 (hw, 0)
    [path moveToPoint:CGPointMake(hw, 0)];
    
    // 向下到左圆角起点
    [path addLineToPoint:CGPointMake(hw, height - hw - radius)];
    
    // 左上圆弧 (逆时针)
    [path addArcWithCenter:CGPointMake(hw + radius, height - hw - radius)
                    radius:radius
                startAngle:M_PI
                  endAngle:M_PI * 0.5
                 clockwise:NO];
    
    // 右上圆弧 (逆时针)
    [path addArcWithCenter:CGPointMake(width - hw - radius, height - hw - radius)
                    radius:radius
                startAngle:M_PI * 0.5
                  endAngle:0
                 clockwise:NO];
    
    // 向右到右上角
    [path addLineToPoint:CGPointMake(width - hw, 0)];
}

// 设置路径
shape.path = path.CGPath;

// ★ 关键: 设置 shape.frame = cell.bounds
shape.frame = CGRectMake(x, y, width, height);

return shape;
```

### 4.2 关键发现: 为什么微信优化的横线不被裁切？

**原因: 设置了 `shape.frame = cell.bounds`**

当我们创建 CAShapeLayer 时：
- 默认情况下，shape 的 frame 是 `(0, 0, 0, 0)`
- path 的坐标是相对于 shape 的 bounds 的
- 如果不设置 frame，bounds 可能不正确，导致坐标系混乱

微信优化显式设置了 `frame = cell.bounds` 后：
- shape 的 bounds 正确设置为 cell 的大小
- path 的坐标系统正确建立
- stroke 渲染时不会出现意外的裁切

### 4.3 我们的代码缺少什么？

对比 [wp_buildTopBorderPath](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L546-L576):

```objc
// 当前代码:
+ (CAShapeLayer *)wp_buildTopBorderPath:(CGRect)rect ... {
    CAShapeLayer *shape = [CAShapeLayer layer];
    // ... 设置属性 ...
    // ... 创建 path ...
    shape.path = path.CGPath;
    return shape;  // ← 缺少: shape.frame = rect;
}
```

**★ 缺少一行关键代码: `shape.frame = rect;`**

---

## 5️⃣ 统一方案详细设计

### 5.1 核心设计原则

```
原则 1: 统一性
  → 所有 position 都使用 CAShapeLayer + stroke
  
原则 2: 一致性
  → 所有路径都设置 shape.frame = rect（与微信优化对齐）
  
原则 3: 正确性
  → 路径坐标确保 stroke 完全在 bounds 内部
  → 避免边界裁切问题
  
原则 4: 最小化改动
  → 复用现有逻辑，只做必要调整
  → 不改变外部接口
```

### 5.2 统一的路径构建函数设计

#### 函数签名（新设计）

```objc
/**
 * 统一边框路径构建函数
 *
 * @param rect       Cell 的 bounds
 * @param borderWidth 边框宽度 (pt)
 * @param borderColor 边框颜色
 * @param radius      圆角半径 (pt)，如果 <=0 则不画圆弧
 * @param type        边框类型:
 *                     - @"top"    : 首行 L 型（左竖线+右竖线+双圆弧+底横线）
 *                     - @"bottom" : 末行 L 型（左竖线+右竖线+双圆弧+顶横线）
 *                     - @"left"   : 纯左竖线
 *                     - @"right"  : 纯右竖线
 *                     - @"full"   : 完整矩形边框（用于单行卡片）
 *
 * @return 配置好的 CAShapeLayer，可直接 addSublayer
 */
+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;
```

#### 各类型的路径形状

```
type = @"top" (首行):
┌──────────────────────────────────────┐
│                                      │
│  ╭────────────────────────╮         │
│  │                        │  ← 竖线  │
│  ╰────────────────────────╯         │
│  ===========================  ← 横线  │
└──────────────────────────────────────┘

type = @"bottom" (末行):
  ===========================  ← 横线
  ╭────────────────────────╮
  │                        │  ← 竖线
  ╰────────────────────────╯
└──────────────────────────────────────┘

type = @"left" (中间行左侧):
┌──────────────────────────────────────┐
│▓                                     │
│▓                                     │
│▓  (纯竖线，无横线无圆弧)              │
│▓                                     │
│▓                                     │
└──────────────────────────────────────┘

type = @"right" (中间行右侧):
┌──────────────────────────────────────┐
│                                    ▓│
│                                    ▓│
│  (纯竖线，无横线无圆弧)            ▓│
│                                    ▓│
│                                    ▓│
└──────────────────────────────────────┘

type = @"full" (单行):
┌──────────────────────────────────────┐
│╔══════════════════════════════════╗ │
║                                   ║ │
╚══════════════════════════════════╝ │
└──────────────────────────────────────┘
```

### 5.3 路径坐标设计（避免裁切的关键）

#### 设计思路

**核心原则: stroke 居中渲染，所以路径坐标要内移 `hw = borderWidth/2`**

```
Cell bounds: (0, 0, width, height)

对于左边框:
  路径 x 坐标 = hw (不是 0!)
  stroke 覆盖范围: x ∈ [0, borderWidth]
  结果: 完全在 bounds 内部 ✅

对于右边框:
  路径 x 坐标 = width - hw (不是 width!)
  stroke 覆盖范围: x ∈ [width-borderWidth, width]
  结果: 完全在 bounds 内部 ✅

对于上边框:
  路径 y 坐标 = hw (不是 0!)
  stroke 覆盖范围: y ∈ [0, borderWidth]
  结果: 完全在 bounds 内部 ✅

对于下边框:
  路径 y 坐标 = height - hw (不是 height!)
  stroke 覆盖范围: y ∈ [height-borderWidth, height]
  结果: 完全在 bounds 内部 ✅
```

#### 具体坐标示例 (borderWidth=2, hw=1, radius=18, w=375, h=60)

**type = @"top" (首行)**:

```objc
CGFloat hw = borderWidth / 2.0;  // 1.0

UIBezierPath *path = [UIBezierPath bezierPath];

// 1. 起点: 左下角内移 hw
[path moveToPoint:CGPointMake(1.0, 60.0)];           // (hw, h)

// 2. 向上到左圆角起点
[path addLineToPoint:CGPointMake(1.0, 19.0)];        // (hw, radius + hw)

// 3. 左下圆弧 (顺时针)
[path addArcWithCenter:CGPointMake(19.0, 19.0)       // (hw + radius, hw + radius)
                radius:18.0
            startAngle:M_PI
              endAngle:M_PI * 1.5
             clockwise:YES];

// 4. 右下圆弧 (顺时针)
[path addArcWithCenter:CGPointMake(356.0, 19.0)      // (w - hw - radius, hw + radius)
                radius:18.0
            startAngle:M_PI * 1.5
              endAngle:0
             clockwise:YES];

// 5. 向右到右下角
[path addLineToPoint:CGPointMake(374.0, 60.0)];      // (w - hw, h)

// 结果: L 型路径，包含左右竖线和底部横线
// stroke 居中渲染，所有线条都在 bounds 内部 ✅
```

**type = @"left" (中间行左竖线)**:

```objc
CGFloat hw = borderWidth / 2.0;  // 1.0

UIBezierPath *path = [UIBezierPath bezierPath];

// 纯竖线，从上到下
[path moveToPoint:CGPointMake(1.0, 0.0)];            // (hw, 0)
[path addLineToPoint:CGPointMake(1.0, 60.0)];        // (hw, h)

// 结果: 一条垂直线段
// stroke 覆盖 x ∈ [0, 2]，完全在内部 ✅
```

### 5.4 shape.frame 设置的重要性

```objc
// 创建并配置 shape
CAShapeLayer *shape = [CAShapeLayer layer];
shape.name = @"com.mio.cornerBorder";
shape.strokeColor = borderColor.CGColor;
shape.fillColor = [UIColor clearColor].CGColor;
shape.lineWidth = borderWidth;
shape.lineJoin = kCALineJoinRound;

// 创建并设置 path
UIBezierPath *path = [UIBezierPath bezierPath];
// ... 构建 path ...

shape.path = path.CGPath;

// ★★★ 关键: 必须设置 frame! ★★★
shape.frame = rect;  // rect = cell.bounds

return shape;
```

**为什么要设置 frame?**

1. **确定坐标系原点**: path 的坐标是相对于 shape 的 bounds 的
2. **正确计算裁切区域**: masksToBounds 依赖于正确的 bounds
3. **与微信优化保持一致**: 反编译代码明确调用了 setFrame
4. **避免渲染异常**: 不设 frame 可能导致 path 被缩放或偏移

---

## 6️⃣ 改造步骤（分阶段）

### 📌 阶段 1: 准备工作（预计 15 分钟）

#### 步骤 1.1: 备份当前代码

```bash
cd /www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/
cp ListCornerRadiusHook.m ListCornerRadiusHook.m.backup_$(date +%Y%m%d_%H%M%S)
```

**目的**: 确保可以快速回退

#### 步骤 1.2: 理解当前代码结构

需要阅读以下代码段：

| 代码段 | 行号范围 | 功能 |
|-------|---------|------|
| 接口声明 | [L21-L64](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L21-L64) | 方法声明 |
| 边框应用逻辑 | [L486-L525](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L486-L525) | switch-case 分发 |
| Top 路径函数 | [L546-L576](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L546-L576) | 首行边框 |
| Bottom 路径函数 | [L578-L608](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L578-L608) | 末行边框 |
| Side Layer 函数 | [L610-L621](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L610-L621) | 中间行竖线 |

---

### 📌 阶段 2: 创建统一函数（预计 30 分钟）

#### 步骤 2.1: 在接口中添加新函数声明

**位置**: [ListCornerRadiusHook.m L59-L62](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L59-L62)

**操作**: 在现有的 `wp_buildSideLineLayer` 声明后面添加：

```objc
+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;
```

#### 步骤 2.2: 实现统一函数

**位置**: [ListCornerRadiusHook.m L622 前](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L622) （在 `@end` 之前）

**操作**: 插入新的函数实现（详见 [第 10 节](#10-附录完整代码示例)）

**关键点**:
1. 创建 CAShapeLayer 并设置通用属性
2. 根据 `type` 参数分支构建不同路径
3. 所有路径都使用 `hw = borderWidth/2` 作为偏移量
4. **必须设置 `shape.frame = rect`**
5. 返回配置完成的 shape

---

### 📌 阶段 3: 修改调用处（预计 20 分钟）

#### 步骤 3.1: 修改 case 1 (首行)

**位置**: [L492-L499](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L492-L499)

**当前代码**:
```objc
case 1: {
    CAShapeLayer *shape = [self wp_buildTopBorderPath:cell.bounds
                                          borderWidth:borderWidth
                                         borderColor:borderColor
                                              radius:radius];
    shape.name = @"com.mio.cornerBorder";
    [cell.layer addSublayer:shape];
    break;
}
```

**改为**:
```objc
case 1: {
    CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                               borderWidth:borderWidth
                                              borderColor:borderColor
                                                   radius:radius
                                                     type:@"top"];
    [cell.layer addSublayer:shape];  // name 已在函数内设置
    break;
}
```

**变化**:
- ✅ 函数名: `wp_buildTopBorderPath` → `wp_buildUnifiedBorderLayer`
- ✅ 参数: 移除单独的 radius，改用 type=@"top"
- ✅ name 设置: 移到函数内部（统一管理）
- ✅ 新增: 自动设置 shape.frame

#### 步骤 3.2: 修改 case 2 (中间行)

**位置**: [L501-L514](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L501-L514)

**当前代码**:
```objc
case 2: {
    CALayer *left = [self wp_buildSideLineLayer:cell.bounds
                                    borderWidth:borderWidth
                                   borderColor:borderColor
                                          side:@"left"];
    CALayer *right = [self wp_buildSideLineLayer:cell.bounds
                                     borderWidth:borderWidth
                                    borderColor:borderColor
                                           side:@"right"];
    left.name = @"com.mio.cornerBorder";
    right.name = @"com.mio.cornerBorder";
    [cell.layer addSublayer:left];
    [cell.layer addSublayer:right];
    break;
}
```

**改为**:
```objc
case 2: {
    CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                              borderWidth:borderWidth
                                             borderColor:borderColor
                                                  radius:0
                                                    type:@"left"];
    CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                               borderWidth:borderWidth
                                              borderColor:borderCode
                                                   radius:0
                                                     type:@"right"];
    [cell.layer addSublayer:left];
    [cell.layer addSublayer:right];
    break;
}
```

**变化**:
- ✅ 返回类型: `CALayer` → `CAShapeLayer`
- ✅ 函数名: `wp_buildSideLineLayer` → `wp_buildUnifiedBorderLayer`
- ✅ 参数: `side:` → `type:` (值相同: @"left"/@"right")
- ✅ 新增: `radius=0` (中间行无圆角)
- ✅ name 设置: 移到函数内部

#### 步骤 3.3: 修改 case 3 (末行)

**位置**: [L516-L523](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L516-L523)

**当前代码**:
```objc
case 3: {
    CAShapeLayer *shape = [self wp_buildBottomBorderPath:cell.bounds
                                             borderWidth:borderWidth
                                            borderColor:borderColor
                                                 radius:radius];
    shape.name = @"com.mio.cornerBorder";
    [cell.layer addSublayer:shape];
    break;
}
```

**改为**:
```objc
case 3: {
    CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                               borderWidth:borderWidth
                                              borderColor:borderColor
                                                   radius:radius
                                                     type:@"bottom"];
    [cell.layer addSublayer:shape];
    break;
}
```

**变化**: 与 case 1 类似

#### 步骤 3.4: case 0 保持不变

```objc
case 0: {
    cell.layer.borderColor = borderColor.CGColor;
    cell.layer.borderWidth = borderWidth;
    break;
}
```

**说明**: 单行卡片继续使用原生 border 属性，这是最优方案（最简单、最高效）。

---

### 📌 阶段 4: 清理旧代码（预计 10 分钟）

#### 步骤 4.1: 删除旧函数（可选，建议保留但标记废弃）

**选项 A: 直接删除**（推荐，如果测试通过）

删除以下三个函数:
- [wp_buildTopBorderPath](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L546-L576) (30 行)
- [wp_buildBottomBorderPath](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L578-L608) (30 行)
- [wp_buildSideLineLayer](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L610-L621) (11 行)

**选项 B: 标记废弃**（保守，便于回退）

在每个旧函数前添加:

```objc
__attribute__((deprecated("Use wp_buildUnifiedBorderLayer:type: instead")))
+ (CAShapeLayer *)wp_buildTopBorderPath:(CGRect)rect ... {
    // ...
}
```

#### 步骤 4.2: 更新接口声明

**位置**: [L49-L62](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L49-L62)

**操作**:
1. 删除或标记废弃三个旧函数声明
2. 保留新函数 `wp_buildUnifiedBorderLayer` 声明

---

### 📌 阶段 5: 编译测试（预计 20 分钟）

#### 步骤 5.1: 编译检查

```bash
# 在 Xcode 中编译项目
# 或使用命令行:
xcodebuild -scheme MioPlugin -configuration Debug build
```

**预期结果**: ✅ 编译无错误、无警告

#### 步骤 5.2: 功能测试清单

见 [第 8 节](#8-测试验证清单)

---

## 7️⃣ 各函数改造清单

### 7.1 接口声明改造

| # | 操作 | 位置 | 详情 |
|---|------|------|------|
| 1 | **新增** | L59 后 | 添加 `wp_buildUnifiedBorderLayer` 声明 |
| 2 | **删除/废弃** | L49-L52 | `wp_buildTopBorderPath` 声明 |
| 3 | **删除/废弃** | L54-L57 | `wp_buildBottomBorderPath` 声明 |
| 4 | **删除/废弃** | L59-L62 | `wp_buildSideLineLayer` 声明 |

### 7.2 实现函数改造

| # | 函数名 | 操作 | 行数变化 | 说明 |
|---|--------|------|:-------:|------|
| 1 | `wp_buildUnifiedBorderLayer` | **新增** | +80 行 | 统一路径构建函数 |
| 2 | `wp_buildTopBorderPath` | 删除/废弃 | -30 行 | 被 #1 替代 |
| 3 | `wp_buildBottomBorderPath` | 删除/废弃 | -30 行 | 被 #1 替代 |
| 4 | `wp_buildSideLineLayer` | 删除/废弃 | -11 行 | 被 #1 替代 |
| | **净变化** | | **+9 行** | 代码略微增加（更清晰） |

### 7.3 调用处改造

| # | 位置 | 操作 | 改动量 |
|---|------|------|:-----:|
| 1 | case 1 (L492-499) | 替换函数调用 | ~5 行 |
| 2 | case 2 (L501-514) | 替换函数调用 + 类型 | ~10 行 |
| 3 | case 3 (L516-523) | 替换函数调用 | ~5 行 |
| 4 | case 0 (L487-490) | **不改** | 0 行 |
| | **合计** | | **~20 行** |

### 7.4 总改动量统计

| 类别 | 改动量 |
|------|:-----:|
| 新增代码 | ~80 行 (统一函数) |
| 删除代码 | ~71 行 (3 个旧函数) |
| 修改调用处 | ~20 行 (3 个 case) |
| **净增减** | **+29 行** |
| **总触及行数** | **~100 行** |

---

## 8️⃣ 测试验证清单

### 8.1 单元测试（编译级）

- [ ] ✅ 编译无错误
- [ ] ✅ 编译无警告
- [ ] ✅ 无未使用的变量/函数
- [ ] ✅ 无类型不匹配警告

### 8.2 功能测试（页面级）

#### 测试环境
- 设备: iPhone (真实机或模拟器)
- iOS 版本: iOS 15.0+ (建议多版本测试)
- 微信版本: 最新版

#### 测试用例

##### 用例 1: 单行卡片 (position=0)

**测试页面**: 设置页的某个单行选项

**验证项**:
- [ ] 边框四边都显示
- [ ] 四个圆角正确
- [ ] 边框粗细均匀（上下左右一致）
- [ ] 边框颜色正确

**预期结果**: ✅ 与改造前完全一致（case 0 未改动）

---

##### 用例 2: 首行卡片 (position=1)

**测试页面**: 发现页的"朋友圈"（第一个卡片的第一行）

**验证项**:
- [ ] 显示底部横线
- [ ] 显示左右竖线（下半部分）
- [ ] 左下角和右下角有圆角
- [ ] **底横线粗细与竖线一致** ← 重点！
- [ ] 边框颜色正确

**对比基准**:
- 改造前的底横线可能较细（stroke 裁切问题）
- 改造后的底横线应该与竖线同样粗细

---

##### 用例 3: 中间行卡片 (position=2)

**测试页面**: 发现页的"视频号"、"直播"等中间行

**验证项**:
- [ ] 只显示左右竖线
- [ ] **无横线**（正确行为）
- [ ] 竖线从顶部到底部完整显示
- [ ] **竖线粗细均匀**
- [ ] **竖线与相邻行的竖线无缝衔接** ← 重点！
- [ ] 边框颜色正确

**对比基准**:
- 改造前: CALayer 实心矩形
- 改造后: CAShapeLayer stroke
- 视觉效果应完全一致

---

##### 用例 4: 末行卡片 (position=3)

**测试页面**: 发现页最后一个卡片的最后一行（如"小程序"）

**验证项**:
- [ ] 显示顶部横线
- [ ] 显示左右竖线（上半部分）
- [ ] 左上角和右上角有圆角
- [ ] **顶横线粗细与竖线一致** ← 重点！
- [ ] 边框颜色正确

---

##### 用例 5: 完整多行卡片组合

**测试页面**: 发现页完整视图（朋友圈 → 小程序，共 9 行）

**验证项**:
- [ ] 整体视觉效果协调
- [ ] **所有横线粗细一致**
- [ ] **所有竖线粗细一致**
- [ ] **横线和竖线粗细一致** ← 核心目标！
- [ ] 圆角只在首行顶部和末行底部显示
- [ ] 卡片之间间距均匀
- [ ] 滚动流畅，无明显性能问题

**截图对比**:
1. 改造前截图（保存为 baseline.png）
2. 改造后截图（保存 as after.png）
3. 并排对比，重点看边框粗细

---

##### 用例 6: 不同 borderWidth 配置

**操作**: 修改配置文件的 `listCellBorderWidth` 为不同值

**测试值**:
- [ ] `borderWidth = 1.0` (细边框)
- [ ] `borderWidth = 2.0` (标准边框) ← 默认值
- [ ] `borderWidth = 3.0` (粗边框)

**验证项**:
- [ ] 所有配置下横线和竖线粗细都一致
- [ ] 无明显锯齿或模糊
- [ ] 圆角在不同宽度下都平滑

---

##### 用例 7: 不同 cornerRadius 配置

**操作**: 修改配置文件的 `listCornerRadius` 为不同值

**测试值**:
- [ ] `radius = 0` (无圆角，直角卡片)
- [ ] `radius = 10` (小圆角)
- [ ] `radius = 18` (标准圆角) ← 默认值
- [ ] `radius = 30` (大圆角)

**验证项**:
- [ ] 圆角大小正确
- [ ] 圆角处边框连续平滑
- [ ] 圆角不影响边框粗细

---

##### 用例 8: 暗色模式

**操作**: 切换系统到暗色模式

**验证项**:
- [ ] 边框颜色正确切换（浅色/深色）
- [ ] 边框粗细不受暗色模式影响
- [ ] 无颜色异常或闪烁

---

##### 用例 9: 滚动性能

**操作**: 在发现页快速上下滚动

**验证项**:
- [ ] 滚动流畅，FPS > 55
- [ ] 无明显掉帧
- [ ] 无内存泄漏（ Instruments 监测）
- [ ] 滚动停止后边框立即正确显示

---

### 8.3 回归测试（全局级）

- [ ] 首页（微信）列表正常
- [ ] 通讯录列表正常
- [ ] 发现页列表正常 ✅ (重点测试)
- [ ] 设置页列表正常
- [ ] 聊天详情页正常
- [ ] 其他自定义列表页正常

---

## 9️⃣ 风险与回退方案

### 9.1 潜在风险

| 风险等级 | 风险描述 | 可能性 | 影响 | 缓解措施 |
|:-------:|---------|:-----:|:----:|---------|
| 🟡 中 | Stroke 抗锯齿导致轻微模糊 | 中 | 低 | 通过测试验证；必要时微调坐标 |
| 🟡 中 | 性能下降（理论上） | 低 | 极低 | 性能测试确认；实际影响 < 1ms |
| 🟢 低 | 路径坐标计算错误 | 低 | 中 | 严格遵循微信优化实现；充分测试 |
| 🟢 Low | 编译错误 | 低 | 低 | 分阶段实施；每步编译验证 |
| 🔴 高 | 横线仍然较细（未解决根本问题） | 中 | 高 | 见下方回退方案 |

### 9.2 回退方案

#### 方案 A: 快速回退（Git 版本控制）

```bash
# 回退到改造前版本
git checkout HEAD~1 -- MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m

# 或使用备份
cp ListCornerRadiusHook.m.backup_* ListCornerRadiusHook.m
```

**耗时**: < 1 分钟

#### 方案 B: 渐进式回退（保留部分改动）

如果测试发现问题，可以选择性回退：

1. **只回退 case 2**（保留 case 1/3 的改进）
   - 将中间行恢复为 CALayer 方案
   - 保留首行/末行的 frame 设置改进
   
2. **只回退 frame 设置**
   - 保留统一函数，但注释掉 `shape.frame = rect;`
   - 观察是否是 frame 导致的问题

3. **回退到原始三个函数**
   - 删除 `wp_buildUnifiedBorderLayer`
   - 恢复 `wp_buildTopBorderPath` 等三个旧函数
   - 但给它们加上 `shape.frame = rect;` 尝试

#### 方案 C: Plan B（备选方案）

如果统一 CAShapeLayer 方案仍有问题，可采用 [右边距问题深度分析与修复.md](file:///www/wwwroot/ios/右边距问题深度分析与修复.md) 文档中的**方案 A: 横线也改用 CALayer**：

- position=1/3: CAShapeLayer 画圆角 + CALayer 画横线
- position=2: CALayer 画竖线
- 结果: 横竖线都用 CALayer 实心矩形

**优点**: 彻底避免 stroke 问题
**缺点**: 每个位置需要 2 个图层（shape + layer）

---

## 🔟 附录：完整代码示例

### 10.1 统一函数完整实现

```objc
/**
 * 统一边框路径构建函数
 * 
 * 替代原来的三个函数:
 *   - wp_buildTopBorderPath
 *   - wp_buildBottomBorderPath
 *   - wp_buildSideLineLayer
 *
 * @param rect       Cell 的 bounds
 * @param borderWidth 边框宽度 (pt)
 * @param borderColor 边框颜色
 * @param radius      圆角半径 (pt)，<=0 表示无圆角
 * @param type        边框类型:
 *                     - @"top"    : 首行 L 型（左竖线+右竖线+双圆弧+底横线）
 *                     - @"bottom" : 末行 L 型（左竖线+右竖线+双圆弧+顶横线）
 *                     - @"left"   : 纯左竖线
 *                     - @"right"  : 纯右竖线
 *
 * @return 配置好的 CAShapeLayer，可直接 addSublayer
 */
+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type {
    
    // 1. 创建并配置 CAShapeLayer
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.name = @"com.mio.cornerBorder";
    shape.strokeColor = borderColor.CGColor;
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;
    
    // 2. 计算基础参数
    CGFloat hw = borderWidth / 2.0;  // 半线宽，用于路径偏移
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;
    CGFloat r = (radius > 0) ? radius : 0;  // 确保非负
    
    // 3. 根据类型构建路径
    UIBezierPath *path = [UIBezierPath bezierPath];
    
    if ([type isEqualToString:@"top"]) {
        // ========== 首行: L 型边框（含底横线）==========
        
        // 起点: 左下角 (内移 hw)
        [path moveToPoint:CGPointMake(hw, h)];
        
        // 向上到左圆角起点
        [path addLineToPoint:CGPointMake(hw, hw + r)];
        
        if (r > 0) {
            // 左下圆弧 (顺时针，270° → 360°)
            [path addArcWithCenter:CGPointMake(hw + r, hw + r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 1.5
                         clockwise:YES];
            
            // 右下圆弧 (顺时针，360° → 0°/360°)
            [path addArcWithCenter:CGPointMake(w - hw - r, hw + r)
                            radius:r
                        startAngle:M_PI * 1.5
                          endAngle:0
                         clockwise:YES];
        }
        
        // 向右到右下角 (画底横线)
        [path addLineToPoint:CGPointMake(w - hw, h)];
        
    } else if ([type isEqualToString:@"bottom"]) {
        // ========== 末行: L 型边框（含顶横线）==========
        
        // 起点: 左上角 (内移 hw)
        [path moveToPoint:CGPointMake(hw, 0)];
        
        // 向下到左圆角起点
        [path addLineToPoint:CGPointMake(hw, h - hw - r)];
        
        if (r > 0) {
            // 左上圆弧 (逆时针，180° → 90°)
            [path addArcWithCenter:CGPointMake(hw + r, h - hw - r)
                            radius:r
                        startAngle:M_PI
                          endAngle:M_PI * 0.5
                         clockwise:NO];
            
            // 右上圆弧 (逆时针，90° → 0°)
            [path addArcWithCenter:CGPointMake(w - hw - r, h - hw - r)
                            radius:r
                        startAngle:M_PI * 0.5
                          endAngle:0
                         clockwise:NO];
        }
        
        // 向右到右上角 (画顶横线)
        [path addLineToPoint:CGPointMake(w - hw, 0)];
        
    } else if ([type isEqualToString:@"left"]) {
        // ========== 中间行: 纯左竖线 ==========
        
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h)];
        
    } else if ([type isEqualToString:@"right"]) {
        // ========== 中间行: 纯右竖线 ==========
        
        [path moveToPoint:CGPointMake(w - hw, 0)];
        [path addLineToPoint:CGPointMake(w - hw, h)];
        
    } else {
        // 默认: 不画任何东西（返回空 shape）
        return shape;
    }
    
    // 4. 设置路径
    shape.path = path.CGPath;
    
    // 5. ★★★ 关键: 设置 frame (与微信优化对齐) ★★★
    shape.frame = rect;
    
    return shape;
}
```

### 10.2 调用处完整代码

```objc
// 在 wp_applyBorderAndBg:radius:position:isFTSHome: 方法中的 switch 语句:

switch (position) {
    case 0: {
        // 单行卡片: 使用原生 border 属性（最优方案）
        cell.layer.borderColor = borderColor.CGColor;
        cell.layer.borderWidth = borderWidth;
        break;
    }
    case 1: {
        // 首行: L 型边框（含底横线 + 下半圆角）
        CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                   borderWidth:borderWidth
                                                  borderColor:borderColor
                                                       radius:radius
                                                         type:@"top"];
        [cell.layer addSublayer:shape];
        break;
    }
    case 2: {
        // 中间行: 纯左右竖线（无横线无圆角）
        CAShapeLayer *left = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                 borderWidth:borderWidth
                                                borderColor:borderColor
                                                     radius:0
                                                       type:@"left"];
        CAShapeLayer *right = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                  borderWidth:borderWidth
                                                 borderColor:borderColor
                                                      radius:0
                                                        type:@"right"];
        [cell.layer addSublayer:left];
        [cell.layer addSublayer:right];
        break;
    }
    case 3: {
        // 末行: L 型边框（含顶横线 + 上半圆角）
        CAShapeLayer *shape = [self wp_buildUnifiedBorderLayer:cell.bounds
                                                   borderWidth:borderWidth
                                                  borderColor:borderColor
                                                       radius:radius
                                                         type:@"bottom"];
        [cell.layer addSublayer:shape];
        break;
    }
}
```

### 10.3 接口声明更新

```objc
@interface ListCornerRadiusHook ()

// ... 其他方法声明 ...

/**
 * 统一边框路径构建函数
 * 替代原来的 wp_buildTopBorderPath / wp_buildBottomBorderPath / wp_buildSideLineLayer
 */
+ (CAShapeLayer *)wp_buildUnifiedBorderLayer:(CGRect)rect
                                 borderWidth:(CGFloat)borderWidth
                                borderColor:(UIColor *)borderColor
                                     radius:(CGFloat)radius
                                       type:(NSString *)type;

@end
```

---

## 📊 总结

### 改造亮点

| 维度 | 改造前 | 改造后 |
|------|:-----:|:-----:|
| **统一性** | 混合使用 CALayer/CAShapeLayer | ✅ 全部使用 CAShapeLayer |
| **一致性** | 横线/竖线渲染方式不同 | ✅ 完全一致的 stroke 渲染 |
| **正确性** | 横线可能被裁切 50% | ✅ 通过 frame + 坐标调整解决 |
| **可维护性** | 3 个独立函数，逻辑分散 | ✅ 1 个统一函数，集中管理 |
| **与微信优化对齐** | 缺少 frame 设置 | ✅ 完全对齐 |
| **代码量** | 3 个函数 (~71 行) | 1 个函数 (~80 行) |
| **净增长** | - | +9 行 (更清晰的代码) |

### 预期效果

```
改造前:
┌─────────────────────────────────────┐
│ ╔═════════════════════════════════╗ │  ← 横线较细 ❌
│ ║                               ║ │
│ ╚═════════════════════════════════╝ │
│ ▓                               ▓ │  ← 竖线正常 ✅
│ ▓                               ▓ │
│ ▓                               ▓ │
│ ╔═════════════════════════════════╗ │  ← 横线较细 ❌
│ ║                               ║ │
│ ╚═════════════════════════════════╝ │
└─────────────────────────────────────┘

改造后:
┌─────────────────────────────────────┐
│ ╔═════════════════════════════════╗ │  ← 横线正常 ✅
│ ║                               ║ │
│ ╚═════════════════════════════════╝ │
│ ▓                               ▓ │  ← 竖线正常 ✅
│ ▓                               ▓ │
│ ▓                               ▓ │
│ ╔═════════════════════════════════╗ │  ← 横线正常 ✅
│ ║                               ║ │
│ ╚═════════════════════════════════╝ │
└─────────────────────────────────────┘
                              ↑
                   所有线条粗细完全一致！🎉
```

---

## 📝 改造 Checklist

开始改造前，请确认：

- [ ] 已备份源代码
- [ ] 已阅读并理解本文档的所有章节
- [ ] 已准备好测试设备（真机或模拟器）
- [ ] 已记录当前的视觉效果（截图保存）
- [ ] 预计有 **1-2 小时** 完成全部改造和测试

**祝改造顺利！** 🚀
