@interface WCFinderGuardNowViewController : MMUIViewController
{
    PrepareFinder * _prepare; // +0x70
    UIScrollView * _scrollView; // +0x78
    UIView * _contentView; // +0x80
    UILabel * _titleLabel; // +0x88
    UILabel * _summaryLabel; // +0x90
    UIView * _descContainer; // +0x98
    UIButton * _confirmButton; // +0xa0
}
+ (id)newWithPrepare:(id)arg1;
- (id)init;
- (id)initWithPrepare:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateViews;
- (void)_updateSummary:(id)arg1;
- (void)onClickConfirmButton;
- (void)startOpLog:(BOOL)arg1;
- (id)prepare;
- (void)setPrepare:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)descContainer;
- (void)setDescContainer:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
