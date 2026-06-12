# PluginConfig 终极重构方案 — 完整改造文档

> **目标**：一次重构，永不改动架构。调用方全部改完，零残留。

***

## 一、架构总览

```
┌──────────────────────────────────────────────────────────────────┐
│                        ConfigManager                            │
│  统一调度器：注册 / loadAll / saveAll / resetAll    │
│  内部注册列表：s_registeredModules                               │
└──────────────────────────────────────────────────────────────────┘
         │ 注册模块           │ load/save 调度
         ▼                    ▼
┌──────────────────┐  ┌──────────────────┐  ┌──────────────────┐
│ ChatTopBarConfig  │  │ MessageTimeConfig│  │ RedEnvelopConfig  │  ... 共 15 个模块
│                  │  │                  │  │                   │
│ 描述符表 × N      │  │ 描述符表 × N      │  │ 描述符表 × N       │
│ save/load 由      │  │ save/load 由      │  │ save/load 由       │
│ ConfigManager     │  │ ConfigManager     │  │ ConfigManager      │
│ 统一完成          │  │ 统一完成          │  │ 统一完成           │
└──────────────────┘  └──────────────────┘  └──────────────────┘
```

### 调用方变更

```
改造前:  [[PluginConfig shared] showChatAvatar]
         PluginConfig *config = [PluginConfig shared];
         config.chatDisplayMode

改造后:  [[ChatTopBarConfig shared] showChatAvatar]
         ChatTopBarConfig *config = [ChatTopBarConfig shared];
         config.chatDisplayMode
```

***

## 二、核心组件设计

### 2.1 ConfigDescriptor — 配置描述符

```objc
// ConfigValueTypes.h
typedef NS_ENUM(NSUInteger, ConfigValueType) {
    ConfigValueTypeBool,
    ConfigValueTypeInteger,
    ConfigValueTypeFloat,
    ConfigValueTypeString,
    ConfigValueTypeArray,
};

// ConfigDescriptor.h
@interface ConfigDescriptor : NSObject
@property (nonatomic, copy)   NSString       *key;
@property (nonatomic, assign) ConfigValueType type;
@property (nonatomic, strong) id              defaultValue;
// 工厂方法
+ (instancetype)boolItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)integerItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)floatItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)stringItem:(NSString *)key default:(NSString *)defaultValue;
+ (instancetype)arrayItem:(NSString *)key default:(NSArray *)defaultValue;
@end
```

### 2.2 ConfigModule 协议

```objc
// ConfigModule.h
@protocol ConfigModule <NSObject>
@required
+ (NSArray<ConfigDescriptor *> *)descriptors;
+ (NSString *)modulePrefix;      // NSUserDefaults key前缀，如 @"ChatTopBar_"
+ (instancetype)shared;
@end
```

### 2.3 ConfigManager — 统一调度器

```objc
// ConfigManager.h
@interface ConfigManager : NSObject
+ (void)registerModule:(Class<ConfigModule>)moduleClass;
+ (void)loadAll;
+ (void)saveAll;
+ (void)resetAll;
@end
```

***

## 三、模块拆分明细

### 模块 1：RevokeConfig（撤回拦截）

