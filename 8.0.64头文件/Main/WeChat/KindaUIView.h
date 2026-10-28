@interface KindaUIView : UIView
{
    unsigned long long m_cornerType; // +0x8
    float m_radiusValue; // +0x10
    BOOL m_cornerChange; // +0x14
    BOOL _enableHighlight; // +0x15
    BOOL _disableHighlightDarkmode; // +0x16
    id <KindaUIViewDelegate> _delegate; // +0x18
    UIView * _hightLightMask; // +0x20
    MMKViewOnTouchCallback * _touchCallback; // +0x28
    MMKViewOnClickCallback * _clickCallback; // +0x30
    long long _expandHitWidth; // +0x38
    long long _expandHitHeight; // +0x40
    CGRect _previousBounds; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (float)getTopLeftCornerRadius;
- (float)getTopRightCornerRadius;
- (float)getBottomLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setTopRightCornerRadius:(float)arg1;
- (id)hightLightMask;
- (void)setDisableHighlightDarkmode:(BOOL)arg1;
- (BOOL)getDisableHighlightDarkmode;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHightLightMask:(id)arg1;
- (id)touchCallback;
- (void)setTouchCallback:(id)arg1;
- (id)clickCallback;
- (void)setClickCallback:(id)arg1;
- (long long)expandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (long long)expandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (BOOL)enableHighlight;
- (void)setEnableHighlight:(BOOL)arg1;
- (CGRect)previousBounds;
- (void)setPreviousBounds:(CGRect)arg1;
- (BOOL)disableHighlightDarkmode;
- (void).cxx_destruct;
@end
