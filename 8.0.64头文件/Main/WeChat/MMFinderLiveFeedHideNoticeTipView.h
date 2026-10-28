@interface MMFinderLiveFeedHideNoticeTipView : MMPageSheetBaseView
{
    id /* block */ _actionBlock; // +0x8
    UIScrollView * _scrollView; // +0x10
    UIView * _contentView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _subtitleLabel; // +0x28
    MMUIButton * _actionButton; // +0x30
    MMUIImageView * _tipImageView; // +0x38
    long long _previousOrientation; // +0x40
}
- (void)pageSheetDidRotation;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (double)showViewHeight;
- (void)actionButtonClick;
- (void)onFeedHideNoticeTipViewReport:(BOOL)arg1;
- (id)scrollView;
- (id)contentView;
- (id)tipImageView;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)actionButton;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setScrollView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setTipImageView:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