**文件**：`Modules/Revoke/RevokeConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`Revoke_`

| @property                 | 类型                  | NSUserDefaults Key        | 默认值                            | 调用方                                                                                             |
| ------------------------- | ------------------- | ------------------------- | ------------------------------ | ----------------------------------------------------------------------------------------------- |
| `preventRecall`           | BOOL                | `PreventRecall`           | YES                            | RevokeHook.m:34, RevokeHandler.m, SettingRevokeController.m, SettingGeneralFunctionController.m |
| `debugLogging`            | BOOL                | `DebugLogging`            | NO                             | MessageTimeHook.m:47, WPOtherVC.m:40                                                            |
| `hideContent`             | BOOL                | `HideContent`             | NO                             | RevokeHandler.m:324, WPOtherVC.m:44                                                             |
| `noTip`                   | BOOL                | `NoTip`                   | NO                             | RevokeHandler.m:264, WPOtherVC.m:48                                                             |
| `bottomPosition`          | BOOL                | `BottomPosition`          | NO                             | —                                                                                               |
| `sendInterceptedContent`  | BOOL                | `SendInterceptedContent`  | NO                             | —                                                                                               |
| `interceptNotifyEnabled`  | BOOL                | `InterceptNotifyEnabled`  | NO                             | —                                                                                               |
| `customNotifyEnabled`     | BOOL                | `CustomNotifyEnabled`     | NO                             | —                                                                                               |
| `hideDiscoverBadge`       | BOOL                | `HideDiscoverBadge`       | NO                             | —                                                                                               |
| `hideEnterpriseBadge`     | BOOL                | `HideEnterpriseBadge`     | NO                             | —                                                                                               |
| `notifyFormat`            | NSString            | `NotifyFormat`            | `kDefaultNotifyFormat`         | —                                                                                               |
| `dateFormat`              | NSString            | `DateFormat`              | `kDefaultDateFormat`           | —                                                                                               |
| `customText`              | NSString            | `CustomText`              | nil                            | —                                                                                               |
| `interceptNotifyTemplate` | NSString            | `InterceptNotifyTemplate` | `kDefaultInterceptTemplate`    | —                                                                                               |
| `customNotifyFormat`      | NSString            | `CustomNotifyFormat`      | `kDefaultCustomNotifyFormat`   | —                                                                                               |
| `revokeTemplate`          | NSString            | `RevokeTemplate`          | `kDefaultRevokeTemplate`       | RevokeHandler.m:339, SettingRevokeController.m:34                                               |
| `notifySender`            | BOOL                | `NotifySender`            | NO                             | RevokeHandler.m:348, SettingRevokeController.m:47                                               |
| `notifySenderTemplate`    | NSString            | `NotifySenderTemplate`    | `kDefaultNotifySenderTemplate` | RevokeHandler.m:355, SettingRevokeController.m:49                                               |
| `notifySenderCooldown`    | double              | `NotifySenderCooldown`    | 0                              | RevokeHandler.m:352, SettingRevokeController.m:52                                               |
| `sessionFormats`          | NSMutableDictionary | `SessionFormats`          | `@{}` (NSKeyedArchiver)        | —                                                                                               |
| `userFormats`             | NSMutableDictionary | `UserFormats`             | `@{}` (NSKeyedArchiver)        | —                                                                                               |

**需要迁移的内部方法**（原 PluginConfig 实例方法）：

- `notifyFormatForSession:user:` → 移到 RevokeConfig
- `applyTemplate:time:name:content:` → 移到 RevokeConfig
- `applyRevokeTemplate:name:content:createTime:` → 移到 RevokeConfig

**调用方文件**（7 个）：

| 文件                                                      | 当前写法                                                                                                                                 | 改造后                                     |
| ------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------- |
| Modules/Revoke/RevokeHook.m                             | `[PluginConfig shared].preventRecall`                                                                                                | `[RevokeConfig shared].preventRecall`   |
| Modules/Revoke/RevokeHandler.m                          | `config.hideContent`, `config.revokeTemplate`, `config.notifySender`, `config.notifySenderTemplate`, `config.notifySenderCooldown`   | `[RevokeConfig shared].hideContent` 等   |
| Settings/Controllers/SettingRevokeController.m          | `config.preventRecall`, `config.revokeTemplate`, `config.notifySender`, `config.notifySenderCooldown`, `config.notifySenderTemplate` | `[RevokeConfig shared].preventRecall` 等 |
| Settings/Controllers/SettingGeneralFunctionController.m | `config.preventRecall`                                                                                                               | `[RevokeConfig shared].preventRecall`   |
| Modules/SettingEntry/WPOtherVC.m                        | `config.debugLogging`, `config.hideContent`, `config.noTip`                                                                          | `[RevokeConfig shared].debugLogging` 等  |
| Modules/MessageTime/MessageTimeHook.m                   | `[PluginConfig shared].debugLogging`                                                                                                 | `[RevokeConfig shared].debugLogging`    |
| Settings/Controllers/SettingController.m                | —                                                                                                                                    | —                                       |

***

### 模块 2：ClearUnreadConfig（清除未读）

**文件**：`Modules/Unread/ClearUnreadConfig.h/.m`

**旧 key**：`MioPlugin_ClearUnreadEnabled` → **模块前缀**：`ClearUnread_`

| @property            | 类型   | NSUserDefaults Key | 默认值 | 调用方                                   |
| -------------------- | ---- | ------------------ | --- | ------------------------------------- |
| `clearUnreadEnabled` | BOOL | `Enabled`          | NO  | ClearUnreadHook.m:155, WPOtherVC.m:31 |

**调用方文件**（2 个）：

| 文件                               | 当前写法                                       | 改造后                                             |
| -------------------------------- | ------------------------------------------ | ----------------------------------------------- |
| Modules/Unread/ClearUnreadHook.m | `[PluginConfig shared].clearUnreadEnabled` | `[ClearUnreadConfig shared].clearUnreadEnabled` |
| Modules/SettingEntry/WPOtherVC.m | `config.clearUnreadEnabled`                | `[ClearUnreadConfig shared].clearUnreadEnabled` |

***

### 模块 3：JokerConfig（彩蛋）

**文件**：`Modules/Joker/JokerConfig.h/.m`

**旧 key**：`MioPlugin_EnableJoker` → **模块前缀**：`Joker_`

| @property     | 类型   | NSUserDefaults Key | 默认值 | 调用方                                                        |
| ------------- | ---- | ------------------ | --- | ---------------------------------------------------------- |
| `enableJoker` | BOOL | `Enabled`          | NO  | JokerHook.m:276/310/414/496/517, WPOtherVC.m:99 (gen func) |

**调用方文件**（3 个）：

| 文件                                                      | 当前写法                                | 改造后                                |
| ------------------------------------------------------- | ----------------------------------- | ---------------------------------- |
| Modules/Joker/JokerHook.m                               | `[PluginConfig shared].enableJoker` | `[JokerConfig shared].enableJoker` |
| Settings/Controllers/SettingGeneralFunctionController.m | `config.enableJoker`                | `[JokerConfig shared].enableJoker` |
| Modules/SettingEntry/WPOtherVC.m                        | —                                   | —                                  |

***

### 模块 4：GroupExitConfig（退群监控）

**文件**：`Modules/GroupExit/GroupExitConfig.h/.m`

**旧 key**：`MioPlugin_EnableGroupExitMonitor` → **模块前缀**：`GroupExit_`

| @property                | 类型   | NSUserDefaults Key | 默认值 | 调用方                                                         |
| ------------------------ | ---- | ------------------ | --- | ----------------------------------------------------------- |
| `enableGroupExitMonitor` | BOOL | `Enabled`          | NO  | GroupExitHook.m:265, SettingGeneralFunctionController.m:119 |

**注意**：当前 `PluginConfig` 的 `setEnableGroupExitMonitor:` setter 中有 `[GroupExitHook startMonitoring/stopMonitoring]` 逻辑。需移到 `GroupExitConfig`。

**调用方文件**（2 个）：

| 文件                                                      | 当前写法                                           | 改造后                                               |
| ------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------- |
| Modules/GroupExit/GroupExitHook.m                       | `[PluginConfig shared].enableGroupExitMonitor` | `[GroupExitConfig shared].enableGroupExitMonitor` |
| Settings/Controllers/SettingGeneralFunctionController.m | `config.enableGroupExitMonitor`                | `[GroupExitConfig shared].enableGroupExitMonitor` |

***

### 模块 5：RedEnvelopConfig（红包）

**文件**：`Modules/RedEnvelop/RedEnvelopConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`RedEnvelop_`

| @property                      | 类型           | NSUserDefaults Key   | 默认值     | 调用方                                                      |
| ------------------------------ | ------------ | -------------------- | ------- | -------------------------------------------------------- |
| `autoRedEnvelop`               | BOOL         | `Auto`               | NO      | RedEnvelopHook.m:63/231/371, SettingRedEnvelopController |
| `redEnvelopCatchMe`            | BOOL         | `CatchMe`            | NO      | RedEnvelopHook.m:118/120, SettingRedEnvelopController    |
| `personalRedEnvelopEnable`     | BOOL         | `Personal`           | NO      | RedEnvelopHook.m:119, SettingRedEnvelopController        |
| `redEnvelopDelay`              | unsigned int | `Delay`              | 0       | RedEnvelopHook.m:223, SettingRedEnvelopController        |
| `redEnvelopeDetail`            | BOOL         | `Detail`             | NO      | RedEnvelopHook.m:543, SettingRedEnvelopController        |
| `redEnvelopTextFilterEnabled`  | BOOL         | `TextFilterEnabled`  | NO      | RedEnvelopHook.m:196                                     |
| `redEnvelopTextFilter`         | NSString     | `TextFilter`         | @""     | RedEnvelopHook.m:196-197                                 |
| `redEnvelopGroupFilterEnabled` | BOOL         | `GroupFilterEnabled` | NO      | RedEnvelopHook.m:131                                     |
| `redEnvelopGroupFilterList`    | NSArray      | `GroupFilterList`    | @\[]    | RedEnvelopHook.m:131-132, SettingRedEnvelopController    |
| `redEnvelopAutoReply`          | BOOL         | `AutoReply`          | NO      | RedEnvelopHook.m:404                                     |
| `redEnvelopAutoReplyInGroup`   | BOOL         | `AutoReplyInGroup`   | NO      | RedEnvelopHook.m:406                                     |
| `redEnvelopAutoReplyStr`       | NSString     | `AutoReplyStr`       | @"谢谢老板" | RedEnvelopHook.m:404/425/437                             |
| `redEnvelopBlackList`          | NSArray      | `BlackList`          | @\[]    | RedEnvelopHook.m:125-126                                 |

**调用方文件**（2 个）：

