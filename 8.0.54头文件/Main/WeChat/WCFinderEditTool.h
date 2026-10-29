@interface WCFinderEditTool : NSObject
+ (struct)convectTime:(struct)arg1;
+ (BOOL)needAdjustEditViewLayout;
+ (CGSize)editVideoProgressBarImageSize;
+ (double)editVideoHeightWidthRatioMax;
+ (double)editVideoHeightWidthRatioMin;
+ (double)finderEditVideoMaxDuration;
+ (double)finderEditVideoMaxDurationWithVideoDuration:(double)arg1;
+ (unsigned long long)finderComposeAtomSizeLen;
+ (double)finderEditVideoMinDuration;
+ (BOOL)useVideoCompositionLib;
+ (id)thumbImageViewWithComposition:(id)arg1 videoComposition:(id)arg2 atTime:(double)arg3;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(CGSize)arg2 completion:(id /* block */)arg3;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(CGSize)arg2 editVideoAttr:(id)arg3 needFullVideoEditTimeRange:(BOOL)arg4 completion:(id /* block */)arg5;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(CGSize)arg2 editVideoAttr:(id)arg3 needFullVideoEditTimeRange:(BOOL)arg4 completion:(id /* block */)arg5 useFilledScreenMode:(BOOL)arg6;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(CGSize)arg2 editVideoAttr:(id)arg3 previewMoveDatas:(id)arg4 emotionOffSet:(CGPoint)arg5 cropFrame:(CGRect)arg6 completion:(id /* block */)arg7;
+ (void)composeVideoWithAssets:(id)arg1 renderSize:(CGSize)arg2 editVideoAttr:(id)arg3 previewMoveDatas:(id)arg4 emotionOffSet:(CGPoint)arg5 cropFrame:(CGRect)arg6 completion:(id /* block */)arg7 useFilledScreenMode:(BOOL)arg8;
+ (CGAffineTransform)adjustPreferredTransform:(CGAffineTransform)arg1 withNaturalSize:(CGSize)arg2;
@end

