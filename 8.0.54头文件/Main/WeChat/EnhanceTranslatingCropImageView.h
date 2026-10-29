@interface EnhanceTranslatingCropImageView : UIView
{
    BOOL _isAnimating; // +0x8
    UIImageView * _outerBorderView; // +0x10
    id /* block */ _hideCompletion; // +0x18
    id /* block */ _showCompletion; // +0x20
}
- (id)init;
- (void)showBorderView:(CGPoint)arg1 rightTop:(CGPoint)arg2 leftBottom:(CGPoint)arg3 rightBottom:(CGPoint)arg4 showCompletion:(id /* block */)arg5 hideCompletion:(id /* block */)arg6;
- (void)updateOuterBorderView:(CGRect)arg1 leftTop:(CGPoint)arg2 rightTop:(CGPoint)arg3 leftBottom:(CGPoint)arg4 rightBottom:(CGPoint)arg5;
- (void)drawRoundCorner:(CGContext *)arg1 vetrix:(CGPoint)arg2 leftVetrix:(CGPoint)arg3 rightVetrix:(CGPoint)arg4;
- (void)doOuterBorderShowAnimation:(CGRect)arg1;
- (void)doOuterBorderExpandAnimation:(CGRect)arg1;
- (void)doOuterBorderHideAnimation:(CGRect)arg1;
- (void)hideOuterBorderView;
- (void)resetCropImageView;
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

