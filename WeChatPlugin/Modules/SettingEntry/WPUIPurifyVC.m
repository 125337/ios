#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

static void WPUIPurifyViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"界面净化";

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = vc.view.bounds.size.width;

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;
    CGFloat scale = [UIScreen mainScreen].scale;

    [sv addSubview:WPMakeSectionHeader(@"消息显示", y, w)];
    y += 32;

    UIView *msgCard = WPMakeCard(y, w);
    CGFloat mcy = 0;
    NSArray *msgItems = @[
        @[@"隐藏水平分割线", @"HideSeparatorLine", @(config.hideSeparatorLine)],
        @[@"隐藏撤回消息提示", @"HideRevokeHint", @(config.hideRevokeHint)],
        @[@"隐藏拍一拍提示", @"HidePatHint", @(config.hidePatHint)],
        @[@"隐藏语音红点和转文字", @"HideVoiceRedDot", @(config.hideVoiceRedDot)],
    ];
    id handler = [WeChatPluginSwitchHandler sharedInstance];
    for (NSUInteger i = 0; i < msgItems.count; i++) {
        if (i > 0) {
            WPAddSep(msgCard, mcy, w);
            mcy = round((mcy + 1.0 / scale) * scale) / scale;
        }
        WPAddSwitchRow(msgCard, mcy, w, msgItems[i][0], msgItems[i][1], [msgItems[i][2] boolValue], handler, NULL);
        mcy += kRowH;
    }
    CGRect mcf = msgCard.frame; mcf.size.height = mcy; msgCard.frame = mcf;
    [sv addSubview:msgCard];
    y += mcy + 8;

    [sv addSubview:WPMakeSectionHeader(@"气泡与输入", y, w)];
    y += 32;

    UIView *bubbleCard = WPMakeCard(y, w);
    CGFloat bcy = 0;
    NSArray *bubbleItems = @[
        @[@"隐藏聊天气泡背景", @"HideBubbleBackground", @(config.hideBubbleBackground)],
        @[@"禁用输入框听写", @"DisableDictation", @(config.disableDictation)],
    ];
    for (NSUInteger i = 0; i < bubbleItems.count; i++) {
        if (i > 0) {
            WPAddSep(bubbleCard, bcy, w);
            bcy = round((bcy + 1.0 / scale) * scale) / scale;
        }
        WPAddSwitchRow(bubbleCard, bcy, w, bubbleItems[i][0], bubbleItems[i][1], [bubbleItems[i][2] boolValue], handler);
        bcy += kRowH;
    }
    CGRect bcf = bubbleCard.frame; bcf.size.height = bcy; bubbleCard.frame = bcf;
    [sv addSubview:bubbleCard];
    y += bcy + 8;
    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] uiPurifyViewDidLoad");
}

@interface WPUIPurifyVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUIPurifyVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUIPurifyVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUIPurifyVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUIPurifyViewDidLoad, "v@:");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPUIPurifyVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPUIPurifyVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end