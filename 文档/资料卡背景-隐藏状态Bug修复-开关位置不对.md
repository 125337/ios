# 资料卡背景-隐藏状态功能 — Bug 修复：开关位置不对

> **Bug**: 开关开启后，退出重新进又变成关
> **根因**: 开关加在了错误的位置（资料卡片美化），而「我的页面美化」下已有的开关 key 和 isOn 都不对

---

## 问题全貌

「隐藏状态按钮」的 switch **应该放在「我的页面美化」区域**，和箭码在一起。但之前我让你加在了「资料卡片美化」区域（L139-144），而「我的页面美化」下原本就有一个「隐藏状态」开关但 key 写错、isOn 写死。

### 当前「我的页面美化」区域的开关

```objc
// L218-222 — 已有的开关，key 错了，isOn 写死了
mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏状态"
                               key:@"myPageHideStatus"   ← PluginConfig 没这个属性
                              isOn:NO                    ← 不从 config 读
                                ...];

// L225-229 — 箭码，正确实现，作参考
mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏箭码"
                               key:@"myPageHideArrow"
                              isOn:config.myPageHideArrow  ← 从 config 读
                                ...];
```

### 当前「资料卡片美化」区域多出来的开关

```objc
// L139-144 — 位置不对，应该删掉
*ecy = [self addSubSwitchRowInGroup:expand
                              title:@"隐藏状态按钮"
                                key:@"cardBgHideStateEnabled"
                               isOn:cfg.cardBgHideStateEnabled
                                 ...];
```

---

## 修复方案

### 修改 1：删除资料卡片美化区域多出来的 switch

删除 [SettingCardBackgroundController.m L139-L145](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L139-L145)：

```objc
// ✗ 删除整个 block
        // ─── 隐藏状态按钮（平铺开关） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏状态按钮"
                                        key:@"cardBgHideStateEnabled"
                                       isOn:cfg.cardBgHideStateEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
```

### 修改 2：修复我的页面美化区域的开关

修改 [SettingCardBackgroundController.m L218-L222](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L218-L222)：

```objc
// 改前
mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏状态"
                               key:@"myPageHideStatus"
                              isOn:NO
                                cy:mcy width:w];

// 改后
mcy = [self addSubSwitchRowInGroup:myGroup
                             title:@"隐藏状态"
                               key:@"cardBgHideStateEnabled"
                              isOn:config.cardBgHideStateEnabled
                                cy:mcy width:w];
```

### 不改的

- `switchChanged:` 里 L521 的 `cardBgHideStateEnabled` rebuild 触发已存在，不动
- PluginConfig.h/m 的 save/load 已正确，不动

---

## 修改对照表

| 位置 | 当前 | 改为 |
|------|------|------|
| L139-145 资料卡片美化区域 | 多了一个「隐藏状态按钮」switch | **删除** |
| L218-222 我的页面美化区域 | `key:@"myPageHideStatus"` `isOn:NO` | **key→`cardBgHideStateEnabled`**、**isOn→`config.cardBgHideStateEnabled`** |

---

## 修复后位置

```
我的页面美化
  ├── 隐藏状态       ← cardBgHideStateEnabled（和箭码在一起）
  ├── 隐藏箭码       ← myPageHideArrow
```

```
资料卡片美化
  ├── 资料卡片美化（master）
  │   ├── 使用背景素材（master）
  │   │   └── ...
  │   ├── 隐藏信息卡片   ← cardBgHidden
  │   └── 开启资料圆角（master）
  │       └── ...
```