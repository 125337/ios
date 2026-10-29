@interface WCFinderImageVideoTool : NSObject
+ (id)imageResize:(id)arg1 andResizeConstraint:(CGSize)arg2;
+ (id)getVideoImageWithTime:(double)arg1 videoPath:(id)arg2 keyFrameRate:(double)arg3;
+ (id)getCompressImageDataBy:(id)arg1 imageType:(unsigned long long)arg2 compressRate:(double *)arg3;
+ (id)getCompressImageDataBy:(id)arg1 defaultRate:(double)arg2 maxSize:(double)arg3 compressRate:(double *)arg4;
+ (void)accessAudioFromVideo:(id)arg1 completion:(id /* block */)arg2;
+ (id)compressHeadImage:(id)arg1;
+ (id)generateCGImageFromImage:(id)arg1;
+ (BOOL)selectedImagesSizeLegal:(id)arg1;
+ (BOOL)checkSelectedImageIsSizeLegal:(CGSize)arg1;
+ (BOOL)livePhotoDurationMoreThanLimit:(double)arg1;
@end
