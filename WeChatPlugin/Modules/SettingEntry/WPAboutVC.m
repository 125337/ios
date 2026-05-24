#import "WPCommonUI.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"

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

static void WPAboutViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"关于";

    CGFloat w = vc.view.bounds.size.width;
    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;

    UIView *heroCard = WPMakeCard(y, w);
    CGFloat hy = 24;
    UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 30)];
    nameLabel.text = @"Mio助手";
    nameLabel.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    nameLabel.textColor = WPAccent();
    nameLabel.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:nameLabel];
    hy += 34;

    UILabel *verLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 20)];
    verLabel.text = @"v2.0.0";
    verLabel.font = [UIFont systemFontOfSize:13];
    verLabel.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
    verLabel.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:verLabel];
    hy += 24;

    UILabel *descLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, hy, w - kPad * 2 - 40, 40)];
    descLabel.text = @"模块化微信插件，支持自动抢红包、防撤回等功能";
    descLabel.font = [UIFont systemFontOfSize:13];
    descLabel.textColor = WPT3();
    descLabel.textAlignment = NSTextAlignmentCenter;
    descLabel.numberOfLines = 2;
    [heroCard addSubview:descLabel];
    hy += 48;

    CGRect hcf = heroCard.frame; hcf.size.height = hy; heroCard.frame = hcf;
    [sv addSubview:heroCard];
    y += hy + 16;

    [sv addSubview:WPMakeSectionHeader(@"架构", y, w)];
    y += 32;

    UIView *archCard = WPMakeCard(y, w);
    CGFloat ay = 0;
    NSArray *archs = @[@[@"RedEnvelopHook", @"自动抢红包"], @[@"PreventRecallHook", @"防撤回"], @[@"HookEngine", @"Hook引擎"], @[@"PluginConfig", @"配置中心"]];
    for (NSUInteger i = 0; i < archs.count; i++) {
        if (i > 0) { WPAddSep(archCard, ay, w); ay += 0.5; }
        WPAddInfoRow(archCard, ay, w, archs[i][0], archs[i][1]);
        ay += kRowH;
    }
    CGRect acf = archCard.frame; acf.size.height = ay; archCard.frame = acf;
    [sv addSubview:archCard];
    y += ay + 40;
    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] aboutViewDidLoad");
}

@interface WPAboutVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPAboutVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPAboutVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPAboutVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPAboutViewDidLoad, "v@:");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPAboutVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPAboutVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end
