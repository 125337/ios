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

#pragma mark - FriendDetectResult (一比一复刻微信优化)

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

@implementation MioFriendDetector

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

    NSArray *contacts = nil;
    contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 8);
    fdLog([NSString stringWithFormat:@"[allFriends] getContactList:0,8 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil"]);
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 0);
        fdLog([NSString stringWithFormat:@"[allFriends] getContactList:0,0 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil"]);
    }
    if (!contacts || contacts.count == 0) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 1, 0);
        fdLog([NSString stringWithFormat:@"[allFriends] getContactList:1,0 = %@", contacts ? [NSString stringWithFormat:@"%lu contacts", (unsigned long)contacts.count] : @"nil"]);
    }
    if (!contacts || contacts.count == 0) {
        fdLog(@"[allFriends] ALL METHODS RETURNED NIL");
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
    fdLog([NSString stringWithFormat:@"[allFriends] Filtered: %d added, %d skipped (chatrooms/gh)", added, skipped]);
    return [friends copy];
}

#pragma mark - 检测策略

// 策略A: 跳过 - 微信优化插件的 checkSpecificFriends:completion: 在当前 WeChat 版本已不兼容（调用即 crash）
- (NSArray *)tryNativeDetection:(NSArray *)wxIDs {
    fdLog(@"[Native] SKIPPED: WeChat Enhancement plugin's detection methods are incompatible with current WeChat version (crashes)");
    return nil;
}

// 策略B: CContactMgr 服务端获取 + 本地属性检测
- (NSArray *)tryLocalDetection:(NSArray *)wxIDs {
    fdLog(@"[Local] Starting local property detection...");
    NSMutableArray *results = [NSMutableArray array];
    Class cContactCls = objc_getClass("CContact");

    id contactMgr = nil;
    Class mmSvc = objc_getClass("MMServiceCenter");
    if (mmSvc) {
        id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
        if (center)
            contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), objc_getClass("CContactMgr"));
    }
    if (!contactMgr) { fdLog(@"[Local] CContactMgr nil, aborting"); return nil; }

    // 先尝试 getContactByName: 批量获取完整信息（可能触发服务端同步）
    BOOL hasBatch = [contactMgr respondsToSelector:sel_registerName("getContactByName:")];
    BOOL hasInfo = [contactMgr respondsToSelector:sel_registerName("getContactInfo:")];
    fdLog([NSString stringWithFormat:@"[Local] CContactMgr methods: getContactByName=%d getContactInfo=%d", hasBatch, hasInfo]);

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
                fdLog([NSString stringWithFormat:@"[Local] Progress: %d/%lu, deleted=%d", count, (unsigned long)wxIDs.count, deletedCount]);
        }
    }
    fdLog([NSString stringWithFormat:@"[Local] Complete: %d total, %d deleted", count, deletedCount]);
    return [results copy];
}

#pragma mark - 主检测方法

- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        fdLog([NSString stringWithFormat:@"[checkSpecificFriends] Starting with %lu wxIDs", (unsigned long)wxIDs.count]);

        // 策略A: 原生检测
        fdLog(@"[checkSpecificFriends] === Native detection unavailable, using local detection ===");

        // 策略B: 本地检测
        fdLog(@"[checkSpecificFriends] === TRYING LOCAL DETECTION ===");
        NSArray *localResults = [self tryLocalDetection:wxIDs];
        if (localResults && localResults.count > 0) {
            fdLog([NSString stringWithFormat:@"[checkSpecificFriends] Local detection SUCCESS: %lu results", (unsigned long)localResults.count]);
            if (completion) completion(localResults);
            return;
        }
        fdLog(@"[checkSpecificFriends] ALL DETECTION METHODS FAILED");
        if (completion) completion(@[]);
    });
}

- (void)checkSpecificFriends:(NSArray *)wxIDs {
    [self checkSpecificFriends:wxIDs completion:nil];
}

- (void)checkFriendsWithCompletion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        fdLog(@"[checkFriendsWithCompletion] Starting...");
        NSArray *friends = [self allFriends];
        if (!friends || friends.count == 0) { fdLog(@"[checkFriendsWithCompletion] No friends"); if (completion) completion(@[]); return; }

        NSMutableArray *wxIDs = [NSMutableArray array];
        for (id contact in friends) {
            NSString *wxID = @"";
            @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
            if (wxID.length > 0) [wxIDs addObject:wxID];
        }
        fdLog([NSString stringWithFormat:@"[checkFriendsWithCompletion] Got %lu WX IDs, calling checkSpecificFriends...", (unsigned long)wxIDs.count]);
        [self checkSpecificFriends:wxIDs completion:completion];
    });
}

@end

#pragma mark - 主入口

