#import "MessageTimeFormatEditorVC.h"
#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 CSTimeFormatEditorViewController
// 格式令牌说明数据（照抄 NSConstantArray 00121bb0 / 00121bc8 / 00121be0）

// 左侧表格：令牌名（粗体）
static NSArray<NSString *> *_tokenNames(void) {
    return @[@"{yyyy}", @"{MM}", @"{dd}", @"{HH}", @"{mm}", @"{ss}"];
}

// 右侧表格：令牌说明
static NSArray<NSString *> *_tokenDescs(void) {
    return @[
        @"年 (2026)",
        @"月 (01-12)",
        @"日 (01-31)",
        @"时 24小时 (00-23)",
        @"分 (00-59)",
        @"秒 (00-59)",
    ];
}

// 预览标签
static NSArray<NSString *> *_previewLabels(void) {
    return @[@"年", @"月", @"日", @"时", @"分", @"秒"];
}

// 特殊令牌说明
static NSArray<NSString *> *_specialTokenNames(void) {
    return @[@"{EE}", @"{EEEE}", @"{a}", @"{b}"];
}
static NSArray<NSString *> *_specialTokenDescs(void) {
    return @[
        @"中文星期缩写 / 上午下午",
        @"中文完整星期",
        @"AM/PM",
        @"上午/下午 (英文后处理)",
    ];
}

@interface MessageTimeFormatEditorVC () <UITextViewDelegate>
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, strong) UITextView *previewTextView;
@property (nonatomic, strong) UILabel *previewValueLabel;
@end

@implementation MessageTimeFormatEditorVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"自定义格式";
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    [self setupNavigationBar];
    [self setupScrollView];
    [self buildTokenTable];
    [self buildSpecialTokenTable];
    [self buildPreviewSection];
    [self buildEditorSection];
    [self buildPreviewResultSection];

    [self registerKeyboardNotifications];
    [self updatePreview];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - Navigation Bar

- (void)setupNavigationBar {
    // 左侧：关闭
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(dismiss)];

    // 右侧：恢复默认 + 保存
    UIBarButtonItem *restoreBtn = [[UIBarButtonItem alloc]
        initWithTitle:@"恢复默认" style:UIBarButtonItemStylePlain target:self action:@selector(restoreDefault)];
    UIBarButtonItem *saveBtn = [[UIBarButtonItem alloc]
        initWithTitle:@"保存" style:UIBarButtonItemStyleDone target:self action:@selector(saveAndDismiss)];
    self.navigationItem.rightBarButtonItems = @[saveBtn, restoreBtn];
}

#pragma mark - Scroll View

- (void)setupScrollView {
    self.scrollView = [[UIScrollView alloc] initWithFrame:self.view.bounds];
    self.scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.scrollView.keyboardDismissMode = UIScrollViewKeyboardDismissModeInteractive;
    [self.view addSubview:self.scrollView];

    self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 0)];
    [self.scrollView addSubview:self.contentView];
}

#pragma mark - Token Table (复刻 viewDidLoad 第一个 Table)

- (void)buildTokenTable {
    CGFloat w = self.view.bounds.size.width;
    CGFloat leftX = 15, rightX = 89;
    CGFloat labelW_right = w - rightX - 15;
    CGFloat rowH = 25;
    CGFloat y = 20;

    // 表格容器
    UIView *tableContainer = [self makeTableContainerAtY:y width:w
                                              tokenCount:_tokenNames().count
                                                 rowH:rowH];
    [self.contentView addSubview:tableContainer];
    y = tableContainer.frame.origin.y;

    // 左列：令牌名（粗体）
    UIFont *boldFont = [UIFont systemFontOfSize:15 weight:UIFontWeightSemibold];
    UIFont *regularFont = [UIFont systemFontOfSize:15 weight:UIFontWeightRegular];

    for (NSInteger i = 0; i < _tokenNames().count; i++) {
        UILabel *leftLabel = [[UILabel alloc] initWithFrame:CGRectMake(leftX, i * rowH, 60, rowH)];
        leftLabel.text = _tokenNames()[i];
        leftLabel.font = boldFont;
        leftLabel.textColor = [UIColor labelColor];
        [tableContainer addSubview:leftLabel];

        UILabel *rightLabel = [[UILabel alloc] initWithFrame:CGRectMake(rightX, i * rowH, labelW_right, rowH)];
        rightLabel.text = _tokenDescs()[i];
        rightLabel.font = regularFont;
        rightLabel.textColor = [UIColor secondaryLabelColor];
        [tableContainer addSubview:rightLabel];

        // 分隔线
        if (i < _tokenNames().count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:
                CGRectMake(leftX, (i + 1) * rowH - 0.5, w - leftX - 15, 0.5)];
            sep.backgroundColor = [UIColor separatorColor];
            [tableContainer addSubview:sep];
        }
    }

    y = CGRectGetMaxY(tableContainer.frame) + 20;

    // 自定义格式 section header
    UILabel *specialHeader = [[UILabel alloc] initWithFrame:CGRectMake(20, y, w - 40, 20)];
    specialHeader.text = nil;
    specialHeader.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    specialHeader.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:specialHeader];
    y += 28;

    // 特殊令牌表格
    UIView *specialTable = [self makeTableContainerAtY:y width:w
                                            tokenCount:_specialTokenNames().count
                                                 rowH:rowH];
    [self.contentView addSubview:specialTable];

    for (NSInteger i = 0; i < _specialTokenNames().count; i++) {
        UILabel *leftLabel = [[UILabel alloc] initWithFrame:CGRectMake(leftX, i * rowH, 60, rowH)];
        leftLabel.text = _specialTokenNames()[i];
        leftLabel.font = boldFont;
        leftLabel.textColor = [UIColor labelColor];
        [specialTable addSubview:leftLabel];

        UILabel *rightLabel = [[UILabel alloc] initWithFrame:CGRectMake(rightX, i * rowH, labelW_right, rowH)];
        rightLabel.text = _specialTokenDescs()[i];
        rightLabel.font = regularFont;
        rightLabel.textColor = [UIColor secondaryLabelColor];
        [specialTable addSubview:rightLabel];

        if (i < _specialTokenNames().count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:
                CGRectMake(leftX, (i + 1) * rowH - 0.5, w - leftX - 15, 0.5)];
            sep.backgroundColor = [UIColor separatorColor];
            [specialTable addSubview:sep];
        }
    }

    self.previewValueLabel = [[UILabel alloc] init];
}

