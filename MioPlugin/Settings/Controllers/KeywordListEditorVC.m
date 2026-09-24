#import "KeywordListEditorVC.h"
#import "../../Core/LogManager.h"
#import "../../Modules/KeywordAlert/KeywordAlertEngine.h"

@interface KeywordListEditorVC () <UITextViewDelegate>
@property (nonatomic, strong) UITextView *editorView;
@end

@implementation KeywordListEditorVC

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = self.editorTitle ?: @"关键词列表";
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"关闭" style:UIBarButtonItemStylePlain target:self action:@selector(closeAction)];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]
        initWithTitle:@"保存" style:UIBarButtonItemStyleDone target:self action:@selector(saveAction)];

    CGFloat w = self.view.bounds.size.width;

    UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(20, 16, w - 40, 60)];
    hint.text = @"一行一个词条\n用 /…/ 或 ／…／ 包裹表示正则，如 /测试|开会/\n含 \\ 的词条整体按正则处理，如 \\d{4}";
    hint.font = [UIFont systemFontOfSize:13];
    hint.textColor = [UIColor secondaryLabelColor];
    hint.numberOfLines = 0;
    [self.view addSubview:hint];

    self.editorView = [[UITextView alloc] initWithFrame:CGRectMake(15, 90, w - 30, self.view.bounds.size.height - 160)];
    self.editorView.font = [UIFont systemFontOfSize:15];
    self.editorView.textColor = [UIColor labelColor];
    self.editorView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.editorView.layer.cornerRadius = 10;
    self.editorView.layer.borderWidth = 1;
    self.editorView.layer.borderColor = [UIColor separatorColor].CGColor;
    self.editorView.delegate = self;
    self.editorView.autocorrectionType = UITextAutocorrectionTypeNo;
    self.editorView.autocapitalizationType = UITextAutocapitalizationTypeNone;
    self.editorView.text = self.initialText ?: @"";
    [self.view addSubview:self.editorView];

    WPLog(@"KeywordAlert", @"[EDITOR] 打开编辑器: %@ 初始 %lu 行", self.title, (unsigned long)[self nonEmptyLineCount]);
}

- (void)closeAction {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)saveAction {
    WPLog(@"KeywordAlert", @"[EDITOR] 保存: %@ %lu 行", self.title, (unsigned long)[self nonEmptyLineCount]);
    if (self.saveBlock) {
        self.saveBlock(self.editorView.text ?: @"");
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (NSUInteger)nonEmptyLineCount {
    return [KeywordAlertEngine parseKeywordList:self.editorView.text].count;
}

@end
