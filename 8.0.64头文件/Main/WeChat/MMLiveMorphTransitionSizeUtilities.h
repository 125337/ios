@interface MMLiveMorphTransitionSizeUtilities : NSObject
+ (CGSize)sizeOf:(CGSize)arg1 scaledToFill:(CGSize)arg2;
+ (CGSize)sizeOf:(CGSize)arg1 scaledToFit:(CGSize)arg2;
+ (unsigned long long)currentOrientationFlagsForVideoSize:(CGSize)arg1;
+ (CGRect)estimatedTargetFrameForVideoSize:(CGSize)arg1 inContainerSize:(CGSize)arg2 withInsetReferenceView:(id)arg3 hasVideoBottomView:(BOOL)arg4;
@end
