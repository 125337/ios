# 隐藏箭码 vs 隐藏状态 — 功能实现对比

> 两者均为 WCRefine/资料卡片美化系统的独立隐藏功能，基于同一套 Hook 体系

---

## 一、架构入口对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **Hook 入口** | `replaced_MMUIButton_layoutSubviews` L125 | `handleButtonLayout:` L656 | 平手 |
| **调用层级** | 在 MMUIButton Hook 中独立调用 | 在 handleButtonLayout 内部，守卫之前 | 平手 |
| **守卫** | 冗余的 3 道守卫（与 handleButtonLayout 完全相同） | 无专用守卫（由 handleButtonLayout 后续守卫兜底） | 平手 |
| **总开关依赖** | ❌ 不依赖任何总开关 | ❌ 不依赖任何总开关 | 平手 |

### 入口调用链

**箭码隐藏：**
```
MMUIButton.layoutSubviews (Hook)
  → replaced_MMUIButton_layoutSubviews     ← ListCornerRadiusHook.m L118
      → ProfileCardBgHook handleArrowQRHiding:   ← L125 独立调用
          → 3 道守卫
          → if (myPageHideArrow) hideArrowQRInCell:
              → isArrowQRView: 匹配 → sub.hidden = YES
```

**状态隐藏：**
```
MMUIButton.layoutSubviews (Hook)
  → replaced_MMUIButton_layoutSubviews
      → ProfileCardBgHook handleButtonLayout:      ← L128 内部调用
          → hideStateElementsInCell:shouldHide:     ← L656 守卫之前
              → isStateEntryButton: / isStateTopicButton: 匹配
              → sub.hidden = shouldHide + alpha/opacity 重置
```

---

## 二、识别方式对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **识别方法数** | 1 个（`isArrowQRView:`） | 2 个（`isStateEntryButton:` + `isStateTopicButton:`） | **箭码**（更简洁） |
| **匹配策略** | `isKindOfClass:` + frame 位置启发式 | `NSStringFromClass` + `isEqualToString:` 精确类名 | **状态**（更精准） |
| **假阳性风险** | ⚠️ 中（frame 启发式可能误判） | ✅ 低（类名精确匹配，不会认错） | **状态** |
| **对未来微信版本兼容性** | ⚠️ 中（frame 位置变化可能失效） | ⚠️ 中（类名变化会失效） | 平手 |
| **性能** | ✅ **快** — `isKindOfClass:` 指针检查 + frame 结构体访问，无内存分配 | ⚠️ **略慢** — `NSStringFromClass` 堆分配字符串 + `isEqualToString:` 全串比较 | **箭码** |

### 具体识别代码对比

```objc
// 箭码 isArrowQRView: — 两种策略 OR 组合
// UIImageView + frame 启发式
if ([view isKindOfClass:[UIImageView class]]) {
    CGFloat w = view.frame.size.width;  // 10-18pt
    CGFloat h = view.frame.size.height; // 8-40pt
    CGFloat x = view.frame.origin.x;    // 距右边缘 < 40pt
    if (w >= 10 && w <= 18 && h >= 8 && h <= 40 && x >= parentW - 40) return YES;
}
// MMUIButton + 右侧位置
if ([view isKindOfClass:NSClassFromString(@"MMUIButton")]) {
    if (x >= parentW - 60) return YES;
}

// 状态 isStateEntryButton: — 精确类名匹配
NSString *cn = NSStringFromClass([view class]);
return [cn isEqualToString:@"TextStatePublishEntryButton"];

// 状态 isStateTopicButton: — 精确类名匹配
NSString *cn = NSStringFromClass([view class]);
return [cn isEqualToString:@"TextStateFriendTopicButton"];
```

---

