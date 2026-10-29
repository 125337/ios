@interface MMFinderLiveStyledCoverImageUtil : NSObject
+ (void)generateCoverImageWithHeadImage:(id)arg1 text:(id)arg2 completion:(id /* block */)arg3;
+ (void)generateDefaultCoverImageWithHeadURL:(id)arg1 imageLoadView:(id)arg2 text:(id)arg3 completion:(id /* block */)arg4;
+ (id)drawCoverImageWithBackgroundImage:(id)arg1 headImage:(id)arg2 waveColor:(id)arg3 text:(id)arg4;
+ (void)drawImage:(id)arg1 aspectFillInRect:(CGRect)arg2;
+ (void)drawRingWithCenter:(CGPoint)arg1 diameter:(double)arg2 lineWidth:(double)arg3 color:(id)arg4;
+ (void)drawFallbackGradientInRect:(CGRect)arg1 waveColor:(id)arg2;
@end
