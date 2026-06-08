# 资料卡背景-隐藏状态功能 — Bug 修复：开关状态不持久化

> **Bug**: 开关开启后，重新进入设置页面又变回关闭状态
> **原因**: `cardBgHideStateEnabled` 的 getter/setter 使用独立 NSUserDefaults 读写，未接入项目统一的 `loadDefaults`/`save` 体系

---

## 问题分析

### 项目标准模式（所有其他 BOOL 属性都这么走）

```
loadDefaults (init 时调用)
  └── _cardBgHidden = [d boolForKey: kPluginPrefix + @"CardBgHidden"]
                         ↑ ivar         ↑ 带前缀的 key

save (配置变更后调用)
  └── [d setBool: _cardBgHidden forKey: kPluginPrefix + @"CardBgHidden"]
              ↑ ivar                       ↑ 带前缀的 key

setter/getter → 自动合成，无自定义实现
```

### 当前有 Bug 的实现

```objc
// 自定义 getter — 读的是原始 key
- (BOOL)cardBgHideStateEnabled {
    return [[NSUserDefaults standardUserDefaults] boolForKey:@"cardBgHideStateEnabled"];
}
// 自定义 setter — 写的是原始 key，没调 save
- (void)setCardBgHideStateEnabled:(BOOL)enabled {
    [[NSUserDefaults standardUserDefaults] setBool:enabled forKey:@"cardBgHideStateEnabled"];
}
```

问题在于：
1. `save` 方法不包含 `cardBgHideStateEnabled`，不会把它写进 NSUserDefaults
2. `loadDefaults` 方法也不包含 `cardBgHideStateEnabled`，不会把它读出来
3. 自定义 setter 没调 `[self save]`，导致状态不同步
4. 自定义 getter/setter 阻止了 ivar `_cardBgHideStateEnabled` 的自动合成，而 `save`/`load` 都依赖 ivar

---

## 修复方案

### 修改文件

[PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) — **已有，无需改动**
[PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) — **需要修改 3 处**

---

### 修改 1：删除自定义 getter/setter

删除 [PluginConfig.m L859-L867](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L859-L867) 的代码：

```objc
// ✗ 删除整个 #pragma mark 和下面的两个方法
#pragma mark - 隐藏资料卡状态按钮（独立 NSUserDefaults，不经过 loadDefaults/save）

- (BOOL)cardBgHideStateEnabled {
    return [[NSUserDefaults standardUserDefaults] boolForKey:@"cardBgHideStateEnabled"];
}

- (void)setCardBgHideStateEnabled:(BOOL)enabled {
    [[NSUserDefaults standardUserDefaults] setBool:enabled forKey:@"cardBgHideStateEnabled"];
}
```

删除后，编译器会自动合成 ivar `_cardBgHideStateEnabled` 和标准的 getter/setter。

---

### 修改 2：在 loadDefaults 中添加读取

在 [PluginConfig.m L491](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L491) 的 `_cardBgOffsetX = ...` 之后追加：

```objc
// ★ 新增：隐藏资料卡状态按钮
_cardBgHideStateEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgHideStateEnabled"]];
```

插入后的位置：
```objc
    _cardBgOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetY"]];
    _cardBgOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetX"]];

    // ★ 新增：隐藏资料卡状态按钮
    _cardBgHideStateEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgHideStateEnabled"]];
}
```

---

### 修改 3：在 save 方法中添加写入

在 [PluginConfig.m L711](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L711) 的 `cardBgOffsetX` 之后追加：

```objc
    [d setFloat:_cardBgOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetX"]];
    // ★ 新增：隐藏资料卡状态按钮
    [d setBool:_cardBgHideStateEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgHideStateEnabled"]];
```

---

## 修改对照表

| 位置 | 当前状态 | 改为 |
|------|---------|------|
| PluginConfig.h L185 | `@property BOOL cardBgHideStateEnabled;` | **不动**（声明没问题） |
| PluginConfig.m L859-867 | 自定义 getter/setter | **删除**（用自动合成） |
| PluginConfig.m loadDefaults | 未读取 | **追加** `_cardBgHideStateEnabled = [d boolForKey:...]` |
| PluginConfig.m save | 未写入 | **追加** `[d setBool:_cardBgHideStateEnabled forKey:...]` |

---

## 修复后数据流

```
用户拨动开关
  └── switch action → config.cardBgHideStateEnabled = isOn
      └── 自动合成 setter → _cardBgHideStateEnabled = isOn
          └── (设置页面会调 [config save])
              └── save → 写入 NSUserDefaults (带 kPluginPrefix)

重新进入设置页面
  └── PluginConfig init → loadDefaults
      └── _cardBgHideStateEnabled = [d boolForKey:kPluginPrefix + @"CardBgHideStateEnabled"]
          └── 返回上次保存的值
```

---

## 验证方法

1. 打开设置页 → 找到隐藏状态开关 → 开启
2. 导航到其他页面（pop）
3. 重新进入设置页 → 开关应保持开启状态
4. 关闭开关 → 资料卡状态按钮应恢复显示
5. 杀掉 App 重开 → 开关状态仍保持