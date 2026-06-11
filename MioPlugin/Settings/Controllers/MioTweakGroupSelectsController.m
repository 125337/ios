#import "MioTweakGroupSelectsController.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

static void gsLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"redenvelop.log"];
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

@interface ContactSelectView : UIView {
    id _delegate;
    BOOL _m_bMultiSelect;
    BOOL _m_bShowHistoryGroup;
    BOOL _m_bShowRadarCreateRoom;
    unsigned int _m_uiGroupScene;
    NSMutableDictionary *_m_dicMultiSelect;
}
@property (nonatomic, assign) unsigned int m_uiGroupScene;
@property (nonatomic, assign) BOOL m_bMultiSelect;
@property (nonatomic, assign) BOOL m_bShowHistoryGroup;
@property (nonatomic, assign) BOOL m_bShowRadarCreateRoom;
@property (nonatomic, retain) NSMutableDictionary *m_dicMultiSelect;
- (id)initWithFrame:(CGRect)frame delegate:(id)delegate;
- (void)initData:(unsigned int)scene;
- (void)initView;
- (void)addSelect:(id)contact;
- (void)removeSelect:(id)contact;
- (unsigned long long)getTotalSelectCount;
@end

@protocol ContactSelectViewDelegate <NSObject>
- (void)onSelectContact:(id)arg1;
@optional
- (UIViewController *)getViewController;
@end

@interface MioTweakGroupSelectsController () <ContactSelectViewDelegate> {
    id _helper;
}
@property (strong, nonatomic) ContactSelectView *selectView;
@property (strong, nonatomic) NSArray<NSString *> *selectedGroups;
@property (copy, nonatomic) NSString *titleText;
@end

@implementation MioTweakGroupSelectsController

- (void)dealloc {
}

- (instancetype)initWithSelectedGroups:(NSArray<NSString *> *)selectedGroups title:(NSString *)title {
    gsLog(@"[GroupSelect] initWithSelectedGroups called");
    if (self = [super initWithNibName:nil bundle:nil]) {
        _selectedGroups = (selectedGroups ?: @[]);
        _titleText = [(title ?: @"选择群聊") copy];
        gsLog([NSString stringWithFormat:@"[GroupSelect] _selectedGroups=%@, _titleText=%@", _selectedGroups, _titleText]);
        Class helperClass = objc_getClass("MMUIViewController");
        if (helperClass) {
            _helper = [[helperClass alloc] init];
            gsLog(@"[GroupSelect] _helper created");
        }
    }
    return self;
}

- (void)viewDidLoad {
    gsLog(@"[GroupSelect] viewDidLoad called");
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:239/255.0 green:239/255.0 blue:244/255.0 alpha:1.0];
    self.edgesForExtendedLayout = UIRectEdgeNone;
    [self setupNavigationBar];
    gsLog(@"[GroupSelect] setupNavigationBar done");
    [self setupSelectView];
    gsLog(@"[GroupSelect] setupSelectView done");
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    if (self.selectView) {
        CGRect frame = self.view.bounds;
        self.selectView.frame = frame;
    }
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self preSelectGroups];
}

- (void)setupNavigationBar {
    self.title = self.titleText;
    
    UIBarButtonItem *cancelItem = [[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStylePlain target:self action:@selector(onCancel)];
    self.navigationItem.leftBarButtonItem = cancelItem;
    
    [self updateRightBarButton];
}

- (void)updateRightBarButton {
    NSUInteger count = [self getSelectedCount];
    NSString *title = count > 0 ? [NSString stringWithFormat:@"确定(%lu)", (unsigned long)count] : @"确定";
    UIBarButtonItem *doneItem = [[UIBarButtonItem alloc] initWithTitle:title style:UIBarButtonItemStyleDone target:self action:@selector(onDone)];
    self.navigationItem.rightBarButtonItem = doneItem;
}

- (void)setupSelectView {
    gsLog(@"[GroupSelect] setupSelectView start");
    Class selectViewClass = objc_getClass("ContactSelectView");
    gsLog([NSString stringWithFormat:@"[GroupSelect] ContactSelectView class=%@", selectViewClass]);
    if (!selectViewClass) {
        gsLog(@"[GroupSelect] ContactSelectView class not found!");
        UILabel *errorLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 100, self.view.bounds.size.width - 40, 40)];
        errorLabel.text = @"无法加载群选择器";
        errorLabel.textAlignment = NSTextAlignmentCenter;
        errorLabel.textColor = [UIColor grayColor];
        [self.view addSubview:errorLabel];
        return;
    }
    
    @try {
        CGRect frame = self.view.bounds;
        self.selectView = [[selectViewClass alloc] initWithFrame:frame delegate:self];
        self.selectView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        gsLog([NSString stringWithFormat:@"[GroupSelect] ContactSelectView created: %@", self.selectView]);
        
        self.selectView.m_uiGroupScene = 5;
        self.selectView.m_bMultiSelect = YES;
        [self.selectView initData:5];
        self.selectView.m_bShowHistoryGroup = NO;
        self.selectView.m_bShowRadarCreateRoom = NO;
        [self.selectView initView];
        
        [self.view addSubview:self.selectView];
        gsLog(@"[GroupSelect] selectView added to self.view");
    } @catch (NSException *e) {
        gsLog([NSString stringWithFormat:@"[GroupSelect] exception in setupSelectView: %@", e]);
    }
}

