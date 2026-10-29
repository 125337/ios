@interface WCCommentFoldTipsView : UIView
{
    UILabel * _tipsLabel; // +0x8
    WCMomentsErrTipsViewModel * _viewModel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