static NSArray *checkWithFriendDetector(void) {
    // 用 WeChat 原生 FriendDetector（不依赖微信优化插件）
    Class fdCls = objc_getClass("FriendDetector");
    if (!fdCls) { fdLog(@"[FD] FriendDetector class not found"); return nil; }
    fdLog(@"[FD] FriendDetector found, checking selectors...");
    
    // 检查所有可能的检测方法
    NSArray *methods = @[
        @{@"sel": @"checkFriendsWithCompletion:", @"type": @"class", @"desc": @"class method, 1 param(block)"},
        @{@"sel": @"checkSpecificFriends:completion:", @"type": @"class", @"desc": @"class method, 2 params(ids,block)"},
        @{@"sel": @"allFriends", @"type": @"class", @"desc": @"class method, 0 params"},
    ];
    
    for (NSDictionary *m in methods) {
        NSString *sname = m[@"sel"];
        SEL sel = NSSelectorFromString(sname);
        BOOL found = [fdCls respondsToSelector:sel];
        id instance = [[fdCls alloc] init];
        BOOL foundInst = instance && [instance respondsToSelector:sel];
        fdLog([NSString stringWithFormat:@"[FD] %@: class=%d instance=%d", sname, found, foundInst]);
    }

    // 先试 getContactList 拿到好友后，用 CContactMgr 逐人检查
    // 这是最可靠的方式：调 WeChat 内部 contact 同步，获取最新状态
    id contactMgr = nil;
    Class mmSvc = objc_getClass("MMServiceCenter");
    if (mmSvc) {
        id center = ((id (*)(Class, SEL))objc_msgSend)(mmSvc, sel_registerName("defaultCenter"));
        if (center)
            contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, sel_registerName("getService:"), objc_getClass("CContactMgr"));
    }
    if (!contactMgr) { fdLog(@"[FD] Cannot get CContactMgr"); return nil; }
    
    // 获取所有好友
    SEL listSel = sel_registerName("getContactList:contactType:");
    NSArray *contacts = nil;
    contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, listSel, 1, 0);
    fdLog([NSString stringWithFormat:@"[FD] Got %lu contacts", (unsigned long)contacts.count]);
    
    // 对每个好友，通过 getContactByName: 重新获取（触发 WeChat 内部同步）
    fdLog(@"[FD] Checking each contact...");
    NSMutableArray *results = [NSMutableArray array];
    int deletedCount = 0, validCount = 0, errCount = 0;
    Class contactCls = objc_getClass("CContact");
    SEL getSel = sel_registerName("getContactByName:");
    
    for (id contact in contacts) {
        @autoreleasepool {
            NSString *wxID = @"";
            @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
            if (wxID.length == 0 || [wxID hasPrefix:@"@chatroom"] || [wxID hasPrefix:@"gh_"]) continue;

            BOOL isDeleted = NO;
            id freshContact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, getSel, wxID);
            
            if (!freshContact || ![freshContact isKindOfClass:contactCls]) {
                // getContactByName 返回 nil → 好友可能已删除
                isDeleted = YES;
                errCount++;
            } else {
                // 检查属性
                unsigned int vf = 0;
                @try { vf = [[freshContact valueForKey:@"m_uiVerifyFlag"] unsignedIntValue]; } @catch (...) {}
                NSString *nick = @"";
                @try { nick = [freshContact performSelector:@selector(m_nsNickName)] ?: @""; } @catch (...) {}
                
                if (vf > 0 || nick.length == 0 || [nick isEqualToString:wxID]) {
                    isDeleted = YES;
                }
                validCount++;
            }
            
            // 尝试用 FriendDetector 实例方法检测
            if (!isDeleted && fdCls) {
                @try {
                    id detector = [[fdCls alloc] init];
                    SEL detectSel = NSSelectorFromString(@"checkSpecificFriends:completion:");
                    if (detector && [detector respondsToSelector:detectSel]) {
                        // 逐人检测
                        __block BOOL dDone = NO;
                        __block BOOL dResult = NO;
                        void (^dB)(NSArray *) = ^(NSArray *r) {
                            if (r && r.count > 0) {
                                @try { dResult = [[r[0] valueForKey:@"isDeleted"] boolValue]; } @catch (...) {}
                            }
                            dDone = YES;
                        };
                        ((void (*)(id, SEL, NSArray *, id))objc_msgSend)(detector, detectSel, @[wxID], dB);
                        int dw = 0;
                        while (!dDone && dw < 10) { [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:0.2]]; dw++; }
                        if (dResult) isDeleted = YES;
                    }
                } @catch (NSException *e) {
                    fdLog([NSString stringWithFormat:@"[FD] Instance detect exception: %@", e.reason]);
                }
            }
            
            MioFriendDetectResult *res = [MioFriendDetectResult infoWithContact:freshContact ?: contact isDeleted:isDeleted isInvalid:NO];
            [results addObject:res];
            if (isDeleted) deletedCount++;
            
            if (results.count % 500 == 0)
                fdLog([NSString stringWithFormat:@"[FD] Progress: %lu checked, %d deleted", (unsigned long)results.count, deletedCount]);
        }
    }
    
    fdLog([NSString stringWithFormat:@"[FD] Complete: %lu total, %d deleted, %d valid, %d getContactByName nil",
           (unsigned long)results.count, deletedCount, validCount, errCount]);
    return results;
}

