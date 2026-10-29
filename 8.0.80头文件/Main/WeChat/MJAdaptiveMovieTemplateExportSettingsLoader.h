@interface MJAdaptiveMovieTemplateExportSettingsLoader : WCFinderVideoProducerExportSettingsLoader
{
    BOOL _hasDecoration; // +0x8
}
- (void)loadExportSettingsWithVideoTemplate:(id)arg1 assetInfoList:(id)arg2 videoAspectRatio:(double)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (id)_defaultExportSettings;
- (id)exportSettingsWithVideoEncodeParams:(id)arg1;
- (void)_fetchABAParamsWithFileURL:(id)arg1 videoEncodeParams:(id)arg2 workingQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchABAParamsWithAsset:(id)arg1 videoEncodeParams:(id)arg2 workingQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)hasDecoration;
- (void)setHasDecoration:(BOOL)arg1;
@end
