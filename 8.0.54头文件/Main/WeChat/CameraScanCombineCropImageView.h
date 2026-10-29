@interface CameraScanCombineCropImageView : UIView
{
    BOOL _isAnimating; // +0x8
    UIImageView * _outerBorderView; // +0x10
    id /* block */ _hideCompletion; // +0x18
    id /* block */ _showCompletion; // +0x20
}
- (id)init;
- (void)showBorderView:(CGRect)arg1 showCompletion:(id /* block */)arg2 hideCompletion:(id /* block */)arg3;
- (void)hideOuterBorderView;
- (void)doOuterBorderViewShowAnimation:(CGRect)arg1;
- (void)doOuterBorderExpandAndRestoreAnimation;
- (void)doOuterBorderViewHideAnimation;
- (void)resetCropImageView;
- (CGRect)adjustRectSizeIfTooCloseToScreenEdge:(CGRect)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)outerBorderView;
- (void)setOuterBorderView:(id)arg1;
- (id /* block */)hideCompletion;
- (void)setHideCompletion:(id /* block */)arg1;
- (id /* block */)showCompletion;
- (void)setShowCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

