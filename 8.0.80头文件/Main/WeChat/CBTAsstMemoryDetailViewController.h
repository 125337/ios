@interface CBTAsstMemoryDetailViewController : MMUIViewController
{
    BOOL _isDeleting; // +0x70
    id <CBTAsstMemoryDetailViewControllerDelegate> _delegate; // +0x78
    DisplayMemoryContent * _memoryContent; // +0x80
    NSString * _userPostfix; // +0x88
    MMUIButton * _backButton; // +0x90
    UILabel * _titleLabel; // +0x98
    UIScrollView * _scrollView; // +0xa0
    UIView * _contentView; // +0xa8
    UILabel * _memoryLabel; // +0xb0
    UIButton * _adjustButton; // +0xb8
    UIButton * _deleteButton; // +0xc0
    CBTAsstMemoryDetailSourceView * _sourceView; // +0xc8
    UILabel * _historyTitleLabel; // +0xd0
    NSMutableArray * _historyControlList; // +0xd8
}
- (id)initWithMemoryContent:(id)arg1 userPostfix:(id)arg2;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)buildSubviews;
- (id)actionButtonWithTitle:(id)arg1;
- (id)relatedHistoryControl:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onBack;
- (void)onAdjustTap;
- (void)onDeleteTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)memoryContent;
- (void)setMemoryContent:(id)arg1;
- (id)userPostfix;
- (void)setUserPostfix:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)memoryLabel;
- (void)setMemoryLabel:(id)arg1;
- (id)adjustButton;
- (void)setAdjustButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (id)historyTitleLabel;
- (void)setHistoryTitleLabel:(id)arg1;
- (id)historyControlList;
- (void)setHistoryControlList:(id)arg1;
- (BOOL)isDeleting;
- (void)setIsDeleting:(BOOL)arg1;
- (void).cxx_destruct;
@end