| 文件                                                 | 当前写法                                                       | 改造后                                          |
| -------------------------------------------------- | ---------------------------------------------------------- | -------------------------------------------- |
| Modules/RedEnvelop/RedEnvelopHook.m                | `config.autoRedEnvelop`, `config.redEnvelopCatchMe`, ...   | `[RedEnvelopConfig shared].autoRedEnvelop` 等 |
| Settings/Controllers/SettingRedEnvelopController.m | `config.autoRedEnvelop`, `config.redEnvelopBlackList`, ... | `[RedEnvelopConfig shared].autoRedEnvelop` 等 |

***

### 模块 6：AutoTransferConfig（自动转账）

**文件**：`Modules/AutoTransfer/AutoTransferConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`AutoTransfer_`

| @property                         | 类型           | NSUserDefaults Key | 默认值          | 调用方                        |
| --------------------------------- | ------------ | ------------------ | ------------ | -------------------------- |
| `autoConfirmTransfer`             | BOOL         | `Enabled`          | NO           | AutoTransferHook.m:107/353 |
| `autoConfirmTransferPersonal`     | BOOL         | `Personal`         | NO           | AutoTransferHook.m:174     |
| `autoConfirmTransferGroup`        | BOOL         | `Group`            | NO           | AutoTransferHook.m:173     |
| `autoConfirmTransferDelay`        | unsigned int | `Delay`            | 0            | AutoTransferHook.m:269     |
| `autoConfirmTransferMaxAmount`    | long long    | `MaxAmount`        | 0            | AutoTransferHook.m:230-231 |
| `autoConfirmTransferAutoReply`    | BOOL         | `AutoReply`        | NO           | AutoTransferHook.m:300     |
| `autoConfirmTransferAutoReplyStr` | NSString     | `AutoReplyStr`     | @"已收到款项，谢谢！" | AutoTransferHook.m:300-301 |

**调用方文件**（1 个）：

| 文件                                      | 当前写法                           | 改造后                                                 |
| --------------------------------------- | ------------------------------ | --------------------------------------------------- |
| Modules/AutoTransfer/AutoTransferHook.m | `config.autoConfirmTransfer` 等 | `[AutoTransferConfig shared].autoConfirmTransfer` 等 |

***

### 模块 7：ChatTopBarConfig（聊天顶栏）

**文件**：`Modules/ChatTopBar/ChatTopBarConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`ChatTopBar_`

| @property                    | 类型        | NSUserDefaults Key       | 默认值     | 调用方                                                              |
| ---------------------------- | --------- | ------------------------ | ------- | ---------------------------------------------------------------- |
| `showChatAvatar`             | BOOL      | `ShowAvatar`             | NO      | ChatTopBarHook.m:132/152/183, SettingChatTopBarController.m      |
| `avatarTapFeedback`          | BOOL      | `AvatarTapFeedback`      | NO      | ChatTopBarHook.m:25                                              |
| `showAddTime`                | BOOL      | `ShowAddTime`            | NO      | MioChatAvatarTitleView\.m:298                                    |
| `showGroupMemberCount`       | BOOL      | `ShowGroupMemberCount`   | NO      | MioChatAvatarTitleView\.m:288                                    |
| `chatDisplayMode`            | NSInteger | `DisplayMode`            | 3       | MioChatAvatarTitleView\.m:83                                     |
| `chatAvatarSize`             | CGFloat   | `AvatarSize`             | 30.0    | MioChatAvatarTitleView\.m:86/435                                 |
| `chatAvatarSpacing`          | CGFloat   | `AvatarSpacing`          | 6.0     | MioChatAvatarTitleView\.m:87                                     |
| `chatAvatarCornerRadius`     | CGFloat   | `AvatarCornerRadius`     | 100.0   | MioChatAvatarTitleView\.m:422                                    |
| `chatNicknameFontSize`       | CGFloat   | `NicknameFontSize`       | 9.0     | MioChatAvatarTitleView\.m:71/89/431                              |
| `chatSeparatorSize`          | CGFloat   | `SeparatorSize`          | 30.0    | MioChatAvatarTitleView\.m:62                                     |
| `chatTitleViewWidth`         | CGFloat   | `TitleViewWidth`         | 210.0   | ChatTopBarHook.m:93                                              |
| `chatVerticalOffset`         | CGFloat   | `VerticalOffset`         | 0       | —                                                                |
| `chatHorizontalOffset`       | CGFloat   | `HorizontalOffset`       | 0       | —                                                                |
| `chatNicknameOffsetY`        | CGFloat   | `NicknameOffsetY`        | 0       | MioChatAvatarTitleView\.m:131/160/186/257                        |
| `chatNicknameOffsetX`        | CGFloat   | `NicknameOffsetX`        | 0       | MioChatAvatarTitleView\.m:130/158/185/256                        |
| `chatSeparatorText`          | NSString  | `SeparatorText`          | @""     | MioChatAvatarTitleView\.m:91/214/217/218/411/413                 |
| `chatSeparatorIcon`          | NSString  | `SeparatorIcon`          | nil     | MioChatAvatarTitleView\.m:393                                    |
| `chatSeparatorGIF`           | NSString  | `SeparatorGIF`           | nil     | MioChatAvatarTitleView\.m:378                                    |
| `chatAvatarBlacklist`        | NSString  | `AvatarBlacklist`        | nil     | ChatTopBarHook.m:67, ChatTopBarBlacklistEditorVC.m               |
| `chatGroupMemberCountSuffix` | NSString  | `GroupMemberCountSuffix` | @"%u人"  | MioChatAvatarTitleView\.m:292-293, SettingChatTopBarController.m |
| `chatAddTimeSuffixFormat`    | NSString  | `AddTimeSuffixFormat`    | @"%ld天" | MioChatAvatarTitleView\.m:313-314, SettingChatTopBarController.m |

**调用方文件**（5 个）：

| 文件                                                 | 当前写法                                                                                                           | 改造后                                                |
| -------------------------------------------------- | -------------------------------------------------------------------------------------------------------------- | -------------------------------------------------- |
| Modules/ChatTopBar/ChatTopBarHook.m                | `config.showChatAvatar`, `config.avatarTapFeedback`, `config.chatTitleViewWidth`, `config.chatAvatarBlacklist` | `[ChatTopBarConfig shared].showChatAvatar` 等       |
| Modules/ChatTopBar/MioChatAvatarTitleView\.m       | `config.chatDisplayMode`, `config.chatAvatarSize`, ...                                                         | `[ChatTopBarConfig shared].chatDisplayMode` 等      |
| Modules/ProfileCardBg/ProfileCardBgHook.m          | `config.chatAvatarCornerRadius`                                                                                | `[ChatTopBarConfig shared].chatAvatarCornerRadius` |
| Settings/Controllers/SettingChatTopBarController.m | `config.showChatAvatar`, `config.chatSeparatorText`, ...                                                       | `[ChatTopBarConfig shared].showChatAvatar` 等       |
| Settings/Controllers/ChatTopBarBlacklistEditorVC.m | `[PluginConfig shared].chatAvatarBlacklist`                                                                    | `[ChatTopBarConfig shared].chatAvatarBlacklist`    |

