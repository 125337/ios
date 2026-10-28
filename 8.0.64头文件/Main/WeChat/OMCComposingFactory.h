@interface OMCComposingFactory : NSObject
+ (void)createTimelineWithMCAssets:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)createTimelineWithAssetInfos:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)_createTimelineWithAKAssets:(const void *)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)_prepareAssets:(id)arg1 completion:(id /* block */)arg2;
+ (void)prepareMCAssets:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)assetIDWithPHAsset:(id)arg1;
+ (id)assetIDWithMCAsset:(id)arg1;
+ (id)assetIDWithMJAssetInfo:(id)arg1;
+ (id)_fetchAssetFrameRateInfosFromAssets:(const void *)arg1;
@end
