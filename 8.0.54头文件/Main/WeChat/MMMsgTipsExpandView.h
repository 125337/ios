@interface MMMsgTipsExpandView : UIView
{
    BOOL _showBottomGradientMask; // +0x8
    BOOL _isAnimating; // +0x9
    id <MMMsgTipsExpandViewDelegate> _expandViewDelegate; // +0x10
}
- (void)setFrame:(CGRect)arg1;
- (void)hideExpandView:(BOOL)arg1;
- (void)onExpandViewDisappear;
- (id)customHeaderButton;
- (void)onCustomHeaderButtonClick;
- (id)expandViewDelegate;
- (void)setExpandViewDelegate:(id)arg1;
- (BOOL)showBottomGradientMask;
- (void)setShowBottomGradientMask:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