***

### 模块 8：MessageTimeConfig（消息时间）

**文件**：`Modules/MessageTime/MessageTimeConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`MsgTime_`

| @property                     | 类型        | NSUserDefaults Key            | 默认值         | 调用方                           |
| ----------------------------- | --------- | ----------------------------- | ----------- | ----------------------------- |
| `showMessageTime`             | BOOL      | `Show`                        | NO          | MessageTimeHook.m:524/786/836 |
| `messageTimeFontSize`         | CGFloat   | `FontSize`                    | 7.0         | MessageTimeHook.m:469/608/838 |
| `messageTimeBoldFont`         | BOOL      | `BoldFont`                    | NO          | MessageTimeHook.m:470/609     |
| `messageTimeFormat`           | NSString  | `Format`                      | @"HH:mm:ss" | MessageTimeHook.m:839         |
| `messageTimeCustomFormat`     | NSString  | `CustomFormat`                | nil         | MessageTimeHook.m:598         |
| `messageTimePosition`         | NSInteger | `Position`                    | 1           | MessageTimeHook.m:550/786/837 |
| `messageTimeOffsetX`          | CGFloat   | `OffsetX`                     | 0           | MessageTimeHook.m:670/840     |
| `messageTimeOffsetY`          | CGFloat   | `OffsetY`                     | 0           | MessageTimeHook.m:671/841     |
| `messageTimeTextColor`        | NSString  | `TextColor`                   | @"#999999"  | —（仅在 loadDefaults 设置默认值）      |
| `messageTimeBubbleExtWidth`   | CGFloat   | `BubbleExtWidth`              | 0           | MessageTimeHook.m:794         |
| `messageTimeCornerRadius`     | CGFloat   | `CornerRadius`                | 0           | MessageTimeHook.m:477/650     |
| `disableLabelWidthAdjustment` | BOOL      | `DisableLabelWidthAdjustment` | NO          | —                             |

#### 时间配色属性（8 个）

| @property                        | 类型       | NSUserDefaults Key    | 默认值          | 调用方                   |
| -------------------------------- | -------- | --------------------- | ------------ | --------------------- |
| `senderTextColorHex`             | NSString | `SenderColor`         | @"#808080"   | MessageTimeHook.m:624 |
| `senderTextColorDarkHex`         | NSString | `SenderColorDark`     | @"#BFBFBF"   | MessageTimeHook.m:625 |
| `senderBackgroundColorHex`       | NSString | `SenderBgColor`       | @"#00000000" | MessageTimeHook.m:626 |
| `senderBackgroundColorDarkHex`   | NSString | `SenderBgColorDark`   | @"#00000000" | MessageTimeHook.m:627 |
| `receiverTextColorHex`           | NSString | `ReceiverColor`       | @"#808080"   | MessageTimeHook.m:624 |
| `receiverTextColorDarkHex`       | NSString | `ReceiverColorDark`   | @"#BFBFBF"   | MessageTimeHook.m:625 |
| `receiverBackgroundColorHex`     | NSString | `ReceiverBgColor`     | @"#00000000" | MessageTimeHook.m:626 |
| `receiverBackgroundColorDarkHex` | NSString | `ReceiverBgColorDark` | @"#00000000" | MessageTimeHook.m:627 |

#### 好友添加时间（2 个）

| @property             | 类型       | NSUserDefaults Key  | 默认值             | 调用方                   |
| --------------------- | -------- | ------------------- | --------------- | --------------------- |
| `showAddTimeSuffix`   | BOOL     | `ShowAddTimeSuffix` | NO              | MessageTimeHook.m:765 |
| `addTimeSuffixFormat` | NSString | `AddTimeSuffix`     | @"(yyyy-MM-dd)" | MessageTimeHook.m:777 |

#### 隐藏聊天时间分隔线（1 个）

| @property      | 类型   | NSUserDefaults Key | 默认值 | 调用方                                                           |
| -------------- | ---- | ------------------ | --- | ------------------------------------------------------------- |
| `hideChatTime` | BOOL | `HideChatTime`     | NO  | MessageTimeHook.m:742/752, SettingMessageTimeController.m:132 |

**调用方文件**（2 个）：

| 文件                                                  | 当前写法                                                            | 改造后                                            |
| --------------------------------------------------- | --------------------------------------------------------------- | ---------------------------------------------- |
| Modules/MessageTime/MessageTimeHook.m               | `config.showMessageTime`, `config.messageTimeFontSize`, 全部配色属性等 | `[MessageTimeConfig shared].showMessageTime` 等 |
| Settings/Controllers/SettingMessageTimeController.m | `config.showMessageTime`, `config.messageTimePosition`, 全部配色属性等 | `[MessageTimeConfig shared]` 等                 |

***

### 模块 9：UIPurifyConfig（界面净化）

**文件**：`Modules/Layout/UIPurifyConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`UIPurify_`

| @property              | 类型   | NSUserDefaults Key     | 默认值 | 调用方                        |
| ---------------------- | ---- | ---------------------- | --- | -------------------------- |
| `hideSeparatorLine`    | BOOL | `HideSeparatorLine`    | NO  | UIPurifyHook.m:13/20/27/37 |
| `hideRevokeHint`       | BOOL | `HideRevokeHint`       | NO  | WPUIPurifyVC.m:31          |
| `hidePatHint`          | BOOL | `HidePatHint`          | NO  | WPUIPurifyVC.m:32          |
| `hideVoiceRedDot`      | BOOL | `HideVoiceRedDot`      | NO  | WPUIPurifyVC.m:33          |
| `hideBubbleBackground` | BOOL | `HideBubbleBackground` | NO  | WPUIPurifyVC.m:48          |
| `disableDictation`     | BOOL | `DisableDictation`     | NO  | WPUIPurifyVC.m:52          |

**调用方文件**（2 个）：

| 文件                                  | 当前写法                                                                  | 改造后                                           |
| ----------------------------------- | --------------------------------------------------------------------- | --------------------------------------------- |
| Modules/Layout/UIPurifyHook.m       | `[PluginConfig shared].hideSeparatorLine`, `config.hideSeparatorLine` | `[UIPurifyConfig shared].hideSeparatorLine`   |
| Modules/SettingEntry/WPUIPurifyVC.m | `config.hideSeparatorLine`, `config.hideRevokeHint`, ...              | `[UIPurifyConfig shared].hideSeparatorLine` 等 |

***

### 模块 10：HideAvatarConfig（隐藏头像）

