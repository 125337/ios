#import "SettingDevToolsController.h"
#import "../../Config/PluginConfig.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Modules/DevTools/MioLogMonitor.h"
#import "../../Modules/DevTools/MioNavMonitor.h"

@interface MioLogViewerController : UITableViewController
@property (nonatomic, strong) NSArray<NSString *> *logs;
@property (nonatomic, strong) UITextView *logTextView;
@end

@implementation MioLogViewerController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"NSLog 日志";
    self.logs = [[MioLogMonitor sharedInstance] allLogs];

    self.logTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.logTextView.editable = NO;
    self.logTextView.font = [UIFont monospacedSystemFontOfSize:11];
    self.logTextView.text = [self.logs componentsJoinedByString:@"\n"];
    self.logTextView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.logTextView];

    UIBarButtonItem *clearBtn = [[UIBarButtonItem alloc]
        initWithTitle:@"清空" style:UIBarButtonItemStylePlain
        target:self action:@selector(clearAll)];
    self.navigationItem.rightBarButtonItem = clearBtn;
}

- (void)clearAll {
    [[MioLogMonitor sharedInstance] clearLogs];
    self.logTextView.text = @"";
}

@end

@interface MioNavViewerController : UITableViewController
@property (nonatomic, strong) NSArray<NSString *> *logs;
@property (nonatomic, strong) UITextView *logTextView;
@end

@implementation MioNavViewerController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"导航日志";
    self.logs = [[MioNavMonitor sharedInstance] allLogs];

    self.logTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.logTextView.editable = NO;
    self.logTextView.font = [UIFont monospacedSystemFontOfSize:11];
    self.logTextView.text = [self.logs componentsJoinedByString:@"\n"];
    self.logTextView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.logTextView];

    UIBarButtonItem *clearBtn = [[UIBarButtonItem alloc]
        initWithTitle:@"清空" style:UIBarButtonItemStylePlain
        target:self action:@selector(clearAll)];
    self.navigationItem.rightBarButtonItem = clearBtn;
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

    UIBarButtonItem *refreshBtn = [[UIBarButtonItem alloc]
        initWithTitle:@"刷新" style:UIBarButtonItemStylePlain
        target:self action:@selector(refresh)];
    self.navigationItem.rightBarButtonItem = refreshBtn;

    self.textView = [[UITextView alloc] initWithFrame:self.view.bounds];
    self.textView.editable = NO;
    self.textView.font = [UIFont monospacedSystemFontOfSize:12];
    self.textView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.textView];

    [self refresh];
}

- (void)refresh {
    NSAttributedString *hierarchy = [[MioNavMonitor sharedInstance] currentViewControllerHierarchy];
    self.textView.attributedText = hierarchy;
}

@end

#pragma mark - Main Controller

@implementation SettingDevToolsController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"开发者工具";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"NSLog 日志监控" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:g1 title:@"开启NSLog监控" key:@"nsLogMonitorEnabled"
                               isOn:config.nsLogMonitorEnabled cy:cy width:w action:^(UISwitch *s) {
        if (s.isOn) {
            [[MioLogMonitor sharedInstance] startMonitoring];
        } else {
            [[MioLogMonitor sharedInstance] stopMonitoring];
        }
    }];
    cy = [self addSeparatorInGroup:g1 cy:cy width:w];

    cy = [self addSwitchRowInGroup:g1 title:@"本地保存" key:@"nsLogLocalSave"
                               isOn:config.nsLogLocalSave cy:cy width:w action:nil];
    cy = [self addSeparatorInGroup:g1 cy:cy width:w];

    cy = [self addTextFieldRowInGroup:g1 title:@"关键词过滤(逗号分隔)"
                                   key:@"nsLogKeywords" value:config.nsLogKeywords
                                     placeholder:@"留空则捕获全部" cy:cy width:w];

    y = CGRectGetMaxY(g1.frame) + 12;
    y = [self addSectionHeader:@"导航监控 (VC抓取)" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addSwitchRowInGroup:g2 title:@"开启导航监控" key:@"navMonitorEnabled"
                               isOn:config.navMonitorEnabled cy:cy width:w action:^(UISwitch *s) {
        if (s.isOn) {
            [[MioNavMonitor sharedInstance] startMonitoring];
        } else {
            [[MioNavMonitor sharedInstance] stopMonitoring];
        }
    }];

    y = CGRectGetMaxY(g2.frame) + 12;
    y = [self addSectionHeader:@"查看器" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addButtonRowInGroup:g3 title:@"查看 NSLog 日志" cy:cy width:w action:^{
        MioLogViewerController *vc = [[MioLogViewerController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
    }];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addButtonRowInGroup:g3 title:@"查看导航日志" cy:cy width:w action:^{
        MioNavViewerController *vc = [[MioNavViewerController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
    }];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addButtonRowInGroup:g3 title:@"显示 VC 层级树" cy:cy width:w block:^{
        MioHierarchyViewerController *vc = [[MioHierarchyViewerController alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
    }];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    cy = [self addDestructiveButtonRowInGroup:g3 title:@"清空所有日志" cy:cy width:w action:^{
        [[MioLogMonitor sharedInstance] clearLogs];
        [[MioNavMonitor sharedInstance] clearLogs];
    }];

    self.contentView.contentSize = CGSizeMake(w, CGRectGetMaxY(g3.frame) + 20);
}

@end
