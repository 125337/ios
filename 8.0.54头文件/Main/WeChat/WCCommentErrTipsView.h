@interface WCCommentErrTipsView : UIView <ILinkEventExt>
{
    WCMomentsErrTipsViewModel * _viewModel; // +0x8
    id <WCCommentErrTipsViewDelegate> _delegate; // +0x10
    RichTextView * _tipsTextView; // +0x18
    UIButton * _customButton; // +0x20
    UIImageView * _iconImageView; // +0x28
    UIImageView * _backgroundImageView; // +0x30
}
+ (double)heightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)updateErrImageView;
- (void)updateWithDataItem:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCustomButtonClick;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipsTextView;
- (void)setTipsTextView:(id)arg1;
- (id)customButton;
- (void)setCustomButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (void).cxx_destruct;
@end

