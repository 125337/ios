@interface SightWideScreenLayoutUtil : NSObject
+ (BOOL)isAdaptiveCaptureLayoutEnabledForScene:(unsigned long long)arg1;
+ (BOOL)isExpandedContainerSize:(CGSize)arg1;
+ (CGSize)previewSizeForContainerSize:(CGSize)arg1;
+ (CGRect)portraitPreviewFrameForContainerBounds:(CGRect)arg1;
+ (id)layoutForContainerBounds:(CGRect)arg1 safeAreaInsets:(UIEdgeInsets)arg2;
+ (id)layoutForContainerBounds:(CGRect)arg1 safeAreaInsets:(UIEdgeInsets)arg2 reversePreviewAspect:(BOOL)arg3;
@end
