#import "FriendDetectionHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"

/**
 * ============================================================================
 * 好友检测 - 绑定 WeChat 底层网络服务
 * ============================================================================
 *
 * 核心思路: 不依赖微信优化插件的 FriendDetector 类（它的检测方法来自 category），
 * 而是直接绑定 WeChat 底层的 agreeDuty 网络服务。
 *
 * 调用链 (反编译分析):
 *   MMServiceCenter → CNetworkMgr(?) → agreeDuty 请求 → 服务端验证 → 返回结果
 *
 * 策略:
 *   1. 运行时扫描所有 MMServiceCenter 服务，找出处理 agreeDuty 的网络服务
 *   2. 直接调用该服务的方法
 *   3. 如果找不到 → hook 网络请求/响应层
 *   4. 最后 fallback 到本地属性检测
 * ============================================================================
 */

#pragma mark - FriendDetectResult

@interface MioFriendDetectResult : NSObject
@property (nonatomic, strong) id contact;
@property (nonatomic, assign) BOOL isDeleted;
@property (nonatomic, assign) BOOL isInvalid;
+ (instancetype)infoWithContact:(id)contact isDeleted:(BOOL)isDeleted isInvalid:(BOOL)isInvalid;
@end

@implementation MioFriendDetectResult
+ (instancetype)infoWithContact:(id)contact isDeleted:(BOOL)isDeleted isInvalid:(BOOL)isInvalid {
    MioFriendDetectResult *r = [[self alloc] init];
    r.contact = contact;
    r.isDeleted = isDeleted;
    r.isInvalid = isInvalid;
    return r;
}
@end

#pragma mark - FriendDetector (一比一复刻微信优化)

@interface MioFriendDetector : NSObject
@property (nonatomic, strong) NSArray *checkedFriendWxIDs;
@property (nonatomic, assign) BOOL checkFriendsEnd;
@property (nonatomic, strong) NSObject *friendCheckSem;
- (NSArray *)allFriends;
- (void)checkFriendsWithCompletion:(void(^)(NSArray *results))completion;
- (void)checkSpecificFriends:(NSArray *)wxIDs;
- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *results))completion;
@end

// 前向声明: 绑定检测函数（定义在 @implementation 之后）
static NSArray *runBoundDetection(NSArray *wxIDs);

@implementation MioFriendDetector

- (NSArray *)allFriends {
    WPLog(@"FriendDetect", @"[allFriends] Starting...");
    Class mmSvc = objc_getClass("MMServiceCenter");
    if (!mmSvc) { WPLog(@"FriendDetect", @"[allFriends] MMServiceCenter not found"); return @[]; }
    id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
    if (!center) { WPLog(@"FriendDetect", @"[allFriends] defaultCenter nil"); return @[]; }
    Class mgrCls = objc_getClass("CContactMgr");
    if (!mgrCls) { WPLog(@"FriendDetect", @"[allFriends] CContactMgr not found"); return @[]; }
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), mgrCls);
    if (!contactMgr) { WPLog(@"FriendDetect", @"[allFriends] CContactMgr service nil"); return @[]; }

    SEL sel = sel_registerName("getContactList:contactType:");
    if (![contactMgr respondsToSelector:sel]) { WPLog(@"FriendDetect", @"[allFriends] getContactList:contactType: not found"); return @[]; }

    NSArray *contacts = nil;
    contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 8);
    WPLog(@"FriendDetect", @"[allFriends] getContactList:0,8 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil");
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 0);
        WPLog(@"FriendDetect", @"[allFriends] getContactList:0,0 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil");
    }
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 1, 0);
        WPLog(@"FriendDetect", @"[allFriends] getContactList:1,0 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil");
    }
    if (!contacts || contacts.count == 0) {
        WPLog(@"FriendDetect", @"[allFriends] ALL METHODS RETURNED NIL");
        return @[];
    }

    NSMutableArray *friends = [NSMutableArray array];
    int skipped = 0, added = 0;
    for (id contact in contacts) {
        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        if (wxID.length > 0 && ![wxID hasPrefix:@"@chatroom"] && ![wxID hasPrefix:@"gh_"]) {
            [friends addObject:contact];
            added++;
        } else {
            skipped++;
        }
    }
    WPLog(@"FriendDetect", @"[allFriends] Filtered: %d added, %d skipped (chatrooms/gh)", added, skipped);
    return [friends copy];
}

#pragma mark - 本地检测（回退方案）

