# 资料卡背景-隐藏状态功能 — Bug 修复：开关不持久化（第二版）

> **Bug**: 开关开启后，退出重新进又变成关
> **根因**: 设置页面缺少 `cardBgHideStateEnabled` 的 switch row。按的 `myPageHideStatus` 开关不存在对应属性，KVC 抛异常，值存不进去

---

## 问题全貌

| 环节 | 状态 | 说明 |
|------|------|------|
| `PluginConfig.h` 属性声明 | ✅ | `@property BOOL cardBgHideStateEnabled` |
| `PluginConfig.m` loadDefaults | ✅ | `_cardBgHideStateEnabled = [d boolForKey:...]` |
| `PluginConfig.m` save | ✅ | `[d setBool:_cardBgHideStateEnabled forKey:...]` |
| `ProfileCardBgHook.m` 调用 | ✅ | `shouldHide:config.cardBgHideStateEnabled` |
| **设置页 UI switch row** | **❌ 缺失** | 没有 switch 读写 `cardBgHideStateEnabled` |

### 为什么按了开关但存不进去

设置页「我的页面美化」下有个「隐藏状态」开关（L218-222）：

```objc
mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏状态"
                               key:@"myPageHideStatus"    // ← PluginConfig 没这个属性
                              isOn:NO                     // ← 永远写死 NO
                                ...
```

当拨动时：
```
switchChanged:
  → [super switchChanged:]  →  [config setValue:@(YES) forKey:@"myPageHideStatus"]
  → PluginConfig 没有 myPageHideStatus → KVC 抛 NSUnknownKeyException
  → @catch 捕获 → return 退出 → 值没存进去
```

---

## 修复方案

### 修改文件

[SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m)

---

### 修改 1：添加 `cardBgHideStateEnabled` switch row

在 [L136](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L136) 的 `cardBgHidden` 之后（子手风琴2 的末尾）追加一个平铺开关：

```objc
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 隐藏状态按钮（平铺开关） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏状态按钮"
                                        key:@"cardBgHideStateEnabled"
                                       isOn:cfg.cardBgHideStateEnabled
                                         cy:*ecy width:w];
```

插入位置示意：
```objc
        // ─── 隐藏信息卡片（平铺开关，无子参数） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏信息卡片"
                                        key:@"cardBgHidden"
                                       isOn:cfg.cardBgHidden
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ★ 新增：隐藏状态按钮（平铺开关）
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏状态按钮"
                                        key:@"cardBgHideStateEnabled"
                                       isOn:cfg.cardBgHideStateEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 子手风琴3：开启资料圆角 ───
        *ecy = [self addMasterSwitchRowInGroup:expand
```

---

### 修改 2：在 switchChanged: 中添加 rebuild 触发

在 [L507-515](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L507-L515) 的 rebuild 列表追加 `cardBgHideStateEnabled`：

```objc
    if ([key isEqualToString:@"cardBgBeautifyEnabled"]
        || [key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgCornerUseGlobal"]
        || [key isEqualToString:@"cardBgHidden"]
        || [key isEqualToString:@"myPageHideArrow"]
        || [key isEqualToString:@"cardBgHideStateEnabled"]) {   // ★ 新增
        [self buildUI];
        return;
    }
```

---

### 修改对照表

| 位置 | 当前状态 | 改为 |
|------|---------|------|
| `buildUI` L136 后 | 没有 `cardBgHideStateEnabled` 的 switch | **追加**一行 subSwitchRow，key=`cardBgHideStateEnabled`，isOn=`cfg.cardBgHideStateEnabled` |
| `switchChanged:` L512 | rebuild 列表不含 `cardBgHideStateEnabled` | **追加** `|| [key isEqualToString:@"cardBgHideStateEnabled"]` |

---

## 修复后数据流

```
用户进入设置页
  └── buildUI → 读取 config.cardBgHideStateEnabled → switch 显示正确状态

用户拨动开关
  └── switchChanged:
      ├── [super switchChanged:] → KVC: setCardBgHideStateEnabled: → ivar = YES
      ├── [config save] → 写入 NSUserDefaults (带 kPluginPrefix)
      └── [self buildUI] → 重建 UI（若有展开/折叠）

用户退出再进入
  └── viewDidLoad → buildUI
      └── config.cardBgHideStateEnabled → 从 ivar 读取 → ivar 从 loadDefaults 加载
          └── switch 保持 YES
```

---

## 验证方法

1. 打开「卡片背景」设置页 → 展开「资料卡片美化」
2. 应该看到「隐藏状态按钮」的开关
3. 开启 → 退出设置页 → 重新进入 → 应保持开启
4. 关闭 → 资料卡状态按钮应恢复显示
5. 杀掉 App 重开 → 开关状态仍保持