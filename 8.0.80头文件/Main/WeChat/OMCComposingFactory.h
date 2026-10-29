@interface OMCComposingFactory : NSObject
+ (void)createTimelineWithMCAssets:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)createTimelineWithAssetInfos:(id)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)createTimelineWithOriginAssetInfos:(id)arg1 aigcAssetInfos:(id)arg2 musicInfo:(id)arg3 musicFilePath:(id)arg4 camTemplateID:(id)arg5 camTemplateVersion:(unsigned long long)arg6 camResourceManager:(id)arg7 videoFrameRateHandler:(id /* block */)arg8 postProcHandler:(id /* block */)arg9 completionHandler:(id /* block */)arg10;
+ (void)createTimelineWithOriginAssetInfos:(id)arg1 aigcAssetInfos:(id)arg2 camTemplateID:(id)arg3 camTemplateVersion:(unsigned long long)arg4 camResourceManager:(id)arg5 videoFrameRateHandler:(id /* block */)arg6 postProcHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
+ (void)_createTimelineWithAKAssets:(const void *)arg1 aspectRatio:(id)arg2 imageOriginDuration:(struct)arg3 minSegmentPreservedDuration:(struct)arg4 enableHDRPlayback:(BOOL)arg5 calcDurationWithAllSegments:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (void)_prepareAssets:(id)arg1 completion:(id /* block */)arg2;
+ (void)prepareMCAssets:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_prepareAssetInfos:(id)arg1 aigcAssetInfos:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)prepareAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)assetIDWithPHAsset:(id)arg1;
+ (id)assetIDWithMCAsset:(id)arg1;
+ (id)assetIDWithMJAssetInfo:(id)arg1;
+ (id)_fetchAssetFrameRateInfosFromAssets:(const void *)arg1;
+ (void)_createTimelineWithOriginAKAssets:(const void *)arg1 aigcAKAssets:(const void *)arg2 musicInfo:(id)arg3 musicFilePath:(id)arg4 camTemplate:(const void *)arg5 disableExternalMusic:(BOOL)arg6 videoFrameRateHandler:(id /* block */)arg7 postProcHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
+ (BOOL)_parseAigcDraftBundleAtPath:(id)arg1 into:(void *)arg2 error:(id *)arg3;
+ (void)createTimelineWithAigcDraftBundlePath:(id)arg1 aigcAssetInfos:(id)arg2 camResourceManager:(id)arg3 videoFrameRateHandler:(id /* block */)arg4 postProcHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (void)createComposingSessionWithProjectInfoJSON:(id)arg1 sessionDescJSON:(id)arg2 timelineJSON:(id)arg3 componentsJSON:(id)arg4 musicInfo:(id)arg5 musicFilePath:(id)arg6 materialManager:(id)arg7 progress:(id /* block */)arg8 completion:(id /* block */)arg9;
@end