// 策略B: CContactMgr 服务端获取 + 本地属性检测（保留作为 fallback）
- (NSArray *)tryLocalDetection:(NSArray *)wxIDs {
    WPLog(@"FriendDetect", @"[Local] Starting local property detection...");
    NSMutableArray *results = [NSMutableArray array];
    Class cContactCls = objc_getClass("CContact");

    id contactMgr = nil;
    Class mmSvc = objc_getClass("MMServiceCenter");
    if (mmSvc) {
        id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
        if (center)
            contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), objc_getClass("CContactMgr"));
    }
    if (!contactMgr) { WPLog(@"FriendDetect", @"[Local] CContactMgr nil, aborting"); return nil; }

    // 先尝试 getContactByName: 批量获取完整信息（可能触发服务端同步）
    BOOL hasBatch = [contactMgr respondsToSelector:sel_registerName("getContactByName:")];
    BOOL hasInfo = [contactMgr respondsToSelector:sel_registerName("getContactInfo:")];
    WPLog(@"FriendDetect", @"[Local] CContactMgr methods: getContactByName=%d getContactInfo=%d", hasBatch, hasInfo);

    int count = 0, deletedCount = 0;
    for (NSString *wxID in wxIDs) {
        @autoreleasepool {
            id contact = nil;
            // 优先 getContactInfo: 可能服务端获取
            if (hasInfo) {
                @try { contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, sel_registerName("getContactInfo:"), wxID); } @catch (...) {}
            }
            if (!contact || ![contact isKindOfClass:cContactCls]) {
                if (hasBatch)
                    @try { contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, sel_registerName("getContactByName:"), wxID); } @catch (...) {}
            }

            if (!contact || ![contact isKindOfClass:cContactCls]) {
                [results addObject:[MioFriendDetectResult infoWithContact:nil isDeleted:YES isInvalid:NO]];
                deletedCount++;
            } else {
                // 检测各属性
                NSString *nick = @""; unsigned int vf = 0;
                @try { nick = [contact performSelector:@selector(m_nsNickName)] ?: @""; } @catch (...) {}
                @try { vf = [[contact valueForKey:@"m_uiVerifyFlag"] unsignedIntValue]; } @catch (...) {}
                BOOL isDel = (vf > 0 || nick.length == 0 || [nick isEqualToString:wxID]);
                if (isDel) deletedCount++;
                [results addObject:[MioFriendDetectResult infoWithContact:contact isDeleted:isDel isInvalid:(vf > 1)]];
            }
            count++;
            if (count % 500 == 0)
                WPLog(@"FriendDetect", @"[Local] Progress: %d/%lu, deleted=%d", count, (unsigned long)wxIDs.count, deletedCount);
        }
    }
    WPLog(@"FriendDetect", @"[Local] Complete: %d total, %d deleted", count, deletedCount);
    return [results copy];
}

#pragma mark - 主检测方法

- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        WPLog(@"FriendDetect", @"[checkSpecificFriends] Starting with %lu wxIDs", (unsigned long)wxIDs.count);

        // 策略C: 绑定检测（优先）
        WPLog(@"FriendDetect", @"[checkSpecificFriends] === TRYING BIND DETECTION ===");
        NSArray *bindResults = runBoundDetection(wxIDs);
        if (bindResults && bindResults.count > 0) {
            WPLog(@"FriendDetect", @"[checkSpecificFriends] Bind detection SUCCESS: %lu results", (unsigned long)bindResults.count);
            if (completion) completion(bindResults);
            return;
        }

        // 策略B: 本地检测（fallback）
        WPLog(@"FriendDetect", @"[checkSpecificFriends] === TRYING LOCAL DETECTION ===");
        NSArray *localResults = [self tryLocalDetection:wxIDs];
        if (localResults && localResults.count > 0) {
            WPLog(@"FriendDetect", @"[checkSpecificFriends] Local detection SUCCESS: %lu results", (unsigned long)localResults.count);
            if (completion) completion(localResults);
            return;
        }
        WPLog(@"FriendDetect", @"[checkSpecificFriends] ALL DETECTION METHODS FAILED");
        if (completion) completion(@[]);
    });
}

- (void)checkSpecificFriends:(NSArray *)wxIDs {
    [self checkSpecificFriends:wxIDs completion:nil];
}

- (void)checkFriendsWithCompletion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        WPLog(@"FriendDetect", @"[checkFriendsWithCompletion] Starting...");
        NSArray *friends = [self allFriends];
        if (!friends || friends.count == 0) { WPLog(@"FriendDetect", @"[checkFriendsWithCompletion] No friends"); if (completion completion(@[]); return; }

        NSMutableArray *wxIDs = [NSMutableArray array];
        for (id contact in friends) {
            NSString *wxID = @"";
            @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
            if (wxID.length > 0) [wxIDs addObject:wxID];
        }
        WPLog(@"FriendDetect", @"[checkFriendsWithCompletion] Got %lu WX IDs, calling checkSpecificFriends...", (unsigned long)wxIDs.count);
        [self checkSpecificFriends:wxIDs completion:completion];
    });
}

@end

#pragma mark - 策略C: 运行时服务探索 + 绑定 agreeDuty 网络服务

/**
 * 扫描 MMServiceCenter 下所有服务，列出感兴趣的方法
 * 这是"绑定"的第一步：看看 WeChat 到底提供了什么服务
 */
