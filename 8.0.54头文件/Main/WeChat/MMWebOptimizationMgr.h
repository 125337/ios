@interface MMWebOptimizationMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrA8keyLiteWaitingQueue; // +0x8
    NSMutableArray * _a8keyLiteTaskReqQueue; // +0x10
    NSMutableSet * _setRequestingDomainString; // +0x18
    NSObject<OS_dispatch_queue> * _doDNSWorkQueue; // +0x20
    WCEliminatedSlotMMKV * _webControlDataSlotKv; // +0x28
    WCEliminatedSlotMMKV * _domainControlDataSlotKv; // +0x30
    WCEliminatedSlotMMKV * _domainPreDNSResultSlotKv; // +0x38
    WCEliminatedSlotMMKV * _prefetchDomainInfoSlowKv; // +0x40
    WCEliminatedSlotMMKV * _redirectInfoSlotKv; // +0x48
    WCEliminatedSlotMMKV * _prefetchIdentifierSlotKv; // +0x50
    WCEliminatedSlotMMKV * _webPrefetcherIdSlotKv; // +0x58
    WCEliminatedSlotMMKV * _urlParamsFilterInfoSlotKv; // +0x60
    WCEliminatedSlotMMKV * _prefetchInfoSlotKv; // +0x68
    MMWebOptimizationPrefetcher * _resourcePrefetcher; // +0x70
    MMWebOptimJSContextTaskMgr * _jsContextManager; // +0x78
    NSMutableDictionary * _shouldWaitNotifyDic; // +0x80
}
+ (long long)webGetA8keyLiteSupportOptions;
+ (BOOL)isWebGetA8keyLiteEnable;
+ (BOOL)isWebGetA8keyLiteEnableWithOption:(unsigned int)arg1;
+ (BOOL)isWebPreDoDNSEnable;
+ (BOOL)isWebCheckPerformanceEnable;
+ (long long)webPrefetchSupportOptions;
+ (BOOL)isWebPrefetchEnable;
+ (BOOL)isWebPrefetchEnableWithOption:(unsigned int)arg1;
+ (BOOL)isPrefetchTakeOverByKaraEnableWithScene:(unsigned int)arg1;
+ (unsigned int)covertSceneToOption:(unsigned int)arg1;
+ (BOOL)isMPDomainURL:(id)arg1;
+ (BOOL)hasMPWhiteListPrefix:(id)arg1;
+ (BOOL)canApplyWebOptimizationWithMessageWrap:(id)arg1;
+ (BOOL)canApplyWebOptimizationWithDataItem:(id)arg1;
- (void)onServiceInitPrefetch;
- (void)onServiceClearDataPrefetch;
- (id)getPrefetchIdentifierForUrl:(id)arg1;
- (id)getUrlForWebPrefetcherId:(id)arg1;
- (BOOL)shouldWaitPrefetchNotifyForUrl:(id)arg1;
- (void)setShouldWaitPrefetchNotify:(BOOL)arg1 url:(id)arg2;
- (void)prefetchWebResIfNeedForUrlWithResult:(id)arg1 canRedirect:(BOOL)arg2;
- (void)prefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(BOOL)arg5 httpHeader:(id)arg6;
- (id)getPrefetchResultWithUrl:(id)arg1;
- (BOOL)hasPrefetchingTaskWithUrlString:(id)arg1;
- (void)clearCacheIfExistWithUrlString:(id)arg1;
- (void)asyncClearCacheIfExistWithUrlString:(id)arg1;
- (void)clearAllPreloadCacheData;
- (void)setPrefetchIdentifierForUrl:(id)arg1 identifier:(id)arg2;
- (void)setUrlForWebPrefetcherId:(id)arg1 url:(id)arg2;
- (void)removePrefetchIdentifierForUrlIfHave:(id)arg1;
- (void)doPrefetchWebResIfNeedForUrl:(id)arg1 extInfo:(id)arg2 scene:(unsigned int)arg3 subScene:(unsigned int)arg4 canRedirect:(BOOL)arg5 httpHeader:(id)arg6 config:(id)arg7;
- (BOOL)isWebPrefetchEnableWithScene:(unsigned int)arg1;
- (BOOL)isLowQualityNetworkCondition;
- (void)doGameCenterPrefetcher:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)isWebRedirectPrefetchEnable;
- (void)onServiceInitA8KeyLite;
- (void)onServiceClearA8KeyLite;
- (void)batchFetchControlDataForUrlParams:(id)arg1;
- (void)batchDoDNSForUrlParams:(id)arg1;
- (void)batchGetA8KeyLiteForUrlParams:(id)arg1;
- (BOOL)isWebGetA8KeyLiteEnableWithScene:(unsigned int)arg1;
- (BOOL)isWebGetA8KeyLiteEnableWithParams:(id)arg1;
- (void)mainThread_pushA8KeyLiteQueue:(id)arg1;
- (void)mainThread_checkA8KeyLiteWaitingQueue;
- (BOOL)isUrlInReqQueue:(id)arg1;
- (void)mainThread_requestGet8KeyLiteWithReqParams:(id)arg1;
- (id)prefetchDomainInfoWithLiteParams:(id)arg1;
- (void)handleA8keyLiteTaskWithSuccess:(BOOL)arg1 result:(id)arg2 arrA8KeyLiteParams:(id)arg3;
- (void)handleLiteUrlResult:(id)arg1;
- (id)dicForPrefetchDomainInfo:(id)arg1;
- (void)handlePrefetchDomainInfos:(id)arg1 liteUrlResults:(id)arg2;
- (id)mainThread_filterA8KeyLiteParamsList:(id)arg1;
- (BOOL)isUrlInA8keyLiteWhiteList:(id)arg1;
- (BOOL)canUrlGetA8keyLite:(id)arg1 scene:(unsigned int)arg2;
- (id)mainThread_filterDoDNSParamsListToDomainList:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)initSlotKV;
- (id)tryGetWebFirstScreenOptimazationExtInfoForKeyUrlString:(id)arg1 webPrefetcherId:(id)arg2;
- (BOOL)hasAllowanceAsyncA8KeyForUrlString:(id)arg1 andGetNewRespUrlString:(id *)arg2 andWebPrefetcherId:(id)arg3 andGetPrefetchResult:(id *)arg4;
- (BOOL)hasCacheDnsResultForDomain:(id)arg1;
- (id)authControlDataForUrlString:(id)arg1;
- (id)prefetchJsApiControlBytesForUrl:(id)arg1;
- (void)setAuthControlDataArr:(id)arg1;
- (void)setAuthControlData:(id)arg1 forURL:(id)arg2;
- (void)clearWebControlDataSlotKv;
- (id)domainControlDataForDomain:(id)arg1;
- (void)setDomainControlDataArr:(id)arg1;
- (void)setDomainControlData:(id)arg1 forDomain:(id)arg2;
- (void)setDnsResult:(id)arg1 forDomain:(id)arg2;
- (void)setPrefetchDomainInfoArr:(id)arg1;
- (id)prefetchResInfoForUrlString:(id)arg1;
- (id)prefetchDomainInfoWithUrls:(id)arg1;
- (void)setRedirectInfo:(id)arg1;
- (id)redirectInfoForUrlString:(id)arg1;
- (void)doPrefetchControlDataForMessageWraps:(id)arg1 scene:(unsigned int)arg2;
- (void)doPrefetchControlDataForMessageWraps:(id)arg1 scene:(unsigned int)arg2 fromKara:(BOOL)arg3;
- (void)doPrefetchControlDataForWCDataItems:(id)arg1 scene:(unsigned int)arg2;
- (void)doPrefetchControlDataForWCDataItems:(id)arg1 scene:(unsigned int)arg2 fromKara:(BOOL)arg3;
- (void)doFetchControlDataForUrlParams:(id)arg1;
- (void)clearAllPrefetchData;
- (void)clearAllPagePrefetchCacheData;
- (void)clearAllPreAuthControlData;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(BOOL *)arg7;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(BOOL *)arg7 forceUrl:(id *)arg8;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(BOOL *)arg7 forceUrl:(id *)arg8 config:(id)arg9;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(BOOL *)arg7 forceUrl:(id *)arg8 canKaraHandle:(BOOL)arg9 config:(id)arg10;
- (id)createWebviewCtrlMayApplyFastLoad:(id)arg1 mpFastLoadParam:(id)arg2 scene:(unsigned int)arg3 visibleViewController:(id)arg4 addExtraInfo:(id)arg5 presetUI:(id)arg6 isUsedFastLoad:(BOOL *)arg7 forceUrl:(id *)arg8 canKaraHandle:(BOOL)arg9 useOfflineCache:(BOOL)arg10 config:(id)arg11;
- (id)requestUrlWithUrlString:(id)arg1 webPrefetcherId:(id)arg2;
- (void)async_reportA8keyLiteSupportLinkOpen:(id)arg1 scene:(unsigned int)arg2 canHandleByKara:(BOOL)arg3;
- (id)urlStringWithoutFragmentFromOriginalUrlString:(id)arg1;
- (id)arrA8keyLiteWaitingQueue;
- (void)setArrA8keyLiteWaitingQueue:(id)arg1;
- (id)a8keyLiteTaskReqQueue;
- (void)setA8keyLiteTaskReqQueue:(id)arg1;
- (id)setRequestingDomainString;
- (void)setSetRequestingDomainString:(id)arg1;
- (id)doDNSWorkQueue;
- (void)setDoDNSWorkQueue:(id)arg1;
- (id)webControlDataSlotKv;
- (void)setWebControlDataSlotKv:(id)arg1;
- (id)domainControlDataSlotKv;
- (void)setDomainControlDataSlotKv:(id)arg1;
- (id)domainPreDNSResultSlotKv;
- (void)setDomainPreDNSResultSlotKv:(id)arg1;
- (id)prefetchDomainInfoSlowKv;
- (void)setPrefetchDomainInfoSlowKv:(id)arg1;
- (id)redirectInfoSlotKv;
- (void)setRedirectInfoSlotKv:(id)arg1;
- (id)prefetchIdentifierSlotKv;
- (void)setPrefetchIdentifierSlotKv:(id)arg1;
- (id)webPrefetcherIdSlotKv;
- (void)setWebPrefetcherIdSlotKv:(id)arg1;
- (id)urlParamsFilterInfoSlotKv;
- (void)setUrlParamsFilterInfoSlotKv:(id)arg1;
- (id)prefetchInfoSlotKv;
- (void)setPrefetchInfoSlotKv:(id)arg1;
- (id)resourcePrefetcher;
- (void)setResourcePrefetcher:(id)arg1;
- (id)jsContextManager;
- (void)setJsContextManager:(id)arg1;
- (id)shouldWaitNotifyDic;
- (void)setShouldWaitNotifyDic:(id)arg1;
- (void).cxx_destruct;
@end

