@interface MMQuickSendEmoticonBackgroundView : UIView
{
    CALayer * _pubbleLayer; // +0x8
    double _triangleXRightMargin; // +0x10
}
+ (id)createMaskPathInRect:(CGRect)arg1 pubblePadding:(double)arg2 cornerRadius:(double)arg3 triangleWidth:(double)arg4 triangleHeight:(double)arg5 triangleX:(double)arg6;
- (void)setFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTriangleXRightMargin:(double)arg1;
- (void)updateShapeLayer;
- (id)pubbleLayer;
- (void)setPubbleLayer:(id)arg1;
- (double)triangleXRightMargin;
- (void)setTriangleXRightMargin:(double)arg1;
- (void).cxx_destruct;
@end