static void scanAllServices(void) {
    WPLog(@"FriendDetect", @"[Scan] === 开始扫描所有 MMServiceCenter 服务 ===");

    Class mmSvc = objc_getClass("MMServiceCenter");
    if (!mmSvc) { WPLog(@"FriendDetect", @"[Scan] MMServiceCenter not found"); return; }
    id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
    if (!center) { WPLog(@"FriendDetect", @"[Scan] defaultCenter nil"); return; }

    // 感兴趣的关键词列表
    NSSet *keywords = [NSSet setWithObjects:
        @"agree", @"duty", @"Agree", @"Duty",
        @"Friend", @"friend", @"FRIEND",
        @"Verify", @"verify", @"VERIFY",
        @"Check", @"check",
        @"Delete", @"delete",
        @"ContactVerify", @"contactVerify",
        @"Contact", @"contact",
        @"Network", @"network",
        @"Request", @"request",
        @"Sync", @"sync",
        @"Relation", @"relation",
        @"Detect", @"detect",
        @"Protocol", @"protocol",
        nil];

    // 要扫描的服务类名列表（扩展了网络/CGI 相关）
    NSArray *serviceNames = @[
        @"CNetworkMgr",
        @"CRequestMgr",
        @"CContactMgr",
        @"ContactVerifyMgr",
        @"FriendDetector",
        @"WeChatFriendDetector",
        @"CSyncMgr",
        @"CVOIPMgr",
        @"CGroupMgr",
        @"CBrandMgr",
        @"CEmoticonMgr",
        @"CMessageMgr",
        @"CMainFrameMgr",
        @"CAppUtil",
        @"CAccountMgr",
        @"CSettingMgr",
        @"CSafeMgr",
        @"CDeviceMgr",
        @"CContactCacheMgr",
        @"AddressBookContactMgr",
        @"AddressBookMailContactMgr",
        @"EnterpriseContactMgr",
        @"ChatRoomContactMgr",
        @"QQContactMgr",
        @"FacebookContactMgr",
        @"ContactTagMgr",
        @"ContactRemarkMgr",
        @"ContactBlockMgr",
        @"ContactChatRoomMgr",
        @"ContactEnterpriseMgr",
        @"CNewNetworkMgr",
        @"CUploadMgr",
        @"CDownloadMgr",
        @"CNetworkDispatcher",
        @"CProtobufMgr",
        @"CBizMgr",
        @"CFriendMgr",
        @"CContactSyncMgr",
        @"CContactLoginMgr",
        @"CContactStatusMgr",
        // WeChat 新的网络层命名模式
        @"MMNetworkKit",
        @"MMNetworkManager",
        @"MMTNetCenter",
        @"MMCGIWrapMgr",
        @"MMCGIRequest",
        @"MMCGIProxy",
        @"WCContactVerifyMgr",
    ];

    int totalServices = 0, totalMethods = 0;
    for (NSString *svcName in serviceNames) {
        Class svcCls = objc_getClass([svcName UTF8String]);
        if (!svcCls) continue;

        id svc = nil;
        @try {
            svc = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), svcCls);
        } @catch (NSException *e) {
            WPLog(@"FriendDetect", @"[Scan] %@ getService exception: %@", svcName, e.reason);
            continue;
        }
        if (!svc) continue;

        totalServices++;
        BOOL hasMatch = NO;

        // 列出所有 methods
        unsigned int mc = 0;
        Method *methods = class_copyMethodList(svcCls, &mc);
        for (unsigned int i = 0; i < mc; i++) {
            SEL sel = method_getName(methods[i]);
            NSString *selName = NSStringFromSelector(sel);
            BOOL matched = NO;
            for (NSString *kw in keywords) {
                if ([selName rangeOfString:kw].location != NSNotFound) {
                    matched = YES;
                    break;
                }
            }
            if (matched) {
                if (!hasMatch) {
                    WPLog(@"FriendDetect", @"[Scan] === %@ (%@) ===", svcName, svc);
                    hasMatch = YES;
                }
                // 获取参数类型
                const char *type = method_getTypeEncoding(methods[i]);
                NSString *typeStr = type ? [NSString stringWithUTF8String:type] : @"?";
                WPLog(@"FriendDetect", @"[Scan]   [%d] %@  type=%@", i, selName, typeStr);
                totalMethods++;
            }
        }
        free(methods);
    }

    WPLog(@"FriendDetect", @"[Scan] 完成: %d 个服务, %d 个匹配方法", totalServices, totalMethods);

    // 也扫描所有类和 Protocols
    WPLog(@"FriendDetect", @"[Scan] === 扫描所有 agreeDuty 相关类 ===");
    int numClasses = objc_getClassList(NULL, 0);
    Class *classes = (Class *)malloc(sizeof(Class) * numClasses);
    numClasses = objc_getClassList(classes, numClasses);
    int related = 0;
    for (int i = 0; i < numClasses; i++) {
        NSString *cn = NSStringFromClass(classes[i]);
        if ([cn rangeOfString:@"agree" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [cn rangeOfString:@"Agree" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [cn rangeOfString:@"Duty" options:NSCaseInsensitiveSearch].location != NSNotFound) {
            WPLog(@"FriendDetect", @"[Scan]   类: %@", cn);
            related++;
        }
        // 也找 FriendDetectResult
        if ([cn rangeOfString:@"FriendDetectResult"].location != NSNotFound) {
            WPLog(@"FriendDetect", @"[Scan]   FriendDetectResult 类: %@", cn);
        }
    }
    free(classes);
    if (related == 0) WPLog(@"FriendDetect", @"[Scan]   没有找到 agreeDuty 相关类");
    else WPLog(@"FriendDetect", @"[Scan]   找到 %d 个相关类", related);
}

#pragma mark - 策略G: 转账预检测法（主动检测）

/**
 * 微信助手使用的主动检测方案:
 *   调用 WCPayLogicMgr.GetTransferPrepayRequest: 发起转账预检
 *   服务端验证好友关系后返回结果
 *   - 好友正常 → 可以转账
 *   - 被删除/拉黑 → 返回错误
 *
 * 转账预检只查询是否可以转账，不实际扣钱，不通知对方。
 *
 * WeChat 方法:
 *   [WCPayLogicMgr GetTransferPrepayRequest:]  
 *   [WCPayTransferMoneyControlLogic OnGetTransferPrepayRequest:Error:]
 */

// 转账预检结果缓存
static NSMutableDictionary *g_transferResults = nil;

// Hook 转账预检响应
static void (*orig_OnGetTransferPrepayRequest)(id, SEL, id, id) = NULL;

static void hooked_OnGetTransferPrepayRequest(id self, SEL _cmd, id response, id error) {
    WPLog(@"FriendDetect", @"[Transfer] === 收到转账预检响应 ===");
    @try {
        id errorCode = [error valueForKey:@"code"];
        WPLog(@"FriendDetect", @"[Transfer] error=%@ errorCode=%@", error, errorCode);

        // 从 contact 查找对应的 wxID
        // 错误码分析:
        //   nil/0 = 转账正常 → 好友
        //   其他错误码 = 非好友关系
        if (error && errorCode) {
            int code = [errorCode intValue];
            WPLog(@"FriendDetect", @"[Transfer] *** 错误码 %d - 可能被删除! ***", code);
        } else {
            WPLog(@"FriendDetect", @"[Transfer] 无错误 - 好友关系正常");
        }
    } @catch (NSException *e) {
        WPLog(@"FriendDetect", @"[Transfer] 异常: %@", e.reason);
    }

    if (orig_OnGetTransferPrepayRequest)
        orig_OnGetTransferPrepayRequest(self, _cmd, response, error);
}

/**
 * 转账预检测: 逐个好友发起转账预检请求
 * 不实际扣钱，不通知对方
 */
static NSArray *tryTransferDetection(NSArray *wxIDs) {
    WPLog(@"FriendDetect", @"[Transfer] === 转账预检测开始 ===");

    // 获取 WCPayLogicMgr
    Class mmSvcCls = objc_getClass("MMServiceCenter");
    if (!mmSvcCls) { WPLog(@"FriendDetect", @"[Transfer] MMServiceCenter 不存在"); return nil; }
    id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvcCls, sel_registerName("defaultCenter"));
    if (!center) { WPLog(@"FriendDetect", @"[Transfer] defaultCenter nil"); return nil; }

    // 检查 WCPayLogicMgr
    Class payMgrCls = objc_getClass("WCPayLogicMgr");
    if (!payMgrCls) {
        WPLog(@"FriendDetect", @"[Transfer] WCPayLogicMgr 不存在");
        // 也尝试其他可能的类名
        payMgrCls = objc_getClass("WCPayPayMgr");
        if (payMgrCls) WPLog(@"FriendDetect", @"[Transfer] 使用 WCPayPayMgr");
    }
    if (!payMgrCls) { WPLog(@"FriendDetect", @"[Transfer] 未能找到支付管理类"); return nil; }

    id payMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), payMgrCls);
    if (!payMgr) {
        WPLog(@"FriendDetect", @"[Transfer] WCPayLogicMgr service nil, 尝试直接创建实例");
        @try { payMgr = [[payMgrCls alloc] init]; } @catch (...) {}
    }
    if (!payMgr) { WPLog(@"FriendDetect", @"[Transfer] 无法获取 WCPayLogicMgr"); return nil; }

    // 检查 GetTransferPrepayRequest: 方法
    SEL prepaySel = sel_registerName("GetTransferPrepayRequest:");
    BOOL hasPrepay = [payMgr respondsToSelector:prepaySel];
    if (!hasPrepay) {
        // 也检查 WCPayTransferMoneyControlLogic
        Class transferLogicCls = objc_getClass("WCPayTransferMoneyControlLogic");
        if (transferLogicCls) {
            id transferLogic = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), transferLogicCls);
            if (!transferLogic) @try { transferLogic = [[transferLogicCls alloc] init]; } @catch (...) {}
            if (transferLogic && [transferLogic respondsToSelector:prepaySel]) {
                payMgr = transferLogic;
                hasPrepay = YES;
                WPLog(@"FriendDetect", @"[Transfer] 使用 WCPayTransferMoneyControlLogic");
            }
        }
    }
    WPLog(@"FriendDetect", @"[Transfer] GetTransferPrepayRequest: available=%d", hasPrepay);

    if (!hasPrepay) {
        WPLog(@"FriendDetect", @"[Transfer] GetTransferPrepayRequest: 方法不可用");
        return nil;
    }

    // 获取联系人管理器和好友列表
    Class contactMgrCls = objc_getClass("CContactMgr");
    id contactMgr = nil;
    if (contactMgrCls)
        contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), contactMgrCls);

    NSMutableArray *results = [NSMutableArray array];
    int total = (int)wxIDs.count, delCount = 0;

    // 逐个好友发起转账预检
    for (int i = 0; i < total; i++) {
        @autoreleasepool {
            NSString *wxID = wxIDs[i];

            // 获取好友的 CContact 对象
            id contact = nil;
            if (contactMgr) {
                @try {
                    contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, sel_registerName("getContactByName:"), wxID);
                } @catch (...) {}
            }

            if (!contact) {
                // 无法获取联系人信息 → 可能已删除
                [results addObject:[MioFriendDetectResult infoWithContact:nil isDeleted:YES isInvalid:NO]];
                delCount++;
                continue;
            }

            // 发起转账预检
            __block BOOL done = NO;
            __block BOOL isDeleted = NO;

            // Hook 响应处理（如未安装）
            static dispatch_once_t hookOnce;
            dispatch_once(&hookOnce, ^{
                Class transferLogicCls = objc_getClass("WCPayTransferMoneyControlLogic");
                if (!transferLogicCls) transferLogicCls = objc_getClass("WCPayLogicMgr");
                if (transferLogicCls) {
                    SEL respSel = sel_registerName("OnGetTransferPrepayRequest:Error:");
                    Method method = class_getInstanceMethod(transferLogicCls, respSel);
                    if (method) {
                        orig_OnGetTransferPrepayRequest = (void (*)(id, SEL, id, id))method_getImplementation(method);
                        method_setImplementation(method, (IMP)hooked_OnGetTransferPrepayRequest);
                        WPLog(@"FriendDetect", @"[Transfer] Hook OnGetTransferPrepayRequest:Error: 成功");
                    }
                }
            });

            @try {
                // 调用转账预检
                ((void (*)(id, SEL, id))objc_msgSend)(payMgr, prepaySel, contact);
                WPLog(@"FriendDetect", @"[Transfer] 已对 %@ 发起转账预检", wxID);
            } @catch (NSException *e) {
                WPLog(@"FriendDetect", @"[Transfer] 转账预检异常(%@): %@", wxID, e.reason);
                [results addObject:[MioFriendDetectResult infoWithContact:contact isDeleted:NO isInvalid:YES]];
            }

            // 等待一小段时间
            [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];

            if ((i + 1) % 100 == 0)
                WPLog(@"FriendDetect", @"[Transfer] 进度: %d/%d", i+1, total);
        }
    }

    WPLog(@"FriendDetect", @"[Transfer] 完成: 发起 %d 个转账预检", total);
    return results;
}

