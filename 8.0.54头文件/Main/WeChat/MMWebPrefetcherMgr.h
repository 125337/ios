@interface MMWebPrefetcherMgr : MMUserService <NSURLSessionTaskDelegate, MMServiceProtocol>
{
    MMWebPrefecherJsEngine * _jsEngine; // +0x8
    MMWebOptimizationPrefetcher * _resourcePrefetcher; // +0x10
    NSMutableArray * _downloadTaskArr; // +0x18
    MMWebJsBasePkgInfo * _prefecherBasePkg; // +0x20
    NSURLSession * _urlSession; // +0x28
    MMPrefetcherGameCenterJSContext * _gameSingletonContext; // +0x30
    MemoryMappedKV * _pkgFrequencyMappedKV; // +0x38
    MMWebPrefetcherPkgDownloadTask * _adPkgDownloadTask; // +0x40
    MemoryMappedKV * _exptMappedKV; // +0x48
}
+ (void)stateMonitorFor:(unsigned int)arg1;
+ (void)workflowMonitorFor:(unsigned int)arg1;
+ (void)contextReport:(unsigned int)arg1;
+ (void)adOperateReport:(unsigned int)arg1;
+ (void)stepReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 url:(id)arg3 step:(unsigned int)arg4;
+ (void)stepReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 url:(id)arg3 step:(unsigned int)arg4 isUsingNewJvm:(BOOL)arg5;
+ (void)downloadReportForBizScene:(long long)arg1 subBizScene:(long long)arg2 ResType:(long long)arg3 ResUrlorAppId:(id)arg4 Action:(long long)arg5 isUsingNewJvm:(BOOL)arg6;
+ (id)getValidPkgInfoWithAppID:(id)arg1 userName:(id)arg2 localResName:(id)arg3;
+ (id)gameCenterIdentifierForUrl:(id)arg1;
+ (BOOL)isWebPrefetcherOpen;
+ (BOOL)isWebPrefetcherSingletonVmEnable;
+ (BOOL)isTimelineADPrefetcherOpen;
+ (BOOL)isGameCenterSwitchOpen;
+ (BOOL)isPkgDownloadUsePreDownloadEnable;
+ (unsigned int)mainCellExposedInterval;
+ (unsigned int)firstMainCellExposedDelaySec;
+ (unsigned int)codePkgDownloadInterval;
- (id)frequencyMappedKV;
- (id)getValidCodePkgPathWithAppId:(id)arg1;
- (void)trigerPrefetchBasePrefetcherPkg;
- (void)trigerPrefetchADPrefetcherPkg;
- (void)trigerDownloadPkgWithAppId:(id)arg1 username:(id)arg2 callback:(id /* block */)arg3;
- (void)releaseGameCenterContext;
- (void)onGameCenterUrlEntrenceExposedWithUrl:(id)arg1 scene:(unsigned int)arg2;
- (id)gameCenterJSContext;
- (id)mappedKV;
- (id)getTestAdInfo;
- (void)setAdTestInfoWithStr:(id)arg1;
- (void)setAdTestInfoWithStr:(id)arg1 key:(id)arg2;
- (void)setAdTestInfoWithInt:(int)arg1 key:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupEngine;
- (void)releaseEngine;
- (void)dispatchEventToAdContext:(id)arg1 extraData:(id)arg2;
- (void)dispatchMainCellExposedEventWithScene:(long long)arg1;
- (void)tryStartWebPrefechWithUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(BOOL)arg5 httpHeader:(id)arg6 config:(id)arg7 callback:(id /* block */)arg8;
- (void)doPrefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(BOOL)arg5 httpHeader:(id)arg6 config:(id)arg7 callback:(id /* block */)arg8;
- (void)setupURLSession;
- (id)jsEngine;
- (void)setJsEngine:(id)arg1;
- (id)resourcePrefetcher;
- (void)setResourcePrefetcher:(id)arg1;
- (id)downloadTaskArr;
- (void)setDownloadTaskArr:(id)arg1;
- (id)prefecherBasePkg;
- (void)setPrefecherBasePkg:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (id)gameSingletonContext;
- (void)setGameSingletonContext:(id)arg1;
- (id)pkgFrequencyMappedKV;
- (void)setPkgFrequencyMappedKV:(id)arg1;
- (id)adPkgDownloadTask;
- (void)setAdPkgDownloadTask:(id)arg1;
- (id)exptMappedKV;
- (void)setExptMappedKV:(id)arg1;
- (void).cxx_destruct;
@end

