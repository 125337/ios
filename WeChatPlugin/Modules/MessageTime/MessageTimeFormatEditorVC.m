#import "MessageTimeFormatEditorVC.h"
#import "MessageTimeFormatParser.h"

// 复刻微信优化 1.6.5 CSTimeFormatEditorViewController
// 精确像素值从 123456.c 浮点常量解码，精确字符串从 微信优化1.6.5.dylib UTF-16 段提取

#pragma mark - 表格数据（从 dylib 提取）

// 左列：令牌名 — 来自 NSConstantArray_00121bb0，15px Semibold
static NSArray<NSString *> *_tokenNames(void) {
    return @[@"{YYYY}", @"{YY}", @"{MM}", @"{dd}", @"{HH}", @"{hh}", @"{mm}", @"{ss}", @"{EE}", @"{EEEE}", @"{a}"];
}

// 右列：说明文字 — 来自 NSConstantArray_00121bc8，15px Regular
static NSArray<NSString *> *_tokenDescs(void) {
    return @[
        @"年份(2025)",
        @"年份(25)",
        @"月份(01-12)",
        @"日期(01-31)",
        @"小时-24小时制(00-23)",
        @"小时-12小时制(01-12)",
        @"分钟(00-59)",
        @"秒数(00-59)",
        @"星期(周一)",
        @"星期(星期一)",
        @"上午/下午",
    ];
}

// 伪已读表格 — 单行格式（语法 + 说明用 " - " 分隔，复刻 1.6.5 橙色卡片样式）
static NSArray<NSString *> *_pseudoReadItems(void) {
    return @[
        @"{伪已读} - 使用默认文本",
        @"{伪已读 已读=✓} - 自定义已读文本",
        @"{伪已读 已送达=✓} - 自定义已送达文本",
        @"{伪已读 已读=✓ 已送达=✓} - 自定义两种状态",
    ];
}

@interface MessageTimeFormatEditorVC () <UITextViewDelegate>
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UITextView *editorView;
@property (nonatomic, retain) UITextView *previewView;
@end

@implementation MessageTimeFormatEditorVC

#pragma mark - Lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];

    // 复刻 viewDidLoad: 导航标题
    self.title = @"自定义时间格式";

    // 背景色（复刻微信优化 groupTableViewBackground）
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    [self setupNavBar];
    [self setupScrollView];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 20.0;  // 固定起始 Y（复刻 viewDidLoad 常量）

    // ---- 第一部分：格式帮助表格 ----
    y = [self buildHelpTableAtY:y width:w];
    y += 20.0;

    // ---- 第二部分：伪已读自定义方式 ----
    y = [self buildPseudoReadSectionAtY:y width:w];
    y += 20.0;

    // ---- 第三部分：编辑区 ----
    y = [self buildEditorSectionAtY:y width:w];
    y += 20.0;

    // ---- 第四部分：预览区 ----
    y = [self buildPreviewSectionAtY:y width:w];

    // 更新 contentSize
    CGRect cf = self.contentView.frame;
    cf.size.height = y + 40.0;
    self.contentView.frame = cf;
    self.scrollView.contentSize = CGSizeMake(w, cf.size.height);

    [self registerKeyboardNotifications];
    [self updatePreview];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [_scrollView release];
    [_contentView release];
    [_editorView release];
    [_previewView release];
    [super dealloc];
}

#pragma mark - NavBar（复刻 viewDidLoad 导航栏设置）

- (void)setupNavBar {
    // 左侧："关闭"
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(closeAction)];

    // 右侧："恢复" + "保存"
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

    self.contentView = [[UIView alloc] initWithFrame:
        CGRectMake(0, 0, self.view.bounds.size.width, 0)];
    [self.scrollView addSubview:self.contentView];
}

#pragma mark - 帮助表格（复刻 viewDidLoad 第一个 section）

