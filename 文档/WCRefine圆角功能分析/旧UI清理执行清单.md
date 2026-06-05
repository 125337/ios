# 旧 UI「卡片背景设置」清理执行清单

## 清理前验证结论

经代码逐行比对，新旧 UI **功能完全等价**，删除旧 UI **不会导致任何功能丢失**：

| 功能参数 | 旧 UI config key | 新 UI config key | 结论 |
|---------|-----------------|-----------------|------|
| 信息卡片高度 | `cardBgHeight` | `cardBgHeight` | ✅ 同一属性 |
| 列表向下间距 | `cardBgListSpacing` | `cardBgListSpacing` | ✅ 同一属性 |
| 背景图路径 | `cardBgImagePath` | `cardBgImagePath` | ✅ 同一属性 |
| 背景填充模式 | `cardBgFillMode` | `cardBgFillMode` | ✅ 同一属性 |
| 对齐方式 | `cardBgAlignment` | `cardBgAlignment` | ✅ 同一属性 |
| 背景显示层级 | `cardBgLayer` | `cardBgLayer` | ✅ 同一属性 |
| 背景Y轴偏移 | `cardBgOffsetY` | `cardBgOffsetY` | ✅ 同一属性 |
| 背景X轴偏移 | `cardBgOffsetX` | `cardBgOffsetX` | ✅ 同一属性 |
| 隐藏信息卡片 | `cardBgHidden` | `cardBgHidden` | ✅ 同一属性 |
| action 方法 | `onImageTap` 等 | 同一方法 | ✅ 共用 |
| **总开关** | **`cardBgEnabled`** | **`cardBgBeautifyEnabled`** | ⚠️ 不同 key |

唯一区别：旧 UI 总开关 `cardBgEnabled` → 新 UI 总开关 `cardBgBeautifyEnabled`。  
清理时需将外部依赖（ProfileCardBgHook）切换到新开关。

---

## 执行步骤（共 5 步）

### 步骤 1：SettingCardBackgroundController.m — 删除旧 UI 代码

**删除文件**：`/www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m`  
**删除范围**：第 221-299 行

```
221:    // ════════════════════════════════════
222:    // ★ 旧 UI：卡片背景设置（暂留）
223:    // ════════════════════════════════════
224:    y = [self addSectionHeader:@"卡片背景设置" y:y width:w];
225:
226:    UIView *group = [self addTableGroupAtY:y width:w];
227:    CGFloat cy = 0;
228:
229:    cy = [self addMasterSwitchRowInGroup:group
230:                                   title:@"信息卡片背景"
231:                                     key:@"cardBgEnabled"
232:                                    isOn:config.cardBgEnabled
233:                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        ... (子项：高度、间距、背景图、填充、对齐、层级、偏移)
297:    } cy:cy width:w];
298:
299:    y = [self finishGroup:group atY:y height:cy];
```

**保留**：第 301-303 行（`contentView.frame` / `scrollView.contentSize` / `}`）

**删除后代码衔接**：第 218-219 行（新 UI finishGroup + 间距）后直接接第 301 行（contentView.frame）。

#### 删除后的页面结构
```
卡片背景设置页面
└─ 资料卡片美化（总开关: cardBgBeautifyEnabled）
    ├─ 使用背景素材（子手风琴: cardBgMaterialEnabled）
    │   ├─ 信息卡片高度
    │   ├─ 列表向下间距
    │   ├─ 背景图
    │   ├─ 背景填充模式
    │   ├─ 对齐方式
    │   ├─ 背景Y轴偏移
    │   └─ 背景X轴偏移
    ├─ 背景显示层级（导航行）
    ├─ 隐藏信息卡片（平铺开关）
    └─ 开启资料圆角（子手风琴）
        └─ ...
```

---

### 步骤 2：PluginConfig.h — 删除旧属性

**删除文件**：`/www/wwwroot/ios/MioPlugin/Config/PluginConfig.h`  
**删除**：第 188 行

```objc
// ❌ 删除：
// 卡片背景（旧 UI）
@property (nonatomic, assign) BOOL cardBgEnabled;
```

---

### 步骤 3：PluginConfig.m — 删除 loadDefaults 读取

**删除文件**：`/www/wwwroot/ios/MioPlugin/Config/PluginConfig.m`  
**删除**：第 482-483 行

```objc
// ❌ 删除：
// 卡片背景（旧 UI）
_cardBgEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];
```

---

### 步骤 4：PluginConfig.m — 删除 save 写入

**删除文件**：`/www/wwwroot/ios/MioPlugin/Config/PluginConfig.m`  
**删除**：第 719-720 行

```objc
// ❌ 删除：
// 卡片背景（旧 UI）
[d setBool:_cardBgEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];
```

---

### 步骤 5：ProfileCardBgHook.m — 切换守卫条件

**修改文件**：`/www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m`  
**修改位置**：第 16 行

```objc
// 改前：
if (!config.cardBgEnabled) return result;

// 改后：
if (!config.cardBgBeautifyEnabled) return result;
```

**理由**：`_hooked_heightForHeader` 控制资料卡片 section header 高度间距，应与新 UI 总开关 `cardBgBeautifyEnabled` 联动。该开关已在同文件的 `handleButtonLayout:`（第 379 行）中作为主守卫使用，保持一致。

---

## 验证清单

| # | 验证项 | 验证方式 |
|---|-------|---------|
| 1 | 编译无报错 | `make package` |
| 2 | 资料卡片页面显示正常 | 进入设置 → 卡片背景设置，确认只有"资料卡片美化"一个 section |
| 3 | 所有参数可正常读写 | 修改每个参数 → 退出 → 重新进入，确认值保持 |
| 4 | 总开关正常控制背景显示 | 关闭/开启"资料卡片美化" → 回到资料卡片页，确认背景消失/出现 |
| 5 | 背景显示层级正常 | 切换"底层显示"/"顶层显示" → 确认效果 |
| 6 | 偏移值正常 | 设置 ± 偏移值 → 确认背景位置变化 |

---

## 不做旧数据兼容

`Mio_CardBgEnabled` 会残留在 NSUserDefaults 中但不再被读取，无需迁移：

```objc
// ❌ 不要写迁移代码
if ([d objectForKey:@"Mio_CardBgEnabled"] && ![d objectForKey:@"Mio_CardBgBeautifyEnabled"]) {
    _cardBgBeautifyEnabled = [d boolForKey:@"Mio_CardBgEnabled"];
}
```

下次用户执行 `resetAllConfig` 或重装 App 时自然清除。

---

## 清理前后代码行数对比

| 文件 | 清理前 | 清理后 | 减少 |
|------|-------|-------|------|
| SettingCardBackgroundController.m | ~570 行 | ~490 行 | ~80 行 |
| PluginConfig.h | ~200 行 | ~199 行 | 1 行 |
| PluginConfig.m | ~740 行 | ~738 行 | ~2 行 |
| ProfileCardBgHook.m | ~420 行 | ~420 行 | 1 行修改 |
| **合计** | | | **~83 行** |