**文件**：`Modules/HideAvatar/HideAvatarConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`HideAvatar_`

| @property              | 类型   | NSUserDefaults Key | 默认值 | 调用方                                                     |
| ---------------------- | ---- | ------------------ | --- | ------------------------------------------------------- |
| `hideC2COtherAvatar`   | BOOL | `C2COther`         | NO  | HideAvatarHook.m:126/156, SettingAvatarHideController.m |
| `hideC2CSelfAvatar`    | BOOL | `C2CSelf`          | NO  | HideAvatarHook.m:127/155, SettingAvatarHideController.m |
| `hideGroupOtherAvatar` | BOOL | `GroupOther`       | NO  | HideAvatarHook.m:128/161, SettingAvatarHideController.m |
| `hideGroupSelfAvatar`  | BOOL | `GroupSelf`        | NO  | HideAvatarHook.m:129/160, SettingAvatarHideController.m |
| `hideOAOtherAvatar`    | BOOL | `OAOther`          | NO  | HideAvatarHook.m:130/166, SettingAvatarHideController.m |
| `hideOASelfAvatar`     | BOOL | `OASelf`           | NO  | HideAvatarHook.m:131/165, SettingAvatarHideController.m |

**调用方文件**（2 个）：

| 文件                                                 | 当前写法                             | 改造后                                              |
| -------------------------------------------------- | -------------------------------- | ------------------------------------------------ |
| Modules/HideAvatar/HideAvatarHook.m                | `config.hideC2COtherAvatar`, ... | `[HideAvatarConfig shared].hideC2COtherAvatar` 等 |
| Settings/Controllers/SettingAvatarHideController.m | `config.hideC2COtherAvatar`, ... | `[HideAvatarConfig shared].hideC2COtherAvatar` 等 |

***

### 模块 11：PlaceholderTextConfig（文本占位）

**文件**：`Modules/PlaceholderText/PlaceholderTextConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`Placeholder_`

| @property                 | 类型       | NSUserDefaults Key | 默认值        | 调用方                                               |
| ------------------------- | -------- | ------------------ | ---------- | ------------------------------------------------- |
| `placeholderTextEnabled`  | BOOL     | `Enabled`          | NO         | PlaceholderTextHook.m:91, WPUIPlaceholderTextVC.m |
| `placeholderTextBold`     | BOOL     | `Bold`             | NO         | PlaceholderTextHook.m:122                         |
| `placeholderTextText`     | NSString | `Text`             | @""        | PlaceholderTextHook.m:94, WPUIPlaceholderTextVC.m |
| `placeholderTextFontSize` | CGFloat  | `FontSize`         | 15.0       | PlaceholderTextHook.m:118                         |
| `placeholderTextAlpha`    | CGFloat  | `Alpha`            | 0.6        | PlaceholderTextHook.m:101                         |
| `placeholderTextColorHex` | NSString | `ColorHex`         | @"#808080" | PlaceholderTextHook.m:100                         |

**调用方文件**（2 个）：

| 文件                                            | 当前写法                                 | 改造后                                                       |
| --------------------------------------------- | ------------------------------------ | --------------------------------------------------------- |
| Modules/PlaceholderText/PlaceholderTextHook.m | `config.placeholderTextEnabled`, ... | `[PlaceholderTextConfig shared].placeholderTextEnabled`   |
| Modules/SettingEntry/WPUIPlaceholderTextVC.m  | `config.placeholderTextEnabled`, ... | `[PlaceholderTextConfig shared].placeholderTextEnabled` 等 |

***

### 模块 12：ListCornerRadiusConfig（列表圆角）

**文件**：`Modules/ListCornerRadius/ListCornerRadiusConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`ListCorner_`

| @property                           | 类型       | NSUserDefaults Key       | 默认值        | 调用方                                                            |
| ----------------------------------- | -------- | ------------------------ | ---------- | -------------------------------------------------------------- |
| `globalCornerRadiusEnabled`         | BOOL     | `Enabled`                | NO         | ListCornerRadiusHook.m:79/102/119/257/282/311/382/391/418      |
| `globalCornerMyPageEnabled`         | BOOL     | `MyPage`                 | NO         | ListCornerRadiusHook.m:84                                      |
| `globalCornerContactsPageEnabled`   | BOOL     | `ContactsPage`           | NO         | ListCornerRadiusHook.m:87                                      |
| `globalCornerDiscoverPageEnabled`   | BOOL     | `DiscoverPage`           | NO         | ListCornerRadiusHook.m:90                                      |
| `listSearchCornerRadius`            | BOOL     | `Search`                 | NO         | ListCornerRadiusHook.m:102                                     |
| `myPageHideArrow`                   | BOOL     | `MyPageHideArrow`        | NO         | ProfileCardBgHook.m:671                                        |
| `listCellBorder`                    | BOOL     | `CellBorder`             | NO         | ListCornerRadiusHook.m:663                                     |
| `listCellCornerRadius`              | CGFloat  | `CellRadius`             | 18.0       | ListCornerRadiusHook.m:104/203/314                             |
| `listCellMargin`                    | CGFloat  | `CellMargin`             | 9.0        | ListCornerRadiusHook.m:154/317, ProfileCardBgHook.m:702        |
| `listCellLightBgColor`              | NSString | `LightBg`                | @"#FFFFFF" | ListCornerRadiusHook.m:198/266/291/352, ProfileCardBgHook.m:68 |
| `listCellDarkBgColor`               | NSString | `DarkBg`                 | @"#1C1C1E" | ListCornerRadiusHook.m:197/266/291/352, ProfileCardBgHook.m:67 |
| `listCellBorderWidth`               | CGFloat  | `BorderWidth`            | 2.0        | ListCornerRadiusHook.m:653/669                                 |
| `listCellBorderColor`               | NSString | `BorderColor`            | @"#E5E5E5" | ListCornerRadiusHook.m:674                                     |
| `listCellBorderColorDarkHex`        | NSString | `BorderColorDark`        | @"#3A3A3C" | ListCornerRadiusHook.m:674                                     |
| `listProfileCardBorderEnabled`      | BOOL     | `ProfileBorder`          | NO         | ProfileCardBgHook.m:88                                         |
| `listProfileCardBorderWidth`        | CGFloat  | `ProfileBorderWidth`     | 2.0        | ProfileCardBgHook.m:89                                         |
| `listProfileCardBorderColor`        | NSString | `ProfileBorderColor`     | @"#E5E5E5" | ProfileCardBgHook.m:93                                         |
| `listProfileCardBorderColorDarkHex` | NSString | `ProfileBorderColorDark` | @"#3A3A3C" | ProfileCardBgHook.m:93                                         |

> `myPageHideArrow`、`listProfileCardBorder*` 被 ProfileCardBgHook 使用，但它们属于列表圆角模块，可留在 ListCornerRadiusConfig 中。

**调用方文件**（4 个）：

| 文件                                                       | 当前写法                                                                                                                                                                                                                                                                                                       | 改造后                                                              |
| -------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------- |
| Modules/ListCornerRadius/ListCornerRadiusHook.m          | `config.globalCornerRadiusEnabled`, `config.listCellCornerRadius`, 全部配色属性                                                                                                                                                                                                                                  | `[ListCornerRadiusConfig shared].globalCornerRadiusEnabled` 等    |
| Modules/ProfileCardBg/ProfileCardBgHook.m                | `config.listCellMargin`, `config.listCellLightBgColor`, `config.listCellDarkBgColor`, `config.listProfileCardBorderEnabled`, `config.listProfileCardBorderWidth`, `config.listProfileCardBorderColor`, `config.listProfileCardBorderColorDarkHex`, `config.listCellCornerRadius`, `config.myPageHideArrow` | `[ListCornerRadiusConfig shared].listCellMargin` 等               |
| Settings/Controllers/SettingListCornerRadiusController.m | `config.globalCornerRadiusEnabled`, `config.listSearchCornerRadius`, `config.listCellBorder`                                                                                                                                                                                                               | `[ListCornerRadiusConfig shared]`                                |
| Settings/Controllers/SettingCardBackgroundController.m   | `config.listProfileCardBorderEnabled`, `config.myPageHideArrow`                                                                                                                                                                                                                                            | `[ListCornerRadiusConfig shared].listProfileCardBorderEnabled` 等 |

***

### 模块 13：CardBgConfig（卡片背景）

**文件**：`Modules/ProfileCardBg/CardBgConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`CardBg_`