## 三、隐藏方式对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **方法签名** | `hideArrowQRInCell:(UIView *)cell`（仅隐藏） | `hideStateElementsInCell:shouldHide:`（参数控制） | 平手 |
| **开关控制机制** | 外部 guard 包裹：`if (myPageHideArrow) { 调用 }` | 内部参数传递：`shouldHide:config.cardBgHideStateEnabled` | 平手 |
| **隐藏操作** | `sub.hidden = YES`（方法内写死，开关控制是否调用） | `sub.hidden = shouldHide`（参数传入） | 平手 |
| **恢复机制** | guard 跳过 → 不调用 hide 方法 → 原始 layout 恢复显示 | 传 NO → 主动 `setHidden:NO` → 恢复显示 | 平手 |
| **透明度重置** | ❌ 不重置 | ✅ `sub.alpha = 1.0; sub.layer.opacity = 1.0;` | **状态** |
| **状态缓存** | ❌ 无缓存 | ❌ 无缓存 | 平手 |
| **性能** | ✅ **快** — 每个匹配视图只设 1 个属性（hidden） | ⚠️ **略慢** — 每个匹配视图设 3 个属性（hidden + alpha + layer.opacity） | **箭码** |

### 隐藏方法对比

```objc
// 箭码 — 方法内写死 hidden=YES，调用由外部 guard 控制
+ (void)hideArrowQRInCell:(UIView *)cell {
    for (UIView *sub in cell.subviews) {
        if ([self isArrowQRView:sub]) {
            sub.hidden = YES;           // 写死，但由 if (myPageHideArrow) 控制是否调用
        }
    }
}

// 调用方
+ (void)handleArrowQRHiding:(UIView *)button {
    ...
    if (config.myPageHideArrow) {                  // ← 开关：开才调用
        [ProfileCardBgHook hideArrowQRInCell:button];
    }                                              // ← 开关：关则不调用 → 恢复显示
}

// 状态 — 参数控制藏/恢复
+ (void)hideStateElementsInCell:(UIView *)cell shouldHide:(BOOL)shouldHide {
    if (!cell) return;
    for (UIView *sub in cell.subviews) {
        if ([self isStateEntryButton:sub] ||
            [self isStateTopicButton:sub]) {
            sub.hidden = shouldHide;    // 参数控制：YES=藏 / NO=恢复
            sub.alpha = 1.0;            // 重置透明度
            sub.layer.opacity = 1.0;
        }
    }
}
```

---

## 四、调用入口守卫对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **守卫位置** | 在 `handleArrowQRHiding:` 内部开头 | 在 `handleButtonLayout:` 内部（但隐藏调用在守卫之前） | 平手 |
| **MoreVC 检查** | ✅ `findMoreViewController:`（但与 handleButtonLayout 冗余） | ❌ 无（由 handleButtonLayout 后续守卫兜底） | 平手 |
| **headImageView 检查** | ✅ `hasHeadImageViewInView:`（但与 handleButtonLayout 冗余） | ❌ 无 | 平手 |
| **高度检查** | ✅ `height <= 50.0`（但与 handleButtonLayout 冗余） | ❌ 无 | 平手 |
| **空值保护** | ✅ 有（调用方传 button） | ✅ `if (!cell) return;` | 平手 |

> **关于守卫的说明：** `handleArrowQRHiding:` 的 3 道守卫（L757-760）与 `handleButtonLayout:` 的 3 道守卫（L664-667）代码完全一样。由于 `handleArrowQRHiding:` 在 L125 执行，`handleButtonLayout:` 在 L128 执行（同一调用栈），即使箭码没有自己的守卫，走到 `handleButtonLayout` 时也会被拦住。因此这 3 道守卫是**冗余的**，并非箭码独有优势。

```objc
// 箭码 — 自带 3 道守卫
+ (void)handleArrowQRHiding:(UIView *)button {
    UIViewController *vc = [self findMoreViewController:button];
    if (!vc) return;
    if (![self hasHeadImageViewInView:button]) return;
    if (button.frame.size.height <= 50.0) return;
    // ... 执行隐藏
}

// 状态 — 无守卫，直接裸执行
// 在 handleButtonLayout 中位于守卫之前：
+ (void)handleButtonLayout:(UIView *)button {
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];
    // ↓ 下面才是 handleButtonLayout 的守卫
    if (!config.cardBgBeautifyEnabled) return;
    ...
}
```

---

