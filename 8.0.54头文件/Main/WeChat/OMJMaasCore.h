@interface OMJMaasCore : NSObject
{
    id <OMJMaasCoreReportDelegate> _reportDelegate; // +0x8
    id <OMJMaasCoreSettingsDataSource> _settingsDataSource; // +0x10
    OMJMovieSession * _movieSession; // +0x18
    OMJCamSession * _camSession; // +0x20
    OMJCamResourceManager * _camResourceManager; // +0x28
    OMJCamoSession * _camoSession; // +0x30
    OMJResourcePreloader * _resourcePreloader; // +0x38
    OMJServiceManager * _serviceManager; // +0x40
    OMJExportManager * _exportManager; // +0x48
    OMJMaterialManager * _materialManager; // +0x50
    OMJSpeechManager * _speechManager; // +0x58
    OMCProjectManager * _projectManager; // +0x60
    OMJMoviePlayer * _moviePlayer; // +0x68
    OMJMovieComposingSession * _movieComposingSession; // +0x70
    shared_ptr<XMJMaasCore> _backingMaasCore; // +0x78
}
+ (void)initMetricsReportingWithLogPath:(id)arg1 metricsReportingHandler:(id /* block */)arg2;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned long long)arg3;
+ (id)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned long long)arg3 startupOptions:(id)arg4;
+ (void)enableLoggingWithParams:(id)arg1;
+ (void)disableLogging;
+ (void)setLogLevel:(long long)arg1;
+ (void)setUseNativeDispatcher:(BOOL)arg1;
+ (id)MaasSDKVersion;
+ (id)MaasSDKShortVersion;
+ (id)MaasSDKVersionNumber;
+ (unsigned long long)MaasSDKVersionNumberIntValue;
+ (id)MaasSDKBuildNumber;
- (BOOL)registerAIModelsWithInfo:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (void)setupAnalyticsEventCallback;
- (void)setupSettingsProvider;
- (XMJILinkContextParamsSelfManaged)mapContextParamsSelfManaged:(id)arg1;
- (XMJILinkContextParamsExternalManaged)mapContextParamsExternalManaged:(id)arg1;
- (XMJILinkContextParams)mapContextParams:(id)arg1;
- (XMJILinkAppClientParams)mapAppClientParams:(id)arg1;
- (XMJILinkParams)mapILinkParams:(id)arg1;
- (id)startupWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)teardownWithCompletionHandler:(id /* block */)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)queryInstaMovieTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)queryCamFunTemplateResourcesStatusWithIdentifier:(id)arg1 version:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)createMovieSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (BOOL)createMovieSessionWithModelInfos:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)destroyMovieSessionWithCompletionHandler:(id /* block */)arg1;
- (id)movieSession;
- (BOOL)createResourcePreloaderWithError:(id *)arg1;
- (void)destroyResourcePreloader;
- (id)resourcePreloader;
- (id)serviceManager;
- (id)exportManager;
- (BOOL)createMoviePlayer;
- (id)destroyMoviePlayerWithCompletionHandler:(id /* block */)arg1;
- (id)moviePlayer;
- (BOOL)createMovieComposingSession;
- (void)destroyMovieComposingSessionWithCompletionHandler:(id /* block */)arg1;
- (id)movieComposingSession;
- (BOOL)createCamSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (void)destroyCamSessionWithCompletionHandler:(id /* block */)arg1;
- (id)camSession;
- (id)getOrCreateCamResourceManagerWithError:(id *)arg1;
- (void)destroyCamResourceManager;
- (id)camResourceManager;
- (BOOL)registerTemplateResourcesWithFilePath:(id)arg1 resourceID:(id)arg2;
- (BOOL)createCamoSessionWithModelInfos:(id)arg1 error:(id *)arg2;
- (void)destroyCamoSessionWithCompletionHandler:(id /* block */)arg1;
- (id)camoSession;
- (id)getOrCreateMaterialManagerWithError:(id *)arg1;
- (id)materialManager;
- (void)destroyMaterialManager;
- (id)getOrCreateSpeechManagerWithError:(id *)arg1;
- (id)speechManager;
- (void)destroySpeechManager;
- (id)getOrCreateProjectManagerWithError:(id *)arg1;
- (id)projectManager;
- (void)destroyProjectManager;
- (id)createRenderView;
- (void)cleanupResourceCachesWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cleanupAssetCachesExcludAssetInfos:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cleanupSDFCachesWithCompletionHandler:(id /* block */)arg1;
- (void)cleanupREResourceCachesWithCompletionHandler:(id /* block */)arg1;
- (id)collectAssetInfosFromClipBundleWithID:(id)arg1 error:(id *)arg2;
- (id)clipBundleInfoAbsolutePathWithID:(id)arg1;
- (id)clipBundleInfoRelativePathWithID:(id)arg1;
- (id)clipBundleCoverImagePathWithID:(id)arg1;
- (id)allClipBundleIDs;
- (void)setTextureRegister:(id)arg1;
- (void)resetTextureRegister;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)settingsDataSource;
- (void)setSettingsDataSource:(id)arg1;
- (void)setMovieSession:(id)arg1;
- (void)setCamSession:(id)arg1;
- (void)setCamResourceManager:(id)arg1;
- (void)setCamoSession:(id)arg1;
- (void)setResourcePreloader:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setExportManager:(id)arg1;
- (void)setMaterialManager:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setProjectManager:(id)arg1;
- (void)setMoviePlayer:(id)arg1;
- (void)setMovieComposingSession:(id)arg1;
- (shared_ptr<XMJMaasCore>)backingMaasCore;
- (void)setBackingMaasCore:(shared_ptr<XMJMaasCore>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