| @property                 | 类型        | NSUserDefaults Key | 默认值        | 调用方                                                                       |
| ------------------------- | --------- | ------------------ | ---------- | ------------------------------------------------------------------------- |
| `cardBgMaterialEnabled`   | BOOL      | `Material`         | NO         | ProfileCardBgHook.m:16/683/767/812, SettingCardBackgroundController.m     |
| `cardBgCornerEnabled`     | BOOL      | `Corner`           | NO         | ProfileCardBgHook.m:51/683/698/757/814, SettingCardBackgroundController.m |
| `cardBgCornerUseGlobal`   | BOOL      | `CornerUseGlobal`  | NO         | ProfileCardBgHook.m:59/701/709                                            |
| `cardBgCornerRadius`      | CGFloat   | `CornerRadius`     | 18.0       | ProfileCardBgHook.m:75                                                    |
| `cardBgCornerMargin`      | CGFloat   | `CornerMargin`     | 9.0        | ProfileCardBgHook.m:703-704/710                                           |
| `cardBgCornerBgColor`     | NSString  | `BgColor`          | @"#FFFFFF" | ProfileCardBgHook.m:81                                                    |
| `cardBgCornerDarkBgColor` | NSString  | `DarkBgColor`      | @"#1C1C1E" | ProfileCardBgHook.m:81                                                    |
| `cardBgStrokeWidth`       | CGFloat   | `StrokeWidth`      | 2.0        | ProfileCardBgHook.m:67/68                                                 |
| `cardBgHidden`            | BOOL      | `Hidden`           | NO         | ProfileCardBgHook.m:681, SettingCardBackgroundController.m                |
| `cardBgHideStateEnabled`  | BOOL      | `HideState`        | NO         | ProfileCardBgHook.m:667, SettingCardBackgroundController.m                |
| `cardBgListSpacing`       | CGFloat   | `ListSpacing`      | 0          | ProfileCardBgHook.m:25                                                    |
| `cardBgImagePath`         | NSString  | `ImagePath`        | nil        | ProfileCardBgHook.m:181/319/813, SettingCardBackgroundController.m        |
| `cardBgFillMode`          | NSInteger | `FillMode`         | 0          | ProfileCardBgHook.m:493/539/618                                           |
| `cardBgAlignment`         | NSInteger | `Alignment`        | 0          | ProfileCardBgHook.m:494                                                   |
| `cardBgLayer`             | NSInteger | `Layer`            | 0          | ProfileCardBgHook.m:561                                                   |
| `cardBgOffsetY`           | CGFloat   | `OffsetY`          | 0          | ProfileCardBgHook.m:521/555                                               |
| `cardBgOffsetX`           | CGFloat   | `OffsetX`          | 0          | ProfileCardBgHook.m:521/554                                               |

**调用方文件**（2 个）：

| 文件                                                     | 当前写法                                                                                                                                                                                                                                              | 改造后                                             |
| ------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------- |
| Modules/ProfileCardBg/ProfileCardBgHook.m              | `config.cardBgMaterialEnabled`, `config.cardBgCornerEnabled`, `config.cardBgImagePath`, 全部偏移属性                                                                                                                                                    | `[CardBgConfig shared].cardBgMaterialEnabled` 等 |
| Settings/Controllers/SettingCardBackgroundController.m | `config.cardBgMaterialEnabled`, `config.cardBgCornerEnabled`, `config.cardBgImagePath`, `config.cardBgFillMode`, `config.cardBgLayer`, `config.cardBgAlignment`, `config.cardBgHidden`, `config.cardBgHideStateEnabled`, `config.myPageHideArrow` | `[CardBgConfig shared].cardBgMaterialEnabled` 等 |

***

### 模块 14：DevToolsConfig（开发者工具）

**文件**：`Modules/DevTools/DevToolsConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`DevTools_`

| @property             | 类型       | NSUserDefaults Key | 默认值 | 调用方                                                      |
| --------------------- | -------- | ------------------ | --- | -------------------------------------------------------- |
| `nsLogMonitorEnabled` | BOOL     | `NsLogMonitor`     | NO  | MioLogMonitor.m, SettingDevToolsController               |
| `nsLogLocalSave`      | BOOL     | `NsLogLocalSave`   | NO  | MioLogMonitor.m:244, SettingDevToolsController           |
| `nsLogKeywords`       | NSString | `NsLogKeywords`    | @"" | MioLogMonitor.m:84/89/213/215, SettingDevToolsController |
| `navMonitorEnabled`   | BOOL     | `NavMonitor`       | NO  | SettingDevToolsController.m:116                          |

**调用方文件**（3 个）：

| 文件                                               | 当前写法                                                                                                      | 改造后                                       |
| ------------------------------------------------ | --------------------------------------------------------------------------------------------------------- | ----------------------------------------- |
| Modules/DevTools/MioLogMonitor.m                 | `config.nsLogKeywords`, `[PluginConfig shared].nsLogLocalSave`                                            | `[DevToolsConfig shared].nsLogKeywords` 等 |
| Modules/DevTools/MioNavMonitor.m                 | `#import PluginConfig.h`                                                                                  | `#import DevToolsConfig.h`                |
| Modules/DevTools/DevToolsHook.m                  | `#import PluginConfig.h`                                                                                  | `#import DevToolsConfig.h`                |
| Settings/Controllers/SettingDevToolsController.m | `config.nsLogMonitorEnabled`, `config.nsLogLocalSave`, `config.nsLogKeywords`, `config.navMonitorEnabled` | `[DevToolsConfig shared]`                 |

***

### 模块 15：AttachLayoutConfig（附件布局）

**文件**：`Modules/Layout/AttachLayoutConfig.h/.m`

**旧 key 前缀**：`MioPlugin_` → **模块前缀**：`AttachLayout_`

| @property             | 类型       | NSUserDefaults Key | 默认值 | 调用方                                               |
| --------------------- | -------- | ------------------ | --- | ------------------------------------------------- |
| `attachLayoutEnabled` | BOOL     | `Enabled`          | NO  | UIAttachLayoutHook.m:21, WPUIAttachmentLayoutVC.m |
| `attachLayoutColumns` | NSString | `Columns`          | nil | UIAttachLayoutHook.m:26                           |
| `attachLayoutRows`    | NSString | `Rows`             | nil | UIAttachLayoutHook.m:33                           |

