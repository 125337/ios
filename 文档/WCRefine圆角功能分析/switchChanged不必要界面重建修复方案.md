# switchChanged 不必要界面重建修复方案

## 问题确认

当前 `switchChanged:` 方法中，所有 6 个开关都会触发 `[self buildUI]`：

```objc
if ([key isEqualToString:@"cardBgMaterialEnabled"]
    || [key isEqualToString:@"cardBgCornerEnabled"]
    || [key isEqualToString:@"cardBgCornerUseGlobal"]
    || [key isEqualToString:@"cardBgHidden"]
    || [key isEqualToString:@"myPageHideArrow"]
    || [key isEqualToString:@"cardBgHideStateEnabled"]) {
    [self buildUI];
    return;
}
```

### 分析每个开关是否需要 rebuild UI

| 开关 | 类型 | 有子项？ | 需要 buildUI？ | 原因 |
|------|------|:-------:|:-------------:|------|
| `cardBgMaterialEnabled` | 主开关 + 手风琴 | ✅ 有 | ✅ **需要** | 展开/折叠子项 |
| `cardBgCornerEnabled` | 主开关 + 手风琴 | ✅ 有 | ✅ **需要** | 展开/折叠子项 |
| `cardBgCornerUseGlobal` | 子开关 | ✅ 影响 | ✅ **需要** | 切换时显示/隐藏其他子项 |
| `cardBgHidden` | 普通开关 | ❌ 无 | ❌ **不需要** | 无子项，纯开关 |
| `myPageHideArrow` | 普通开关 | ❌ 无 | ❌ **不需要** | 无子项，纯开关 |
| `cardBgHideStateEnabled` | 普通开关 | ❌ 无 | ❌ **不需要** | 无子项，纯开关 |

### 问题影响

- **界面闪烁**：`buildUI` 会移除所有子视图再重新创建，用户会看到短暂的空白或闪烁
- **性能损耗**：不必要的视图重建、布局计算、约束更新
- **用户体验差**：普通开关点击后应该即时响应，而不是有明显的重绘延迟

---

## 修复方案

**文件**：[SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m)

**位置**：L500-L509

### 改动

删除 3 个普通开关的判断，只保留有子项的主开关：

```objc
// 改前：
    if ([key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgCornerUseGlobal"]
        || [key isEqualToString:@"cardBgHidden"]
        || [key isEqualToString:@"myPageHideArrow"]
        || [key isEqualToString:@"cardBgHideStateEnabled"]) {
        [self buildUI];
        return;
    }

// 改后：
    if ([key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgCornerUseGlobal"]) {
        [self buildUI];
        return;
    }
```

### 改动说明

- 删除 `cardBgHidden`、`myPageHideArrow`、`cardBgHideStateEnabled` 三行
- 这三个普通开关的值变化由 `[super switchChanged:sender]` 处理（写入 PluginConfig），不需要额外操作
- 主开关的展开/折叠仍由 `buildUI` 正确处理

---

## 验证

| 操作 | 改前 | 改后 |
|------|------|------|
| 点击「使用背景素材」 | rebuild UI（展开/折叠）✅ | rebuild UI（展开/折叠）✅ |
| 点击「开启资料圆角」 | rebuild UI（展开/折叠）✅ | rebuild UI（展开/折叠）✅ |
| 点击「使用全局配置」 | rebuild UI（显示/隐藏子项）✅ | rebuild UI（显示/隐藏子项）✅ |
| 点击「隐藏信息卡片」 | rebuild UI（闪烁）❌ | 无 rebuild（即时响应）✅ |
| 点击「隐藏箭码」 | rebuild UI（闪烁）❌ | 无 rebuild（即时响应）✅ |
| 点击「隐藏状态」 | rebuild UI（闪烁）❌ | 无 rebuild（即时响应）✅ |

---

## 涉及文件

| 文件 | 改动 |
|------|------|
| `SettingCardBackgroundController.m` | 删除 L504-L506 三行 |

共 **1 个文件**，**删除 3 行**。