static NSArray *runLocalDetection(void) {
    fdLog(@"[Local] === Local detection start ===");
    fdLog(@"[Local] Creating MioFriendDetector...");
    MioFriendDetector *d = [[MioFriendDetector alloc] init];
    if (!d) { fdLog(@"[Local] Failed to create MioFriendDetector"); return nil; }
    fdLog(@"[Local] MioFriendDetector created, calling checkFriendsWithCompletion...");
    
    __block NSArray *r = nil;
    __block BOOL done = NO;
    [d checkFriendsWithCompletion:^(NSArray *res) {
        fdLog([NSString stringWithFormat:@"[Local] Completion: %lu items", (unsigned long)res.count]);
        r = res;
        done = YES;
    }];
    
    fdLog(@"[Local] Waiting for local detection...");
    int w = 0;
    while (!done && w < 120) {
        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:1.0]];
        w++;
        if (w % 10 == 0) fdLog([NSString stringWithFormat:@"[Local] Waited %d seconds", w]);
    }
    fdLog([NSString stringWithFormat:@"[Local] Done after %d seconds, result=%@", w, r ? [NSString stringWithFormat:@"%lu items", (unsigned long)r.count] : @"nil"]);
    return r;
}

static void saveResults(NSArray *results) {
    fdLog(@"[Save] === Save results start ===");
    if (!results) { fdLog(@"[Save] results is nil"); return; }
    fdLog([NSString stringWithFormat:@"[Save] Total results to process: %lu", (unsigned long)results.count]);
    
    if (results.count > 0) {
        id first = results[0];
        fdLog([NSString stringWithFormat:@"[Save] First result class: %@", NSStringFromClass([first class])]);
        fdLog([NSString stringWithFormat:@"[Save] First result respondsToSelector isDeleted: %d", [first respondsToSelector:NSSelectorFromString(@"isDeleted")] ? 1 : 0]);
        fdLog([NSString stringWithFormat:@"[Save] First result respondsToSelector contact: %d", [first respondsToSelector:NSSelectorFromString(@"contact")] ? 1 : 0]);
    }

    NSMutableArray *deleted = [NSMutableArray array];
    int valid = 0, processed = 0;
    for (id r in results) {
        processed++;
        BOOL isDel = NO, isInv = NO; id contact = nil;
        @try { isDel = [[r valueForKey:@"isDeleted"] boolValue]; } @catch (NSException *e) { fdLog([NSString stringWithFormat:@"[Save] item#%d valueForKey isDeleted exception: %@", processed, e.reason]); }
        @try { isInv = [[r valueForKey:@"isInvalid"] boolValue]; } @catch (NSException *e) { fdLog([NSString stringWithFormat:@"[Save] item#%d valueForKey isInvalid exception: %@", processed, e.reason]); }
        @try { contact = [r valueForKey:@"contact"]; } @catch (NSException *e) { fdLog([NSString stringWithFormat:@"[Save] item#%d valueForKey contact exception: %@", processed, e.reason]); }
        
        if (processed <= 3)
            fdLog([NSString stringWithFormat:@"[Save] item#%d: isDel=%d isInv=%d contact=%@", processed, isDel, isInv, contact ? NSStringFromClass([contact class]) : @"nil"]);

        if (isDel || isInv) {
            NSString *wx = @"", *nk = @"";
            if (contact) {
                @try { wx = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
                @try { nk = [contact performSelector:@selector(m_nsNickName)] ?: wx; } @catch (...) {}
            }
            [deleted addObject:@{@"wxID": wx, @"nick": nk, @"status": isInv ? @"invalid" : @"deleted"}];
        } else { valid++; }
    }
    fdLog([NSString stringWithFormat:@"[Save] Processed %d results: %lu deleted, %d valid", processed, (unsigned long)deleted.count, valid]);
    
    NSDictionary *data = @{@"timestamp": @([[NSDate date] timeIntervalSince1970]), @"total": @(valid + (int)deleted.count), @"deleted": [deleted copy]};
    [[NSUserDefaults standardUserDefaults] setObject:data forKey:@"com.mio.wechat.plugin.FriendDetection.results"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    fdLog(@"[Save] Data saved to NSUserDefaults");
}

static BOOL startFriendDetection(void) {
    fdLog(@"[Main] ****************************************");
    fdLog(@"[Main] * Friend Detection Start");
    fdLog(@"[Main] ****************************************");

    NSArray *results = checkWithFriendDetector();
    
    if (!results || results.count == 0) {
        fdLog(@"[Main] Detection returned nil, trying local fallback");
        results = runLocalDetection();
    }
    
    if (!results || results.count == 0) {
        fdLog(@"[Main] ALL METHODS FAILED");
        return NO;
    }
    
    fdLog([NSString stringWithFormat:@"[Main] Saving %lu results...", (unsigned long)results.count]);
    saveResults(results);
    fdLog(@"[Main] Complete - SUCCESS");
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
    fdLog(@"FriendDetectionHook installed");
}
@end
