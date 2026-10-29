@interface EditVideoLogicController : MMObject
{
    NSMutableDictionary * _dicEditAsset; // +0x8
    NSLock * _lock; // +0x10
}
+ (void)videoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)finderVideoCompositionWithAVAsset:(id)arg1 paths:(id)arg2 assets:(id)arg3 attr:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)finderVideoCompositionWithVideoComposition:(id)arg1 originVideoPaths:(id)arg2 attr:(id)arg3 emotionOffset:(CGPoint)arg4 completionHandler:(id /* block */)arg5;
+ (id)finderVideoCompositionWithVideoComposition:(id)arg1 originVideoPaths:(id)arg2 attr:(id)arg3 emotionOffset:(CGPoint)arg4 encodingPlanHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (long long)adjustLenToEven:(double)arg1;
+ (CGSize)adjustSizeToEvenSize:(CGSize)arg1;
+ (void)videoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)saveEditedThumbImageWithAsset:(id)arg1 requestUneditedAsset:(BOOL)arg2 editAttr:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)__imageCompositionWithAsset:(id)arg1 withDefaultImg:(id)arg2 withAttr:(id)arg3 toFilePath:(id)arg4;
+ (void)__imageCompositionWithAsset:(id)arg1 toFilePath:(id)arg2 defaultImg:(id)arg3 overlayImage:(id)arg4 cropTimeRange:(struct)arg5;
+ (CGAffineTransform)getTransformFromAsset:(id)arg1;
+ (id)getParamsForEntranceType:(unsigned long long)arg1 withAsset:(id)arg2 naturalSize:(CGSize)arg3 extraInfo:(id)arg4;
+ (void)NewVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)finderNewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(id /* block */)arg8;
+ (void)NewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(id /* block */)arg8;
+ (void)__NewVideoBGMCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(id /* block */)arg7;
+ (void)checkUseSWTranscoding:(unsigned long long)arg1 avAsset:(id)arg2 withAttr:(id)arg3 pathNum:(unsigned long long)arg4 assetsNum:(unsigned long long)arg5 isVCEdit:(BOOL)arg6 VideoEncodeParams:(id)arg7 isUsingMAV:(BOOL)arg8;
+ (void)__NewVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(id /* block */)arg7;
+ (id)genAdjustVideoCompositionWithAsset:(id)arg1 attr:(id)arg2 param:(id)arg3;
+ (CGRect)previewFrameWithVideoSize:(id)arg1;
+ (CGSize)adjustRenderSize:(CGSize)arg1;
+ (void)adjustAudioBitrate:(id)arg1 params:(id)arg2;
+ (id)adaptiveBitrateAdjustment:(id)arg1 assets:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 videoEncodeParams:(id)arg5 isEdited:(BOOL)arg6 enableABA:(BOOL)arg7;
+ (id)adaptiveBitrateAdjustment:(id)arg1 urls:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 isEdited:(BOOL)arg5 enableABA:(BOOL)arg6 videoEncodeParams:(id)arg7;
+ (BOOL)canSkipCompressForEncodeScene:(unsigned long long)arg1;
+ (void)configureMMAssetExportSession:(id)arg1 forEncodeScene:(unsigned long long)arg2;
+ (id)compressInformationsOfVideoWithParams:(id)arg1;
+ (void)reportVideoCompressionResult:(BOOL)arg1 scene:(unsigned long long)arg2;
+ (void)reportVideoCompressionFailedInfoWithOutputPath:(id)arg1 inputPath:(id)arg2 entranceType:(unsigned long long)arg3 resultError:(id)arg4 reportInfo:(id)arg5;
+ (void)reportVideoCompressionInfoWithOutputPath:(id)arg1 inputPath:(id)arg2 compressionTime:(double)arg3 params:(id)arg4 entranceType:(unsigned long long)arg5 videoScoreParams:(id)arg6 resultError:(id)arg7 scene:(unsigned long long)arg8 reportInfo:(id)arg9;
+ (unsigned long long)composeSceneFromSightPickerScene:(unsigned long long)arg1;
+ (id)startMAVVideoCompositionWithMMAsset:(id)arg1 avAsset:(id)arg2 avAssetUrl:(id)arg3 attr:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)_realStartMAVVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 attr:(id)arg3 exportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 videoEncodeTaskParams:(id)arg7 completionHandler:(id /* block */)arg8;
+ (void)adjustAnimationToolIfNeeded:(id)arg1 attr:(id)arg2 videoSize:(CGSize)arg3;
+ (void)adjustDebugParams:(id)arg1 forScene:(unsigned long long)arg2;
- (id)init;
- (id)modifyAsset:(id)arg1 withEditImageAttr:(id)arg2 withEditedTimeRange:(struct)arg3;
- (id)modifyAsset:(id)arg1 withEditVideoAttr:(id)arg2;
- (void)removeEditedAsset:(id)arg1;
- (id)getEditVideoAttr:(id)arg1;
- (void).cxx_destruct;
@end