- (CGFloat)buildHelpTableAtY:(CGFloat)y width:(CGFloat)w {
    NSArray *tokens = _tokenNames();
    NSInteger count = tokens.count;
    CGFloat rowH = 25.0;  // 精确值
    CGFloat cornerR = 10.0; // 精确值
    CGFloat leftX = 20.0;  // 精确值
    CGFloat descX = 92.0;  // 估算（原版 89 + 偏移调整）
    CGFloat descW = w - descX - 15.0;

    // 容器背景
    CGFloat totalH = count * rowH;
    UIView *table = [[UIView alloc] initWithFrame:
        CGRectMake(15.0, y, w - 30.0, totalH)];
    table.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    table.layer.cornerRadius = cornerR;
    table.layer.borderWidth = 0.5;
    table.layer.borderColor = [UIColor separatorColor].CGColor;
    table.clipsToBounds = YES;
    [self.contentView addSubview:table];

    UIFont *tokenFont = [UIFont systemFontOfSize:14.0 weight:UIFontWeightSemibold];  // 左列 14px Semibold
    UIFont *descFont = [UIFont systemFontOfSize:14.0 weight:UIFontWeightRegular];     // 右列 14px Regular

    for (NSInteger i = 0; i < count; i++) {
        // 左列（蓝色字体）
        UILabel *leftLbl = [[UILabel alloc] initWithFrame:
            CGRectMake(leftX, i * rowH, 70.0, rowH)];
        leftLbl.text = tokens[i];
        leftLbl.font = tokenFont;
        leftLbl.textColor = [UIColor systemBlueColor];
        [table addSubview:leftLbl];

        // 右列
        UILabel *rightLbl = [[UILabel alloc] initWithFrame:
            CGRectMake(descX, i * rowH, descW, rowH)];
        rightLbl.text = _tokenDescs()[i];
        rightLbl.font = descFont;
        rightLbl.textColor = [UIColor secondaryLabelColor];
        [table addSubview:rightLbl];

        // 分隔线
        if (i < count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:
                CGRectMake(leftX, (i + 1) * rowH - 0.5, w - 30.0 - leftX - 15.0, 0.5)];
            sep.backgroundColor = [UIColor separatorColor];
            [table addSubview:sep];
        }
    }

    return CGRectGetMaxY(table.frame);
}

#pragma mark - 伪已读自定义方式（复刻 1.6.5 — 独立 section，橙色卡片）

- (CGFloat)buildPseudoReadSectionAtY:(CGFloat)y width:(CGFloat)w {
    NSArray *items = _pseudoReadItems();
    NSInteger count = items.count;
    CGFloat rowH = 25.0;
    CGFloat cornerR = 10.0;
    CGFloat leftX = 20.0;

    // Section header: "伪已读自定义方式"
    UILabel *header = [[UILabel alloc] initWithFrame:CGRectMake(20.0, y, w - 40.0, 20.0)];
    header.text = @"伪已读自定义方式:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    // 卡片容器
    CGFloat totalH = count * rowH;
    UIView *card = [[UIView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, totalH)];
    card.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    card.layer.cornerRadius = cornerR;
    card.layer.borderWidth = 0.5;
    card.layer.borderColor = [UIColor separatorColor].CGColor;
    card.clipsToBounds = YES;
    [self.contentView addSubview:card];

    UIColor *orangeColor = [UIColor systemOrangeColor];
    UIFont *itemFont = [UIFont systemFontOfSize:13.0 weight:UIFontWeightRegular];

    for (NSInteger i = 0; i < count; i++) {
        // 单行文本："{伪已读} - 使用默认文本"
        UILabel *rowLabel = [[UILabel alloc] initWithFrame:
            CGRectMake(leftX, i * rowH, w - 30.0 - leftX - 15.0, rowH)];
        rowLabel.font = itemFont;
        rowLabel.textColor = orangeColor;

        NSString *text = items[i];
        // 用 " - " 分割出语法部分，加粗显示
        NSRange dashRange = [text rangeOfString:@" - "];
        if (dashRange.location != NSNotFound) {
            NSMutableAttributedString *attr = [[NSMutableAttributedString alloc] initWithString:text];
            // 整个文本橙色
            [attr addAttribute:NSForegroundColorAttributeName value:orangeColor range:NSMakeRange(0, text.length)];
            // 语法部分（"{...}"）加粗
            [attr addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:13.0 weight:UIFontWeightSemibold]
                         range:NSMakeRange(0, dashRange.location)];
            // 说明部分 Regular
            [attr addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:13.0 weight:UIFontWeightRegular]
                         range:NSMakeRange(dashRange.location, text.length - dashRange.location)];
            rowLabel.attributedText = attr;
        } else {
            rowLabel.text = text;
        }

        [card addSubview:rowLabel];

        // 分隔线
        if (i < count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:
                CGRectMake(leftX, (i + 1) * rowH - 0.5, w - 30.0 - leftX - 15.0, 0.5)];
            sep.backgroundColor = [UIColor separatorColor];
            [card addSubview:sep];
        }
    }

    return CGRectGetMaxY(card.frame);
}

