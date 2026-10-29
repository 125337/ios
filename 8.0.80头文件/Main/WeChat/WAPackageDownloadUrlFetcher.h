@interface WAPackageDownloadUrlFetcher : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _arrFetching; // +0x8
    NSMutableArray * _arrWaiting; // +0x10
    NSMutableArray * _arrSeprateCGIInfoData; // +0x18
    WAPackageDownloadPreConnectLogic * _preConnectLogic; // +0x20
    NSMutableSet * _setPreFetching; // +0x28
    NSMutableDictionary * _dicPreFetchResult; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1 predownloadScene:(unsigned int)arg2;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)arg1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)arg1 predownloadScene:(unsigned int)arg2;
- (void)mainThread_getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1 predownloadScene:(unsigned int)arg2;
- (BOOL)checkIsInFetchQueue:(id)arg1;
- (BOOL)checkIsInWaitingQueue:(id)arg1;
- (BOOL)checkIsInQueue:(id)arg1 withInfoData:(id)arg2;
- (void)removeInfoDataTask:(id)arg1;
- (void)checkWaitingQueue;
- (id)fetchNextRequestInfoDatasFromWaitingQueue;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleGetPkgDownloadUrl:(id)arg1;
- (BOOL)isMatchInfoData:(id)arg1 andResponseItem:(id)arg2;
- (void)sendDownloadUrlFetcherFail:(id)arg1;
- (id)genPreFetchTokenForUsername:(id)arg1;
- (void)markPreFetchingForUsername:(id)arg1;
- (void)unmarkPreFetchingForUsername:(id)arg1;
- (void)savePrefetchResult:(id)arg1 forUsername:(id)arg2;
- (void)removePrefetchInfoForUsername:(id)arg1;
- (id)getPrefetchResultForUsername:(id)arg1;
- (BOOL)isUsernameInPreFetchingWithUsername:(id)arg1;
- (void)triggerPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 path:(id)arg2 scene:(unsigned int)arg3;
- (BOOL)checkIfHaveValidPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 appid:(id)arg2 version:(unsigned int)arg3;
- (void)handlePrefetchCDNPkgDownloadUrl:(id)arg1;
- (id)getPrefetchCDNPkgDownloadInfoIfHaveForInfoData:(id)arg1;
- (id)preConnectLogic;
- (void)setPreConnectLogic:(id)arg1;
- (id)setPreFetching;
- (void)setSetPreFetching:(id)arg1;
- (id)dicPreFetchResult;
- (void)setDicPreFetchResult:(id)arg1;
- (void).cxx_destruct;
@end
