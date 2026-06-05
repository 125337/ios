# 隐藏信息卡片 — 迁移方案

> 旧 UI 删 `cardBgHidden` 行，Hook 只认新开关 `cardBgBeautifyEnabled`，不做兼容。

---

## 一、要改的文件

| 文件 | 操作 |
|------|------|
| `SettingCardBackgroundController.m` | 旧 UI subBuilder 删 `cardBgHidden` 子开关 + 分割线 |
| `ProfileCardBgHook.m` | 2 行：`cardBgEnabled` → `cardBgBeautifyEnabled` |

---

## 二、SettingCardBackgroundController.m — 删 2 行

在旧 UI 的 subBuilder 中，找到并删除：

```objc
*ecy = [self addSubSwitchRowInGroup:expand title:@"隐藏信息卡片" key:@"cardBgHidden" isOn:cfg.cardBgHidden cy:*ecy width:w];
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
```

旧 UI 其余代码不碰。

---

## 三、ProfileCardBgHook.m — 2 行纯替换

### 守卫（~364 行）

```diff
- if (!config.cardBgEnabled && !config.globalCornerRadiusEnabled) return;
+ if (!config.cardBgBeautifyEnabled && !config.globalCornerRadiusEnabled) return;
```

### needs 变量（~396 行）

```diff
- BOOL needsFullCardBg = config.cardBgEnabled;
+ BOOL needsNewCardBg = config.cardBgBeautifyEnabled;
```

全文 `needsFullCardBg` → `needsNewCardBg` 改名。

---

## 四、改完后效果

| 操作 | 结果 |
|------|------|
| 新 UI 总开关 ON + 隐藏 ON | 卡片隐藏 ✅ |
| 新 UI 总开关 ON + 隐藏 OFF | 卡片正常 ✅ |
| 新 UI 总开关 OFF | 卡片不隐藏 ✅ |
| 旧 UI 主开关 ON | **所有功能不再生效**（无兼容）❌ |

---

## 五、改动清单

| 文件 | 位置 | 操作 |
|------|------|------|
| `SettingCardBackgroundController.m` | 旧 UI subBuilder | 删 `cardBgHidden` + 分割线共 2 行 |
| `ProfileCardBgHook.m` | ~364 守卫 | `cardBgEnabled` → `cardBgBeautifyEnabled` |
| `ProfileCardBgHook.m` | ~396 needs | `cardBgEnabled` → `cardBgBeautifyEnabled` |
| `ProfileCardBgHook.m` | 全文 | `needsFullCardBg` → `needsNewCardBg` |