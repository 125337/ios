@interface WACapsuleButton : MMUIButton
{
    long long _navMode; // +0x8
    long long _menuState; // +0x10
    long long _translateState; // +0x18
    UIView * _stateView; // +0x20
    UIView * _bannerView; // +0x28
    UIView * _iconView; // +0x30
    UILabel * _iconSubtextLabel; // +0x38
    UIView * _splitLineView; // +0x40
    double _scale; // +0x48
    CAShapeLayer * _maskLayer; // +0x50
    UIView * _hightlightedView; // +0x58
    UILabel * _bannerLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configBanner:(id)arg1;
- (void)sizeToFit;
- (void)removeBanner;
- (void)updateIcon:(id)arg1;
- (void)updateWithIconView:(id)arg1 iconSubtext:(id)arg2;
- (BOOL)isAutoWidth;
- (void)rollIconView;
- (void)updateScale:(double)arg1;
- (void)layoutSubviews;
- (void)updateSubviews;
- (void)resetBannerLayout;
- (void)setSplitLineHidden:(BOOL)arg1;
- (double)bannerWidth;
- (id)stateView;
- (id)splitLineView;
- (id)hightlightedView;
- (void)setHighlighted:(BOOL)arg1;
- (id)splitLineColor:(long long)arg1;
- (id)highlightedColor:(long long)arg1;
- (long long)navMode;
- (void)setNavMode:(long long)arg1;
- (long long)menuState;
- (void)setMenuState:(long long)arg1;
- (long long)translateState;
- (void)setTranslateState:(long long)arg1;
- (void)setStateView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)iconSubtextLabel;
- (void)setIconSubtextLabel:(id)arg1;
- (void)setSplitLineView:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void)setHightlightedView:(id)arg1;
- (id)bannerLabel;
- (void)setBannerLabel:(id)arg1;
- (void).cxx_destruct;
@end

