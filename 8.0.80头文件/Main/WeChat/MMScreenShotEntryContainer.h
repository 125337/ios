@interface MMScreenShotEntryContainer : UIView
{
    BOOL _layoutVisible; // +0x8
    BOOL _entrancePending; // +0x9
    MMScreenShotEntryButton * _button; // +0x10
    UIView * _shadowView; // +0x18
    MMScreenShotButtonShadowLayer * _shadowLayer; // +0x20
    unsigned long long _entranceToken; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)button;
- (void)setButton:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)shadowLayer;
- (void)setShadowLayer:(id)arg1;
- (BOOL)layoutVisible;
- (void)setLayoutVisible:(BOOL)arg1;
- (BOOL)entrancePending;
- (void)setEntrancePending:(BOOL)arg1;
- (unsigned long long)entranceToken;
- (void)setEntranceToken:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
