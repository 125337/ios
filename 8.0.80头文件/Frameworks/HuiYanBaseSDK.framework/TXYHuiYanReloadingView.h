@interface TXYHuiYanReloadingView : UIView
+ (id)loadingView;
- (void)dismiss;
- (void)setupArcLayer;
- (void)startRotationAnimation;
- (double)gradientAlphaForProgress:(double)arg1;
- (id)gradientArcImageWithSize:(double)arg1 lineWidth:(double)arg2;
@end
