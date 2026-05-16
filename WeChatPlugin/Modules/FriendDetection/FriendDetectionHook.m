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

static void startFriendDetection(void) {
    @autoreleasepool {
        // Use FriendDetector class to get all friends and check them
        Class detectorCls = objc_getClass("FriendDetector");
        if (!detectorCls) {
            detectorCls = objc_getClass("WeChatFriendDetector");
        }
        if (!detectorCls) { fdLog(@"[ERR] FriendDetector not found"); return; }

        id detector = [[detectorCls alloc] init];
        if (!detector) { fdLog(@"[ERR] Failed to init FriendDetector"); return; }

        // allFriends is a property/method on FriendDetector
        SEL allFriendsSel = NSSelectorFromString(@"allFriends");
        if (![detector respondsToSelector:allFriendsSel]) { fdLog(@"[ERR] allFriends not found"); return; }
        NSArray *contacts = ((NSArray *(*)(id, SEL))objc_msgSend)(detector, allFriendsSel);
        if (!contacts || contacts.count == 0) { fdLog(@"[ERR] No contacts found"); return; }
        fdLog([NSString stringWithFormat:@"Got %lu contacts", (unsigned long)contacts.count]);

        // Extract WX IDs (filter to only friends)
        NSMutableArray *wxIDs = [NSMutableArray array];
        NSMutableDictionary *contactMap = [NSMutableDictionary dictionary];
        Class cContactCls = objc_getClass("CContact");
        for (id contact in contacts) {
            if (![contact isKindOfClass:cContactCls]) continue;
            NSString *wxID = [contact performSelector:@selector(m_nsUsrName)];
            if (wxID && [wxID length] > 0) {
                // Filter out non-friends (group chats, official accounts, etc.)
                if (![wxID hasPrefix:@"@chatroom"] && ![wxID hasPrefix:@"gh_"]) {
                    [wxIDs addObject:wxID];
                    contactMap[wxID] = contact;
                }
            }
        }
        fdLog([NSString stringWithFormat:@"Filtered to %lu friend WX IDs", (unsigned long)wxIDs.count]);
        if (wxIDs.count == 0) return;

        // Check specific friends
        SEL checkSel = NSSelectorFromString(@"checkSpecificFriends:completion:");
        if (![detector respondsToSelector:checkSel]) { fdLog(@"[ERR] checkSpecificFriends:completion: not found"); return; }

        // Store results
        __block NSMutableArray *deletedFriends = [NSMutableArray array];
        __block NSMutableArray *validFriends = [NSMutableArray array];
        __block int totalChecked = 0;
        __block int totalCount = (int)wxIDs.count;
        __block BOOL checkingDone = NO;

        void (^completion)(NSArray *) = ^(NSArray *results) {
            Class resultCls = objc_getClass("FriendDetectResult");
            for (id result in results) {
                if (![result isKindOfClass:resultCls]) continue;
                id contact = [result performSelector:@selector(contact)];
                BOOL isDeleted = NO;
                @try { isDeleted = [[result valueForKey:@"isDeleted"] boolValue]; } @catch (...) {}
                BOOL isInvalid = NO;
                @try { isInvalid = [[result valueForKey:@"isInvalid"] boolValue]; } @catch (...) {}

                NSString *wxID = [contact performSelector:@selector(m_nsUsrName)];
                NSString *nick = [contact performSelector:@selector(m_nsNickName)] ?: wxID ?: @"unknown";

                if (isDeleted) {
                    [deletedFriends addObject:@{@"wxID": wxID ?: @"", @"nick": nick, @"status": @"deleted"}];
                } else if (isInvalid) {
                    [deletedFriends addObject:@{@"wxID": wxID ?: @"", @"nick": nick, @"status": @"invalid"}];
                } else {
                    [validFriends addObject:@{@"wxID": wxID ?: @"", @"nick": nick, @"status": @"valid"}];
                }
                totalChecked++;
            }
            checkingDone = YES;
            fdLog([NSString stringWithFormat:@"Checked %d/%d: %lu deleted, %lu valid",
                   totalChecked, totalCount,
                   (unsigned long)deletedFriends.count,
                   (unsigned long)validFriends.count]);

            // Save results to NSUserDefaults
            NSDictionary *saveData = @{
                @"timestamp": @([[NSDate date] timeIntervalSince1970]),
                @"total": @(totalCount),
                @"checked": @(totalChecked),
                @"deleted": deletedFriends,
                @"valid": validFriends,
                @"allWxIDs": wxIDs
            };
            [[NSUserDefaults standardUserDefaults] setObject:saveData forKey:@"com.mio.wechat.plugin.FriendDetection.results"];
            [[NSUserDefaults standardUserDefaults] synchronize];

            // Post notification
            [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.resultsUpdated"
                                                                object:nil
                                                              userInfo:@{@"count": @(deletedFriends.count)}];
        };

        // Call FriendDetector
        fdLog(@"Starting friend detection...");
        ((void (*)(id, SEL, NSArray *, id))objc_msgSend)(detector, checkSel, wxIDs, completion);

        // Wait up to 120 seconds for results
        dispatch_semaphore_t sem = dispatch_semaphore_create(0);
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            int waitCount = 0;
            while (!checkingDone && waitCount < 120) {
                [NSThread sleepForTimeInterval:1.0];
                waitCount++;
            }
            dispatch_semaphore_signal(sem);
        });
        dispatch_semaphore_wait(sem, dispatch_time(DISPATCH_TIME_NOW, 125 * NSEC_PER_SEC));
        fdLog(@"Friend detection completed");
    }
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

    // Info label
    UILabel *infoLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, 100, w - 32, 60)];
    infoLabel.text = @"检测好友列表中已将你删除的联系人\n检测过程可能需要一些时间";
    infoLabel.font = [UIFont systemFontOfSize:14];
    infoLabel.textColor = [UIColor grayColor];
    infoLabel.numberOfLines = 0;
    infoLabel.textAlignment = NSTextAlignmentCenter;
    [vc.view addSubview:infoLabel];

    // Start button
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
            startFriendDetection();
            dispatch_async(dispatch_get_main_queue(), ^{
                [btn setTitle:@"检测完成" forState:UIControlStateNormal];
                btn.enabled = YES;
                NSDictionary *results = [[NSUserDefaults standardUserDefaults] objectForKey:@"com.mio.wechat.plugin.FriendDetection.results"];
                NSArray *deleted = results[@"deleted"];
                NSString *msg = deleted && deleted.count > 0
                    ? [NSString stringWithFormat:@"发现 %lu 个好友已将你删除", (unsigned long)deleted.count]
                    : @"未发现已将你删除的好友";
                UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测结果"
                                                                               message:msg
                                                                        preferredStyle:UIAlertControllerStyleAlert];
                [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
                [vc presentViewController:alert animated:YES completion:nil];
            });
        });
    }] forControlEvents:UIControlEventTouchUpInside];
    [vc.view addSubview:startBtn];

    // Results button (load previous results)
    UIButton *resultsBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    resultsBtn.frame = CGRectMake(40, 248, w - 80, 48);
    [resultsBtn setTitle:@"查看上次检测结果" forState:UIControlStateNormal];
    resultsBtn.backgroundColor = [UIColor colorWithRed:0.4 green:0.4 blue:0.4 alpha:1.0];
    [resultsBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    resultsBtn.layer.cornerRadius = 8;
    resultsBtn.titleLabel.font = [UIFont systemFontOfSize:15];
    [resultsBtn addAction:[UIAction actionWithTitle:@"" image:nil identifier:nil handler:^(__kindof UIAction *action) {
        NSDictionary *results = [[NSUserDefaults standardUserDefaults] objectForKey:@"com.mio.wechat.plugin.FriendDetection.results"];
        if (!results) {
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"提示"
                                                                           message:@"暂无检测记录"
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
            [vc presentViewController:alert animated:YES completion:nil];
            return;
        }
        NSArray *deleted = results[@"deleted"];
        NSString *ts = results[@"timestamp"]
            ? [[NSDate dateWithTimeIntervalSince1970:[results[@"timestamp"] doubleValue]] description]
            : @"未知";
        NSString *msg = [NSString stringWithFormat:@"上次检测: %@\n共 %@ 个好友, %lu 个已将你删除",
                         ts, results[@"total"], (unsigned long)deleted.count];
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"上次检测结果"
                                                                       message:msg
                                                                preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
        [vc presentViewController:alert animated:YES completion:nil];
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
