#import "KeywordAlertHistoryVC.h"
#import "../../Modules/KeywordAlert/KeywordAlertConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"

@interface KeywordAlertHistoryVC () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSArray<NSDictionary *> *records;
@end

@implementation KeywordAlertHistoryVC

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"提醒历史";
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"清空" style:UIBarButtonItemStylePlain target:self action:@selector(clearAction)];

    self.tableView = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStylePlain];
    self.tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
    self.tableView.rowHeight = UITableViewAutomaticDimension;
    self.tableView.estimatedRowHeight = 72;
    [self.view addSubview:self.tableView];

    [self reloadRecords];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self reloadRecords];
}

- (void)reloadRecords {
    NSArray *raw = [KeywordAlertConfig shared].keywordAlertHistoryRecords ?: @[];
    self.records = [raw filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id item, NSDictionary *bindings) {
        return [item isKindOfClass:[NSDictionary class]];
    }]];
    WPLog(@"KeywordAlert", @"[HISTORY] 加载 %lu 条记录", (unsigned long)self.records.count);
    [self.tableView reloadData];
}

#pragma mark - Actions

- (void)clearAction {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"清空历史"
                                                                   message:@"确定清空全部提醒历史？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
        [KeywordAlertConfig shared].keywordAlertHistoryRecords = @[];
        [ConfigManager saveAll];
        WPLog(@"KeywordAlert", @"[HISTORY] 已清空全部历史记录");
        [self reloadRecords];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

#pragma mark - DataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.records.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *reuse = @"KeywordAlertHistoryCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:reuse];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:reuse];
        cell.textLabel.font = [UIFont boldSystemFontOfSize:14];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.numberOfLines = 3;
        cell.detailTextLabel.textColor = [UIColor secondaryLabelColor];
    }

    NSDictionary *r = self.records[indexPath.row];
    NSString *sessionName = r[@"sessionName"] ?: r[@"session"] ?: @"";
    NSString *senderName = r[@"senderName"] ?: @"";
    NSString *keywords = r[@"keywords"] ?: @"";
    NSTimeInterval t = [r[@"time"] doubleValue];
    NSString *timeText = [NSDateFormatter localizedStringFromDate:[NSDate dateWithTimeIntervalSince1970:t]
                                                        dateStyle:NSDateFormatterShortStyle
                                                        timeStyle:NSDateFormatterShortStyle];

    cell.textLabel.text = [NSString stringWithFormat:@"%@ · %@", sessionName, senderName];
    cell.detailTextLabel.text = [NSString stringWithFormat:@"[%@] %@\n%@ · %@", keywords, r[@"content"] ?: @"", timeText, [r[@"isGroup"] boolValue] ? @"群聊" : @"私聊"];
    return cell;
}

@end
