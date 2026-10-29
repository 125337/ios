@interface GameWebVideoCacheService : MMUserService <ICdnComMgrExt, GameURLSessionWrapperDelegate, MMServiceProtocol>
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL _isPreloading; // +0x10
    BOOL _enablePartHit; // +0x11
    GameCenterCommonDb * _gameCenterCommonDb; // +0x18
    WCTTable * _videoCacheTable; // +0x20
    SafeMutableDictionary * _curWebPreloadMediaDic; // +0x28
    GameURLSessionWrapper * _urlSessionWrapper; // +0x30
    WKHTTPCookieStore * _curWkCookieStore; // +0x38
    NSMutableDictionary * _requestModelDict; // +0x40
}
+ (id)getNewUrlWithUrl:(id)arg1 appendGameCacheIdentify:(id)arg2;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (BOOL)isGameWebVideoCacheEnable;
- (BOOL)isVideoLoaderEnable;
- (id)mediaWrapFromRequest:(id)arg1;
- (BOOL)loadVideoDataIfHasCacheByRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (BOOL)loadVideoCacheByRequest:(id)arg1 videoCacheIdentify:(id)arg2 fromPath:(id)arg3 withCallback:(id /* block */)arg4;
- (BOOL)loadVideoDataIfInnerFetchWithRequest:(id)arg1 withURLSchemeTask:(id)arg2 cookieStore:(id)arg3;
- (void)stopLoadVideoWithURLSchemeTask:(id)arg1;
- (BOOL)recordVideoResponseCacheIfNeed:(id)arg1 withOriginRequest:(id)arg2;
- (void)checkIfHaveWaitingPreloadTask;
- (BOOL)hasResourcePreloadedByUrl:(id)arg1;
- (void)cancelPreloadSchedule:(long long)arg1;
- (void)schedulePreloadVideoResource:(id)arg1 withMaxDelaySeconds:(long long)arg2;
- (id)getWaitingPreloadResourceDateKey:(id)arg1;
- (id)getResourcePreloadInfoFailedCountKey:(id)arg1;
- (void)getResourcePreloadInfoWithUrl:(id)arg1;
- (void)getResourcePreloadInfoFailedWithUrl:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)cleanPreloadInfoInMappedKV;
- (void)doPreloadScheduleVideoWithInfoResponse:(id)arg1 andResourceUrl:(id)arg2;
- (void)httpTestRangePreRequestWithVideoUrl:(id)arg1 andIdentify:(id)arg2;
- (id)currentResourcePreloadVideoIdentify;
- (_NSRange)getRangeFromString:(id)arg1;
- (void)removeLocalInfoForVideoMediaWrap:(id)arg1;
- (void)onWebPreloadVideoWithMediaWraps:(id)arg1;
- (void)cleanTimeoutAndOverLimitVideoCache;
- (void)cleanTimeoutGameVideoCache;
- (void)didExitGameCenter;
- (void)removePreloadVideoFromQueueWithMediaWrap:(id)arg1;
- (id)getMediaWrapFromVideoCacheInfo:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)handleCdnDownloadSuccess:(id)arg1;
- (void)handleCdnDownloadFailed:(id)arg1;
- (void)OnCdnVideoPreloadCompleted:(id)arg1;
- (void)urlSessionWrapperWithTask:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3;
- (void)urlSessionWrapperWithTask:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)urlSessionWrapperWithTask:(id)arg1 didCompleteWithError:(id)arg2;
- (id)requestKeyFromSchemeTask:(id)arg1;
- (id)requestModelFromSchemeTask:(id)arg1;
- (void)debugTestToGetResourcePreloadInfoWithUrl:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)webViewCookieStore;
- (BOOL)isPreloading;
- (void)setIsPreloading:(BOOL)arg1;
- (BOOL)enablePartHit;
- (void)setEnablePartHit:(BOOL)arg1;
- (id)gameCenterCommonDb;
- (void)setGameCenterCommonDb:(id)arg1;
- (id)videoCacheTable;
- (void)setVideoCacheTable:(id)arg1;
- (id)curWebPreloadMediaDic;
- (void)setCurWebPreloadMediaDic:(id)arg1;
- (id)urlSessionWrapper;
- (void)setUrlSessionWrapper:(id)arg1;
- (id)curWkCookieStore;
- (void)setCurWkCookieStore:(id)arg1;
- (id)requestModelDict;
- (void)setRequestModelDict:(id)arg1;
- (void).cxx_destruct;
@end

