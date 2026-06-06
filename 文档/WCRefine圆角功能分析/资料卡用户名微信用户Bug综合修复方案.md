# 资料卡用户名"微信用户" Bug 综合修复方案

> **重写核心逻辑**：彻底解决 `m_bgImageView` 被清理导致的昵称降级问题。

---

## 一、根因确认

### 根因：`handleCardHiddenInButton` 无条件清理 `m_bgImageView`

```objc
// ProfileCardBgHook.m L723-739
// handleCardHiddenInButton, isHidden=NO 分支

if (!isHidden) {
    button.hidden = NO;

    // ★★★ 此处无条件执行，不受 hasMaterial 保护 ★★★
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar(button, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];               // 清图片
            [(UIImageView *)bgImgView setBackgroundColor:...];      // 清背景
            [(UIImageView *)bgImgView setHidden:YES];              // 隐藏
        }
        // (object_setIvar 虽已注释，但清内容就足以触发 bug)
    }
    return NO;
}
```

### 微信的触发链

```
m_bgImageView 内容被清空 + hidden
  ↓
微信检测 m_bgImageView 状态：有内容？NO → "资料未就绪"
  ↓
昵称解析跳过（一次性操作，错过不再触发）
  ↓
label.text 停留在 "微信用户"（再也回不来了）
```

### 为何已注释 `object_setIvar` 仍不行

| 操作 | 是否清除 | 是否触发 bug |
|------|---------|-------------|
| `object_setIvar(button, bgIvar, nil)` | ivar 本身变 nil | ✅ 触发 |
| `setImage:nil` | 图片内容清空 | ✅ 触发 |
| `setHidden:YES` | View 不可见 | ✅ 触发 |
| `setBackgroundColor:clearColor` | 背景色变透明 | 不确定 |

**只要 `m_bgImageView` 的内容或可见性被修改，微信就会检测到异常。**

---

## 二、修复原则

1. **永远不修改 `m_bgImageView` 的任何属性**（image、backgroundColor、hidden、alpha）
2. **永远不将 `m_bgImageView` ivar 置 nil**
3. **当 `hasMaterial=NO` 且 `isHidden=NO` 时，完全不干预任何原生视图**
4. 当 `hasMaterial=YES` 需要隐藏原生背景时：用自定义背景 view 覆盖，不碰原生

---

## 三、修复 1：`handleCardHiddenInButton` 加 `hasMaterial` 保护

### 修改目标

`handleCardHiddenInButton` 的 `isHidden=NO` 分支：**只有 `hasMaterial=YES` 才清理**

```objc
+ (BOOL)handleCardHiddenInButton:(UIView *)button
                       isHidden:(BOOL)isHidden
                    hasMaterial:(BOOL)hasMaterial {
    
    // ══════════════════════════════════════════
    // 非隐藏态
    // ══════════════════════════════════════════
    if (!isHidden) {
        button.hidden = NO;

        // ★ 只有确实有自定义素材时，才清理原生 bg ★
        if (hasMaterial) {
            Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
            if (bgIvar) {
                id bgImgView = object_getIvar(button, bgIvar);
                if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                    [(UIImageView *)bgImgView setImage:nil];
                    [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                    [(UIImageView *)bgImgView setHidden:YES];
                }
                // NEVER object_setIvar — 保留 ivar 指向
            }
        }

        return NO;  // 让调用者继续处理背景和布局
    }

    // ── 以下 isHidden=YES 部分不变 ──
    // ...
}
```

**效果**：用户配置 `hasMaterial=NO, isHidden=NO` 时（当前 bug 场景），此方法直接 `button.hidden=NO; return NO;`，**完全不碰 `m_bgImageView`**。

---

## 四、修复 2：`handleButtonLayout:` 主流程加守卫

### 修改目标

当 `hasMaterial=NO` 且 `isHidden=NO` 时，跳过整个 `needsNewCardBg` 块中不必要的操作。

```objc
if (needsNewCardBg) {

    // ── 有素材才执行背景生命周期 ──
    if (hasMaterial) {
        // ... bg 创建/更新 ...
    }

    // ── 隐藏信息卡片 ──
    if ([ProfileCardBgHook handleCardHiddenInButton:button
                                            isHidden:isHidden
                                         hasMaterial:hasMaterial]) {
        return;  // Scene B
    }

    // ── FIX-WHITE：仅在隐藏态执行 ──
    if (isHidden) {
        // ...
    }

} // end needsNewCardBg
```

`handleCardHiddenInButton` 现在内部已加上 `hasMaterial` 保护（修复 1），所以外部不需要额外调整。

---

## 五、修复 3：启用/关闭资料圆角时恢复原生背景

### 修改目标

在 `applyProfileCardCorner` 中，`cardBgCornerEnabled` 从 YES 切换到 NO 时，**恢复 `m_bgImageView` 的可见性**。

```objc
+ (void)applyProfileCardCorner:(UIView *)cell isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    if (!config.cardBgCornerEnabled) {
        cell.layer.cornerRadius = 0;
        cell.layer.masksToBounds = NO;
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;

        // ★ 恢复原生 m_bgImageView（可能有被清理过的残留）★
        // 不是为了显示它，而是让微信内部状态检测通过
        Ivar bgIvar = class_getInstanceVariable([cell class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar(cell, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                // 如果之前被 setHidden:YES，这里恢复
                // 但不清除 image（保持微信原有的图片）
                [(UIImageView *)bgImgView setHidden:NO];
            }
        }

        // ★ 恢复 cell.backgroundColor（之前可能被覆盖）★
        // 如果希望完全恢复原生，可以注释掉 backgroundColor 的设置
        // 但为了视觉一致性，保持 bgColor 也无妨

        return;
    }

    // ── cardBgCornerEnabled=YES 部分不变 ──
    // ...
}
```