**注意**：此时 NSUserDefaults key 的构造注意（前缀 + key）。模块前缀固定为 `AttachLayout_`，当前用的是 `AttachLayout_Columns`、`AttachLayout_Rows`。

**调用方文件**（2 个）：

| 文件                                            | 当前写法                                                                                  | 改造后                                                 |
| --------------------------------------------- | ------------------------------------------------------------------------------------- | --------------------------------------------------- |
| Modules/Layout/UIAttachLayoutHook.m           | `[PluginConfig shared].attachLayoutEnabled`                                           | `[AttachLayoutConfig shared].attachLayoutEnabled`   |
| Modules/SettingEntry/WPUIAttachmentLayoutVC.m | `config.attachLayoutEnabled`, `config.attachLayoutColumns`, `config.attachLayoutRows` | `[AttachLayoutConfig shared].attachLayoutEnabled` 等 |

***

## 四、文件改动清单

### 4.1 新建文件（30 个）

| #      | 文件                                                  | 代码量估算       |
| ------ | --------------------------------------------------- | ----------- |
| 1      | `Core/ConfigManager.h`                              | \~20 行      |
| 2      | `Core/ConfigManager.m`                              | \~120 行     |
| 3      | `Core/ConfigDescriptor.h`                           | \~30 行      |
| 4      | `Core/ConfigDescriptor.m`                           | \~50 行      |
| 5      | `Modules/Revoke/RevokeConfig.h`                     | \~30 行      |
| 6      | `Modules/Revoke/RevokeConfig.m`                     | \~50 行      |
| 7      | `Modules/Unread/ClearUnreadConfig.h`                | \~10 行      |
| 8      | `Modules/Unread/ClearUnreadConfig.m`                | \~20 行      |
| 9      | `Modules/Joker/JokerConfig.h`                       | \~10 行      |
| 10     | `Modules/Joker/JokerConfig.m`                       | \~20 行      |
| 11     | `Modules/GroupExit/GroupExitConfig.h`               | \~10 行      |
| 12     | `Modules/GroupExit/GroupExitConfig.m`               | \~20 行      |
| 13     | `Modules/RedEnvelop/RedEnvelopConfig.h`             | \~20 行      |
| 14     | `Modules/RedEnvelop/RedEnvelopConfig.m`             | \~40 行      |
| 15     | `Modules/AutoTransfer/AutoTransferConfig.h`         | \~15 行      |
| 16     | `Modules/AutoTransfer/AutoTransferConfig.m`         | \~30 行      |
| 17     | `Modules/ChatTopBar/ChatTopBarConfig.h`             | \~30 行      |
| 18     | `Modules/ChatTopBar/ChatTopBarConfig.m`             | \~60 行      |
| 19     | `Modules/MessageTime/MessageTimeConfig.h`           | \~30 行      |
| 20     | `Modules/MessageTime/MessageTimeConfig.m`           | \~60 行      |
| 21     | `Modules/Layout/UIPurifyConfig.h`                   | \~15 行      |
| 22     | `Modules/Layout/UIPurifyConfig.m`                   | \~30 行      |
| 23     | `Modules/HideAvatar/HideAvatarConfig.h`             | \~15 行      |
| 24     | `Modules/HideAvatar/HideAvatarConfig.m`             | \~30 行      |
| 25     | `Modules/PlaceholderText/PlaceholderTextConfig.h`   | \~15 行      |
| 26     | `Modules/PlaceholderText/PlaceholderTextConfig.m`   | \~30 行      |
| 27     | `Modules/ListCornerRadius/ListCornerRadiusConfig.h` | \~25 行      |
| 28     | `Modules/ListCornerRadius/ListCornerRadiusConfig.m` | \~50 行      |
| 29     | `Modules/ProfileCardBg/CardBgConfig.h`              | \~25 行      |
| 30     | `Modules/ProfileCardBg/CardBgConfig.m`              | \~50 行      |
| 31     | `Modules/Layout/AttachLayoutConfig.h`               | \~10 行      |
| 32     | `Modules/Layout/AttachLayoutConfig.m`               | \~20 行      |
| 33     | `Modules/DevTools/DevToolsConfig.h`                 | \~10 行      |
| 34     | `Modules/DevTools/DevToolsConfig.m`                 | \~20 行      |
| <br /> | **合计新增**                                            | **\~920 行** |

### 4.2 修改文件

| #    | 文件                      | 修改内容                                                                                                                                                                         |
| ---- | ----------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1    | `Config/PluginConfig.h` | **删除** 全部 @property 和方法声明，保留 `colorFromHex:` 和 `isDarkMode`（如果仍有调用方）                                                                                                         |
| 2    | `Config/PluginConfig.m` | **删除** save/loadDefaults/resetAllConfig，**删除** 全部 @synthesize 和 ivar 操作，**保留** colorFromHex/hexFromColor/isDarkMode/applyTemplate/applyRevokeTemplate/notifyFormatForSession |
| 3    | `Tweak.m`               | 将 `#import "Config/PluginConfig.h"` 替换为所有模块的 import，或将 PluginConfig.h 改为 import 所有模块 Config                                                                                  |
| 4-38 | 35 个调用方文件               | 替换 `[PluginConfig shared]` → `[对应模块Config shared]`，更新 import                                                                                                                 |

### 4.3 删除文件

| # | 文件                      | 说明                |
| - | ----------------------- | ----------------- |
| — | `Config/PluginConfig.h` | 空壳后可删除，依赖方法移到对应模块 |

***

## 五、Settings KVC 映射

当前设置面板使用 `addSwitchRowInGroup:title:desc:key:isOn:cy:width:` 创建 UISwitch，内部通过 KVC `[config setValue:@(sender.on) forKey:key]` 设置属性。

### 策略：每个设置控制器直接引用模块 Config

每个设置控制器中的代码统一替换：

```objc
// 改造前
PluginConfig *config = [PluginConfig shared];
config.autoRedEnvelop = YES;
[config save];

// 改造后
[RedEnvelopConfig shared].autoRedEnvelop = YES;
[ConfigManager saveAll];
```

全部设置控制器改动清单：