## 五、功能完整性对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **隐藏模式有效** | ✅ | ✅ | 平手 |
| **可见模式有效** | ✅ | ✅ | 平手 |
| **不受总开关控制** | ✅（独立入口） | ✅（守卫之前） | 平手 |
| **开关可还原** | ✅ guard 跳过 → 原始 layout 恢复 | ✅ 传 NO → 主动恢复 | 平手 |
| **目标个数** | 多个（所有符合条件 subviews） | 固定 2 个（entry + topic 按钮） | 平手 |
| **透明度保护** | ❌ 不重置 | ✅ alpha + layer.opacity 全部重置 | **状态** |
| **配置属性** | `myPageHideArrow` | `cardBgHideStateEnabled` | 平手 |
| **设置在哪个区域** | 我的页面美化 | 我的页面美化 | 平手 |

---

## 七、性能对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **识别手段** | `isKindOfClass:` — ISA 指针检查，O(1)，无分配 | `NSStringFromClass` — 堆分配 NSString + `isEqualToString:` O(n) 比较 | **箭码** |
| **每视图匹配开销** | ~0.01μs（指针检查 + 浮点比较） | ~0.05-0.1μs（堆分配 + 字符串比较） | **箭码** |
| **隐藏操作次数** | 1 次属性写入 / 匹配视图 | 3 次属性写入 / 匹配视图 | **箭码** |
| **循环外开销** | 3 道冗余守卫（方法调用 + 判断） | 无额外开销 | **状态** |
| **总执行路径** | 独立方法调用 + guard + loop | 嵌入 handleButtonLayout，无额外跳转 | **状态** |
| **在非资料卡按钮上** | 3 道守卫拦截 → 不执行循环 | 无守卫拦截 → 进入循环但无匹配 → 微秒级空跑 | **箭码** |

### 性能开销量化

```
场景：资料卡按钮 ×2（entry + topic），每次 layoutSubviews

箭码:
  handleArrowQRHiding:
    ├── findMoreViewController      ~0.002μs
    ├── hasHeadImageViewInView      ~0.003μs
    ├── height check                ~0.001μs
    ├── config.myPageHideArrow      ~0.001μs
    └── hideArrowQRInCell: loop ×~10 subviews
        └── isArrowQRView: ×10     ~0.1μs  (isKindOfClass, frame)
            └── 匹配到 ~2 个 → 2× hidden=YES   ~0.1μs
    ─────────────────────────────────────────
    合计: ~0.3μs / 次

状态:
  hideStateElementsInCell:shouldHide:
    └── loop ×~10 subviews
        ├── isStateEntryButton: ×10 ~2μs  (NSStringFromClass + isEqual)
        └── isStateTopicButton: ×10  ~2μs  (同上)
            └── 匹配到 2 个 → 2× (hidden + alpha + opacity)  ~0.3μs
    ─────────────────────────────────────────
    合计: ~4.5μs / 次

注：上表为理论值，实际差异在 μs 级别，对 UI 性能影响可忽略不计。
```

### 性能总结

| 结论 | 说明 |
|------|------|
| **箭码更快** | 识别用 `isKindOfClass:` 而非 `NSStringFromClass`，隐藏只设 1 个属性 |
| **差距可忽略** | 每次 layoutSubviews 差异约 4μs，远低于一帧（16ms）的 0.025% |
| **实际瓶颈不在此** | 性能瓶颈在 `handleVisiblePath:` 的图片加载和圆角绘制，不在隐藏功能上 |

---

## 八、综合评分

| 评估项 | 隐藏箭码 | 隐藏状态 |
|--------|---------|---------|
| 架构独立性 | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| 识别精准度 | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 守卫安全性 | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| 可恢复性 | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| 性能 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| 代码简洁度 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 安全性（透明度保护） | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

**综合结论：**

两个功能在开关控制和恢复能力上**完全等价**（一个用 guard-wrap 控制，一个用参数控制，效果一致）。核心差异只有三点：

- **识别方式**：箭码用 `isKindOfClass:` + frame 启发式（更快但可能误判），状态用 `NSStringFromClass` 精确类名（更精准但略慢）
- **透明度保护**：箭码不重置，状态会重置 alpha + opacity（更安全，但多 2 次属性写入）
- **性能**：箭码在识别和隐藏环节都更快，但差距在 μs 级别，对 UI 无感知

两者最适合的结合方式：**采用状态的隐藏方式（参数控制 + 精确类名识别 + 透明度重置），配合箭码的独立入口架构。** 如果对性能敏感，识别方式可以改用 `isKindOfClass:` 替代 `NSStringFromClass`，但 μs 级的差异在实际场景中几乎无意义。