#pragma mark - Special Token Table

- (void)buildSpecialTokenTable {
    // Merged into buildTokenTable
}

#pragma mark - Preview Section (复刻 viewDidLoad 第二个 Table: 预览标签)

- (void)buildPreviewSection {
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = CGRectGetMaxY([self.contentView.subviews lastObject].frame) + 20;

    // 输入格式 section header
    UILabel *sectionHeader = [[UILabel alloc] initWithFrame:CGRectMake(20, y, w - 40, 20)];
    sectionHeader.text = nil;
    sectionHeader.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    sectionHeader.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:sectionHeader];
    y += 20;

    // Preview labels line
    CGFloat previewY = y;
    CGFloat desktopW = w - 30;
    UIView *previewBox = [[UIView alloc] initWithFrame:CGRectMake(15, y, desktopW, 90)];
    previewBox.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    previewBox.layer.cornerRadius = 10;
    previewBox.clipsToBounds = YES;
    [self.contentView addSubview:previewBox];

    UIFont *regularFont = [UIFont systemFontOfSize:14 weight:UIFontWeightRegular];

    NSDictionary<NSString *, NSString *> *comps = [self currentComponents];

    for (NSInteger i = 0; i < _previewLabels().count && i < _tokenNames().count; i++) {
        CGFloat py = 8 + i * 13;
        NSString *tk = _tokenNames()[i];
        NSString *inner = [tk substringWithRange:NSMakeRange(1, tk.length - 2)];
        NSString *val = comps[inner] ?: @"--";

        UILabel *tagLabel = [[UILabel alloc] initWithFrame:CGRectMake(15, py, 30, 13)];
        tagLabel.text = _previewLabels()[i];
        tagLabel.font = regularFont;
        tagLabel.textColor = [UIColor labelColor];
        [previewBox addSubview:tagLabel];

        UILabel *valLabel = [[UILabel alloc] initWithFrame:CGRectMake(50, py, desktopW - 65, 13)];
        valLabel.text = val;
        valLabel.font = regularFont;
        valLabel.textColor = [UIColor tertiaryLabelColor];
        valLabel.textAlignment = NSTextAlignmentRight;
        [previewBox addSubview:valLabel];
    }

    y = CGRectGetMaxY(previewBox.frame) + 8;
}

#pragma mark - Editor Section (复刻 viewDidLoad UITextView)

- (void)buildEditorSection {
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = CGRectGetMaxY([self.contentView.subviews lastObject].frame) + 20;

    // 输入格式 section header
    UILabel *sectionHeader = [[UILabel alloc] initWithFrame:CGRectMake(20, y, w - 40, 20)];
    sectionHeader.text = @"输入格式";
    sectionHeader.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    sectionHeader.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:sectionHeader];
    y += 28;

    // 编辑框
    self.textView = [[UITextView alloc] initWithFrame:CGRectMake(20, y, w - 40, 80)];
    self.textView.font = [UIFont systemFontOfSize:15];
    self.textView.textColor = [UIColor labelColor];
    self.textView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.textView.layer.cornerRadius = 10;
    self.textView.layer.borderWidth = 1;
    self.textView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.textView.delegate = self;
    self.textView.autocorrectionType = UITextAutocorrectionTypeNo;
    self.textView.autocapitalizationType = UITextAutocapitalizationTypeNone;

    NSString *format = self.initialFormat.length > 0 ? self.initialFormat
                                                      : [MessageTimeFormatParser defaultFormat];
    self.textView.text = format;

    [self.contentView addSubview:self.textView];
    y = CGRectGetMaxY(self.textView.frame) + 8;
}

