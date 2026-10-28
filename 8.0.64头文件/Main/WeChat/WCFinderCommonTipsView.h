@interface WCFinderCommonTipsView : UIView <MMUIViewControllerExt>
{
    BOOL _weltDisplayAllowed; // +0x8
    BOOL _allowsPropagationEvent; // +0x9
    unsigned long long _showPosition; // +0x10
    double _blankSize; // +0x18
    double _radius; // +0x20
    double _shadowRadius; // +0x28
    long long _closeStyle; // +0x30
    UIView * _contentView; // +0x38
    id /* block */ _onClose; // +0x40
    unsigned long long _position; // +0x48
    UIView * _arrowView; // +0x50
    UIView * _tipsContentView; // +0x58
    UIView * _anchor; // +0x60
    CGSize _backgroundMargin; // +0x68
    UIEdgeInsets _safeEdgeInset; // +0x78
}
- (id)initWithTipsContentView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)setPosition:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)updateArrowViewMask;
- (void)updateMask;
- (void)showOnView:(id)arg1 offset:(CGVector)arg2;
- (void)dismiss;
- (void)_doHidden;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)MMUIViewControllerWillPushOrPresent:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (unsigned long long)showPosition;
- (void)setShowPosition:(unsigned long long)arg1;
- (double)blankSize;
- (void)setBlankSize:(double)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (CGSize)backgroundMargin;
- (void)setBackgroundMargin:(CGSize)arg1;
- (UIEdgeInsets)safeEdgeInset;
- (void)setSafeEdgeInset:(UIEdgeInsets)arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (long long)closeStyle;
- (void)setCloseStyle:(long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (unsigned long long)position;
- (BOOL)weltDisplayAllowed;
- (void)setWeltDisplayAllowed:(BOOL)arg1;
- (BOOL)allowsPropagationEvent;
- (void)setAllowsPropagationEvent:(BOOL)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)tipsContentView;
- (void)setTipsContentView:(id)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (void).cxx_destruct;
@end
