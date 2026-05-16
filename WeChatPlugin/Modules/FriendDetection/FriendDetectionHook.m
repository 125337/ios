#import "FriendDetectionHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static void fdLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"friend_detection.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

#pragma mark - MioFriendDetectResult (一对一复刻微信优化)

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

#pragma mark - MioFriendDetector (一对一复刻微信优化)

@interface MioFriendDetector : NSObject
@property (nonatomic, strong) NSArray *checkedFriendWxIDs;
@property (nonatomic, assign) BOOL checkFriendsEnd;
@property (nonatomic, strong) NSObject *friendCheckSem;

- (NSArray *)allFriends;
- (void)checkFriendsWithCompletion:(void(^)(NSArray *results))completion;
- (void)checkSpecificFriends:(NSArray *)wxIDs;
- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *results))completion;
@end

@implementation MioFriendDetector {
    dispatch_semaphore_t _sem;
}

// allFriends: 通过 MMServiceCenter → CContactMgr 获取所有好友
- (NSArray *)allFriends {
    fdLog(@"[allFriends] Starting...");
    Class mmSvc = objc_getClass("MMServiceCenter");
    if (!mmSvc) { fdLog(@"[allFriends] MMServiceCenter not found"); return @[]; }
    id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
    if (!center) { fdLog(@"[allFriends] defaultCenter nil"); return @[]; }
    Class mgrCls = objc_getClass("CContactMgr");
    if (!mgrCls) { fdLog(@"[allFriends] CContactMgr not found"); return @[]; }
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), mgrCls);
    if (!contactMgr) { fdLog(@"[allFriends] CContactMgr service nil"); return @[]; }

    SEL sel = sel_registerName("getContactList:contactType:");
    if (![contactMgr respondsToSelector:sel]) { fdLog(@"[allFriends] getContactList:contactType: not found"); return @[]; }

    NSArray *contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 8);
    fdLog([NSString stringWithFormat:@"[allFriends] getContactList:0,8 returned %lu", (unsigned long)contacts.count]);
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 0);
        fdLog([NSString stringWithFormat:@"[allFriends] getContactList:0,0 returned %lu", (unsigned long)contacts.count]);
    }
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 1, 0);
        fdLog([NSString stringWithFormat:@"[allFriends] getContactList:1,0 returned %lu", (unsigned long)contacts.count]);
    }
    if (!contacts || contacts.count == 0) {
        fdLog(@"[allFriends] All contact types returned nil");
        return @[];
    }

    NSMutableArray *friends = [NSMutableArray array];
    for (id contact in contacts) {
        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        if (wxID.length > 0 && ![wxID hasPrefix:@"@chatroom"] && ![wxID hasPrefix:@"gh_"]) {
            [friends addObject:contact];
        }
    }
    fdLog([NSString stringWithFormat:@"[allFriends] Filtered to %lu real friends", (unsigned long)friends.count]);
    return [friends copy];
}

// 检测单个好友：用 CContact 属性判断删除状态
- (MioFriendDetectResult *)checkOneFriend:(id)contact {
    NSString *wxID = @"";
    @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
    NSString *nick = @"";
    @try { nick = [contact performSelector:@selector(m_nsNickName)] ?: wxID; } @catch (...) {}

    unsigned int verifyFlag = 0;
    @try { verifyFlag = [[contact valueForKey:@"m_uiVerifyFlag"] unsignedIntValue]; } @catch (...) {}
    unsigned int uiStatus = 0;
    @try { uiStatus = [[contact valueForKey:@"m_uiStatus"] unsignedIntValue]; } @catch (...) {}
    id personalCard = nil;
    @try { personalCard = [contact valueForKey:@"m_uiPersonalCard"]; } @catch (...) {}

    // Debug: log first 5 contacts' raw values
    static int debugCount = 0;
    if (debugCount < 5) {
        debugCount++;
        fdLog([NSString stringWithFormat:@"[DEBUG] wxID=%@ nick=%@ verifyFlag=%u status=%u personalCard=%@",
               wxID, nick, verifyFlag, uiStatus, personalCard]);
    }

    BOOL nickAbnormal = (nick.length == 0 || [nick isEqualToString:wxID]);
    BOOL isDeleted = (verifyFlag > 0 || nickAbnormal);
    BOOL isInvalid = (verifyFlag > 1);

    return [MioFriendDetectResult infoWithContact:contact isDeleted:isDeleted isInvalid:isInvalid];
}