#pragma mark - Preview Result Section (复刻 viewDidLoad 底部 previewTextView)

- (void)buildPreviewResultSection {
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = CGRectGetMaxY([self.contentView.subviews lastObject].frame) + 20;

    // 预览 section header
    UILabel *sectionHeader = [[UILabel alloc] initWithFrame:CGRectMake(20, y, w - 40, 20)];
    sectionHeader.text = @"预览";
    sectionHeader.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    sectionHeader.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:sectionHeader];
    y += 28;

    // 预览框
    self.previewTextView = [[UITextView alloc] initWithFrame:CGRectMake(20, y, w - 40, 50)];
    self.previewTextView.font = [UIFont systemFontOfSize:15];
    self.previewTextView.textColor = [UIColor labelColor];
    self.previewTextView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.previewTextView.layer.cornerRadius = 10;
    self.previewTextView.layer.borderWidth = 1;
    self.previewTextView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.previewTextView.editable = NO;
    [self.contentView addSubview:self.previewTextView];

    y = CGRectGetMaxY(self.previewTextView.frame) + 40;

    // 更新 contentView 高度
    CGRect frame = self.contentView.frame;
    frame.size.height = y;
    self.contentView.frame = frame;
    self.scrollView.contentSize = CGSizeMake(w, y);
}

#pragma mark - Helpers

- (UIView *)makeTableContainerAtY:(CGFloat)y width:(CGFloat)w
                       tokenCount:(NSInteger)count rowH:(CGFloat)rowH {
    CGFloat totalH = count * rowH;
    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(15, y, w - 30, totalH)];
    container.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    container.layer.cornerRadius = 10;
    container.clipsToBounds = YES;
    return container;
}

- (NSDictionary<NSString *, NSString *> *)currentComponents {
    NSDate *now = [NSDate date];
    NSCalendar *cal = [NSCalendar currentCalendar];
    NSCalendarUnit units = NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay |
                           NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond;
    NSDateComponents *comps = [cal components:units fromDate:now];
    return @{
        @"yyyy": [NSString stringWithFormat:@"%ld", (long)comps.year],
        @"MM":   [NSString stringWithFormat:@"%02ld", (long)comps.month],
        @"dd":   [NSString stringWithFormat:@"%02ld", (long)comps.day],
        @"HH":   [NSString stringWithFormat:@"%02ld", (long)comps.hour],
        @"mm":   [NSString stringWithFormat:@"%02ld", (long)comps.minute],
        @"ss":   [NSString stringWithFormat:@"%02ld", (long)comps.second],
    };
}

#pragma mark - UITextViewDelegate

- (void)textViewDidChange:(UITextView *)textView {
    [self updatePreview];
}

#pragma mark - Preview Update (复刻 CSTimeFormatEditorViewController::updatePreview)

- (void)updatePreview {
    NSString *fmt = self.textView.text;
    if (!fmt.length) {
        self.previewTextView.text = @"";
        return;
    }

    BOOL isDark = (self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    NSString *preview = [MessageTimeFormatParser previewWithFormat:fmt isDarkMode:isDark];
    self.previewTextView.text = preview ?: @"---";
}

#pragma mark - Actions

- (void)restoreDefault {
    self.textView.text = [MessageTimeFormatParser defaultFormat];
    [self updatePreview];
}

- (void)saveAndDismiss {
    NSString *fmt = self.textView.text;
    if (self.saveBlock) {
        self.saveBlock(fmt);
    }
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)dismiss {
    [self.navigationController popViewControllerAnimated:YES];
}

#pragma mark - Keyboard

- (void)registerKeyboardNotifications {
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillShow:)
                                                 name:UIKeyboardWillShowNotification
                                               object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillHide:)
                                                 name:UIKeyboardWillHideNotification
                                               object:nil];
}

- (void)keyboardWillShow:(NSNotification *)notif {
    NSDictionary *info = notif.userInfo;
    CGRect kbFrame = [info[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    NSTimeInterval duration = [info[UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    kbFrame = [self.view convertRect:kbFrame fromView:nil];

    UIEdgeInsets insets = self.scrollView.contentInset;
    insets.bottom = kbFrame.size.height;
    self.scrollView.contentInset = insets;
    self.scrollView.scrollIndicatorInsets = insets;
}

- (void)keyboardWillHide:(NSNotification *)notif {
    NSTimeInterval duration = [notif.userInfo[UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    [UIView animateWithDuration:duration animations:^{
        self.scrollView.contentInset = UIEdgeInsetsZero;
        self.scrollView.scrollIndicatorInsets = UIEdgeInsetsZero;
    }];
}

@end