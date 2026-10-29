@interface WCFinderCommonTipsView : UIView <MMUIViewControllerExt>
{
    BOOL _weltDisplayAllowed; // +0x8
    BOOL _allowsPropagationEvent; // +0x9
    unsigned long long _showPosition; // +0x10
    double _blankSize; // +0x18
    double _radius; // +0x20
    double _shadowOpacity; // +0x28
    double _shadowRadius; // +0x30
    long long _closeStyle; // +0x38
    UIView * _contentView; // +0x40
    id /* block */ _onClose; // +0x48
    unsigned long long _position; // +0x50
    unsigned long long _tipsType; // +0x58
    UIView * _arrowView; // +0x60
    UIView * _tipsContentView; // +0x68
    UIView * _anchor; // +0x70
    MMUIViewController * _registeredVC; // +0x78
    MMTimer * _autoDismissTimer; // +0x80
    CGSize _backgroundMargin; // +0x88
    CGSize _shadowOffset; // +0x98
    UIEdgeInsets _safeEdgeInset; // +0xa8
}
+ (id)standardConfigLabel;
+ (id)standardConfigLabelWithText:(id)arg1 target:(id)arg2 tapAction:(SEL)arg3;
+ (CGSize)calArrowViewSize:(double)arg1;
- (id)initWithTipsContentView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)setPosition:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)updateArrowViewMask;
- (void)updateMask;
- (void)showOnView:(id)arg1 offset:(CGVector)arg2;
- (void)showInWindow:(id)arg1 anchorPoint:(CGPoint)arg2;
- (void)registerDismissOnViewController:(id)arg1;
- (void)_showInWindow:(id)arg1 anchorPoint:(CGPoint)arg2;
- (void)dismiss;
- (void)dismissAfterDelay:(double)arg1;
- (void)_onAutoDismissTimerFired:(id)arg1;
- (void)_doHidden;
- (void)dealloc;
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
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowOpacity;
- (void)setShadowOpacity:(double)arg1;
- (double)shadowRadius;
- (void)setShadowRadius:(double)arg1;
- (long long)closeStyle;
- (void)setCloseStyle:(long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (unsigned long long)position;
- (unsigned long long)tipsType;
- (void)setTipsType:(unsigned long long)arg1;
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
- (id)registeredVC;
- (void)setRegisteredVC:(id)arg1;
- (id)autoDismissTimer;
- (void)setAutoDismissTimer:(id)arg1;
- (void).cxx_destruct;
@end
