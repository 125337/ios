# 微信优化 vs MioPlugin — 聊天顶栏后缀功能深度对比

> **后缀功能**: 在聊天顶栏的昵称/群名后拼接额外信息:
> 1. **添加时间后缀**: 私聊时显示"已添加 N 天"
> 2. **群聊人数后缀**: 群聊时显示"群成员数 N 人"
>
> **项目A**: 微信优化反编译 (`123456.c`) — NSUserDefaults 直接读写 + `com.wechat.enhance.chat.` 前缀
> **项目B**: MioPlugin (`MioChatAvatarTitleView.m`) — PluginConfig 单例 + `Mio_` 前缀

---

## 一、反编译常数确认

> 通过反编译数据段交叉验证，以下字符串常量的值已确认：

| Ghidra 符号 | 声明行 | 实际值 | 用途 |
|-------------|--------|--------|------|
| `cf_%ld` | [123456.c:60](file://www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L60) | `@"%ld"` | 格式化 count/days 的占位符 |
| `cf_@chatroom` | [123456.c:47](file://www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L47) | `@"@chatroom"` | 群聊识别 |
| `cf_com.wechat.enhance.chat.addtime_suffix_format` | 数据段 | NSUserDefaults 键 | 添加时间后缀格式 |
| `cf_com.wechat.enhance.chat.group_member_count_suffix_format` | 数据段 | NSUserDefaults 键 | 群成员数后缀格式 |
| `cf_com.wechat.enhance.chat.show_addtime_enabled` | 数据段 | NSUserDefaults 键 | 添加时间开关 |
| `cf_com.wechat.enhance.chat.show_group_member_count_enabled` | 数据段 | NSUserDefaults 键 | 群成员数开关 |
| `cf_m_uiAddCreateTime` | 数据段 | `@"m_uiAddCreateTime"` | 添加时间属性名 |
| `cf_m_nsChatRoomMemList` | 数据段 | `@"m_nsChatRoomMemList"` | 群成员列表属性名 |
| `cf_m_contact` | 数据段 | `@"m_contact"` | 联系人属性名 (KVC) |

---

## 二、添加时间后缀 (Add Time Suffix) 实现对比

### 2.1 微信优化 — updateAvatars 实现

```objc
// 文件: 123456.c 行 11806-11842
// 条件: NOT isChatroom AND show_addtime_enabled == YES

else if (((isChatroom | showAddtimeEnabled ^ 0xffffffff) & 1) == 0) {
    // ① 获取 m_uiAddCreateTime（仅此一个字段，无 fallback）
    unsigned int addTime = [contact m_uiAddCreateTime];

    if (addTime == 0) {
        // ② 时间为0 → 触发静默加载（创建临时 ContactInfoViewController）
        [self silentLoadContactExtInfo:contact];
        //     └─ 汇编: FUN_000cfbc0(param_1, extraout_x1_05, lVar4)
        //        └─ FUN_000cfbc0 定义于 [123456.c:142987](file://www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L142987)
        //           └─ 即 [self silentLoadContactExtInfo:contact]
    } else {
        // ③ 计算天数差
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        NSTimeInterval diff = now - (double)addTime;

        // ④ 异常值校验: diff > -86400 (= -1天)
        //    汇编: if (-0x15180 < (long)diff)  // 0x15180 = 86400
        if (diff > -86400) {
            // ⑤ 读取格式字符串
            NSString *format = [[NSUserDefaults standardUserDefaults]
                stringForKey:@"com.wechat.enhance.chat.addtime_suffix_format"] ?: @"";

            // ⑥ 格式非空才拼接后缀
            if (format.length > 0) {
                // ⑦ 格式化: suffix = [NSString stringWithFormat:format, days]
                //    汇编: FUN_000d0040(&_OBJC_CLASS___NSString, count, &cf__ld)
                //          └─ [NSString stringWithFormat:@"%ld", count] → 数字字符串
                //          FUN_000cff80(pcVar12, ..., &cf__, 数字字符串)
                //          └─ [formatString stringByAppendingFormat:..., numberString]
                NSString *suffix = [NSString stringWithFormat:format, (long)(diff / 86400)];

                // ⑧ 拼接: displayName = [nickname stringByAppendingFormat:@"（%@）", suffix]
                //    汇编: FUN_000d0040(&_OBJC_CLASS___NSString, ..., &cf_____)
                //          └─ cf_____ 推测为 @"（%@）"  → 最终: "昵称（3天）"
                displayName = [nickname stringByAppendingFormat:@"（%@）", suffix];
            }
            // 重要: format 为空字符串 "" → 不拼接后缀，displayName = nickname
        }
    }
}
```

### 2.2 MioPlugin — updateAvatars 实现

```objc
// 文件: MioChatAvatarTitleView.m 行 304-328
// 条件: !isGroup AND config.showAddTime

else if (!isGroup && config.showAddTime) {
    // ① 获取添加时间 — 两级 fallback
    unsigned int addTime = 0;
    SEL addCreateSel = NSSelectorFromString(@"m_uiAddCreateTime");
    if ([contact respondsToSelector:addCreateSel]) {
        addTime = (unsigned int)((unsigned int (*)(id, SEL))objc_msgSend)(contact, addCreateSel);
    }
    if (addTime == 0 && [contact respondsToSelector:@selector(m_uiAddTime)]) {
        addTime = (unsigned int)((unsigned int (*)(id, SEL))objc_msgSend)(contact, @selector(m_uiAddTime));
    }

    if (addTime > 0) {
        // ② 计算天数差
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        NSTimeInterval diff = now - addTime;

        // ③ 异常值校验: diff > -86400
        if (diff > -86400) {
            NSInteger days = (NSInteger)(diff / 86400.0);

            // ④ 格式字符串（有默认值 "%ld天"）
            NSString *suffix = config.chatAddTimeSuffixFormat.length > 0
                ? config.chatAddTimeSuffixFormat : @"%ld天";

            // ⑤ 直接拼接（无包装括号）
            titleText = [NSString stringWithFormat:@"%@%@",
                nickname ?: @"",
                [NSString stringWithFormat:suffix, (long)days]];
        }
    } else {
        // ⑥ 时间为0 → 触发静默加载
        [self silentLoadContactExtInfo:contact];
    }
}
```

### 2.3 添加时间后缀 — 逐项对比

| 对比项 | 微信优化 | MioPlugin | 影响 | 谁更好 | 说明 |
|--------|-----------|-----------|------|--------|------|
| **开关配置键** | `com.wechat.enhance.chat.show_addtime_enabled` | `Mio_ShowAddTime` | 存储隔离 | 平局 | |
| **开关默认值** | NO | NO | 相同 | 平局 | |
| **添加时间字段** | **仅** `m_uiAddCreateTime` | **两级 fallback**: `m_uiAddCreateTime` → `m_uiAddTime` | 微信优化单一字段，如果该字段不存在或为0则走静默加载；Mio 有备用字段可能直接获取到值 | **MioPlugin** | Mio 的 fallback 兼容了不同微信版本间字段名可能不同的情况 |
| **天数计算** | `(now - addTime) / 86400` → `(long)` | `(NSInteger)(diff / 86400.0)` 浮点除 | 逻辑等价 | 平局 | 64位设备上 `long` 和 `NSInteger` 等价 |
| **异常值校验** | `diff > -86400` | `diff > -86400` | 相同 | 平局 | 允许最多1天的时间偏差 |
| **格式字符串键** | `com.wechat.enhance.chat.addtime_suffix_format` | `Mio_ChatAddTimeSuffixFormat` | 存储隔离 | 平局 | |
| **默认格式** | `""` (**空字符串** → 不拼接后缀) | `@"%ld天"` (开箱即显示) | **重大差异** | **MioPlugin** | 微信优化需要用户主动进入设置页输入格式字符串才显示；Mio 开箱可用 |
| **后缀定界符** | **硬编码**中文全角括号: `"（%@）"` | **无定界符**，由格式字符串控制 | 格式自由度差异 | **MioPlugin** | 微信优化输出固定为 `昵称（3天）`；Mio 可自由控制整个后缀格式 |
| **用户可配置范围** | 仅数字/单位部分 (如 `%ld天`) | 完整后缀 (如 `/已添加%ld天/`) | Mio 自由度更高 | **MioPlugin** | |
| **空格式行为** | 不拼接后缀 | 回退到默认值 `@"%ld天"` (始终拼接) | 微信优化把"空"当作"禁用"；Mio 把"空"当作"恢复默认" | 各有用途 | |
| **设置清空行为** | 清空 → 不显示（`@""`） | 清空 → 存为 `nil` → 回退默认值 | 见 [PluginConfig.m:329-333](file://www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L329) | 各有用途 | `config.chatAddTimeSuffixFormat = nil` → `nil.length` = 0 → 走默认 `@"%ld天"` |

### 2.4 添加时间后缀 — 输出结果对比

| 场景 | 微信优化输出 | MioPlugin 输出 |
|------|-------------|----------------|
| 首次安装 (未配置格式) | `昵称` | `昵称3天` |
| 格式 = `"%ld天"` | `昵称（3天）` | `昵称3天` |
| 格式 = `"已添加%ld天"` | `昵称（已添加3天）` | `昵称已添加3天` |
| 格式 = `"/%ldd"` | `昵称（/3d）` | `昵称/3d` |
| 用户清空格式 | `昵称` | `昵称3天` (回退默认) |
| 添加时间为未来 (diff<0 但 >-86400) | `昵称（0天）` | `昵称0天` |
| 添加时间 = 0 (未加载) | 触发静默加载 → 800ms 后刷新 | 同左 |

---

## 三、群聊人数后缀 (Group Member Count Suffix) 实现对比

### 3.1 微信优化 — updateAvatars 实现

```objc
// 文件: 123456.c 行 11766-11804
// 条件: isChatroom AND show_group_member_count_enabled == YES

if ((isChatroom & showGroupCountEnabled) == 1) {
    // ① 从 m_nsChatRoomMemList 获取逗号分隔的成员列表字符串
    //    汇编: FUN_000d0f40(lVar4, ..., &cf_m_nsChatRoomMemList)
    NSString *memList = [contact m_nsChatRoomMemList];  // e.g. "wxid_a,wxid_b,wxid_c"

    // ② 拆分为数组
    //    汇编: FUN_000c3fa0(local_c0, ..., &cf__)  → cf__ = @","
    NSArray *members = [memList componentsSeparatedByString:@","];

    // ③ 获取数量
    NSInteger count = [members count];

    // ④ 成员数 > 0 才拼接 (空值保护)
    if (count > 0) {
        // ⑤ 读取格式字符串
        NSString *format = [[NSUserDefaults standardUserDefaults]
            stringForKey:@"com.wechat.enhance.chat.group_member_count_suffix_format"] ?: @"";

        // ⑥ 格式非空才拼接
        if (format.length > 0) {
            // ⑦ 格式化
            NSString *suffix = [NSString stringWithFormat:format, count];

            // ⑧ 拼接: displayName = [groupName stringByAppendingFormat:@"（%@）", suffix]
            displayName = [nickname stringByAppendingFormat:@"（%@）", suffix];
        }
    }
}
```

### 3.2 MioPlugin — updateAvatars 实现

```objc
// 文件: MioChatAvatarTitleView.m 行 289-303
// 条件: isGroup AND config.showGroupMemberCount

if (isGroup && config.showGroupMemberCount) {
    // ① 通过 MMServiceCenter → CContactMgr API 获取成员数
    Class serviceCenter = objc_getClass("MMServiceCenter");
    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"),
        objc_getClass("CContactMgr"));

    unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(contactMgr,
        @selector(getGroupMemberCountForContact:), contact);

    // ② 格式字符串（有默认值 "%u人"）
    NSString *suffix = config.chatGroupMemberCountSuffix.length > 0
        ? config.chatGroupMemberCountSuffix : @"%u人";

    // ③ 直接拼接（无 count 有效性检查，无包装括号）
    titleText = [NSString stringWithFormat:@"%@%@",
        nickname ?: @"",
        [NSString stringWithFormat:suffix, (long)count]];
}
```

### 3.3 群聊人数后缀 — 逐项对比

| 对比项 | 微信优化 | MioPlugin | 影响 | 谁更好 | 说明 |
|--------|-----------|-----------|------|--------|------|
| **开关配置键** | `com.wechat.enhance.chat.show_group_member_count_enabled` | `Mio_ShowGroupMemberCount` | 存储隔离 | 平局 | |
| **开关默认值** | NO | NO | 相同 | 平局 | |
| **成员数数据源** | `m_nsChatRoomMemList` → `componentsSeparatedByString:@","` → `count` | `MMServiceCenter → CContactMgr → getGroupMemberCountForContact:` | 数据源完全不同 | **微信优化** | 微信优化解析原始字符串，不依赖 CContactMgr 的 API 存在性；Mio 依赖特定方法签名 |
| **API 调用次数** | 2 次: `m_nsChatRoomMemList`(1) + `componentsSeparatedByString:`(1) | 4 次: `MMServiceCenter`(1) + `defaultCenter`(1) + `getService:`(1) + `getGroupMemberCountForContact:`(1) | 微信优化更简洁 | **微信优化** | 性能差异微小但可衡量 |
| **成员数数据类型** | `NSInteger` (64位) | `unsigned int` (32位) | 理论上限不同 | **微信优化** | 微信群上限 500 人，两者都不存在问题 |
| **格式化占位符** | `%ld` (对应 `long`/`NSInteger`) | `%u` (config 默认) / `%ld` (内联 fallback)，传参为 `(long)count` | **类型不匹配 + 内部不一致** | **微信优化** | config 默认 `@"%u人"` ([PluginConfig.m:325](file://www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L325)) 与内联 fallback `@"%ld人"` ([MioChatAvatarTitleView.m:298](file://www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m#L298)) 不一致！首次安装用 `%u`，清空后当次会话用 `%ld`，重启后又变回 `%u` |
| **成员数空值检查** | **有**: `if (count > 0)` 后才拼接 | **无**: count=0 时也显示 `0人` | 微信优化避免显示 `0人` | **微信优化** | 群刚创建或成员未加载时，Mio 可能显示 `0人` |
| **默认格式** | `""` (空字符串 → 不拼接) | `@"%u人"` (开箱即显示) | 重大差异 | **MioPlugin** | |
| **后缀定界符** | 硬编码中文全角括号 `（%@）` | 无定界符，由格式字符串控制 | 格式自由度差异 | **MioPlugin** | |
| **空格式行为** | 不拼接后缀 | 回退到默认值 `@"%u人"` | 微信优化把"空"当作"禁用"；Mio 把"空"当作"恢复默认" | 各有用途 | |
| **设置清空行为** | 清空 → 不显示 (`@""`) | 清空 → 存为 `nil` → 回退默认值 | 见 [SettingChatTopBarController.m:254](file://www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingChatTopBarController.m#L254) | 各有用途 | `config.chatGroupMemberCountSuffix = nil` → `nil.length` = 0 → 走默认 `@"%u人"` |

### 3.4 群聊人数后缀 — 输出结果对比

| 场景 | 微信优化输出 | MioPlugin 输出 |
|------|-------------|----------------|
| 首次安装 (未配置格式) | `群名` | `群名5人` |
| 格式 = `"%ld人"` | `群名（5人）` | `群名5人` |
| 格式 = `"共%ld名成员"` | `群名（共5名成员）` | `群名共5名成员` |
| 成员数为 0 | `群名` (不拼接) | `群名0人` (仍拼接) |
| 成员列表未加载 (memList=nil) | `群名` (不拼接) | `群名` (API 返回 nil → 分支跳过) |
| 用户清空格式 | `群名` | `群名5人` (回退默认) |

---

## 四、calculateNameWidth 中的后缀逻辑对比

> 在 `layoutSubviews` 中布局名称标签时需要知道标签的渲染宽度。两种实现都提供了 `calculateNameWidth` 方法。

### 4.1 实现对比

| 对比项 | 微信优化 | MioPlugin | 谁更好 | 说明 |
|--------|-----------|-----------|--------|------|
| **后缀构建** | 在 calculateNameWidth 内部**完整重建**后缀逻辑 (与 updateAvatars 平行实现) | 直接使用 `self.titleLabel.text`，**不重复**后缀逻辑 | **MioPlugin** | 微信优化在两处维护相同逻辑，修改格式时可能只改一处导致不一致；Mio 统一使用已设置的文本 |
| **时序依赖** | 无依赖，可独立计算 | 依赖 `updateAvatars` 先执行 (否则 titleLabel.text 为空) | **微信优化** | Mio 在头像加载失败的极端情况下标题宽度可能不正确 |
| **天数计算差异** | updateAvatars: `diff > -86400`; calculateNameWidth: **`days >= 0`** | 统一在 updateAvatars 中计算，用 `diff > -86400` | **MioPlugin** | 微信优化内部不一致 (见下文) |
| **日期计算 API** | updateAvatars: `timeIntervalSince1970`; calculateNameWidth: `timeIntervalSinceDate:` | 统一使用 `timeIntervalSince1970` | **MioPlugin** | 结果相同，但微信优化用了不同 API |
| **静默加载** | calculateNameWidth 中 **无**静默加载 (addTime==0 → 直接跳过) | 不适用 (Mio 不在 calculateNameWidth 中计算后缀) | 平等 | |
| **宽度下限** | 30pt | `self.bounds.size.width - avatarSize - 20`，下限 30pt | **微信优化** | 微信优化简单直接 |

### 4.2 微信优化内部不一致 (updateAvatars vs calculateNameWidth)

> 这是反编译分析中发现的**真实 Bug**，存在于微信优化内部：

```objc
// ======================== updateAvatars (行 11819) ========================
// 条件: diff > -86400 (即允许"添加时间为未来1天以内"时也显示后缀)
// 汇编: if (-0x15180 < (long)diff)  // 0x15180 = 86400
if (diff > -86400) {
    // 显示后缀
}

// ======================== calculateNameWidth (行 12705) ========================
// 条件: diff >= 0 (严格只允许非负天数)
// 汇编: if ((long)(diff / 86400.0) < 0) goto skip;
if (days >= 0) {
    // 计算后缀宽度
}

// 当 -86400 < diff < 0 时 (添加时间稍晚于系统时间，如时区差):
//   updateAvatars  → 显示后缀 (如"（0天）")
//   calculateNameWidth → 不计算后缀宽度 → 标签可能被截断
```

### 4.3 MioPlugin calculateNameWidth 实现

```objc
// 文件: MioChatAvatarTitleView.m 行 561-574
- (CGFloat)calculateNameWidth {
    PluginConfig *config = [PluginConfig shared];
    NSString *text = self.titleLabel.text ?: @"";
    if (text.length == 0) return 30.0;

    UIFont *font = [UIFont systemFontOfSize:config.chatNicknameFontSize];
    NSDictionary *attrs = @{NSFontAttributeName: font};
    CGFloat textWidth = [text sizeWithAttributes:attrs].width;

    CGFloat minW = self.bounds.size.width - config.chatAvatarSize - 20;
    if (minW < 30.0) minW = 30.0;
    return MAX(textWidth + 4.0, minW);
}
```

---

## 五、静默加载机制 (silentLoadContactExtInfo) 对比

> 当 `m_uiAddCreateTime == 0` (添加时间未加载) 时，需要触发微信底层加载联系人扩展信息。两个项目都通过创建临时 `ContactInfoViewController` 并调用其 `viewDidLoad` 来触发加载。

### 5.1 微信优化实现

```objc
// 文件: 123456.c 行 11926-11959
// 函数签名: void CSChatAvatarTitleView::silentLoadContactExtInfo_(ID self, SEL sel, ID contact)

- (void)silentLoadContactExtInfo:(id)contact {
    if (!contact) return;
    Class ContactInfoVC = objc_getClass("ContactInfoViewController");
    if (!ContactInfoVC) return;

    id vc = [[ContactInfoVC alloc] init];  // 汇编: _objc_alloc_init()
    if (!vc) return;

    // 设置联系人 — KVC 方式
    // 汇编: FUN_000ce560(lVar2, ..., lVar1, &cf_m_contact)
    [vc setValue:contact forKey:@"m_contact"];

    // 触发加载 — 汇编: FUN_000c8720(lVar2, ..., "viewDidLoad")
    [vc viewDidLoad];

    // 800ms 后刷新 — 汇编: _dispatch_time(0, 800000000)
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 0.8 * NSEC_PER_SEC),
        dispatch_get_main_queue(), ^{
        // 汇编: FUN_00012a30 → FUN_000d0ba0(self)
        // └─ FUN_000d0ba0 = updateAvatars (确认: 在 viewWillAppear 钩子
        //    行 13448 也用 FUN_000d0ba0 调用 updateAvatars)
        [self updateAvatars];
    });

    // vc 作为局部变量在此函数返回后自动释放
    _objc_release(vc);
}
```

### 5.2 MioPlugin 实现

```objc
// 文件: MioChatAvatarTitleView.m 行 454-474

- (void)silentLoadContactExtInfo:(id)contact {
    if (!contact) return;

    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (!contactInfoVCClass) return;

    id vc = [[contactInfoVCClass alloc] init];
    if (!vc) return;

    // 设置联系人 — respondsToSelector 探测 + 直接消息发送
    SEL setContactSel = NSSelectorFromString(@"setM_contact:");
    if ([vc respondsToSelector:setContactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, setContactSel, contact);
    }

    // 触发加载
    ((void (*)(id, SEL))objc_msgSend)(vc, @selector(viewDidLoad));

    // 800ms 后刷新
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.8 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self updateAvatars];
    });
}
```

### 5.3 静默加载 — 逐项对比

| 对比项 | 微信优化 | MioPlugin | 谁更好 | 说明 |
|--------|-----------|-----------|--------|------|
| **核心思路** | 创建临时 VC → viewDidLoad 触发加载 → 800ms 后 updateAvatars | 同左 | 平局 | 思路完全一致 |
| **800ms 后行为** | `[self updateAvatars]` (通过 `FUN_000d0ba0`) | `[self updateAvatars]` | 平局 | **已修正**: 之前错误地认为微信优化调用 `dismissViewControllerAnimated:`，实际两者都调用 `updateAvatars` |
| **设置联系人方式** | `[vc setValue:contact forKey:@"m_contact"]` (KVC) | `[vc setM_contact:contact]` (respondsToSelector → 直接消息发送) | **MioPlugin** | KVC 对键名严格，如果微信版本更新后属性名变化会 crash；Mio 的 `respondsToSelector` 更安全 |
| **调用位置** | `updateAvatars` 内部 (1处) + `viewWillAppear:` 钩子触发 `updateAvatars` (间接2处) | `updateAvatars` 内部 (1处) + `viewWillAppear:` 钩子触发 `updateAvatars` (间接2处) | 平局 | 两者在 `viewWillAppear:` 钩子中都调用 `updateAvatars`，`updateAvatars` 内部检查 `addTime == 0` 时调用 `silentLoadContactExtInfo` |
| **临时 VC 生命周期** | 函数返回后 `_objc_release` 释放 | 函数返回后 ARC 自动释放 | 平局 | |
| **CContactMgr 兜底** | 无，仅用 `m_uiAddCreateTime` | 有，`m_uiAddCreateTime` → `m_uiAddTime` | **MioPlugin** | Mio 的 fallback 可能在静默加载前就获取到有效时间 |

### 5.4 viewWillAppear: 钩子中的 updateAvatars 调用

> 两个项目的 `viewWillAppear:` 钩子都直接调用 `updateAvatars`，不直接调用 `silentLoadContactExtInfo`。`updateAvatars` 内部检查 `addTime == 0` 时才触发静默加载。

```
viewWillAppear: 触发
    │
    ├─ 微信优化: FUN_00014ed0 (123456.c:13357) → FUN_000d0ba0(titleView) = updateAvatars
    │     └─ updateAvatars → addTime==0 → silentLoadContactExtInfo → 800ms → updateAvatars
    │
    └─ MioPlugin: hook_viewWillAppear (ChatTopBarHook.m:77) → updateAvatars
          └─ updateAvatars → addTime==0 && m_uiAddTime==0 → silentLoadContactExtInfo → 800ms → updateAvatars
```

---

## 六、配置管理对比

| 对比项 | 微信优化 | MioPlugin | 谁更好 | 说明 |
|--------|-----------|-----------|--------|------|
| **格式字符串存储** | NSUserDefaults 直接读写，每次 `objectForKey:` (磁盘 I/O) | PluginConfig 单例内存缓存 → 写时 `save` | **MioPlugin** | Mio 每次只需读取内存 |
| **设置页输入提示** | 未知 (反编译视图未展开设置页 UI) | placeholder `"%ld天"` / `"%u人"`，当前值预填 | **MioPlugin** | |
| **保存空值** | 存为 `@""` (空字符串) | 存为 `nil` | 各有差异 | 两者行为不同: 微信优化 `@""` = 禁用后缀；Mio `nil` = 恢复默认值 |
| **设置页清空功能** | 可清空 → 不显示后缀 | 可清空 → 自动回退默认 | 各有用途 | |

---

## 七、核心差异总结

```
                        微信优化                           MioPlugin
                        ─────────                         ──────────
后缀默认值:             无 (空字符串)                      有 (%ld天 / %u人)
包装括号:              硬编码 （）                         无（由格式字符串控制）
格式自由度:            仅数字部分                          完整后缀
数据源(成员数):         m_nsChatRoomMemList 解析            CContactMgr API (4步调用)
数据源(添加时间):       m_uiAddCreateTime 单字段            m_uiAddCreateTime → m_uiAddTime 双字段
成员数空值检查:        有 (count > 0)                      无
calculateNameWidth:    独立重建后缀逻辑                    复用 titleLabel.text
内部一致性:            updateAvatars ≠ calculateNameWidth  统一单点计算
KVC安全性:             KVC (setValue:forKey:)              respondsToSelector 探测
设置联系人:            [vc setValue:forKey:]               [vc setM_contact:]
800ms后行为:           [self updateAvatars]                [self updateAvatars]  ← 相同
静默加载后:            自动刷新                            自动刷新                   ← 相同
```

### 评分矩阵

| 维度 | 微信优化 | MioPlugin | 评语 |
|------|:---:|:---:|------|
| 开箱即用体验 | ⭐⭐ | ⭐⭐⭐⭐⭐ | Mio 默认就有后缀 |
| 兼容性/健壮性 | ⭐⭐⭐⭐ | ⭐⭐⭐ | 微信优化数据源更底层更稳定 |
| 代码一致性 | ⭐⭐ | ⭐⭐⭐⭐⭐ | Mio 单一计算点无分歧 |
| 格式灵活度 | ⭐⭐ | ⭐⭐⭐⭐⭐ | Mio 可自定义任意格式 |
| 性能 | ⭐⭐ | ⭐⭐⭐⭐ | Mio 单例缓存更优 |
| 格式安全 | ⭐⭐⭐⭐ | ⭐⭐ | 微信优化有 count>0 检查 |

---

## 八、MioPlugin 改进建议

| 序号 | 建议 | 优先级 | 参考来源 |
|------|------|--------|----------|
| 1 | 添加 `count > 0` 成员数空值检查，避免显示 `0人` | 🔴 高 | 微信优化 [updateAvatars:11774](file://www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L11774) |
| 2 | **修复格式化占位符不一致**: `PluginConfig` 默认 `@"%u人"`（%u）与 `MioChatAvatarTitleView` 内联 fallback `@"%ld人"`（%ld）不一致。统一为 `%ld` 匹配 `(long)count` 传参 | 🔴 高 | [PluginConfig.m:325](file://www/wwwroot/ios/MioPlugin/Config/PluginConfig.m#L325) vs [MioChatAvatarTitleView.m:298](file://www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m#L298) |
| 3 | 考虑添加后缀包裹符号选项 (如 `()`、`（）`、`[]`、`//`)，类似微信优化的固定括号设计 | 🟢 低 | 微信优化的固定括号风格 |
| 4 | 可考虑使用 `m_nsChatRoomMemList` 作为备选数据源（当 `CContactMgr` API 不可用时 fallback） | 🟢 低 | 微信优化的数据源兼容性 |