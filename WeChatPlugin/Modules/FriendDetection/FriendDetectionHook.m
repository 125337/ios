#import "FriendDetectionHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import "../../Core/LogManager.h"

/**
 * ============================================================================
 * 好友检测 - CContactMgr 本地属性检测
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

#pragma mark - FriendDetector

@interface MioFriendDetector : NSObject
@property (nonatomic, strong) NSArray *checkedFriendWxIDs;
@property (nonatomic, assign) BOOL checkFriendsEnd;
@property (nonatomic, strong) NSObject *friendCheckSem;
- (NSArray *)allFriends;
- (void)checkFriendsWithCompletion:(void(^)(NSArray *results))completion;
- (void)checkSpecificFriends:(NSArray *)wxIDs;
- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *results))completion;
@end

static NSArray *runDetection(NSArray *wxIDs);

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

#pragma mark - 主检测方法

- (void)checkSpecificFriends:(NSArray *)wxIDs completion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        WPLog(@"FriendDetect", @"[checkSpecificFriends] Starting with %lu wxIDs", (unsigned long)wxIDs.count);
        NSArray *results = runDetection(wxIDs);
        if (results && results.count > 0) {
            WPLog(@"FriendDetect", @"[checkSpecificFriends] Detection SUCCESS: %lu results", (unsigned long)results.count);
        } else {
            WPLog(@"FriendDetect", @"[checkSpecificFriends] ALL DETECTION METHODS FAILED");
            results = @[];
        }
        if (completion) completion(results);
    });
}

- (void)checkSpecificFriends:(NSArray *)wxIDs {
    [self checkSpecificFriends:wxIDs completion:nil];
}

- (void)checkFriendsWithCompletion:(void(^)(NSArray *))completion {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        WPLog(@"FriendDetect", @"[checkFriendsWithCompletion] Starting...");
        NSArray *friends = [self allFriends];
        if (!friends || friends.count == 0) { WPLog(@"FriendDetect", @"[checkFriendsWithCompletion] No friends"); if (completion) completion(@[]); return; }

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

#pragma mark - CContactMgr 本地属性检测

static NSArray *runDetection(NSArray *wxIDs) {
    WPLog(@"FriendDetect", @"[Main] === 本地属性检测开始 ===");

    Class mmSvcCls = objc_getClass("MMServiceCenter");
    if (!mmSvcCls) { WPLog(@"FriendDetect", @"[Main] MMServiceCenter 不可用"); return nil; }
    id mmServiceCenter = ((id (*)(Class, SEL))objc_msgSend)(mmSvcCls, sel_registerName("defaultCenter"));
    if (!mmServiceCenter) { WPLog(@"FriendDetect", @"[Main] defaultCenter nil"); return nil; }

    Class cContactCls = objc_getClass("CContact");
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(mmServiceCenter, sel_registerName("getService:"), objc_getClass("CContactMgr"));
    if (!contactMgr) { WPLog(@"FriendDetect", @"[Main] CContactMgr 不可用"); return nil; }

    BOOL hasGetByName = [contactMgr respondsToSelector:sel_registerName("getContactByName:")];
    WPLog(@"FriendDetect", @"[Main] CContactMgr: getContactByName=%d", hasGetByName);

    NSMutableArray *results = [NSMutableArray array];
    int total = (int)wxIDs.count, delCount = 0;
    for (int i = 0; i < total; i++) {
        @autoreleasepool {
            NSString *wxID = wxIDs[i];
            id contact = nil;

            if (hasGetByName) {
                @try {
                    contact = ((id (*)(id, SEL, NSString *))objc_msgSend)(contactMgr, sel_registerName("getContactByName:"), wxID);
                } @catch (NSException *e) {
                    WPLog(@"FriendDetect", @"[Main] getContactByName 异常(%@): %@", wxID, e.reason);
                }
            }

            BOOL isDeleted = !(contact && [contact isKindOfClass:cContactCls]);
            if (!isDeleted) {
                unsigned int vf = 0;
                @try { vf = [[contact valueForKey:@"m_uiVerifyFlag"] unsignedIntValue]; } @catch (...) {}
                if (vf > 0) {
                    isDeleted = YES;
                } else {
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
    WPLog(@"FriendDetect", @"[Main] 完成: %d total, %d deleted", total, delCount);
    return results;
}

static void saveResults(NSArray *results) {
    WPLog(@"FriendDetect", @"[Save] === Save results start ===");
    if (!results) { WPLog(@"FriendDetect", @"[Save] results is nil"); return; }
    WPLog(@"FriendDetect", @"[Save] Total results to process: %lu", (unsigned long)results.count);
    
    if (results.count > 0) {
        id first = results[0];
        WPLog(@"FriendDetect", @"[Save] First result class: %@", NSStringFromClass([first class]));
    }

    NSMutableArray *deleted = [NSMutableArray array];
    int valid = 0, processed = 0;
    for (id r in results) {
        processed++;
        BOOL isDel = NO, isInv = NO; id contact = nil;
        @try { isDel = [[r valueForKey:@"isDeleted"] boolValue]; } @catch (NSException *e) {}
        @try { isInv = [[r valueForKey:@"isInvalid"] boolValue]; } @catch (NSException *e) {}
        @try { contact = [r valueForKey:@"contact"]; } @catch (NSException *e) {}

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
    WPLog(@"FriendDetect", @"[Main] * Friend Detection Start");
    WPLog(@"FriendDetect", @"[Main] ****************************************");

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

    NSArray *results = runDetection(wxIDs);
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
                    if (!strongVC.isBeingPresented && !strongVC.isBeingDismissed && !strongVC.presentedViewController) {
                        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测失败"
                                                       message:@"请查看日志了解详情"
                                                preferredStyle:UIAlertControllerStyleAlert];
                        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
                        [strongVC presentViewController:alert animated:YES completion:nil];
                    }
                    return;
                }
                [btn setTitle:@"检测完成" forState:UIControlStateNormal];
                NSDictionary *results = [[NSUserDefaults standardUserDefaults] objectForKey:@"com.mio.wechat.plugin.FriendDetection.results"];
                NSArray *deleted = results[@"deleted"];
                NSString *msg = (deleted && deleted.count > 0)
                    ? [NSString stringWithFormat:@"发现 %lu 个好友已将你删除", (unsigned long)deleted.count]
                    : @"未发现已将你删除的好友";
                if (!strongVC.isBeingPresented && !strongVC.isBeingDismissed && !strongVC.presentedViewController) {
                    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"检测结果" message:msg
                                                preferredStyle:UIAlertControllerStyleAlert];
                    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
                    [strongVC presentViewController:alert animated:YES completion:nil];
                }
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
        if (strongVC.isBeingPresented || strongVC.isBeingDismissed || strongVC.presentedViewController) return;
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