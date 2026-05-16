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

static NSArray *runNativeDetection(void) {
    fdLog(@"[Native] === Native detection start ===");
    fdLog(@"[Native] Current thread: main=%d", [NSThread isMainThread] ? 1 : 0);
    
    for (NSString *cls in @[@"FriendDetector", @"WeChatFriendDetector"]) {
        const char *cname = [cls UTF8String];
        fdLog([NSString stringWithFormat:@"[Native] Looking up class: %s", cname]);
        
        Class c = objc_getClass(cname);
        if (!c) { fdLog([NSString stringWithFormat:@"[Native] %s NOT FOUND in runtime", cname]); continue; }
        fdLog([NSString stringWithFormat:@"[Native] %s class=%@", cname, c]);
        
        // Check all possible selectors
        NSArray *selsToCheck = @[@"checkFriendsWithCompletion:", @"checkSpecificFriends:completion:", @"checkFriendsWithOptions:completion:", @"allFriends"];
        for (NSString *sname in selsToCheck) {
            SEL sel = NSSelectorFromString(sname);
            BOOL responds = [c respondsToSelector:sel];
            BOOL instanceResponds = NO;
            id instance = [[c alloc] init];
            if (instance) instanceResponds = [instance respondsToSelector:sel];
            fdLog([NSString stringWithFormat:@"[Native]   %@ -> class=%d instance=%d", sname, responds, instanceResponds]);
        }

        SEL s = NSSelectorFromString(@"checkFriendsWithCompletion:");
        if (![c respondsToSelector:s]) {
            fdLog(@"[Native] checkFriendsWithCompletion: NOT found, trying next class");
            continue;
        }
        fdLog(@"[Native] checkFriendsWithCompletion: FOUND, calling...");

        __block NSArray *result = nil;
        __block BOOL done = NO;
        void (^block)(NSArray *) = ^(NSArray *r) {
            fdLog([NSString stringWithFormat:@"[Native] Completion fired: %lu items", (unsigned long)r.count]);
            result = r;
            done = YES;
        };

        @try {
            if ([NSThread isMainThread]) {
                fdLog(@"[Native] Already on main thread, calling directly");
                ((void (*)(Class, SEL, id))objc_msgSend)(c, s, block);
            } else {
                fdLog(@"[Native] Dispatching to main thread via dispatch_sync");
                dispatch_sync(dispatch_get_main_queue(), ^{
                    fdLog(@"[Native] Inside dispatch_sync block, calling objc_msgSend...");
                    ((void (*)(Class, SEL, id))objc_msgSend)(c, s, block);
                    fdLog(@"[Native] objc_msgSend returned");
                });
                fdLog(@"[Native] dispatch_sync completed");
            }
        } @catch (NSException *e) {
            fdLog([NSString stringWithFormat:@"[Native] EXCEPTION: name=%@ reason=%@", e.name, e.reason]);
            continue;
        }

        fdLog(@"[Native] Waiting for completion block...");
        int w = 0;
        while (!done && w < 120) {
            [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:1.0]];
            w++;
            if (w % 10 == 0) fdLog([NSString stringWithFormat:@"[Native] Waited %d seconds, done=%d, result=%@", w, done, result ? [NSString stringWithFormat:@"%lu items", (unsigned long)result.count] : @"nil"]);
        }
        if (done) fdLog([NSString stringWithFormat:@"[Native] Done after %d seconds, result count=%lu", w, (unsigned long)result.count]);
        else fdLog(@"[Native] TIMEOUT after 120 seconds");
        
        if (result && result.count > 0) { fdLog(@"[Native] Returning native results"); return result; }
        fdLog(@"[Native] Native result is nil or empty, trying next class");
    }
    fdLog(@"[Native] === Native detection complete - no results ===");
    return nil;
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
    fdLog(@"[Main] Thread: main=%d", [NSThread isMainThread] ? 1 : 0);

    // Phase 1: Try native (WE plugin)
    NSArray *results = runNativeDetection();
    
    // Phase 2: Fallback to local
    if (!results || results.count == 0) {
        fdLog(@"[Main] Native detection returned nil/empty, falling back to local");
        results = runLocalDetection();
    } else {
        fdLog([NSString stringWithFormat:@"[Main] Native detection succeeded: %lu results", (unsigned long)results.count]);
    }

    // Phase 3: Save/fail
    if (!results || results.count == 0) {
        fdLog(@"[Main] ALL DETECTION METHODS FAILED");
        return NO;
    }
    
    fdLog([NSString stringWithFormat:@"[Main] Saving %lu results...", (unsigned long)results.count]);
    saveResults(results);
    fdLog(@"[Main] Friend Detection Complete - SUCCESS");
    return YES;
}#pragma mark - ViewController

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
