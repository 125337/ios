# 隐藏箭码 vs 隐藏状态 — 功能实现对比

> 两者均为 WCRefine/资料卡片美化系统的独立隐藏功能，基于同一套 Hook 体系
>
> **更新说明：** 箭码已于 2026-06 改造为「状态隐藏风格」，以下对比基于改造后的代码

---

## 一、架构入口对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **Hook 入口** | `replaced_MMUIButton_layoutSubviews` → `handleButtonLayout:` | 同上 | 平手 |
| **调用层级** | 在 `handleButtonLayout` 内部，守卫之前 | 在 `handleButtonLayout` 内部，守卫之前 | **完全一致** |
| **调用方式** | `[ProfileCardBgHook hideArrowQRInCell:button shouldHide:config.myPageHideArrow]` | `[ProfileCardBgHook hideStateElementsInCell:button shouldHide:config.cardBgHideStateEnabled]` | **完全一致** |
| **专用守卫** | ❌ 无（已删除 `handleArrowQRHiding:`） | ❌ 无 | **完全一致** |
| **总开关依赖** | ❌ 不依赖任何总开关 | ❌ 不依赖任何总开关 | **完全一致** |

### 入口调用链（改造后已完全统一）

```
MMUIButton.layoutSubviews (Hook)
  → replaced_MMUIButton_layoutSubviews     ← ListCornerRadiusHook.m L118
      → ProfileCardBgHook handleButtonLayout:      ← L125 唯一分发入口
          ├─ ★ hideStateElementsInCell:shouldHide:   ← L660 守卫之前
          │    → isStateEntryButton: / isStateTopicButton: 匹配
          │    → sub.hidden = shouldHide + alpha/opacity 重置
          ├─ ★ hideArrowQRInCell:shouldHide:         ← L663 守卫之前
          │    → isArrowQRView: 匹配
          │    → sub.hidden = shouldHide + alpha/opacity 重置
          └─ 以下为 handleButtonLayout 的守卫 + 后续功能
```

> **改造要点：**
> - **删除** `handleArrowQRHiding:` 独立方法（ListCornerRadiusHook.m 中的调用一并删除）
> - **新增** `hideArrowQRInCell:shouldHide:` 在 `handleButtonLayout:` 守卫之前集中调用
> - 箭码和状态现在共享完全相同的调用层级和风格

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
| **方法签名** | `hideArrowQRInCell:shouldHide:` | `hideStateElementsInCell:shouldHide:` | **完全一致** |
| **开关控制机制** | 内部参数传递：`shouldHide:config.myPageHideArrow` | 内部参数传递：`shouldHide:config.cardBgHideStateEnabled` | **完全一致** |
| **隐藏操作** | `sub.hidden = shouldHide`（参数传入） | `sub.hidden = shouldHide`（参数传入） | **完全一致** |
| **恢复机制** | 传 NO → 主动 `setHidden:NO` → 恢复显示 | 传 NO → 主动 `setHidden:NO` → 恢复显示 | **完全一致** |
| **透明度重置** | ✅ `sub.alpha = 1.0; sub.layer.opacity = 1.0;` | ✅ `sub.alpha = 1.0; sub.layer.opacity = 1.0;` | **完全一致** |
| **状态缓存** | ❌ 无缓存 | ❌ 无缓存 | **完全一致** |
| **性能** | 每个匹配视图设 3 个属性（hidden + alpha + opacity） | 每个匹配视图设 3 个属性（hidden + alpha + opacity） | **完全一致** |

### 隐藏方法对比（改造后已完全统一）

```objc
// 箭码 — 已改为参数控制 + 透明度重置（和状态完全一样）
+ (void)hideArrowQRInCell:(UIView *)cell shouldHide:(BOOL)shouldHide {
    if (!cell) return;
    for (UIView *sub in cell.subviews) {
        if ([self isArrowQRView:sub]) {
            sub.hidden = shouldHide;    // 参数控制：YES=藏 / NO=恢复
            sub.alpha = 1.0;            // 重置透明度
            sub.layer.opacity = 1.0;
        }
    }
}

// 状态 — 参数控制 + 透明度重置
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

### 调用方对比（改造后已完全统一）

```objc
// handleButtonLayout 中 — 两者调用风格完全一致
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ☆ 独立功能：状态隐藏（不受总开关保护）
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];

    // ☆ 独立功能：箭码隐藏（不受总开关保护）
    [ProfileCardBgHook hideArrowQRInCell:button
                              shouldHide:config.myPageHideArrow];

    // ★ 第1层：总开关守卫
    if (!config.cardBgBeautifyEnabled) return;
    ...
}
```

---

## 四、调用入口守卫对比（改造后）

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **守卫位置** | ❌ 无专用守卫（由 handleButtonLayout 统一守卫） | ❌ 无专用守卫（由 handleButtonLayout 统一守卫） | **完全一致** |
| **MoreVC 检查** | ❌ 无 | ❌ 无 | **完全一致** |
| **headImageView 检查** | ❌ 无 | ❌ 无 | **完全一致** |
| **高度检查** | ❌ 无 | ❌ 无 | **完全一致** |
| **空值保护** | ✅ `if (!cell) return;` | ✅ `if (!cell) return;` | **完全一致** |

> **改造说明：** `handleArrowQRHiding:` 已整体删除，箭码不再有任何独立守卫。两个隐藏功能均在 `handleButtonLayout` 守卫之前裸执行，仅依靠方法内部的 `if (!cell) return;` 做空值保护。

---

## 五、功能完整性对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **隐藏模式有效** | ✅ | ✅ | **完全一致** |
| **可见模式有效** | ✅ | ✅ | **完全一致** |
| **不受总开关控制** | ✅（守卫之前调用） | ✅（守卫之前调用） | **完全一致** |
| **开关可还原** | ✅ 传 NO → 主动恢复 | ✅ 传 NO → 主动恢复 | **完全一致** |
| **目标个数** | 多个（所有符合条件 subviews） | 固定 2 个（entry + topic 按钮） | 平手 |
| **透明度保护** | ✅ alpha + layer.opacity 全部重置 | ✅ alpha + layer.opacity 全部重置 | **完全一致** |
| **配置属性** | `myPageHideArrow` | `cardBgHideStateEnabled` | 平手 |
| **设置在哪个区域** | 我的页面美化 | 我的页面美化 | **完全一致** |

---

## 七、性能对比

| 维度 | 隐藏箭码 | 隐藏状态 | 谁更好 |
|------|---------|---------|--------|
| **识别手段** | `isKindOfClass:` — ISA 指针检查，O(1)，无分配 | `NSStringFromClass` — 堆分配 NSString + `isEqualToString:` O(n) 比较 | **箭码** |
| **每视图匹配开销** | ~0.01μs（指针检查 + 浮点比较） | ~0.05-0.1μs（堆分配 + 字符串比较） | **箭码** |
| **隐藏操作次数** | 3 次属性写入 / 匹配视图 | 3 次属性写入 / 匹配视图 | **完全一致** |
| **循环外开销** | ❌ 无额外开销（无守卫） | ❌ 无额外开销（无守卫） | **完全一致** |
| **总执行路径** | 嵌入 handleButtonLayout，无额外跳转 | 嵌入 handleButtonLayout，无额外跳转 | **完全一致** |
| **在非资料卡按钮上** | 进入循环但无匹配 → 微秒级空跑 | 进入循环但无匹配 → 微秒级空跑 | **完全一致** |

### 性能开销量化

```
场景：资料卡按钮 ×2（entry + topic），每次 layoutSubviews

