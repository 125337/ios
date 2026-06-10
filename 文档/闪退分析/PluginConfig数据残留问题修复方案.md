# PluginConfig save 方法数据残留问题修复方案

## 问题描述

在 `PluginConfig.m` 的 `save` 方法中，大量使用 `if (value)` 条件判断来保存对象类型属性：

```objc
if (_chatSeparatorText) {
    [d setObject:_chatSeparatorText forKey:@"...ChatSeparatorText"];
}
```

当属性被设置为 `nil` 或空值时，不会调用 `removeObjectForKey:` 移除对应的 key。导致：

1. **旧数据残留在 NSUserDefaults 中**
2. **重启后 `loadDefaults` 重新读到已删除的值**
3. **用户以为已清除的配置项，实际仍被旧值覆盖**

---

## 根因分析

### 执行链路

```
用户清空分隔符文字 → _chatSeparatorText = nil
  → save()
  → if (_chatSeparatorText) → NO → 跳过
  → ❌ 未调用 [d removeObjectForKey:@"...ChatSeparatorText"]
  → NSUserDefaults 中 "ChatSeparatorText" key 仍保留旧值
  → 重启 → loadDefaults()
  → [d stringForKey:@"...ChatSeparatorText"] → 返回旧值
  → v.length > 0 → true → _chatSeparatorText = 旧值
  → 用户以为已清除的配置，实际仍生效
```

### 两种正确模式对比

`save` 方法中已存在正确的处理模式（约第 662-681 行）：

```objc
// ✅ 正确的模式1：_cardBgImagePath
if (_cardBgImagePath) {
    [d setObject:_cardBgImagePath forKey:@"...CardBgImagePath"];
} else {
    [d removeObjectForKey:[kPluginPrefix stringByAppendingString:@"CardBgImagePath"]];
}

// ✅ 正确的模式2：_nsLogKeywords
if (_nsLogKeywords) {
    [d setObject:_nsLogKeywords forKey:@"...NsLogKeywords"];
} else {
    [d removeObjectForKey:[kPluginPrefix stringByAppendingString:@"NsLogKeywords"]];
}
```

但其余所有 `if (value) setObject` 都 **缺少** `else { removeObjectForKey }` 分支。

---

## 受影响属性完整清单

### 用户明确报告（3 个）

| # | 属性 | save 行号 | loadDefaults 行号 | load 默认值 |
|---|------|-----------|-------------------|-------------|
| 1 | `_chatSeparatorText` | [585-588](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L585-L588) | [274-282](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L274-L282) | `@""`（空字符串） |
| 2 | `_chatSeparatorIcon` | [598-602](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L598-L602) | [301-306](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L301-L306) | `nil`（不赋值，沿用旧值） |
| 3 | `_chatSeparatorGIF` | [603-607](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L603-L607) | [308-313](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L308-L313) | `nil`（不赋值，沿用旧值） |

**影响**：`_chatSeparatorText` 有 `else { _chatSeparatorText = @""; }` 兜底，但旧数据 `v.length > 0` 会导致 `loadDefaults` 用旧值覆盖空串。`_chatSeparatorIcon`/`_chatSeparatorGIF` 没有 else 兜底，旧数据直接赋值，用户即使清空了配置，重启后仍会显示旧图标/GIF。

### 其他受影响属性（约 30 个）

按影响严重程度分组：

#### 高危（无 else 兜底 + 用户经常修改）

| # | 属性 | save 行号 | loadDefaults 行为 |
|---|------|-----------|-------------------|
| 4 | `_notifyFormat` | [502](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L502) | `if (v.length > 0)` 赋值，否则保持 nil |
| 5 | `_dateFormat` | [503](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L503) | 同上 |
| 6 | `_customText` | [504](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L504) | 同上 |
| 7 | `_interceptNotifyTemplate` | [505](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L505) | 同上 |
| 8 | `_customNotifyFormat` | [506](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L506) | 同上 |
| 9 | `_revokeTemplate` | [507](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L507) | 同上 |
| 10 | `_notifySenderTemplate` | [508](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L508) | 同上 |
| 11 | `_messageTimeCustomFormat` | [531-533](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L531-L533) | 同上 |
| 12 | `_messageTimeFormat` | [534-536](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L534-L536) | `else { _messageTimeFormat = @"HH:mm:ss"; }` |
| 13 | `_messageTimeTextColor` | [540-542](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L540-L542) | `if (v.length > 0)` 赋值，否则保持 nil |
| 14 | `_chatGroupMemberCountSuffix` | [589-591](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L589-L591) | `else { _chatGroupMemberCountSuffix = @"%u人"; }` |
| 15 | `_chatAddTimeSuffixFormat` | [592-594](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L592-L594) | `else { _chatAddTimeSuffixFormat = @"%ld天"; }` |
| 16 | `_chatAvatarBlacklist` | [595-597](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L595-L597) | `if (v.length > 0)` 赋值，否则保持 nil |

#### 中危（数组/对象类型 + 无 else 兜底）

