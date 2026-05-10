#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Config/PluginConfig.h"

static void reLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"setting_entry.log"];
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

static void WPOtherViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"其他功能";

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = vc.view.bounds.size.width;

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;

    [sv addSubview:WPMakeSectionHeader(@"消息", y, w)];
    y += 32;

    UIView *msgCard = WPMakeCard(y, w);
    CGFloat mcy = 0;
    NSArray *msgItems = @[
        @[@"一键已读", @"ClearUnreadEnabled", @(config.clearUnreadEnabled)],
    ];
    id handler = [WeChatPluginSwitchHandler sharedInstance];
    for (NSUInteger i = 0; i < msgItems.count; i++) {
        if (i > 0) { WPAddSep(msgCard, mcy, w); mcy += 0.5; }
        WPAddSwitchRow(msgCard, mcy, w, msgItems[i][0], msgItems[i][1], [msgItems[i][2] boolValue], handler);
        mcy += kRowH;
    }
    CGRect mcf = msgCard.frame; mcf.size.height = mcy; msgCard.frame = mcf;
    [sv addSubview:msgCard];
    y += mcy + 16;

    [sv addSubview:WPMakeSectionHeader(@"其他", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cy = 0;
    NSArray *items = @[
        @[@"调试日志", @"DebugLogging", @(config.debugLogging)],
        @[@"隐藏内容", @"HideContent", @(config.hideContent)],
        @[@"免提示", @"NoTip", @(config.noTip)],
    ];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) { WPAddSep(card, cy, w); cy += 0.5; }
        WPAddSwitchRow(card, cy, w, items[i][0], items[i][1], [items[i][2] boolValue], handler);
        cy += kRowH;
    }
    CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
    [sv addSubview:card];
    y += cy + 40;
    sv.contentSize = CGSizeMake(w, y);
    reLog(@"[Sub] otherViewDidLoad");
}

@interface WPOtherVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPOtherVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPOtherVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPOtherVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPOtherViewDidLoad, "v@:");
            objc_registerClassPair(subClass);
            reLog(@"[Sub] WPOtherVC class created");
        } else {
            reLog(@"[Sub] WPOtherVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end
