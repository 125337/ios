@interface MMLocationAccuracyAuthorizationTipView : MMUIView
{
    MMUIView * _contentView; // +0x8
    MMUIView * _sepLineView; // +0x10
    UIImageView * _iconView; // +0x18
    MMUILabel * _tipLabel; // +0x20
    UIImageView * _arrowView; // +0x28
    UIScrollView * _scrollView; // +0x30
}
- (double)defaultTipHeight;
- (double)defaultTipHeightWithBottomInset:(double)arg1;
- (double)contentHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutSepLineView;
- (void)layoutIconView;
- (void)layoutTipLabel;
- (void)layoutArrowView;
- (void)onTappedContent:(id)arg1;
- (void)goToSettingLocationAuthorization;
- (void)observeScrollview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateSepLineHidden;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)sepLineView;
- (void)setSepLineView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