// checkSpecificFriends:completion: 检测指定好友
- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        NSMutableArray *results = [NSMutableArray array];
        Class cContactCls = objc_getClass("CContact");

        // 先尝试调用原生 WeChat 的 FriendDetector/WeChatFriendDetector
        __block BOOL didNativeCheck = NO;
        for (NSString *nativeCls in @[@"FriendDetector", @"WeChatFriendDetector"]) {
            Class wcDetector = objc_getClass([nativeCls UTF8String]);
            if (!wcDetector) continue;
            SEL wcSel = NSSelectorFromString(@"checkSpecificFriends:completion:");
            if (![wcDetector respondsToSelector:wcSel]) {
                wcSel = NSSelectorFromString(@"checkFriendsWithCompletion:");
                if (![wcDetector respondsToSelector:wcSel]) {
                    wcSel = NSSelectorFromString(@"checkSpecificFriends:");
                    if (![wcDetector respondsToSelector:wcSel]) continue;
                }
            }
            fdLog([NSString stringWithFormat:@"[NATIVE] Found %@ with check method, trying...", nativeCls]);
            @try {
                __block NSArray *nativeResults = nil;
                __block BOOL nativeDone = NO;
                void (^nativeBlock)(id) = ^(id r) {
                    if ([r isKindOfClass:[NSArray class]]) nativeResults = r;
                    nativeDone = YES;
                };
                if ([wcDetector respondsToSelector:NSSelectorFromString(@"checkSpecificFriends:completion:")]) {
                    ((void (*)(id, SEL, NSArray *, id))objc_msgSend)(wcDetector, NSSelectorFromString(@"checkSpecificFriends:completion:"), wxIDs, nativeBlock);
                } else if ([wcDetector respondsToSelector:NSSelectorFromString(@"checkFriendsWithCompletion:")]) {
                    ((void (*)(id, SEL, id))objc_msgSend)(wcDetector, NSSelectorFromString(@"checkFriendsWithCompletion:"), nativeBlock);
                } else {
                    ((void (*)(id, SEL, NSArray *))objc_msgSend)(wcDetector, NSSelectorFromString(@"checkSpecificFriends:"), wxIDs);
                    nativeDone = YES;
                }
                int wait = 0;
                while (!nativeDone && wait < 90) { [NSThread sleepForTimeInterval:1.0]; wait++; }
                if (nativeResults && nativeResults.count > 0) {
                    fdLog([NSString stringWithFormat:@"[NATIVE] Got %lu results from %@", (unsigned long)nativeResults.count, nativeCls]);
                    if (completion) completion(nativeResults);
                    didNativeCheck = YES;
                    return;
                }
            } @catch (NSException *e) {
                fdLog([NSString stringWithFormat:@"[NATIVE] Exception: %@", e]);
            }
        }

        // 原生检测不可用，使用本地属性检测
        if (!didNativeCheck) {
            fdLog(@"[NATIVE] No native FriendDetector available, using local CContact property check");
            id contactMgr = nil;
            Class mmSvc = objc_getClass("MMServiceCenter");
            if (mmSvc) {
                id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
                if (center) {
                    contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), objc_getClass("CContactMgr"));
                }
            }

            for (NSString *wxID in wxIDs) {
                @autoreleasepool {
                    id contact = nil;
                    // 先尝试 getContactInfo:（服务端获取）
                    if (contactMgr) {
                        SEL infoSel = sel_registerName("getContactInfo:");
                        if ([contactMgr respondsToSelector:infoSel]) {
                            contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, infoSel, wxID);
                        }
                    }
                    // 回退到 getContactByName:
                    if (!contact || ![contact isKindOfClass:cContactCls]) {
                        SEL getSel = sel_registerName("getContactByName:");
                        if (contactMgr && [contactMgr respondsToSelector:getSel]) {
                            contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, getSel, wxID);
                        }
                    }

                    if (!contact || ![contact isKindOfClass:cContactCls]) {
                        MioFriendDetectResult *r = [MioFriendDetectResult infoWithContact:nil isDeleted:YES isInvalid:NO];
                        [results addObject:r];
                        continue;
                    }

                    MioFriendDetectResult *r = [self checkOneFriend:contact];
                    [results addObject:r];
                }
            }

            if (completion) completion([results copy]);
        }

        if (completion) completion([results copy]);
    });
}

// checkSpecificFriends: 不带 completion
- (void)checkSpecificFriends:(NSArray *)wxIDs {
    [self checkSpecificFriends:wxIDs completion:nil];
}

// checkFriendsWithCompletion: 检测全部好友
- (void)checkFriendsWithCompletion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        NSArray *friends = [self allFriends];
        NSMutableArray *wxIDs = [NSMutableArray array];
        for (id contact in friends) {
            NSString *wxID = @"";
            @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
            if (wxID.length > 0) [wxIDs addObject:wxID];
        }
        [self checkSpecificFriends:wxIDs completion:completion];
    });
}

