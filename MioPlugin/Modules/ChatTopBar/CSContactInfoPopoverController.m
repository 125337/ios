#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 辅助：从 contact KVC 取值

static id contactValueForKey(id contact, NSString *key) {
    if (!contact || !key) return nil;
    return ((id (*)(id, SEL, NSString *))objc_msgSend)(
        contact, NSSelectorFromString(@"valueForKey:"), key);
}

static NSInteger contactIntForKey(id contact, NSString *key) {
    id val = contactValueForKey(contact, key);
    if (val) return [(NSNumber *)val integerValue];
    return 0;
}

@implementation CSContactInfoPopoverController {
    NSMutableArray *_sections;
    UITableView *_tableView;
}

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = contact;
        _avatarImage = avatar;
        if (contact) {
            _wxid = contactValueForKey(contact, @"m_nsUsrName");
        }
    }
    return self;
}

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
        (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor clearColor];

    _sections = [NSMutableArray new];

    UITableView *tableView = [[UITableView alloc] initWithFrame:self.view.bounds
                                                          style:UITableViewStyleGrouped];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.backgroundColor = [UIColor clearColor];
    tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    tableView.separatorInset = UIEdgeInsetsMake(0, 18, 0, 18);
    tableView.separatorColor = [UIColor colorWithWhite:0.85 alpha:1.0];
    tableView.rowHeight = 46;
    tableView.estimatedRowHeight = 46;
    tableView.showsVerticalScrollIndicator = NO;
    tableView.sectionHeaderHeight = 36;
    tableView.sectionFooterHeight = 0.01;
    tableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];

    [self.view addSubview:tableView];
    _tableView = tableView;

    if (_contact) {
        [self updateUIWithContact:_contact];
    }
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    if (CGSizeEqualToSize(self.preferredContentSize, CGSizeZero)) {
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
            self.preferredContentSize = CGSizeMake(400, 500);
        }
    }
}

#pragma mark - 数据构建

- (void)updateUIWithContact:(id)contact {
    [_sections removeAllObjects];

    [self addAvatarSection:contact];

    NSString *wxid = self.wxid;

    if ([wxid containsString:@"@chatroom"]) {
        [self addGroupInfoSection:contact];
    } else if ([wxid hasPrefix:@"gh_"]) {
        [self addOfficialAccountInfoSection:contact];
    } else {
        [self addBasicInfoSection:contact];
    }