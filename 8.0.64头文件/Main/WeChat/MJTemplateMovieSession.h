@interface MJTemplateMovieSession : MJTemplateSession
{
    BOOL _usesBuildAndSwitchOperation; // +0x8
    OMJMovieSession * _maasMovieSession; // +0x10
    double _AIGeneratorTimeoutInterval; // +0x18
    NSArray * _assetInfos; // +0x20
    MJAIAssetProcessor * _AIAssetProcessor; // +0x28
    NSMutableDictionary * _AIModelTypeCache; // +0x30
    NSMutableDictionary * _templateBuildResultCache; // +0x38
}
- (BOOL)createMaasSession;
- (BOOL)_createMaasMovieSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_tearDownMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)startCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7 recommendationOptions:(id)arg8 preprocCompletionHandler:(id /* block */)arg9;
- (void)_startCreationWithTemplateID:(id)arg1 musicIDs:(id)arg2 assetInfos:(id)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7 recommendationOptions:(id)arg8 preprocCompletionHandler:(id /* block */)arg9;
- (void)_cacheTemplateList:(id)arg1;
- (void)restartCreationWithTemplateID:(id)arg1 musicID:(id)arg2 AIModelType:(id)arg3 timeRange:(struct)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)restartCreationWithVideoTemplate:(id)arg1 musicID:(id)arg2 timeRange:(struct)arg3 options:(id)arg4 outroInfo:(id)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)restartCreationWithMusicID:(id)arg1 timeRange:(struct)arg2 options:(id)arg3 outroInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)_restartCreationWithTemplateID:(id)arg1 musicID:(id)arg2 AIModelType:(id)arg3 timeRange:(struct)arg4 options:(id)arg5 outroInfo:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (id)AIModelTypeCache;
- (id)templateBuildResultCache;
- (id)templateBuildResultCacheWithTemplateID:(id)arg1 musicID:(id)arg2;
- (BOOL)cacheTemplateBuildResult:(id)arg1 templateID:(id)arg2 musicID:(id)arg3;
- (id)templateBuildResultCacheKeyWithTemplateID:(id)arg1 musicID:(id)arg2;
- (void)startAIAssetProcessorIfNeeded;
- (void)cancelAIAssetProcessor;
- (void)cancelRecreationIfNeeded;
- (void)_cancelRecreationIfNeeded;
- (void)_cancelBuildIfNeeded;
- (void)_cancelAIBuildIfNeeded;
- (void)requestRecommendWithPageCtx:(id)arg1 shouldRecommendBGM:(BOOL)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(id /* block */)arg4;
- (void)_requestRecommendWithPageCtx:(id)arg1 shouldRecommendBGM:(BOOL)arg2 additionTemplateIDs:(id)arg3 recommendCompletionHandler:(id /* block */)arg4;
- (long long)requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(id /* block */)arg3;
- (long long)_requestMusicRecommendWithTemplateID:(id)arg1 clientRequestID:(unsigned long long)arg2 recommendCompletionHandler:(id /* block */)arg3;
- (void)startPlayingWithTimeRange:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)startPlayingSegmentWithId:(id)arg1 timeRange:(struct)arg2 firstStop:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)_startPlayingWithTimeRange:(struct)arg1 specificSegmentId:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)startAssetClippingWithCompletionHandler:(id /* block */)arg1;
- (void)stopAssetClippingWithCompletionHandler:(id /* block */)arg1;
- (void)updateMovieOptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)startExportingCreationWithTimeRange:(struct)arg1 outputFilePath:(id)arg2 exportMovieOptions:(id)arg3 exportSettings:(id)arg4 progressHandler:(id /* block */)arg5 resultHandler:(id /* block */)arg6;
- (void)startExportingCreationAsynchronouslyWithTimeRange:(struct)arg1 outputFilePath:(id)arg2 exportMovieOptions:(id)arg3 exportSettings:(id)arg4 progressHandler:(id /* block */)arg5 resultHandler:(id /* block */)arg6;
- (id)maasMovieSession;
- (void)setMaasMovieSession:(id)arg1;
- (BOOL)usesBuildAndSwitchOperation;
- (void)setUsesBuildAndSwitchOperation:(BOOL)arg1;
- (double)AIGeneratorTimeoutInterval;
- (void)setAIGeneratorTimeoutInterval:(double)arg1;
- (id)assetInfos;
- (void)setAssetInfos:(id)arg1;
- (id)AIAssetProcessor;
- (void)setAIAssetProcessor:(id)arg1;
- (void)setAIModelTypeCache:(id)arg1;
- (void)setTemplateBuildResultCache:(id)arg1;
- (void).cxx_destruct;
@end
