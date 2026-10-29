@interface MMSightCameraOptionUtil : NSObject
+ (id)createIconButtonWithSVGName:(id)arg1 viewTag:(long long)arg2 accessibilityText:(id)arg3;
+ (id)createIconButtonWithSVGName:(id)arg1 viewSize:(CGSize)arg2 imageSize:(CGSize)arg3 viewTag:(long long)arg4 accessibilityText:(id)arg5;
+ (id)createIconButtonWithTitle:(id)arg1 font:(id)arg2 viewTag:(long long)arg3 accessibilityText:(id)arg4;
+ (double)topBarBtnLen;
+ (id)createTopBarButtonWithIconName:(id)arg1;
+ (id)createPureTitleButtonForText:(id)arg1 withAccessibilityText:(id)arg2;
+ (id)createAvgViewWithFrame:(CGRect)arg1 fromSubviewList:(id)arg2 justified:(BOOL)arg3 edgeInsets:(UIEdgeInsets)arg4;
+ (void)transformView:(id)arg1 rotateToOrientation:(long long)arg2 animated:(BOOL)arg3;
+ (CGAffineTransform)_rotateTransform:(CGAffineTransform)arg1 toDeviceOrientation:(long long)arg2;
+ (double)_getRotateFromTransform:(CGAffineTransform)arg1;
- (double)_getScaleXFromTransform:(CGAffineTransform)arg1;
- (double)_getScaleYFromTransform:(CGAffineTransform)arg1;
@end

