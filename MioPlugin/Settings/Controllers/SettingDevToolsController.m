#import "SettingDevToolsController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Modules/DevTools/MioLogMonitor.h"
#import "../../Modules/DevTools/MioNavMonitor.h"

@interface MioLogViewerController : UITableViewController
@property (nonatomic, strong) UITextView *logTextView;
@end

@implementation MioLogViewerController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"NSLog 日志";
    NSArray *logs = [[MioLogMonitor sharedInstance] allLogs];
    self.logTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.logTextView.editable = NO;
    self.logTextView.font = [UIFont monospacedSystemFontOfSize:11 weight:UIFontWeightRegular];
    self.logTextView.text = [logs componentsJoinedByString:@"\n"];
    self.logTextView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.logTextView];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"清空" style:UIBarButtonItemStylePlain
        target:self action:@selector(clearAll)];
}
- (void)clearAll {
    [[MioLogMonitor sharedInstance] clearLogs];
    self.logTextView.text = @"";
}
@end

@interface MioNavViewerController : UITableViewController
@property (nonatomic, strong) UITextView *logTextView;
@end

@implementation MioNavViewerController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"导航日志";
    NSArray *logs = [[MioNavMonitor sharedInstance] allLogs];
    self.logTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.logTextView.editable = NO;
    self.logTextView.font = [UIFont monospacedSystemFontOfSize:11 weight:UIFontWeightRegular];
    self.logTextView.text = [logs componentsJoinedByString:@"\n"];
    self.logTextView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.logTextView];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"清空" style:UIBarButtonItemStylePlain
        target:self action:@selector(clearAll)];
}
- (void)clearAll {
    [[MioNavMonitor sharedInstance] clearLogs];
    self.logTextView.text = @"";
}
@end

@interface MioHierarchyViewerController : UIViewController
@property (nonatomic, strong) UITextView *textView;
@end

@implementation MioHierarchyViewerController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"VC 层级树";
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"刷新" style:UIBarButtonItemStylePlain
        target:self action:@selector(refresh)];
    self.textView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.textView.editable = NO;
    self.textView.font = [UIFont monospacedSystemFontOfSize:12 weight:UIFontWeightRegular];
    self.textView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.textView];
    [self refresh];
}
- (void)refresh {
    self.textView.attributedText = [[MioNavMonitor sharedInstance] currentViewControllerHierarchy];
}
@end

@implementation SettingDevToolsController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"开发者工具";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) { [v removeFromSuperview]; }
    DevToolsConfig *config = [DevToolsConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"NSLog 日志监控" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:g1 title:@"开启NSLog监控" desc:nil key:@"nsLogMonitorEnabled"
                               isOn:config.nsLogMonitorEnabled cy:cy width:w];
    cy = [self addSeparatorInGroup:g1 cy:cy width:w];

    cy = [self addSwitchRowInGroup:g1 title:@"本地保存" desc:nil key:@"nsLogLocalSave"
                               isOn:config.nsLogLocalSave cy:cy width:w];
    cy = [self addSeparatorInGroup:g1 cy:cy width:w];

    cy = [self addInputRowInGroup:g1 title:@"关键词过滤" key:@"nsLogKeywords"
                               value:config.nsLogKeywords hint:@"留空则捕获全部" valueType:InputValueTypeText cy:cy width:w];

    y = CGRectGetMaxY(g1.frame) + 12;
    y = [self addSectionHeader:@"导航监控 (VC抓取)" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addSwitchRowInGroup:g2 title:@"开启导航监控" desc:nil key:@"navMonitorEnabled"
                               isOn:config.navMonitorEnabled cy:cy width:w];

    y = CGRectGetMaxY(g2.frame) + 12;
    y = [self addSectionHeader:@"查看器" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addButtonRowInGroup:g3 title:@"查看 NSLog 日志" hint:@"" key:nil cy:cy width:w];
    UIButton *btn1 = (UIButton *)[g3 viewWithTag:(NSInteger)(cy * 1000 + 100)];
    if ([btn1 isKindOfClass:[UIButton class]]) {
        [btn1 removeTarget:nil action:nil forControlEvents:UIControlEventTouchUpInside];
        [btn1 addTarget:self action:@selector(openLogViewer) forControlEvents:UIControlEventTouchUpInside];
    }
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addButtonRowInGroup:g3 title:@"查看导航日志" hint:@"" key:nil cy:cy width:w];
    UIButton *btn2 = (UIButton *)[g3 viewWithTag:(NSInteger)(cy * 1000 + 100)];
    if ([btn2 isKindOfClass:[UIButton class]]) {
        [btn2 removeTarget:nil action:nil forControlEvents:UIControlEventTouchUpInside];
        [btn2 addTarget:self action:@selector(openNavViewer) forControlEvents:UIControlEventTouchUpInside];
    }
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addButtonRowInGroup:g3 title:@"显示 VC 层级树" hint:@"" key:nil cy:cy width:w];
    UIButton *btn3 = (UIButton *)[g3 viewWithTag:(NSInteger)(cy * 1000 + 100)];
    if ([btn3 isKindOfClass:[UIButton class]]) {
        [btn3 removeTarget:nil action:nil forControlEvents:UIControlEventTouchUpInside];
        [btn3 addTarget:self action:@selector(openHierarchyViewer) forControlEvents:UIControlEventTouchUpInside];
    }
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addButtonRowInGroup:g3 title:@"清空所有日志" hint:@"" key:nil cy:cy width:w];
    UIButton *btn4 = (UIButton *)[g3 viewWithTag:(NSInteger)(cy * 1000 + 100)];
    if ([btn4 isKindOfClass:[UIButton class]]) {
        btn4.titleLabel.textColor = UIColor.redColor;
        [btn4 removeTarget:nil action:nil forControlEvents:UIControlEventTouchUpInside];
        [btn4 addTarget:self action:@selector(clearAllLogs) forControlEvents:UIControlEventTouchUpInside];
    }
}

- (void)openLogViewer {
    [self.navigationController pushViewController:[[MioLogViewerController alloc] init] animated:YES];
}
- (void)openNavViewer {
    [self.navigationController pushViewController:[[MioNavViewerController alloc] init] animated:YES];
}
- (void)openHierarchyViewer {
    [self.navigationController pushViewController:[[MioHierarchyViewerController alloc] init] animated:YES];
}
- (void)clearAllLogs {
    [[MioLogMonitor sharedInstance] clearLogs];
    [[MioNavMonitor sharedInstance] clearLogs];
}

@end