---

## 六、修复 4：Scene A/B 不隐藏关键子视图

### 修改目标

Scene B（`isHidden=YES, !hasMaterial`）中，`sub.hidden = YES` 循环跳过关键视图：

```objc
// Scene B
if (!hasMaterial) {
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) continue;  // 保留头像
        if ([sub isKindOfClass:[UILabel class]]) continue;                          // 保留标签
        if ([NSStringFromClass([sub class]) isEqualToString:@"MMCPLabel"]) continue;
        if ([NSStringFromClass([sub class]) isEqualToString:@"MMUILabel"]) continue;
        sub.hidden = YES;
    }
}
```

Scene A（`isHidden=YES, hasMaterial`）已有类似的豁免逻辑，但同样需要检查：

```objc
// Scene A
for (UIView *sub in button.subviews) {
    if ([sub isKindOfClass:[UIImageView class]] && sub.tag == kProfileCardBgImageTag) continue;
    if ([sub isKindOfClass:NSClassFromString(@"MMHeadImageView")]) continue;  // 保留头像
    if ([sub isKindOfClass:[UILabel class]]) continue;                          // 保留标签
    if ([NSStringFromClass([sub class]) isEqualToString:@"MMCPLabel"]) continue;
    if ([NSStringFromClass([sub class]) isEqualToString:@"MMUILabel"]) continue;
    sub.hidden = YES;
}
```

---

## 七、修复 5：`isHidden=NO` 时恢复所有子视图可见性

### 修改目标

当用户从隐藏态切换到非隐藏态时，确保之前被隐藏的子视图重新可见：

```objc
if (!isHidden) {
    button.hidden = NO;

    // ★ 恢复所有子视图可见（Scene A/B 可能之前隐藏了它们）★
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] && sub.tag == kProfileCardBgImageTag) continue;
        sub.hidden = NO;
    }

    // ★ 有素材时才清理 m_bgImageView ★
    if (hasMaterial) {
        // ... 清理 m_bgImageView 内容 ...
    }

    return NO;
}
```

---

## 八、修复 6（可选）：`sizeToFit` 增加保护

当前 `sizeToFit` 在标签文本为空时不会执行，但建议增加日志便于排查：

```objc
for (UIView *sub in button.subviews) {
    if ([sub isKindOfClass:[UILabel class]]) {
        UILabel *label = (UILabel *)sub;
        NSString *text = label.text;
        if (text && text.length > 0) {
            [label sizeToFit];
        } else {
            WPLog(@"CardBg-Diag", @"[LABEL-SKIP] label=%@ text is nil/empty, skipping sizeToFit",
                  NSStringFromClass([label class]));
        }
    }
}
```

---

## 九、所有修改点汇总

| 编号 | 位置 | 修改内容 | 行号 |
|------|------|---------|------|
| 修复 1 | `handleCardHiddenInButton` isHidden=NO 分支 | `m_bgImageView` 清理加 `if (hasMaterial)` 保护 | ~L723-739 |
| 修复 2 | `handleButtonLayout:` 主流程 | 无需修改（已由修复 1 覆盖） | — |
| 修复 3 | `applyProfileCardCorner` 的 disabled 分支 | 恢复 `m_bgImageView` 可见性 | ~L49-100 |
| 修复 4 | Scene B / Scene A | 隐藏循环中跳过 MMHeadImageView、UILabel 等 | ~L768-790 |
| 修复 5 | `handleCardHiddenInButton` isHidden=NO 分支 | 恢复所有子视图可见性 | ~L723-739 |
| 修复 6 | `sizeToFit` 标签循环 | 增加空文本日志（可选） | ~L700-710 |

---

## 十、修改前 vs 修改后

### 场景：用户配置 `beautifyEnabled=YES, materialEnabled=NO, cornerEnabled=YES, hidden=NO`

| 操作 | 修改前 | 修改后 |
|------|--------|--------|
| `m_bgImageView` setImage:nil | ✅ 执行 | ❌ 跳过（`hasMaterial=NO`） |
| `m_bgImageView` setHidden:YES | ✅ 执行 | ❌ 跳过 |
| `button.backgroundColor = bgColor` | ✅ 执行（corner） | ✅ 执行（正常） |
| `masksToBounds = YES` | ✅ 执行 | ✅ 执行（正常） |
| 昵称显示"微信用户" | ✅ 触发 | ❌ 不再触发 |

### 场景：用户配置 `beautifyEnabled=YES, materialEnabled=YES, cornerEnabled=YES, hidden=NO`

| 操作 | 修改前 | 修改后 |
|------|--------|--------|
| `m_bgImageView` setImage:nil | ✅ 执行 | ✅ 执行（有素材时需要） |
| 昵称显示"微信用户" | ✅ 触发 | ✅ 不触发（有自定义素材覆盖） |

---

## 十一、修复后验证列表

| 验证项目 | 预期结果 |
|---------|---------|
| `beautifyEnabled=YES, materialEnabled=NO, cornerEnabled=NO` | 昵称正常，无圆角，无边距 |
| `beautifyEnabled=YES, materialEnabled=NO, cornerEnabled=YES` | **昵称正常**，有圆角，有边距 |
| `beautifyEnabled=YES, materialEnabled=YES, cornerEnabled=YES` | 昵称正常，显示自定义素材，有圆角 |
| `beautifyEnabled=YES, hidden=YES → 再切回 hidden=NO` | 子视图正常恢复，昵称正常 |
| 关闭所有开关 → 再开启 | 昵称始终正常 |
| 杀掉微信重开 | 昵称始终正常 |