| 设置控制器                               | import 替换                                                       | 替换内容                                                                                                                      |
| ----------------------------------- | --------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------- |
| SettingRevokeController.m           | `PluginConfig.h` → `RevokeConfig.h`                             | `config.xxx` → `[RevokeConfig shared].xxx`                                                                                |
| SettingGeneralFunctionController.m  | `PluginConfig.h` → 多个模块 Config.h                                | `config.preventRecall` → `[RevokeConfig shared].preventRecall`, `config.enableJoker` → `[JokerConfig shared].enableJoker` |
| SettingChatTopBarController.m       | `PluginConfig.h` → `ChatTopBarConfig.h`                         | `config.xxx` → `[ChatTopBarConfig shared].xxx`                                                                            |
| SettingMessageTimeController.m      | `PluginConfig.h` → `MessageTimeConfig.h`                        | `config.xxx` → `[MessageTimeConfig shared].xxx`                                                                           |
| SettingRedEnvelopController.m       | `PluginConfig.h` → `RedEnvelopConfig.h`                         | `config.xxx` → `[RedEnvelopConfig shared].xxx`                                                                            |
| SettingCardBackgroundController.m   | `PluginConfig.h` → `CardBgConfig.h`, `ListCornerRadiusConfig.h` | `config.xxx` → `[CardBgConfig shared].xxx` / `[ListCornerRadiusConfig shared].xxx`                                        |
| SettingAvatarHideController.m       | `PluginConfig.h` → `HideAvatarConfig.h`                         | `config.xxx` → `[HideAvatarConfig shared].xxx`                                                                            |
| SettingListCornerRadiusController.m | `PluginConfig.h` → `ListCornerRadiusConfig.h`                   | `config.xxx` → `[ListCornerRadiusConfig shared].xxx`                                                                      |
| SettingDevToolsController.m         | `PluginConfig.h` → `DevToolsConfig.h`                           | `config.xxx` → `[DevToolsConfig shared].xxx`                                                                              |

所有设置控制器在赋值后调用 `[ConfigManager saveAll]` 代替原来的 `[config save]`。

***

## 六、ConfigManager 核心实现

### loadAll

```objc
+ (void)loadAll {
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            NSString *fullKey = [kPluginPrefix stringByAppendingFormat:@"%@%@", [cls modulePrefix], desc.key];
            id raw = [[NSUserDefaults standardUserDefaults] objectForKey:fullKey];
            
            if (raw) {
                switch (desc.type) {
                    case ConfigValueTypeBool:
                        [instance setValue:@([raw boolValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeInteger:
                        [instance setValue:@([raw integerValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeFloat:
                        [instance setValue:@([raw floatValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeString:
                        [instance setValue:([(NSString *)raw length] > 0 ? raw : desc.defaultValue) forKey:desc.key];
                        break;
                    case ConfigValueTypeArray:
                        [instance setValue:(raw ?: desc.defaultValue) forKey:desc.key];
                        break;
                }
            } else {
                [instance setValue:desc.defaultValue forKey:desc.key];
            }
        }
        
        // 特殊处理：NSKeyedArchiver 类型（sessionFormats / userFormats）
        if ([cls respondsToSelector:@selector(loadArchivedData)]) {
            [cls loadArchivedData];
        }
    }
}
```

### saveAll

```objc
+ (void)saveAll {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            NSString *fullKey = [kPluginPrefix stringByAppendingFormat:@"%@%@", [cls modulePrefix], desc.key];
            id value = [instance valueForKey:desc.key];
            
            if (value) {
                switch (desc.type) {
                    case ConfigValueTypeBool:
                        [d setBool:[value boolValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeInteger:
                        [d setInteger:[value integerValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeFloat:
                        [d setFloat:[value floatValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeString:
                        [d setObject:value forKey:fullKey];
                        break;
                    case ConfigValueTypeArray:
                        [d setObject:value forKey:fullKey];
                        break;
                }
            } else {
                [d removeObjectForKey:fullKey];  // ← 统一处理数据残留
            }
        }
    }
    
    [d synchronize];
}
```

### resetAll

```objc
+ (void)resetAll {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSDictionary *all = [d dictionaryRepresentation];
    for (NSString *key in all) {
        if ([key hasPrefix:kPluginPrefix]) {
            [d removeObjectForKey:key];
        }
    }
    [d synchronize];
    [self loadAll];
}
```

***

## 七、执行步骤

### Step 1：创建基础设施

```
创建 ConfigDescriptor.h/.m
创建 ConfigManager.h/.m
```

### Step 2：逐个创建模块 Config 类

按依赖顺序（先创建被其他模块引用的）：

1. RevokeConfig（包含 `notifyFormatForSession:user:`、`applyTemplate:`、`applyRevokeTemplate:` 方法迁移）
2. ChatTopBarConfig
3. MessageTimeConfig
4. RedEnvelopConfig
5. AutoTransferConfig
6. ListCornerRadiusConfig
7. CardBgConfig
8. ClearUnreadConfig
9. JokerConfig
10. GroupExitConfig（包含 `setEnableGroupExitMonitor:` setter 中 startMonitoring/stopMonitoring 逻辑）
11. UIPurifyConfig
12. HideAvatarConfig
13. PlaceholderTextConfig
14. AttachLayoutConfig
15. DevToolsConfig

### Step 3：注册模块

在 Tweak.m（或 ConfigManager 的 +load）中注册：

```objc
[ConfigManager registerModule:RevokeConfig.class];
[ConfigManager registerModule:ChatTopBarConfig.class];
[ConfigManager registerModule:MessageTimeConfig.class];
// ... 全部 15 个模块
```

### Step 4：替换调用方

将 35 个文件的 import 和 `[PluginConfig shared]` 替换为对应模块 Config。按模块分批替换，每批验证。

### Step 5：收尾

删除 PluginConfig.h/.m 中废弃的代码，保留工具方法（colorFromHex/isDarkMode 等）。

***

## 九、测试验证

| 测试项                 | 方法                            | 预期                                   |
| ------------------- | ----------------------------- | ------------------------------------ |
| save/load 一致性       | 设置各项值 → 杀掉进程 → 重启 → 检查设置值     | 所有设置值与保存前一致                          |
| 数据残留                | 清除一项设置（设为 nil/空）→ 重启 → 检查该项   | 正确恢复默认值，不显示旧数据                       |
| SessionFormats      | 设置会话格式 → 重启                   | 格式保留                                 |
| resetAll            | 点击恢复出厂                        | 所有 key 被清除，加载默认值                     |
| GroupExit setter 逻辑 | toggle enableGroupExitMonitor | startMonitoring/stopMonitoring 被正确调用 |

***

## 九、风险与注意事项

1. **KVC 命名一致性**：描述符表中的 `key` 必须与 `@property` 名称完全一致，否则 KVC 会崩溃。建议为每个模块 Config 类统一用 `key` 作为 @property 名。
2. **`sessionFormats`/`userFormats`** **特殊处理**：使用 NSKeyedArchiver 序列化，在 ConfigManager 的 saveAll/loadAll 中需特殊处理。建议在模块 Config 的 `-save`/`-load` 方法中覆盖默认行为，或通过 `@optional` 协议方法实现。
3. **`GroupExitConfig`** **的 setter 副作用**：目前的 `setEnableGroupExitMonitor:` 中有 `[GroupExitHook startMonitoring/stopMonitoring]` 调用。迁移时不能在 KVC 赋值中触发，需独立处理。建议在 `ConfigManager saveAll` 之后通知模块，或模块 Config 在 `save` 后检查值变化。
4. **`colorFromHex:`** **等工具方法**：目前被 ListCornerRadiusHook、ProfileCardBgHook、MessageTimeHook 等多处调用。建议保留在 PluginConfig 或移到独立的 WPColorUtil 中。

