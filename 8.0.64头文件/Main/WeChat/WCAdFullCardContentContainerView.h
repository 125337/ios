@interface WCAdFullCardContentContainerView : MMUIView
{
    BOOL _hasClickBar; // +0x8
    BOOL _doOnce; // +0x9
    BOOL _canShowClickBar; // +0xa
    BOOL _canShowBackgroundColorView; // +0xb
    WCAdIconView * _iconView; // +0x10
    MMUILabel * _titleView; // +0x18
    MMUILabel * _descView; // +0x20
    double _iconViewOriginX; // +0x28
    double _titleViewOriginX; // +0x30
    double _descViewOriginX; // +0x38
    ColorGradientView * _bottomColorGradientView; // +0x40
    ColorGradientView * _topColorGradientView; // +0x48
    WCAdClickBarView * _clickBarView; // +0x50
    NSString * _clickBarTitle; // +0x58
    long long _logoIconType; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 andDataItem:(id)arg2;
- (BOOL)initViewsWithDataItem:(id)arg1;
- (id)createColorGradientViewWithPosition:(int)arg1 onlyForLogo:(BOOL)arg2 maxAlpha:(double)arg3;
- (void)showTextContentAnimation;
- (void)resetClickBar;
- (void)showAdClickBar;
- (id)clickBarView;
- (void)setViewProperty:(id)arg1 alpha:(double)arg2 left:(double)arg3 hidden:(BOOL)arg4;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (double)iconViewOriginX;
- (void)setIconViewOriginX:(double)arg1;
- (double)titleViewOriginX;
- (void)setTitleViewOriginX:(double)arg1;
- (double)descViewOriginX;
- (void)setDescViewOriginX:(double)arg1;
- (id)bottomColorGradientView;
- (void)setBottomColorGradientView:(id)arg1;
- (id)topColorGradientView;
- (void)setTopColorGradientView:(id)arg1;
- (void)setClickBarView:(id)arg1;
- (id)clickBarTitle;
- (void)setClickBarTitle:(id)arg1;
- (long long)logoIconType;
- (void)setLogoIconType:(long long)arg1;
- (BOOL)hasClickBar;
- (void)setHasClickBar:(BOOL)arg1;
- (BOOL)doOnce;
- (void)setDoOnce:(BOOL)arg1;
- (BOOL)canShowClickBar;
- (void)setCanShowClickBar:(BOOL)arg1;
- (BOOL)canShowBackgroundColorView;
- (void)setCanShowBackgroundColorView:(BOOL)arg1;
- (void).cxx_destruct;
@end
