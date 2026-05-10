#import "../Common/SettingController.h"
#import "../../Registry/FeatureRegistry.h"
#import <objc/runtime.h>

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

@implementation SettingController

- (void)viewDidLoad {
    reLog(@"[UI] SettingController viewDidLoad 开始");
    @try {
        [super viewDidLoad];
        self.title = @"Mio助手";
        reLog([NSString stringWithFormat:@"[UI] scrollView=%@ contentView=%@", self.scrollView ? @"有" : @"无", self.contentView ? @"有" : @"无"]);
        
        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat y = 0;

        UIView *heroCard = [[UIView alloc] initWithFrame:CGRectMake(16, y, w - 32, 130)];
        heroCard.backgroundColor = [UIColor whiteColor];
        heroCard.layer.cornerRadius = 12;
        if (@available(iOS 13.0, *)) heroCard.layer.cornerCurve = kCACornerCurveContinuous;
        heroCard.clipsToBounds = YES;
        [self.contentView addSubview:heroCard];

        UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - 32 - 80) / 2, 20, 80, 80)];
        avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
        avatar.layer.cornerRadius = 40;
        [heroCard addSubview:avatar];

        UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 108, w - 32, 26)];
        heroName.text = @"Mio助手";
        heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
        heroName.textColor = [UIColor colorWithRed:0.2 green:0.78 blue:0.349 alpha:1.0];
        heroName.textAlignment = NSTextAlignmentCenter;
        [heroCard addSubview:heroName];
        y += 146;

        y = [self addSectionHeader:@"功能列表" y:y width:w];

        UIView *group = [self addTableGroupAtY:y width:w];
        CGFloat cy = 0;

        NSInteger tag = 1000;
        NSArray *sectionTitles = [FeatureRegistry orderedSectionTitles];
        reLog([NSString stringWithFormat:@"[UI] sections=%@", sectionTitles]);
        
        for (NSString *sectionTitle in sectionTitles) {
            NSArray<SettingCategoryItem *> *items = [FeatureRegistry itemsForSection:sectionTitle];
            reLog([NSString stringWithFormat:@"[UI] section=%@ items=%lu", sectionTitle, (unsigned long)items.count]);
            if (items.count == 0) continue;

            for (SettingCategoryItem *item in items) {
                if (cy > 0) cy = [self addSeparatorInGroup:group cy:cy width:w];
                cy = [self addNavRowInGroup:group title:item.title subtitle:item.subtitle tag:tag action:@selector(categoryTapped:) cy:cy width:w];
                UIButton *button = (UIButton *)[group viewWithTag:tag];
                if ([button isKindOfClass:[UIButton class]]) {
                    objc_setAssociatedObject(button, "item", item, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                tag += 1;
            }
        }

        y = [self finishGroup:group atY:y height:cy];

        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(0, y + 12, w, 40)];
        footer.text = @"Mio助手 © 2024 ~ 2026\nDeveloped with <3\nAll Rights Reserved";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];
        footer.textAlignment = NSTextAlignmentCenter;
        footer.numberOfLines = 3;
        [self.contentView addSubview:footer];

        self.contentView.frame = CGRectMake(0, 0, w, y + 60);
        self.scrollView.contentSize = CGSizeMake(w, y + 60);
        reLog(@"[UI] SettingController viewDidLoad 完成");
    } @catch (NSException *e) {
        reLog([NSString stringWithFormat:@"[UI] SettingController viewDidLoad 异常: %@ - %@", e.name, e.reason]);
    }
}

- (void)categoryTapped:(UIButton *)sender {
    @try {
        SettingCategoryItem *item = objc_getAssociatedObject(sender, "item");
        reLog([NSString stringWithFormat:@"[UI] categoryTapped: %@ controller=%@", item.title, item.controllerClass ? NSStringFromClass(item.controllerClass) : @"nil"]);
        if (!item.controllerClass) return;
        UIViewController *vc = [[item.controllerClass alloc] init];
        [self.navigationController pushViewController:vc animated:YES];
    } @catch (NSException *e) {
        reLog([NSString stringWithFormat:@"[UI] categoryTapped 异常: %@ - %@", e.name, e.reason]);
    }
}

@end
