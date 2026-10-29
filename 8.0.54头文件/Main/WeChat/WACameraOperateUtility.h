@interface WACameraOperateUtility : NSObject
+ (CGSize)getCaptureResolution:(int)arg1;
+ (id)getCaptureSessionPreset:(int)arg1;
+ (double)getFrameBufferMinLengthWithSizeStr:(id)arg1;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (id)thumbForVideoWithPath:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3;
+ (id)imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2;
+ (id)imageFromImage:(id)arg1 inRect:(CGRect)arg2;
@end

