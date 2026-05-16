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

#pragma mark - Detection Logic

// 使用 WeChat 的 MMServiceCenter 获取 CContactMgr
static id getContactMgr(void) {
    Class mmSvcCenter = objc_getClass("MMServiceCenter");
    if (!mmSvcCenter) { fdLog(@"[ERR] MMServiceCenter not found"); return nil; }
    id svcCenter = ((id (*)(Class, SEL))objc_msgSend)(mmSvcCenter, sel_registerName("defaultCenter"));
    if (!svcCenter) { fdLog(@"[ERR] MMServiceCenter defaultCenter nil"); return nil; }
    Class contactMgrCls = objc_getClass("CContactMgr");
    if (!contactMgrCls) { fdLog(@"[ERR] CContactMgr class not found"); return nil; }
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(svcCenter, sel_registerName("getService:"), contactMgrCls);
    if (!contactMgr) { fdLog(@"[ERR] CContactMgr service nil"); return nil; }
    return contactMgr;
}

// 用 CContactMgr 获取好友列表
static NSArray *getAllFriends(void) {
    id contactMgr = getContactMgr();
    if (!contactMgr) return nil;

    // 尝试多种 contactType
    SEL sel = sel_registerName("getContactList:contactType:");
    NSArray *contacts = nil;
    
    // Type 0,8 - 好友
    if ([contactMgr respondsToSelector:sel]) {
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 8);
        if (contacts && contacts.count > 0) { fdLog([NSString stringWithFormat:@"[OK] getContactList:0,8 returned %lu", (unsigned long)contacts.count]); return contacts; }
        
        // Type 0,0 - 全部联系人
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 0, 0);
        if (contacts && contacts.count > 0) { fdLog([NSString stringWithFormat:@"[OK] getContactList:0,0 returned %lu", (unsigned long)contacts.count]); return contacts; }
        
        // Type 1,0
        contacts = ((NSArray *(*)(id, SEL, int, int))objc_msgSend)(contactMgr, sel, 1, 0);
        if (contacts && contacts.count > 0) { fdLog([NSString stringWithFormat:@"[OK] getContactList:1,0 returned %lu", (unsigned long)contacts.count]); return contacts; }
    }
    
    // 尝试 GetContact 方法
    SEL getSel = sel_registerName("GetContact");
    if ([contactMgr respondsToSelector:getSel]) {
        contacts = ((NSArray *(*)(id, SEL))objc_msgSend)(contactMgr, getSel);
        if (contacts && contacts.count > 0) { fdLog([NSString stringWithFormat:@"[OK] GetContact returned %lu", (unsigned long)contacts.count]); return contacts; }
    }

    fdLog(@"[ERR] All methods to get contacts failed");
    return nil;
}

// 用 FriendDetector 检测指定好友
static NSArray *checkFriendsWithDetector(NSArray *wxIDs) {
    Class detectorCls = objc_getClass("FriendDetector");
    if (!detectorCls) { detectorCls = objc_getClass("WeChatFriendDetector"); }
    if (!detectorCls) { fdLog(@"[ERR] FriendDetector not found"); return nil; }

    id detector = [[detectorCls alloc] init];
    if (!detector) { fdLog(@"[ERR] Failed to init FriendDetector"); return nil; }

    SEL checkSel = NSSelectorFromString(@"checkSpecificFriends:completion:");
    if (![detector respondsToSelector:checkSel]) {
        // Try checkFriendsWithCompletion:
        checkSel = NSSelectorFromString(@"checkFriendsWithCompletion:");
        if (![detector respondsToSelector:checkSel]) { fdLog(@"[ERR] No check method found on FriendDetector"); return nil; }
        // checkFriendsWithCompletion: takes a block, returns results via block
        __block NSArray *resultArray = nil;
        __block BOOL done = NO;
        void (^completion)(NSArray *) = ^(NSArray *results) {
            resultArray = results;
            done = YES;
        };
        ((void (*)(id, SEL, id))objc_msgSend)(detector, checkSel, completion);
        int waitCount = 0;
        while (!done && waitCount < 60) {
            [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
            waitCount++;
        }
        return resultArray;
    }

    __block NSArray *resultArray = nil;
    __block BOOL done = NO;
    void (^completion)(NSArray *) = ^(NSArray *results) {
        resultArray = results;
        done = YES;
    };
    ((void (*)(id, SEL, NSArray *, id))objc_msgSend)(detector, checkSel, wxIDs, completion);
    int waitCount = 0;
    while (!done && waitCount < 120) {
        [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:1.0]];
        waitCount++;
    }
    return resultArray;
}

