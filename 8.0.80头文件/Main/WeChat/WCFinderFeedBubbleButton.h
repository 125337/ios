@interface WCFinderFeedBubbleButton : MMUIView
{
    UIImageView * _iconImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _subtitleLabel; // +0x18
    id /* block */ _getActionButtonHeightBlock; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setupUI;
- (void)updateTitle:(id)arg1 titleColor:(id)arg2 subtitle:(id)arg3 iconImage:(id)arg4;
- (void)updateLayout;
- (double)getActionButtonHeight;
- (CGSize)intrinsicContentSize;
- (id)iconImageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id /* block */)getActionButtonHeightBlock;
- (void)setGetActionButtonHeightBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
