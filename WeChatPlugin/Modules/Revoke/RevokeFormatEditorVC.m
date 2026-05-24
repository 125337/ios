#import "RevokeFormatEditorVC.h"

static NSString *const kDefaultRevokeEditorTemplate = @"拦截到一条 {用户名}撤回的消息\n发送时间：{yyyy}-{MM}-{dd} {HH}:{mm}:{ss}\n内容：{内容}";

static NSArray<NSString *> *_tokenNames(void) {
    return @[@"{用户名}", @"{内容}", @"{yyyy}", @"{MM}", @"{dd}", @"{HH}", @"{mm}", @"{ss}"];
}

static NSArray<NSString *> *_tokenDescs(void) {
    return @[
        @"撤回消息的发送者名称",
        @"被撤回的消息内容/类型",
        @"年份(2026)",
        @"月份(01-12)",
        @"日期(01-31)",
        @"小时-24小时制(00-23)",
        @"分钟(00-59)",
        @"秒数(00-59)",
    ];
}

@interface RevokeFormatEditorVC () <UITextViewDelegate>
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UITextView *editorView;
@property (nonatomic, retain) UITextView *previewView;
@end

@implementation RevokeFormatEditorVC

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"撤回消息显示";
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    [self setupNavBar];
    [self setupScrollView];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 20.0;

    y = [self buildHelpTableAtY:y width:w];
    y += 20.0;
    y = [self buildEditorSectionAtY:y width:w];
    y += 20.0;
    y = [self buildPreviewSectionAtY:y width:w];

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
    self.scrollView = [[[UIScrollView alloc] initWithFrame:self.view.bounds] autorelease];
    self.scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.scrollView.keyboardDismissMode = UIScrollViewKeyboardDismissModeInteractive;
    [self.view addSubview:self.scrollView];

    self.contentView = [[[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 0)] autorelease];
    [self.scrollView addSubview:self.contentView];
}

#pragma mark - 帮助表格

- (CGFloat)buildHelpTableAtY:(CGFloat)y width:(CGFloat)w {
    NSArray *tokens = _tokenNames();
    NSInteger count = tokens.count;
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
        leftLbl.text = tokens[i];
        leftLbl.font = tokenFont;
        leftLbl.textColor = [UIColor systemBlueColor];
        [table addSubview:leftLbl];

        UILabel *rightLbl = [[UILabel alloc] initWithFrame:CGRectMake(descX, i * rowH, descW, rowH)];
        rightLbl.text = _tokenDescs()[i];
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
    header.text = @"编辑显示内容:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    CGFloat tvH = 110.0;
    self.editorView = [[[UITextView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, tvH)] autorelease];
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

    NSString *initial = self.initialFormat.length > 0 ? self.initialFormat : kDefaultRevokeEditorTemplate;
    self.editorView.text = initial;

    [self.contentView addSubview:self.editorView];

    return CGRectGetMaxY(self.editorView.frame);
}

#pragma mark - 预览区

- (CGFloat)buildPreviewSectionAtY:(CGFloat)y width:(CGFloat)w {
    UILabel *header = [[UILabel alloc] initWithFrame:CGRectMake(20.0, y, w - 40.0, 20.0)];
    header.text = @"预览:";
    header.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightMedium];
    header.textColor = [UIColor secondaryLabelColor];
    [self.contentView addSubview:header];
    y += 28.0;

    CGFloat tvH = 110.0;
    self.previewView = [[[UITextView alloc] initWithFrame:CGRectMake(15.0, y, w - 30.0, tvH)] autorelease];
    self.previewView.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular];
    self.previewView.textColor = [UIColor labelColor];
    self.previewView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.previewView.layer.cornerRadius = 10.0;
    self.previewView.layer.borderWidth = 1.0;
    self.previewView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.previewView.editable = NO;
    [self.contentView addSubview:self.previewView];

    return CGRectGetMaxY(self.previewView.frame);
}

#pragma mark - UITextViewDelegate

- (void)textViewDidChange:(UITextView *)textView {
    [self updatePreview];
}

#pragma mark - 预览更新

- (void)updatePreview {
    NSString *fmt = self.editorView.text;
    if (!fmt.length) {
        self.previewView.text = @"";
        return;
    }

    NSDate *now = [NSDate date];
    NSCalendar *cal = [NSCalendar currentCalendar];
    NSDateComponents *comp = [cal components:(NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay |
                                               NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond)
                                   fromDate:now];

    NSString *result = [fmt copy];
    result = [result stringByReplacingOccurrencesOfString:@"{用户名}" withString:@"张三"];
    result = [result stringByReplacingOccurrencesOfString:@"{内容}" withString:@"这是一条测试消息"];
    result = [result stringByReplacingOccurrencesOfString:@"{yyyy}" withString:[NSString stringWithFormat:@"%04ld", (long)comp.year]];
    result = [result stringByReplacingOccurrencesOfString:@"{MM}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.month]];
    result = [result stringByReplacingOccurrencesOfString:@"{dd}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.day]];
    result = [result stringByReplacingOccurrencesOfString:@"{HH}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.hour]];
    result = [result stringByReplacingOccurrencesOfString:@"{mm}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.minute]];
    result = [result stringByReplacingOccurrencesOfString:@"{ss}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.second]];

    self.previewView.text = result;
}

#pragma mark - Actions

- (void)closeAction {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)restoreAction {
    self.editorView.text = kDefaultRevokeEditorTemplate;
    [self updatePreview];
}

- (void)saveAction {
    if (self.saveBlock) {
        self.saveBlock(self.editorView.text);
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