// 处理检测结果
static NSDictionary *processResults(NSArray *results) {
    if (!results || results.count == 0) {
        fdLog(@"[ERR] No detection results");
        return nil;
    }
    fdLog([NSString stringWithFormat:@"Got %lu detection results", (unsigned long)results.count]);


    NSMutableArray *deletedFriends = [NSMutableArray array];
    Class resultCls = objc_getClass("FriendDetectResult");
    
    for (id result in results) {
        if (resultCls && ![result isKindOfClass:resultCls]) continue;
        
        id contact = nil;
        @try { contact = [result performSelector:@selector(contact)]; } @catch (...) {}
        if (!contact) continue;
        
        BOOL isDeleted = NO;
        @try { isDeleted = [[result valueForKey:@"isDeleted"] boolValue]; } @catch (...) {}
        BOOL isInvalid = NO;
        @try { isInvalid = [[result valueForKey:@"isInvalid"] boolValue]; } @catch (...) {}

        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        NSString *nick = @"";
        @try { nick = [contact performSelector:@selector(m_nsNickName)] ?: wxID ?: @"unknown"; } @catch (...) {}
        if ([nick isEqualToString:@""]) nick = wxID;

        NSString *status = isInvalid ? @"invalid" : (isDeleted ? @"deleted" : @"valid");
        NSMutableDictionary *entry = [NSMutableDictionary dictionary];
        entry[@"wxID"] = wxID;
        entry[@"nick"] = nick;
        entry[@"status"] = status;
        [deletedFriends addObject:entry];
    }

    fdLog([NSString stringWithFormat:@"Processed: %lu friends checked, %lu results",
           (unsigned long)results.count, (unsigned long)deletedFriends.count]);
    
    return @{
        @"timestamp": @([[NSDate date] timeIntervalSince1970]),
        @"total": @(results.count),
        @"checked": @(deletedFriends.count),
        @"deleted": deletedFriends
    };
}

static BOOL startFriendDetection(void) {
    fdLog(@"=== Friend Detection Start ===");
    
    // Step 1: Get contacts
    NSArray *contacts = getAllFriends();
    if (!contacts || contacts.count == 0) {
        fdLog(@"[ERR] Step 1 failed: no contacts");
        return NO;
    }

    // Step 2: Extract WX IDs
    NSMutableArray *wxIDs = [NSMutableArray array];
    Class cContactCls = objc_getClass("CContact");
    for (id contact in contacts) {
        if (cContactCls && ![contact isKindOfClass:cContactCls]) continue;
        NSString *wxID = @"";
        @try { wxID = [contact performSelector:@selector(m_nsUsrName)] ?: @""; } @catch (...) {}
        if (![wxID hasPrefix:@"@chatroom"] && ![wxID hasPrefix:@"gh_"] && wxID.length > 0) {
            [wxIDs addObject:wxID];
        }
    }
    fdLog([NSString stringWithFormat:@"Step 2: %lu friend WX IDs extracted", (unsigned long)wxIDs.count]);
    if (wxIDs.count == 0) return NO;

    // Step 3: Run detection
    NSArray *detectResults = checkFriendsWithDetector(wxIDs);
    if (!detectResults || detectResults.count == 0) {
        fdLog(@"[ERR] Step 3 failed: detection returned nil");
        return NO;
    }

    // Step 4: Process and save results
    NSDictionary *saveData = processResults(detectResults);
    if (saveData) {
        [[NSUserDefaults standardUserDefaults] setObject:saveData forKey:@"com.mio.wechat.plugin.FriendDetection.results"];
        [[NSUserDefaults standardUserDefaults] synchronize];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.resultsUpdated"
                                                            object:nil
                                                          userInfo:@{@"count": saveData[@"deleted"] ? @([saveData[@"deleted"] count]) : @0}];
        fdLog(@"[OK] Detection results saved");
        return YES;
    }
    return NO;
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
                                                                                   message:@"无法获取好友列表或检测器不可用，请查看日志了解详情"
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
        NSString *ts = results[@"timestamp"]
            ? [[NSDate dateWithTimeIntervalSince1970:[results[@"timestamp"] doubleValue]] description]
            : @"未知";
        NSString *msg = [NSString stringWithFormat:@"上次检测: %@\n共 %@ 个好友被检测",
                         ts, results[@"total"] ?: @"0"];
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