| # | 属性 | save 行号 | loadDefaults 行为 |
|---|------|-----------|-------------------|
| 17 | `_redEnvelopBlackList` | [489-491](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L489-L491) | `else { _redEnvelopBlackList = @[]; }` |
| 18 | `_redEnvelopGroupFilterList` | [492-494](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L492-L494) | `else { _redEnvelopGroupFilterList = @[]; }` |
| 19 | `_redEnvelopTextFilter` | [495-497](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L495-L497) | `else { _redEnvelopTextFilter = @""; }` |
| 20 | `_redEnvelopAutoReplyStr` | [498-500](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L498-L500) | `else { _redEnvelopAutoReplyStr = @"谢谢老板"; }` |
| 21 | `_autoConfirmTransferAutoReplyStr` | [520-522](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L520-L522) | `if (!value) _autoConfirmTransferAutoReplyStr = @"已收到款项，谢谢！"` |
| 22 | `_attachLayoutColumns` | [511-513](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L511-L513) | `if (v.length > 0)` 赋值 |
| 23 | `_attachLayoutRows` | [514-516](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L514-L516) | 同上 |

> 注：17-20 的 `loadDefaults` 有 `else` 默认值（第 76-101 行），但旧 key 残留会导致 `[d arrayForKey:]` 返回旧数组，`if (blackList)` 判断为 true，直接赋值旧值而**跳过** else 默认值。

#### 低危（颜色值，清除场景少）

| # | 属性 | save 行号 |
|---|------|-----------|
| 24 | `_senderTextColorHex` | [546](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L546) |
| 25 | `_senderTextColorDarkHex` | [547](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L547) |
| 26 | `_senderBackgroundColorHex` | [548](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L548) |
| 27 | `_senderBackgroundColorDarkHex` | [549](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L549) |
| 28 | `_receiverTextColorHex` | [550](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L550) |
| 29 | `_receiverTextColorDarkHex` | [551](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L551) |
| 30 | `_receiverBackgroundColorHex` | [552](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L552) |
| 31 | `_receiverBackgroundColorDarkHex` | [553](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L553) |
| 32 | `_placeholderTextText` | [622](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L622) |
| 33 | `_placeholderTextColorHex` | [625](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L625) |
| 34 | `_listCellLightBgColor` | [639](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L639) |
| 35 | `_listCellDarkBgColor` | [640](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L640) |
| 36 | `_listCellBorderColor` | [642](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L642) |
| 37 | `_listCellBorderColorDarkHex` | [643](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L643) |
| 38 | `_listProfileCardBorderColor` | [647](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L647) |
| 39 | `_listProfileCardBorderColorDarkHex` | [648](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L648) |
| 40 | `_cardBgCornerBgColor` | [657](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L657) |
| 41 | `_cardBgCornerDarkBgColor` | [658](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L658) |
| 42 | `_addTimeSuffixFormat` | [611-613](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L611-L613) |

---

## 修复方案

### 统一修复模式

将所有 `if (value) setObject` 改为 `if (value) setObject else removeObjectForKey`：

```objc
// 修改前
if (_chatSeparatorText) {
    [d setObject:_chatSeparatorText forKey:key];
}

// 修改后
if (_chatSeparatorText.length > 0) {  // 建议同时检查非空
    [d setObject:_chatSeparatorText forKey:key];
} else {
    [d removeObjectForKey:key];
}
```

> 注意：建议同时将 `if (value)` 改为 `if (value.length > 0)` 或 `if (value)`（取决于业务含义），避免空字符串 `@""` 也被写入。

### 改动量

所有 39 个受影响属性的改动模式完全相同，可通过查找替换批量处理。已存在的 2 个正确模式（`_cardBgImagePath`、`_nsLogKeywords`）无需修改。

---

## 修正后的 `loadDefaults` 行为

修复后 `loadDefaults` 的执行路径：

```
用户清空分隔符文字 → _chatSeparatorText = nil
  → save()
  → _chatSeparatorText.length == 0 → 进入 else
  → [d removeObjectForKey:@"...ChatSeparatorText"] ✅ key 被移除
  → 重启 → loadDefaults()
  → [d stringForKey:@"...ChatSeparatorText"] → 返回 nil
  → v.length == 0 → 进入 else → _chatSeparatorText = @""
  → 正确恢复默认值 ✅
```

---

## 验证步骤

1. 进入插件设置，清空分隔符文字 / 分隔符图标 / 分隔符 GIF 的配置
2. 保存设置（调用 `save`）
3. 杀掉微信进程，重新打开
4. 检查分隔符配置是否恢复为默认空值（而非显示旧数据）
5. 对其他受影响的属性（如通知模板）重复相同验证

---

## 参考文件

| 文件 | 用途 |
|------|------|
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L463-L687) | `save` 方法完整实现 |
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L32-L261) | `loadDefaults` 方法完整实现 |
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L662-L666) | 正确模式示例：`_cardBgImagePath` |
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L678-L681) | 正确模式示例：`_nsLogKeywords` |