箭码（改造后）:
  handleButtonLayout:
    ├── config & guards                       ~0.003μs
    └── hideArrowQRInCell:shouldHide: loop ×~10 subviews
        └── isArrowQRView: ×10               ~0.1μs  (isKindOfClass, frame)
            └── 匹配到 ~2 个 → 2×(hidden+alpha+opacity)  ~0.3μs
    ─────────────────────────────────────────
    合计: ~0.4μs / 次

状态:
  handleButtonLayout:
    ├── config & guards                       ~0.003μs
    └── hideStateElementsInCell:shouldHide: loop ×~10 subviews
        ├── isStateEntryButton: ×10          ~2μs  (NSStringFromClass + isEqual)
        └── isStateTopicButton: ×10           ~2μs  (同上)
            └── 匹配到 2 个 → 2×(hidden+alpha+opacity)  ~0.3μs
    ─────────────────────────────────────────
    合计: ~4.5μs / 次

注：上表为理论值，实际差异在 μs 级别，对 UI 性能影响可忽略不计。
```

### 性能总结

| 结论 | 说明 |
|------|------|
| **箭码略快（仅识别环节）** | 识别用 `isKindOfClass:` 而非 `NSStringFromClass`，但隐藏操作次数已完全相同 |
| **差距进一步缩小** | 改造后箭码的隐藏操作从 1 次属性写入变为 3 次，与状态一致；额外守卫已删除 |
| **改造带来的性能影响** | 每次 layoutSubviews 箭码新增约 2 次属性写入（alpha + opacity），~0.2μs，可忽略不计 |
| **实际瓶颈不在此** | 性能瓶颈在 `handleVisiblePath:` 的图片加载和圆角绘制，不在隐藏功能上 |

---

## 八、综合评分（更新后）

| 评估项 | 隐藏箭码 | 隐藏状态 |
|--------|---------|---------|
| 架构独立性 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 识别精准度 | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 守卫安全性 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 可恢复性 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 性能 | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| 代码简洁度 | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| 安全性（透明度保护） | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

> **评分变化说明：**
> - **架构独立性** 箭码从 ⭐⭐⭐⭐ → ⭐⭐⭐⭐⭐：改造后与状态完全一致，集中调用、无冗余守卫
> - **守卫安全性** 箭码从 ⭐⭐⭐⭐ → ⭐⭐⭐⭐⭐：删除冗余守卫，不再有"绕过守卫调独立方法"的风险
> - **可恢复性** 箭码从 ⭐⭐⭐⭐ → ⭐⭐⭐⭐⭐：从 guard 跳过恢复改为参数控制恢复，逻辑更明确
> - **性能** 箭码从 ⭐⭐⭐⭐⭐ → ⭐⭐⭐⭐：隐藏操作从 1 次属性写入变为 3 次，与状态一致
> - **安全性（透明度保护）** 箭码从 ⭐⭐⭐ → ⭐⭐⭐⭐⭐：新增 alpha + opacity 重置，与状态一致

**综合结论（改造后）：**

两个功能在架构、调用层级、隐藏方式、恢复机制、透明度保护上已经**完全统一**，核心差异只剩下一点：

- **识别方式**：箭码用 `isKindOfClass:` + frame 启发式（更快但可能误判），状态用 `NSStringFromClass` 精确类名（更精准但略慢）

除此之外，两者现在的实现风格完全一致：
- 都在 `handleButtonLayout:` 守卫之前集中调用
- 都用 `shouldHide:` 参数控制藏/恢复
- 都重置 `alpha` + `layer.opacity`
- 都没有独立守卫
- 都有 `if (!cell) return;` 空值保护

> **改造后两者唯一的实质差异是识别策略。** 如果要进一步统一，可以将箭码的识别也改为 `NSStringFromClass` 精确类名匹配，但 μs 级的性能差异在实际场景中几乎无意义。