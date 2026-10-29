@interface SightUtils : NSObject
+ (id)imageFromSampleBuffer:(opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
+ (double)useAlgorithmCheckNonBlackFrameTimeStamp:(id)arg1;
+ (id)originSizeThumbForVideoWithPath:(id)arg1;
+ (id)originSizeThumbForVideoWithPath:(id)arg1 nonBlackFrame:(BOOL)arg2 inTime:(double)arg3;
+ (id)originSizeThumbForVideoWithPath:(id)arg1 atTime:(double)arg2 isTimeTolerance:(BOOL)arg3;
+ (id)unBlackFrameCoverForVideoWithPath:(id)arg1 atTimeStart:(double)arg2 untilTimeEnd:(double)arg3;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (id)newThumbForVideoWithPath:(id)arg1;
+ (id)thumbForVideoWithAsset:(id)arg1;
+ (id)generateImageFromVideoURL:(id)arg1 withStartTime:(double)arg2 endTime:(double)arg3 actualOffsetRef:(double *)arg4 enableUndersampling:(BOOL)arg5 enableBlackAvoiding:(BOOL)arg6;
+ (BOOL)detectImageBlack:(id)arg1;
+ (BOOL)detectImagePureColor:(id)arg1;
+ (id)thumbForVideoWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)thumbForVideoWithPath:(id)arg1 atTimeStart:(double)arg2 untilTimeEnd:(double)arg3;
+ (BOOL)shouldResizeVideoThumbWithSize:(CGSize)arg1;
+ (BOOL)shouldResizeVideoThumbImage:(id)arg1;
+ (id)resizeVideoThumb:(id)arg1;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)generateVideoThumbImageWithAsset:(id)arg1 atTime:(double)arg2 isTimeTolerance:(BOOL)arg3;
+ (BOOL)isVideoPlayableForPath:(id)arg1;
+ (BOOL)isVideoPlayableForURL:(id)arg1;
+ (BOOL)generateThumbImageFromVideo:(id)arg1 toThumbImage:(id)arg2;
+ (BOOL)shouldUpdateThumbImageWithSightVideoPath:(id)arg1 thumbImagePath:(id)arg2;
+ (BOOL)isThumbImage:(id)arg1 matchVideo:(id)arg2;
+ (CGSize)videoFrameSizeWithVideo:(id)arg1;
+ (BOOL)isH265VideoByPath:(id)arg1;
+ (BOOL)isH266VideoByPath:(id)arg1;
+ (void)ConvertHevcToH264:(id)arg1 outputPath:(id)arg2 block:(id /* block */)arg3;
+ (BOOL)isH265VideoByAsset:(id)arg1;
+ (BOOL)isProResVideoWithAsset:(id)arg1;
+ (double)syncGetDurationWithPath:(id)arg1;
@end