#pragma mark - 编辑区（复刻 viewDidLoad 第二个 section）

- (CGFloat)buildEditorSectionAtY:(CGFloat)y width:(CGFloat)w {
    // Section header: "编辑时间格式:"
    UILabel *header = [[UILabel alloc] initWithFrame:CGRectMake(20.0, y, w - 40.0, 20.0)];
    header.text = @"编辑时间格式:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium]; // 13px Medium
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    // UITextView 编辑框
    CGFloat tvH = 80.0;
    self.editorView = [[UITextView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, tvH)];
    self.editorView.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular]; // 15px Regular
    self.editorView.textColor = [UIColor labelColor];
    self.editorView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.editorView.layer.cornerRadius = 10.0; // cornerRadius=10
    self.editorView.layer.borderWidth = 1.0;
    self.editorView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.editorView.delegate = self;
    self.editorView.autocorrectionType = UITextAutocorrectionTypeNo;
    self.editorView.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.editorView.returnKeyType = UIReturnKeyDone;

    // 默认值（复刻 cf__HH___mm___ss_ = "{HH}:{mm}:{ss}"）
    NSString *initial = self.initialFormat.length > 0
        ? self.initialFormat
        : [MessageTimeFormatParser defaultFormat];
    self.editorView.text = initial;

    [self.contentView addSubview:self.editorView];

    return CGRectGetMaxY(self.editorView.frame);
}

#pragma mark - 预览区（复刻 viewDidLoad 第三个 section）

- (CGFloat)buildPreviewSectionAtY:(CGFloat)y width:(CGFloat)w {
    // Section header: "预览:"
    UILabel *header = [[UILabel alloc] initWithFrame:CGRectMake(20.0, y, w - 40.0, 20.0)];
    header.text = @"预览:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium]; // 13px Medium
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    // UITextView 预览框（只读）
    CGFloat tvH = 50.0;
    self.previewView = [[UITextView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, tvH)];
    self.previewView.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular]; // 15px Regular
    self.previewView.textColor = [UIColor labelColor];
    self.previewView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.previewView.layer.cornerRadius = 10.0; // cornerRadius=10
    self.previewView.layer.borderWidth = 1.0;
    self.previewView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.previewView.editable = NO;
    [self.contentView addSubview:self.previewView];

    return CGRectGetMaxY(self.previewView.frame);
}

#pragma mark - UITextViewDelegate（复刻 textViewDidChange: → updatePreview）

- (void)textViewDidChange:(UITextView *)textView {
    [self updatePreview];
}

#pragma mark - 预览更新（复刻 CSTimeFormatEditorViewController::updatePreview）

- (void)updatePreview {
    NSString *fmt = self.editorView.text;
    if (!fmt.length) {
        self.previewView.text = @"";
        return;
    }
    BOOL isDark = (self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    NSString *result = [MessageTimeFormatParser previewWithFormat:fmt isDarkMode:isDark];
    self.previewView.text = result ?: @"---";
}

#pragma mark - Actions

- (void)closeAction {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)restoreAction {
    self.editorView.text = [MessageTimeFormatParser defaultFormat];
    [self updatePreview];
}

- (void)saveAction {
    if (self.saveBlock) {
        self.saveBlock(self.editorView.text);
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - Keyboard（复刻 CSTimeFormatEditorViewController 键盘适配）

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