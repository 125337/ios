@interface EditVideoUtil : MMObject
+ (void)asyncGetInformationOfVideoWithPath:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)asyncGetInformationOfVideoWithAsset:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)asyncGetInformationStrOfVideoWithAsset:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)infomationStrWithParamsResult:(id)arg1;
+ (id)getEditVideoTmpDir;
+ (id)getAssetTmpDirByUrl:(id)arg1;
+ (id)getEditVideoFilePathByUrl:(id)arg1;
+ (id)getEditVideoThumbFilePathByUrl:(id)arg1;
+ (BOOL)isNeedSaveEditedVideo;
+ (void)saveEditedVideoByFilePath:(id)arg1;
+ (void)saveEditedVideoByFilePath:(id)arg1 withResultBlock:(id /* block */)arg2;
+ (id)genVideoCompositionWithVideoPath:(id)arg1 avAsset:(id)arg2 attr:(id)arg3 targetSize:(CGSize)arg4;
+ (id)genVideoCompositionWithVideoPath:(id)arg1 avAsset:(id)arg2 attr:(id)arg3;
+ (BOOL)isSearchMusicAfterInputEnabled;
+ (id)genVideoCompositionOutputConfigWithVideoEncodeParams:(id)arg1 videoCompositionAttr:(id)arg2 videoComposition:(id)arg3 VideoEncodeTaskParams:(id)arg4;
+ (id)genAnimationToolWithAttr:(id)arg1 videoSize:(CGSize)arg2 isForceCreate:(BOOL)arg3;
+ (id)genAnimationToolWithOverlayLayer:(id)arg1 videoSize:(CGSize)arg2 isProportionalScale:(BOOL)arg3;
+ (BOOL)isBackgroundTaskEnabled;
+ (BOOL)isMavEncodeTaskKeepsProcessInBackgroundEnabled;
+ (BOOL)isMavEncodeTaskAutoRetryEnabled;
+ (BOOL)isVideoAssetFileValid:(id)arg1;
+ (BOOL)isMusicRecommendUsingMass;
+ (BOOL)MAV_forceCreateAnimationToolForHDRAsset;
+ (BOOL)MAV_canSoftEncodeOverlayLayerBGMAsset;
+ (void)recordObject:(id)arg1 timeOffset:(double)arg2;
+ (void)resetLyricsLayerTimeOffsetRecursive:(id)arg1;
+ (void)resetLyricsLayersTimeOffset:(id)arg1;
@end

