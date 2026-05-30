#import "ChatTopBarBlacklistEditorVC.h"
#import "../../Config/WPColors.h"
#import "../../Config/Constants.h"
#import "../../Config/PluginConfig.h"

@interface ChatTopBarBlacklistEditorVC () <UITextViewDelegate>
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UITextView *editorView;
@end

@implementation ChatTopBarBlacklistEditorVC

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"管理显示黑名单";
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    [self setupNavBar];
    [self setupScrollView];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 20.0;

    y = [self buildHelpTableAtY:y width:w];
    y += 20.0;
    y = [self buildEditorSectionAtY:y width:w];

    // 加载已有黑名单（优先使用传入的 blacklist，fallback PluginConfig）
    NSString *saved = self.blacklist;
    if (!saved.length) {
        saved = [PluginConfig shared].chatAvatarBlacklist;
    }
    if (saved.length > 0) {
        self.editorView.text = saved;
    }

    CGRect cf = self.contentView.frame;
    cf.size.height = y + 40.0;
    self.contentView.frame = cf;
    self.scrollView.contentSize = CGSizeMake(w, cf.size.height);

    [self registerKeyboardNotifications];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - NavBar

- (void)setupNavBar {
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(closeAction)];
    UIBarButtonItem *restore = [[UIBarButtonItem alloc]
        initWithTitle:@"恢复" style:UIBarButtonItemStylePlain target:self action:@selector(restoreAction)];
    UIBarButtonItem *save = [[UIBarButtonItem alloc]
        initWithTitle:@"保存" style:UIBarButtonItemStyleDone target:self action:@selector(saveAction)];
    self.navigationItem.rightBarButtonItems = @[save, restore];
}

#pragma mark - ScrollView

- (void)setupScrollView {
    self.scrollView = [[UIScrollView alloc] initWithFrame:self.view.bounds];
    self.scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.scrollView.keyboardDismissMode = UIScrollViewKeyboardDismissModeInteractive;
    [self.view addSubview:self.scrollView];

    self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 0)];
    [self.scrollView addSubview:self.contentView];
}

#pragma mark - 提示表格

- (CGFloat)buildHelpTableAtY:(CGFloat)y width:(CGFloat)w {
    NSArray<NSString *> *leftItems = @[@"{群聊}", @"{私聊}", @"{公众号}", @"wxid_xxxx", @"使用说明"];
    NSArray<NSString *> *rightItems = @[
        @"屏蔽所有群聊",
        @"屏蔽所有私聊",
        @"屏蔽所有公众号",
        @"屏蔽指定对象",
        @"每行一个占位符",
    ];

    NSInteger count = leftItems.count;
    CGFloat rowH = 25.0;
    CGFloat cornerR = 10.0;
    CGFloat leftX = 20.0;
    CGFloat descX = 92.0;
    CGFloat descW = w - descX - 15.0;

    CGFloat totalH = count * rowH;
    UIView *table = [[UIView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, totalH)];
    table.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    table.layer.cornerRadius = cornerR;
    table.layer.borderWidth = 0.5;
    table.layer.borderColor = [UIColor separatorColor].CGColor;
    table.clipsToBounds = YES;
    [self.contentView addSubview:table];

    UIFont *tokenFont = [UIFont systemFontOfSize:14.0 weight:UIFontWeightSemibold];
    UIFont *descFont = [UIFont systemFontOfSize:14.0 weight:UIFontWeightRegular];

    for (NSInteger i = 0; i < count; i++) {
        UILabel *leftLbl = [[UILabel alloc] initWithFrame:CGRectMake(leftX, i * rowH, 70.0, rowH)];
        leftLbl.text = leftItems[i];
        leftLbl.font = tokenFont;
        leftLbl.textColor = [UIColor systemBlueColor];
        [table addSubview:leftLbl];

        UILabel *rightLbl = [[UILabel alloc] initWithFrame:CGRectMake(descX, i * rowH, descW, rowH)];
        rightLbl.text = rightItems[i];
        rightLbl.font = descFont;
        rightLbl.textColor = [UIColor secondaryLabelColor];
        [table addSubview:rightLbl];

        if (i < count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:CGRectMake(leftX, (i + 1) * rowH - 0.5, w - 30.0 - leftX - 15.0, 0.5)];
            sep.backgroundColor = [UIColor separatorColor];
            [table addSubview:sep];
        }
    }

    return CGRectGetMaxY(table.frame);
}

#pragma mark - 编辑区

- (CGFloat)buildEditorSectionAtY:(CGFloat)y width:(CGFloat)w {
    UILabel *header = [[UILabel alloc] initWithFrame:CGRectMake(20.0, y, w - 40.0, 20.0)];
    header.text = @"编辑黑名单:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    CGFloat tvH = 150.0;
    self.editorView = [[UITextView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, tvH)];
    self.editorView.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular];
    self.editorView.textColor = [UIColor labelColor];
    self.editorView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.editorView.layer.cornerRadius = 10.0;
    self.editorView.layer.borderWidth = 1.0;
    self.editorView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.editorView.delegate = self;
    self.editorView.autocorrectionType = UITextAutocorrectionTypeNo;
    self.editorView.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.editorView.returnKeyType = UIReturnKeyDone;

    [self.contentView addSubview:self.editorView];

    return CGRectGetMaxY(self.editorView.frame);
}

#pragma mark - UITextViewDelegate

- (void)textViewDidChange:(UITextView *)textView {
    // 仅用于UI交互
}

#pragma mark - Actions

- (void)closeAction {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)restoreAction {
    [self.editorView resignFirstResponder];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"清空黑名单"
                                                                   message:@"确定要清空所有黑名单内容吗？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"清空"
                                              style:UIAlertActionStyleDestructive
                                            handler:^(UIAlertAction *action) {
        self.editorView.text = @"";
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)saveAction {
    [self.editorView resignFirstResponder];

    NSString *rawText = self.editorView.text ?: @"";
    NSArray *rawLines = [rawText componentsSeparatedByString:@"\n"];

    // 去重 + trim（对齐微信 saveAndDismiss）
    NSMutableArray *deduped = [NSMutableArray array];
    for (NSString *line in rawLines) {
        NSString *trimmed = [line stringByTrimmingCharactersInSet:
                              [NSCharacterSet whitespaceCharacterSet]];
        if (!trimmed.length) continue;
        if ([deduped containsObject:trimmed]) continue;
        [deduped addObject:trimmed];
    }

    NSString *cleanText = [deduped componentsJoinedByString:@"\n"];

    // saveBlock 回调
    if (self.saveBlock) {
        self.saveBlock(cleanText);
    }

    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - Keyboard

- (void)registerKeyboardNotifications {
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(kbShow:)
                                                 name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(kbHide:)
                                                 name:UIKeyboardWillHideNotification object:nil];
}

- (void)kbShow:(NSNotification *)n {
    CGRect kb = [n.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    kb = [self.view convertRect:kb fromView:nil];
    UIEdgeInsets insets = self.scrollView.contentInset;
    insets.bottom = kb.size.height;
    self.scrollView.contentInset = insets;
    self.scrollView.scrollIndicatorInsets = insets;
}

- (void)kbHide:(NSNotification *)n {
    self.scrollView.contentInset = UIEdgeInsetsZero;
    self.scrollView.scrollIndicatorInsets = UIEdgeInsetsZero;
}

@end