#pragma mark - 策略F: CGI 类绑定

/**
 * WeChat 使用 CGI 模式处理网络请求（Request → CGI类 → 服务端 → Response）
 * 例如: WCPayGetPayUserDutyCgi / GetPayUserDutyReq / GetPayUserDutyResp
 *
 * 如果有 "GetContactAgreeDutyCgi" 或类似类，我们可以直接调用它。
 * 这里扫描所有含 "Cgi" 或 "CGI" 的类，并尝试找到联系相关 CGI。
 */
static void scanCGIClasses(void) {
    int numClasses = objc_getClassList(NULL, 0);
    Class *classes = (Class *)malloc(sizeof(Class) * numClasses);
    numClasses = objc_getClassList(classes, numClasses);

    WPLog(@"FriendDetect", @"[CGI] === 扫描所有 CGI 类 ===");
    int cgiCount = 0;
    for (int i = 0; i < numClasses; i++) {
        NSString *cn = NSStringFromClass(classes[i]);
        // 找包含 Cgi/CGI 且与联系/好友相关的类
        if ([cn rangeOfString:@"Cgi" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [cn rangeOfString:@"CGI" options:NSCaseInsensitiveSearch].location != NSNotFound) {
            // 过滤: 只关注与联系/好友相关的
            if ([cn rangeOfString:@"Contact" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [cn rangeOfString:@"Friend" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [cn rangeOfString:@"Relation" options:NSCaseInsensitiveSearch].location != NSNotFound) {
                WPLog(@"FriendDetect", @"[CGI]   %@", cn);
                cgiCount++;
            }
            // 也关注含 Duty/agree 的 CGI
            if ([cn rangeOfString:@"Duty" options:NSCaseInsensitiveSearch].location != NSNotFound) {
                WPLog(@"FriendDetect", @"[CGI]   %@ (Duty related)", cn);
                cgiCount++;
            }
        }
    }
    free(classes);
    if (cgiCount == 0) WPLog(@"FriendDetect", @"[CGI]   没有找到相关的 CGI 类");
    else WPLog(@"FriendDetect", @"[CGI]   找到 %d 个相关 CGI 类", cgiCount);
}

#pragma mark - 策略D: Hook 网络请求层 - 拦截 agreeDuty 请求/响应

/**
 * WeChat 网络请求通常通过以下路径:
 *   MMServiceCenter → CNetworkMgr → sendRequest: → 服务端 → 响应回调
 *
 * 通过 Method Swizzling 绑定 CNetworkMgr 的请求发送方法，
 * 或者绑定 response 回调方法来捕获 agreeDuty 的响应结果。
 */

// 保存原始 IMP
static void (*orig_CNetworkMgr_sendRequest)(id, SEL, id, id) = NULL;

static void hooked_CNetworkMgr_sendRequest(id self, SEL _cmd, id request, id completion) {
    WPLog(@"FriendDetect", @"[Hook] CNetworkMgr sendRequest: Intercepted");
    WPLog(@"FriendDetect", @"[Hook]   request class: %@", NSStringFromClass([request class]));

    // 尝试检查 request 中是否包含 agreeDuty 关键词
    @try {
        NSString *desc = [request description];
        if ([desc rangeOfString:@"agree" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [desc rangeOfString:@"duty" options:NSCaseInsensitiveSearch].location != NSNotFound) {
            WPLog(@"FriendDetect", @"[Hook] **** 捕获到 agreeDuty 请求! ****");
            WPLog(@"FriendDetect", @"[Hook]   %@", desc);
        } else {
            WPLog(@"FriendDetect", @"[Hook]   未匹配 agreeDuty");
        }
    } @catch (...) {}

    if (orig_CNetworkMgr_sendRequest) {
        orig_CNetworkMgr_sendRequest(self, _cmd, request, completion);
    }
}

static void installNetworkHook(void) {
    Class cNetworkMgr = objc_getClass("CNetworkMgr");
    if (!cNetworkMgr) {
        WPLog(@"FriendDetect", @"[Hook] CNetworkMgr 类不存在，无法 hook");
        return;
    }

    // 尝试各种可能的请求发送方法
    NSArray *requestMethods = @[
        @"SendRequest:withDelegate:",
        @"sendRequest:withDelegate:",
        @"SendRequest:Completion:",
        @"sendRequest:completion:",
        @"SendRequest:completionBlock:",
        @"Request:completion:",
        @"request:completion:",
    ];

    for (NSString *methodName in requestMethods) {
        SEL sel = sel_registerName([methodName UTF8String]);
        Method method = class_getInstanceMethod(cNetworkMgr, sel);
        if (method) {
            WPLog(@"FriendDetect", @"[Hook] 找到 CNetworkMgr.%@，安装 hook...", methodName);

            // 获取原始 IMP
            // 注: 这里只是一个示例，实际 hook 需要正确的签名
            WPLog(@"FriendDetect", @"[Hook]   typeEncoding: %s", method_getTypeEncoding(method));
        }
    }

    // 也可以 hook 响应处理
    NSArray *responseMethods = @[
        @"onRequestCompleted:",
        @"OnRequestCompleted:",
        @"OnResponse:",
        @"onResponse:",
        @"handleResponse:",
        @"HandleResponse:",
    ];

    for (NSString *methodName in responseMethods) {
        SEL sel = sel_registerName([methodName UTF8String]);
        if ([cNetworkMgr instancesRespondToSelector:sel]) {
            WPLog(@"FriendDetect", @"[Hook] CNetworkMgr 有响应方法: %@", methodName);
            Method method = class_getInstanceMethod(cNetworkMgr, sel);
            if (method) {
                WPLog(@"FriendDetect", @"[Hook]   typeEncoding: %s", method_getTypeEncoding(method));
            }
        }
    }
}

#pragma mark - 策略E: Hook 联系人同步响应

/**
 * 当 WeChat 与服务器同步联系人列表时会收到所有在当前设备上仍为好友的联系人。
 * 如果某人是好友但不在同步列表中 → 可能被删了。
 *
 * 通过 hook CContactMgr 的同步回调方法来捕获。
 */
static void (*orig_CContactMgr_onContactListChanged)(id, SEL, id) = NULL;

static void hooked_CContactMgr_onContactListChanged(id self, SEL _cmd, id changedContacts) {
    WPLog(@"FriendDetect", @"[Sync] CContactMgr 联系人列表变更");
    if (orig_CContactMgr_onContactListChanged) {
        orig_CContactMgr_onContactListChanged(self, _cmd, changedContacts);
    }
}

static void installContactSyncHook(void) {
    Class ccm = objc_getClass("CContactMgr");
    if (!ccm) { WPLog(@"FriendDetect", @"[Sync] CContactMgr 不存在"); return; }

    NSArray *syncMethods = @[
        @"onContactListChanged:",
        @"OnContactListChanged:",
        @"onModifyContact:",
        @"OnModifyContact:",
        @"onDelContact:",
        @"OnDelContact:",
        @"onSyncContact:",
        @"OnSyncContact:",
        @"onContactUpdated:",
        @"OnContactUpdated:",
    ];

    for (NSString *methodName in syncMethods) {
        SEL sel = sel_registerName([methodName UTF8String]);
        if ([ccm instancesRespondToSelector:sel]) {
            WPLog(@"FriendDetect", @"[Sync] CContactMgr 有方法: %@", methodName);
            Method method = class_getInstanceMethod(ccm, sel);
            if (method) {
                WPLog(@"FriendDetect", @"[Sync]   typeEncoding: %s", method_getTypeEncoding(method));
            }
        }
    }
}

#pragma mark - 主入口: 绑定检测

/**
 * 主检测函数: 先绑定尝试，再走 WeChat 网络层，最后本地回退
 */
static NSArray *runBoundDetection(NSArray *wxIDs) {
    WPLog(@"FriendDetect", @"[Main] === 绑定检测开始 ===");

    // 第一步: 扫描所有服务（首次运行时）
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        scanAllServices();
        scanCGIClasses();
        installNetworkHook();
        installContactSyncHook();
    });

    // 第二步: 建立 MMServiceCenter
    id mmServiceCenter = nil;
    Class mmSvcCls = objc_getClass("MMServiceCenter");
    if (mmSvcCls) {
        mmServiceCenter = ((id (*)(Class, SEL))objc_msgSend)(mmSvcCls, sel_registerName("defaultCenter"));
    }
    if (!mmServiceCenter) { WPLog(@"FriendDetect", @"[Main] MMServiceCenter 不可用"); return nil; }

    // 第三步: 转账预检测（主动检测，与微信助手方案一致）
    WPLog(@"FriendDetect", @"[Main] === 尝试转账预检测 ===");
    NSArray *transferResults = tryTransferDetection(wxIDs);
    if (transferResults && transferResults.count > 0) {
        WPLog(@"FriendDetect", @"[Main] 转账预检测完成: %lu 结果", (unsigned long)transferResults.count);
        return transferResults;
    }

    // 第四步: 回退到本地检测
    NSMutableArray *results = [NSMutableArray array];
    WPLog(@"FriendDetect", @"[Main] === 转账预检不可用，回退到 CContactMgr 本地检测 ===");
    Class cContactCls = objc_getClass("CContact");
    id contactMgr = nil;
    if (mmServiceCenter) {
        contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(mmServiceCenter, sel_registerName("getService:"), objc_getClass("CContactMgr"));
    }

    if (contactMgr) {
        // 检查 CContactMgr 可用方法（仅查询日志，不调用危险方法）
        BOOL hasGetByName = [contactMgr respondsToSelector:sel_registerName("getContactByName:")];
        WPLog(@"FriendDetect", @"[Main] CContactMgr: getContactByName=%d", hasGetByName);

        // 逐个用 getContactByName: 获取联系人
        // 注意: 这里只读本地缓存，不调 getContactsFromServer: 等带内
        // 部状态的方法（传错参数会导致 WeChat 内部状态损坏 crash）
        int total = (int)wxIDs.count, delCount = 0;
        for (int i = 0; i < total; i++) {
            @autoreleasepool {
                NSString *wxID = wxIDs[i];
                id contact = nil;

                // getContactByName: 获取本地/缓存数据
                if (hasGetByName) {
                    @try {
                        contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, sel_registerName("getContactByName:"), wxID);
                    } @catch (NSException *e) {
                        WPLog(@"FriendDetect", @"[Main] getContactByName 异常(%@): %@", wxID, e.reason);
                    }
                }

                // 如果 getContactByName 返回 nil → 本地无记录（可能被删）
                BOOL isDeleted = !(contact && [contact isKindOfClass:cContactCls]);

                // 即使 contact 存在，也检查属性
                if (!isDeleted) {
                    unsigned int vf = 0;
                    @try { vf = [[contact valueForKey:@"m_uiVerifyFlag"] unsignedIntValue]; } @catch (...) {}
                    if (vf > 0) {
                        isDeleted = YES;
                    } else {
                        // 再检查 m_uiStatus
                        unsigned int status = 0;
                        @try { status = [[contact valueForKey:@"m_uiStatus"] unsignedIntValue]; } @catch (...) {}
                        if (status > 0) isDeleted = YES;
                    }
                }

                MioFriendDetectResult *res = [MioFriendDetectResult infoWithContact:contact isDeleted:isDeleted isInvalid:NO];
                [results addObject:res];
                if (isDeleted) delCount++;

                if ((i + 1) % 500 == 0)
                    WPLog(@"FriendDetect", @"[Main] Progress: %d/%d, deleted=%d", i+1, total, delCount);
            }
        }
        WPLog(@"FriendDetect", @"[Main] CContactMgr 同步完成: %d total, %d deleted", total, delCount);
        return results;
    }

    WPLog(@"FriendDetect", @"[Main] ALL BINDING ATTEMPTS FAILED");
    return nil;
}

static void saveResults(NSArray *results) {
    WPLog(@"FriendDetect", @"[Save] === Save results start ===");
    if (!results) { WPLog(@"FriendDetect", @"[Save] results is nil"); return; }
    WPLog(@"FriendDetect", @"[Save] Total results to process: %lu", (unsigned long)results.count);
    
    if (results.count > 0) {
        id first = results[0];
        WPLog(@"FriendDetect", @"[Save] First result class: %@", NSStringFromClass([first class]));
        WPLog(@"FriendDetect", @"[Save] First result respondsToSelector isDeleted: %d", [first respondsToSelector:NSSelectorFromString(@"isDeleted")] ? 1 : 0);
        WPLog(@"FriendDetect", @"[Save] First result respondsToSelector contact: %d", [first respondsToSelector:NSSelectorFromString(@"contact")] ? 1 : 0);
    }

    NSMutableArray *deleted = [NSMutableArray array];
    int valid = 0, processed = 0;
    for (id r in results) {
        processed++;
        BOOL isDel = NO, isInv = NO; id contact = nil;
        @try { isDel = [[r valueForKey:@"isDeleted"] boolValue]; } @catch (NSException *e) { WPLog(@"FriendDetect", @"[Save] item#%d valueForKey isDeleted exception: %@", processed, e.reason);
        @try { isInv = [[r valueForKey:@"isInvalid"] boolValue]; } @catch (NSException *e) { WPLog(@"FriendDetect", @"[Save] item#%d valueForKey isInvalid exception: %@", processed, e.reason);
        @try { contact = [r valueForKey:@"contact"]; } @catch (NSException *e) { WPLog(@"FriendDetect", @"[Save] item#%d valueForKey contact exception: %@", processed, e.reason);
        
        if (processed <= 3)
            WPLog(@"FriendDetect", @"[Save] item#%d: isDel=%d isInv=%d contact=%@", processed, isDel, isInv, contact ? NSStringFromClass([contact class]) : @"nil");

        if (isDel || isInv) {
            NSString *wx = @"", *nk = @"";
            if (contact) {
                @try { wx = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
                @try { nk = [contact performSelector:@selector(m_nsNickName)] ?: wx; } @catch (...) {}
            }
            [deleted addObject:@{@"wxID": wx, @"nick": nk, @"status": isInv ? @"invalid" : @"deleted"}];
        } else { valid++; }
    }
    WPLog(@"FriendDetect", @"[Save] Processed %d results: %lu deleted, %d valid", processed, (unsigned long)deleted.count, valid);
    
    NSDictionary *data = @{@"timestamp": @([[NSDate date] timeIntervalSince1970]), @"total": @(valid + (int)deleted.count), @"deleted": [deleted copy]};
    [[NSUserDefaults standardUserDefaults] setObject:data forKey:@"com.mio.wechat.plugin.FriendDetection.results"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"FriendDetect", @"[Save] Data saved to NSUserDefaults");
}

static BOOL startFriendDetection(void) {
    WPLog(@"FriendDetect", @"[Main] ****************************************");
    WPLog(@"FriendDetect", @"[Main] * Friend Detection Start (Bind Mode)");
    WPLog(@"FriendDetect", @"[Main] ****************************************");

    // 1. 获取所有好友 WX ID
    MioFriendDetector *d = [[MioFriendDetector alloc] init];
    NSArray *friends = [d allFriends];
    if (!friends || friends.count == 0) {
        WPLog(@"FriendDetect", @"[Main] No friends found");
        return NO;
    }

    NSMutableArray *wxIDs = [NSMutableArray array];
    for (id contact in friends) {
        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        if (wxID.length > 0) [wxIDs addObject:wxID];
    }
    WPLog(@"FriendDetect", @"[Main] Got %lu WX IDs", (unsigned long)wxIDs.count);

    // 2. 执行绑定检测
    NSArray *results = runBoundDetection(wxIDs);

    // 3. 如果绑定检测失败，回退到本地检测
    if (!results || results.count == 0) {
        WPLog(@"FriendDetect", @"[Main] Bind detection returned nil, trying local fallback");
        results = [d tryLocalDetection:wxIDs];
    }

    // 4. 保存并返回
    if (!results || results.count == 0) {
        WPLog(@"FriendDetect", @"[Main] ALL METHODS FAILED");
        return NO;
    }

    WPLog(@"FriendDetect", @"[Main] Saving %lu results...", (unsigned long)results.count);
    saveResults(results);
    WPLog(@"FriendDetect", @"[Main] Complete - SUCCESS");
    return YES;
}

#pragma mark - ViewController

@interface WPFriendDetectionVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

static void FDViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"好友检测";
    vc.view.backgroundColor = [UIColor colorWithRed:0.96 green:0.96 blue:0.96 alpha:1.0];
    CGFloat w = vc.view.bounds.size.width;

    UILabel *infoLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, 100, w - 32, 60)];
    infoLabel.text = @"检测好友列表中已将你删除的联系人\n检测过程可能需要一些时间";
    infoLabel.font = [UIFont systemFontOfSize:14];
    infoLabel.textColor = [UIColor grayColor];
    infoLabel.numberOfLines = 0;
    infoLabel.textAlignment = NSTextAlignmentCenter;
    [vc.view addSubview:infoLabel];

    __weak UIViewController *weakVC = vc;

    UIButton *startBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    startBtn.frame = CGRectMake(40, 180, w - 80, 48);
    [startBtn setTitle:@"开始检测" forState:UIControlStateNormal];
    startBtn.backgroundColor = [UIColor colorWithRed:0.2 green:0.5 blue:1.0 alpha:1.0];
    [startBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    startBtn.layer.cornerRadius = 8;
    startBtn.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
    [startBtn addAction:[UIAction actionWithTitle:@"" image:nil identifier:nil handler:^(__kindof UIAction *action) {
        UIButton *btn = startBtn;
        btn.enabled = NO;
        [btn setTitle:@"检测中..." forState:UIControlStateNormal];
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            BOOL success = startFriendDetection();
            dispatch_async(dispatch_get_main_queue(), ^{
                btn.enabled = YES;
                UIViewController *strongVC = weakVC;
                if (!strongVC) return;
                if (!success) {
                    [btn setTitle:@"开始检测" forState:UIControlStateNormal];
                    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测失败"
                                                   message:@"请查看日志了解详情"
                                            preferredStyle:UIAlertControllerStyleAlert];
                    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
                    [strongVC presentViewController:alert animated:YES completion:nil];
                    return;
                }
                [btn setTitle:@"检测完成" forState:UIControlStateNormal];
                NSDictionary *results = [[NSUserDefaults standardUserDefaults] objectForKey:@"com.mio.wechat.plugin.FriendDetection.results"];
                NSArray *deleted = results[@"deleted"];
                NSString *msg = (deleted && deleted.count > 0)
                    ? [NSString stringWithFormat:@"发现 %lu 个好友已将你删除", (unsigned long)deleted.count]
                    : @"未发现已将你删除的好友";
                UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测结果" message:msg
                                            preferredStyle:UIAlertControllerStyleAlert];
                [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
                [strongVC presentViewController:alert animated:YES completion:nil];
            });
        });
    }] forControlEvents:UIControlEventTouchUpInside];
    [vc.view addSubview:startBtn];

    UIButton *resultsBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    resultsBtn.frame = CGRectMake(40, 248, w - 80, 48);
    [resultsBtn setTitle:@"查看上次检测结果" forState:UIControlStateNormal];
    resultsBtn.backgroundColor = [UIColor colorWithRed:0.4 green:0.4 blue:0.4 alpha:1.0];
    [resultsBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    resultsBtn.layer.cornerRadius = 8;
    resultsBtn.titleLabel.font = [UIFont systemFontOfSize:15];
    [resultsBtn addAction:[UIAction actionWithTitle:@"" image:nil identifier:nil handler:^(__kindof UIAction *action) {
        UIViewController *strongVC = weakVC;
        if (!strongVC) return;
        NSDictionary *results = [[NSUserDefaults standardUserDefaults] objectForKey:@"com.mio.wechat.plugin.FriendDetection.results"];
        if (!results) {
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"提示" message:@"暂无检测记录"
                                        preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
            [strongVC presentViewController:alert animated:YES completion:nil];
            return;
        }
        NSArray *deleted = results[@"deleted"];
        NSString *total = results[@"total"] ? [results[@"total"] stringValue] : @"0";
        NSString *msg = [NSString stringWithFormat:@"上次检测: 共 %@ 个好友", total];
        if (deleted && deleted.count > 0)
            msg = [msg stringByAppendingFormat:@"\n%lu 个已将你删除", (unsigned long)deleted.count];
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上次检测结果" message:msg
                                        preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
        [strongVC presentViewController:alert animated:YES completion:nil];
    }] forControlEvents:UIControlEventTouchUpInside];
    [vc.view addSubview:resultsBtn];
}

@implementation WPFriendDetectionVCHelper
+ (UIViewController *)makeVC {
    Class vcCls = objc_allocateClassPair(objc_getClass("UIViewController"), "WPFriendDetectionVC", 0);
    if (vcCls) {
        class_addMethod(vcCls, @selector(viewDidLoad), (IMP)FDViewDidLoad, "v@:");
        objc_registerClassPair(vcCls);
    }
    return [[vcCls alloc] init];
}
@end

@implementation FriendDetectionHook
+ (void)install {
    WPLog(@"FriendDetect", @"FriendDetectionHook installed");
}
@end
