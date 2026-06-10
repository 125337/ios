# 改造方案：改为 WCRefine 风格的数据获取方式

## 改造目标

将当前"在 delegate 中逐个提取字段 → 值类型传递"的方式，改为 WCRefine 风格的"存储 contact → 需要时用安全辅助函数读取"。

## 改造后数据流向

```
ChatTopBarHook.m (delegate)
  ↓  [contact performSelector:@selector(GetContact)]      ← ARC 安全获取
  ↓  popover = [[CSContactInfoPopoverController alloc]
  ↓              initWithContact:contact avatar:avatar]   ← 传入 contact
  ↓
CSContactInfoPopoverController.m
  ↓  self.contact = contact                               ← strong property 存储（ARC 安全）
  ↓  self.wxid = WXSafeStringGet(contact, @"m_nsUsrName") ← 提前提取 wxid
  ↓
viewDidLoad:
  ↓  valueForInfoKey: → WXSafeStringGet(self.contact, @"m_nsXXX")  ← 需要时读取
  ↓  groupMemberCountValue → 从 self.contact 读取群数据            ← 不需要群专属属性
```

---

## 改造步骤

### 步骤 1：在 ServiceHelper.h 增加两个安全读取函数

在 [ServiceHelper.h](file:///www/wwwroot/ios/MioPlugin/Core/ServiceHelper.h) 末尾增加两个内联函数，专门用于安全读取 contact 字段：

```objc
// ======== 安全读取辅助函数（仿 WCRefine FUN_00b5f9c0 / FUN_00b63ecc） ========

/// 安全读取 contact 的 NSString 字段，内部封装 respondsToSelector: 保护
static inline NSString *WXSafeStringGet(id obj, NSString *key) {
    if (!obj || !key.length) return nil;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return nil;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value isKindOfClass:[NSString class]] && ((NSString *)value).length > 0) {
        return (NSString *)value;
    }
    return nil;
}

/// 安全读取 contact 的 NSInteger 字段，内部封装 respondsToSelector: 保护，失败返回默认值
static inline NSInteger WXSafeIntegerGet(id obj, NSString *key, NSInteger defaultValue) {
    if (!obj || !key.length) return defaultValue;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return defaultValue;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value respondsToSelector:@selector(integerValue)]) {
        return [value integerValue];
    }
    return defaultValue;
}
```

**为什么放这里？** 因为 `ServiceHelper.h` 已经是所有模块公用的辅助头文件，这两个函数可供任何模块安全读取 contact 字段。

### 步骤 2：改造 CSContactInfoPopoverController.h

当前头文件包含 9 个独立属性 + 1 个 init 方法。改为只保留 contact + wxid + avatar：

```objc
// CSContactInfoPopoverController.h
#import <UIKit/UIKit.h>

@interface CSContactInfoPopoverController : UIViewController <UIAdaptivePresentationControllerDelegate>

@property (nonatomic, strong) id contact;              // WeChat CContact 对象（strong 持有）
@property (nonatomic, strong) NSString *wxid;          // 提前提取，用于判断群聊/公众号
@property (nonatomic, strong) UIImage *avatarImage;    // 头像

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar;

@end
```

**删除的属性**（共 7 个）：

| 要删除的属性 | 原因 |
|-------------|------|
| `nickname` | 读 `self.contact` 的 `m_nsNickName` |
| `remark` | 读 `self.contact` 的 `m_nsContactRemark` |
| `gender` | 读 `self.contact` 的 `m_nsGender` + 转换 |
| `location` | 读 `self.contact` 的 `m_nsCountry`/`m_nsProvince`/`m_nsCity` |
| `signature` | 读 `self.contact` 的 `m_nsSignature` |
| `groupOwner` | 读 `self.contact` 的 `m_nsChatRoomOwner` |
| `chatRoomMemList` | 读 `self.contact` 的 `m_nsChatRoomMemList` |
| `chatRoomAdminList` | 读 `self.contact` 的 `m_nsChatRoomAdminList` |

> 注意：`initWithWxid:nickname:avatar:` 改回 `initWithContact:avatar:`。

### 步骤 3：改造 CSContactInfoPopoverController.m

#### 3.1 修改 init 方法

从接收多个字符串改为接收 contact 对象：

```objc
- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        self.contact = contact;                    // strong property 存储（ARC 安全）
        self.wxid = WXSafeStringGet(contact, @"m_nsUsrName");  // 提前提取 wxid
        self.avatarImage = avatar;
    }
    return self;
}
```

#### 3.2 修改 buildAvatarCardAtY:width: 中的昵称读取

将：
```objc
nameLabel.text = self.nickname ?: @"微信用户";
```
改为：
```objc
nameLabel.text = WXSafeStringGet(self.contact, @"m_nsNickName") ?: @"微信用户";
```

#### 3.3 重写 valueForInfoKey: 方法

从读取 property 改为通过 `WXSafeStringGet`/`WXSafeIntegerGet` 读取 contact：

```objc
- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"nickname"]) {
        return WXSafeStringGet(self.contact, @"m_nsNickName") ?: @"";
    }
    if ([key isEqualToString:@"wxid"]) {
        return self.wxid ?: @"";
    }
    if ([key isEqualToString:@"remark"]) {
        NSString *v = WXSafeStringGet(self.contact, @"m_nsContactRemark");
        return v ?: @"未设置";
    }
    if ([key isEqualToString:@"gender"]) {
        return [self genderValue];
    }
    if ([key isEqualToString:@"location"]) {
        return [self locationValue];
    }
    if ([key isEqualToString:@"signature"]) {
        NSString *v = WXSafeStringGet(self.contact, @"m_nsSignature");
        return v ?: @"未设置";
    }
    if ([key isEqualToString:@"groupOwner"]) {
        return [self groupOwnerValue];
    }
    if ([key isEqualToString:@"groupMemberCount"]) {
        return [self groupMemberCountValue];
    }
    if ([key isEqualToString:@"verifyStatus"]) {
        return [self verifyStatusValue];
    }
    return @"";
}
```

#### 3.4 新增转换方法

增加三个从 contact 读取并转换的私有方法：

```objc
#pragma mark - 从 contact 读取转换

/// 性别（NSNumber → 文字）
- (NSString *)genderValue {
    NSInteger g = WXSafeIntegerGet(self.contact, @"m_nsGender", 0);
    if (g == 1) return @"男";
    if (g == 2) return @"女";
    return @"未知";
}

/// 地区（组装国家/省/市）
- (NSString *)locationValue {
    id contact = self.contact;
    if (!contact) return @"未设置";
    
    NSString *country = WXSafeStringGet(contact, @"m_nsCountry");
    NSString *province = WXSafeStringGet(contact, @"m_nsProvince");
    NSString *city = WXSafeStringGet(contact, @"m_nsCity");
    
    NSMutableArray *parts = [NSMutableArray array];
    if (country.length) [parts addObject:country];
    if (province.length) [parts addObject:province];
    if (city.length) [parts addObject:city];
    
    return parts.count > 0 ? [parts componentsJoinedByString:@" "] : @"未设置";
}

/// 群主 wxid
- (NSString *)groupOwnerValue {
    NSString *v = WXSafeStringGet(self.contact, @"m_nsChatRoomOwner");
    return v ?: @"未知";
}
```

#### 3.5 重写 groupMemberCountValue

从当前解析 `chatRoomMemList` 的方式改为直接使用 `self.contact`：

```objc
- (NSString *)groupMemberCountValue {
    id contact = self.contact;
    if (!contact) return @"未知";

    // 优先通过 CContactMgr 获取成员数
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
        unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(
            contactMgr, @selector(getGroupMemberCountForContact:), contact);
        if (count > 0) {
            // 尝试获取管理员数量
            NSString *adminList = WXSafeStringGet(contact, @"m_nsChatRoomAdminList");
            if (adminList.length) {
                NSArray *admins = [adminList componentsSeparatedByString:@";"];
                return [NSString stringWithFormat:@"群人员%lu人 管理员%lu人",
                        (unsigned long)count, (unsigned long)admins.count];
            }
            return [NSString stringWithFormat:@"%u 人", count];
        }
    }

    // fallback: 手动解析成员列表
    NSString *memList = WXSafeStringGet(contact, @"m_nsChatRoomMemList");
    if (memList.length) {
        NSArray *members = [memList componentsSeparatedByString:@";"];
        return [NSString stringWithFormat:@"群人员%lu人", (unsigned long)members.count];
    }

    return @"未知";
}
```

#### 3.6 verifyStatusValue 保持不变

当前实现已使用 `WXGetContactForWxid` + `respondsToSelector:`，可以保持不变。

#### 3.7 handleProfileNavigation 保持不变

当前实现已通过 `WXGetContactForWxid` 获取 contact，不在 viewDidLoad 路径上，可以保持不变。

#### 3.8 删除 loadAvatarForImageView 中的 contact 相关注释

当前代码中 `loadAvatarForWxid:self.wxid contact:nil` 保持 nil 即可，不需要改。

### 步骤 4：改造 ChatTopBarHook.m

将 delegate 方法从提取 7+ 字段简化为只传 contact：

```objc
- (void)avatarTitleView:(MioChatAvatarTitleView *)view
didTapAvatarWithContact:(id)contact
           avatarImage:(UIImage *)avatar
            sourceView:(UIView *)sourceView
                  wxid:(NSString *)wxid {
    PluginConfig *config = [PluginConfig shared];
    if (config.avatarTapFeedback) {
        UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc]
            initWithStyle:UIImpactFeedbackStyleLight];
        [generator prepare];
        [generator impactOccurred];
    }

    // 传入 contact，由 CSContactInfoPopoverController 内部用安全辅助函数读取数据
    CSContactInfoPopoverController *popover =
        [[CSContactInfoPopoverController alloc] initWithContact:contact
                                                        avatar:avatar];

    popover.modalPresentationStyle = UIModalPresentationPopover;
    popover.preferredContentSize = CGSizeMake(280, 400);

    UIPopoverPresentationController *popPC = popover.popoverPresentationController;
    popPC.sourceView = sourceView;
    popPC.sourceRect = sourceView.bounds;
    popPC.permittedArrowDirections = UIPopoverArrowDirectionAny;
    popPC.backgroundColor = [UIColor whiteColor];
    popPC.delegate = popover;

    UIViewController *presentingVC = WPGetTopVCForPresentation();
    if (!presentingVC) {
        presentingVC = (UIViewController *)view.chatController;
    }
    if (presentingVC) {
        [presentingVC presentViewController:popover animated:YES completion:nil];
    }
}
```

**改动要点**：
- 删除第 33-71 行（全部字段提取 + property 设置代码），约 40 行
- 改为第 32-36 行两行代码（创建 popover + 传入 contact）
- 注意：`wxid` 参数不再需要在外层提取，但 delegate 协议签名保持不变

### 步骤 5：MioChatAvatarTitleView.m — 无需改动

`onLeftAvatarTapped:` 已经用了 `performSelector:` 获取 contact，delegate 协议签名不变。

### 步骤 6：验证没有残留的已删除属性引用

全局搜索以下关键字，确认没有其他地方引用被删除的属性：

| 搜索关键词 | 预期结果 |
|-----------|----------|
| `self.nickname` | 只在 `CSContactInfoPopoverController.m` 中出现，需全部改为 `WXSafeStringGet` |
| `self.remark` | 无引用（被 `valueForInfoKey:` 中的 `WXSafeStringGet` 替代） |
| `self.gender` | 无引用（被 `genderValue` 替代） |
| `self.location` | 无引用（被 `locationValue` 替代） |
| `self.signature` | 无引用（被 `valueForInfoKey:` 中的 `WXSafeStringGet` 替代） |
| `self.groupOwner` | 无引用（被 `groupOwnerValue` 替代） |
| `self.chatRoomMemList` | 无引用（被 `groupMemberCountValue` 中的 contact 读取替代） |
| `self.chatRoomAdminList` | 无引用 |

### 步骤 7：验证 ServiceHelper.h 没有重复

`WXSafeStringGet` 和 `WXSafeIntegerGet` 是新增加的内联函数，确认使用前没有被其他地方定义过。

---

## 变更文件清单

| # | 文件 | 改动类型 | 行数变化 |
|---|------|----------|----------|
| 1 | [ServiceHelper.h](file:///www/wwwroot/ios/MioPlugin/Core/ServiceHelper.h) | 末尾增加 `WXSafeStringGet` / `WXSafeIntegerGet` | +30 行 |
| 2 | [CSContactInfoPopoverController.h](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/CSContactInfoPopoverController.h) | 删除 7 个属性，增加 `contact` 属性，改 init 签名 | -6 行 |
| 3 | [CSContactInfoPopoverController.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/CSContactInfoPopoverController.m) | 改 init、改 `valueForInfoKey:`、增 3 个转换方法、重写 `groupMemberCountValue` | ~+40/-20 行 |
| 4 | [ChatTopBarHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/ChatTopBarHook.m) | 删除全部字段提取代码，简化为只传 contact | -40 行 |
| 5 | [MioChatAvatarTitleView.m](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.m) | 无需改动 | 0 |
| 6 | [MioChatAvatarTitleView.h](file:///www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/MioChatAvatarTitleView.h) | 无需改动 | 0 |

**总计净减约 30 行代码**，同时获得更简洁、更易维护的架构。

---

## 安全性验证

| 关注点 | 结论 |
|--------|------|
| ARC 存储 contact 是否安全？ | **安全**。`self.contact = contact` 通过 strong property setter 触发 ARC retain，与 WCRefine 的 `_objc_storeStrong` 等效 |
| viewDidLoad 中读取 contact 是否安全？ | **安全**。因为 contact 已被 strong 持有，release 在 VC dealloc 时，viewDidLoad 时 contact 一定存活 |
| 群聊专属字段是否会导致 crash？ | **不 crash**。`WXSafeStringGet` 内部有 `respondsToSelector:` 保护，不存在的字段返回 nil |
| 第一次闪退（EXC_BAD_ACCESS）是否会复发？ | **不会**。导致第一次闪退的两个问题都已修复：`performSelector:` 获取 contact + property setter 存储 contact |
| 第二次闪退（unrecognized selector）是否会复发？ | **不会**。`WXSafeStringGet` / `WXSafeIntegerGet` 内部有 `respondsToSelector:` 保护 |

---

## 实施顺序

建议按以下顺序修改，每个步骤完成后可编译验证：

1. **ServiceHelper.h** — 先加辅助函数（只增加，不影响现有代码）
2. **CSContactInfoPopoverController.h** — 改属性定义和 init 签名
3. **CSContactInfoPopoverController.m** — 改实现（此时编译会报错，因为 delegate 还在用旧 init）
4. **ChatTopBarHook.m** — 改 delegate 方法（编译通过）
5. 全局搜索删除的属性名，确认无残留引用

---

## 与 WCRefine 方案的主要差异

| 方面 | WCRefine | 我们的实现 |
|------|----------|-----------|
| 辅助函数命名 | `FUN_00b5f9c0` / `FUN_00b63ecc`（反编译命名） | `WXSafeStringGet` / `WXSafeIntegerGet`（语义化） |
| 辅助函数位置 | Presenter 类内部 | `ServiceHelper.h`（全局可用） |
| contact 存储时机 | `presentProfileCardForContact:` 入口 | `initWithContact:avatar:` 初始化 |
| 地区组装 | 同 WCRefine（country + province + city） | 同 WCRefine |
| 群人数获取 | 反编译中只看到 `getGroupMemberCountForContact:` | 优先 CContactMgr，fallback 到手动解析 |