@end

#pragma mark - Detection Entry Point

static BOOL startFriendDetection(void) {
    fdLog(@"=== Friend Detection Start ===");

    MioFriendDetector *detector = [[MioFriendDetector alloc] init];

    // Step 1: 获取所有好友
    NSArray *friends = [detector allFriends];
    if (!friends || friends.count == 0) { fdLog(@"[ERR] No friends found"); return NO; }
    fdLog([NSString stringWithFormat:@"Got %lu friends", (unsigned long)friends.count]);

    // Step 2: 提取 WX ID
    NSMutableArray *wxIDs = [NSMutableArray array];
    for (id contact in friends) {
        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        if (wxID.length > 0) [wxIDs addObject:wxID];
    }
    fdLog([NSString stringWithFormat:@"Extracted %lu WX IDs", (unsigned long)wxIDs.count]);
    if (wxIDs.count == 0) return NO;

    // Step 3: 开始检测
    __block NSArray *detectResults = nil;
    __block BOOL done = NO;

    [detector checkSpecificFriends:wxIDs completion:^(NSArray *results) {
        detectResults = results;
        done = YES;
    }];

    int waitCount = 0;
    while (!done && waitCount < 120) {
        [NSThread sleepForTimeInterval:1.0];
        waitCount++;
    }

    if (!detectResults || detectResults.count == 0) { fdLog(@"[ERR] Detection returned no results"); return NO; }
    fdLog([NSString stringWithFormat:@"Detection returned %lu results", (unsigned long)detectResults.count]);

    // Step 4: 处理结果
    NSMutableArray *deletedFriends = [NSMutableArray array];
    for (MioFriendDetectResult *r in detectResults) {
        NSString *wxID = @"";
        NSString *nick = @"";
        if (r.contact) {
            @try { wxID = [r.contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
            @try { nick = [r.contact performSelector:@selector(m_nsNickName)] ?: wxID; } @catch (...) {}
        } else {
            wxID = @"unknown";
            nick = @"unknown";
        }

        NSString *status = r.isInvalid ? @"invalid" : (r.isDeleted ? @"deleted" : @"valid");
        if (r.isDeleted || r.isInvalid) {
            [deletedFriends addObject:@{@"wxID": wxID, @"nick": nick, @"status": status}];
        }
    }

    fdLog([NSString stringWithFormat:@"Deleted friends: %lu", (unsigned long)deletedFriends.count]);

    NSDictionary *saveData = @{
        @"timestamp": @([[NSDate date] timeIntervalSince1970]),
        @"total": @(wxIDs.count),
        @"deleted": [deletedFriends copy]
    };
    [[NSUserDefaults standardUserDefaults] setObject:saveData forKey:@"com.mio.wechat.plugin.FriendDetection.results"];
    [[NSUserDefaults standardUserDefaults] synchronize];

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
                NSString *msg = deleted && deleted.count > 0
                    ? [NSString stringWithFormat:@"发现 %lu 个好友已将你删除", (unsigned long)deleted.count]
                    : @"未发现已将你删除的好友";
                UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测结果"
                                                                               message:msg
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
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"提示"
                                                                           message:@"暂无检测记录"
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
            [strongVC presentViewController:alert animated:YES completion:nil];
            return;
        }
        NSArray *deleted = results[@"deleted"];
        NSString *total = results[@"total"] ? [results[@"total"] stringValue] : @"0";
        NSString *msg = [NSString stringWithFormat:@"上次检测: 共 %@ 个好友", total];
        if (deleted && deleted.count > 0) {
            msg = [msg stringByAppendingFormat:@"\n%lu 个已将你删除", (unsigned long)deleted.count];
        }
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上次检测结果"
                                                                       message:msg
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
        [strongVC presentViewController:alert animated:YES completion:nil];
    }] forControlEvents:UIControlEventTouchUpInside];
    [vc.view addSubview:resultsBtn];
}

#pragma mark - Helper

@implementation WPFriendDetectionVCHelper
+ (UIViewController *)makeVC {
    Class vcCls = objc_allocateClassPair(objc_getClass("UIViewController"), "WPFriendDetectionVC", 0);
    if (vcCls) {
        class_addMethod(vcCls, @selector(viewDidLoad), (IMP)FDViewDidLoad, "v@:");
        objc_registerClassPair(vcCls);
    }
    UIViewController *vc = [[vcCls alloc] init];
    return vc;
}
@end

#pragma mark - Hook Entry

@implementation FriendDetectionHook

+ (void)install {
    fdLog(@"FriendDetectionHook installed");
}

@end