- (void)preSelectGroups {
    if (!self.selectView || self.selectedGroups.count == 0) return;
    
    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass) return;
    
    id center = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return;
    
    Class contactMgrClass = objc_getClass("CContactMgr");
    if (!contactMgrClass) return;
    
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), contactMgrClass);
    if (!contactMgr) return;
    
    for (NSString *groupId in self.selectedGroups) {
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, NSSelectorFromString(@"getContactByName:"), groupId);
        if (contact) {
            [self.selectView addSelect:contact];
        }
    }
    
    [self updateRightBarButton];
}

- (NSUInteger)getSelectedCount {
    if (!self.selectView) return 0;
    return (NSUInteger)[self.selectView.m_dicMultiSelect count];
}

- (NSArray<NSString *> *)getSelectedGroupIds {
    if (!self.selectView) return @[];
    
    NSMutableArray<NSString *> *groupIds = [NSMutableArray array];
    
    // 优先从 allValues（contact 对象）提取 m_nsUsrName
    for (id contact in [self.selectView.m_dicMultiSelect allValues]) {
        if ([contact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
            NSString *usrName = ((NSString *(*)(id, SEL))objc_msgSend)(
                contact, NSSelectorFromString(@"m_nsUsrName"));
            if (usrName.length > 0) {
                [groupIds addObject:usrName];
            }
        }
    }
    
    // fallback：如果 values 方式取不到，退回到 keys 方式并过滤非 NSString
    if (groupIds.count == 0) {
        for (id key in [self.selectView.m_dicMultiSelect allKeys]) {
            if ([key isKindOfClass:[NSString class]]) {
                [groupIds addObject:(NSString *)key];
            }
        }
    }
    
    return [groupIds copy];
}

- (void)onCancel {
    if ([self.delegate respondsToSelector:@selector(onGroupSelectCancel)]) {
        [self.delegate onGroupSelectCancel];
    }
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)onDone {
    NSArray<NSString *> *groupIds = [self getSelectedGroupIds];
    
    // 日志：保存确认 + 类型验证
    gsLog([NSString stringWithFormat:@"[DONE] 群黑名单保存: %lu 个群", (unsigned long)groupIds.count]);
    if (groupIds.count > 0) {
        gsLog([NSString stringWithFormat:@"[DONE] items: %@", groupIds]);
        BOOL allString = YES;
        for (id item in groupIds) {
            if (![item isKindOfClass:[NSString class]]) {
                allString = NO;
                gsLog([NSString stringWithFormat:@"[DONE] ⚠ 发现非 NSString 元素: %@", item]);
                break;
            }
        }
        gsLog([NSString stringWithFormat:@"[DONE] 类型验证: %@", allString ? @"✅ 全部为 NSString" : @"❌ 存在非 NSString"]);
    }
    
    if ([self.delegate respondsToSelector:@selector(onGroupSelectReturn:)]) {
        [self.delegate onGroupSelectReturn:groupIds];
    }
    [self.navigationController popViewControllerAnimated:YES];
}

#pragma mark - ContactSelectViewDelegate

- (void)onSelectContact:(id)contact {
    [self updateRightBarButton];
}

- (UIViewController *)getViewController {
    return self;
}

- (id)forwardingTargetForSelector:(SEL)aSelector {
    if (_helper && [_helper respondsToSelector:aSelector]) {
        return _helper;
    }
    return nil;
}

@end
