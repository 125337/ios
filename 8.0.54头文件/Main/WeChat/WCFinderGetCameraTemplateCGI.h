@interface WCFinderGetCameraTemplateCGI : WCFinderBaseCgi
{
    BOOL _isPrefetchReq; // +0x8
    id /* block */ _successfulBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _preFetchType; // +0x28
    NSString * _fromTempletId; // +0x30
    unsigned long long _eventId; // +0x38
    NSString * _musicId; // +0x40
    unsigned long long _tabId; // +0x48
    NSString * _pageBufferUniqueId; // +0x50
    unsigned long long _enterScene; // +0x58
}
+ (int)enterTypeWithPreFetchType:(unsigned long long)arg1;
+ (id)getCachedCameraVideoTemplateList;
+ (id)mmkvCachedKey;
+ (id)cachedHashKeyWithScene:(unsigned long long)arg1 fromTempalteId:(id)arg2 finderEventId:(unsigned long long)arg3 tabId:(unsigned long long)arg4 musicId:(id)arg5 pageBufferUniqueId:(id)arg6 enterScene:(unsigned long long)arg7;
- (id)initWithPageBuf:(id)arg1 scene:(unsigned long long)arg2 preFetchType:(unsigned long long)arg3 finderUserName:(id)arg4 optionalParams:(id)arg5 successfulBlock:(id /* block */)arg6 failedBlock:(id /* block */)arg7;
- (BOOL)fetchDebugTemplate;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)saveCachedTime:(unsigned long long)arg1;
- (unsigned long long)getCachedTime;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)sha1HashForData:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (BOOL)isPrefetchReq;
- (void)setIsPrefetchReq:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)preFetchType;
- (void)setPreFetchType:(unsigned long long)arg1;
- (id)fromTempletId;
- (void)setFromTempletId:(id)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (unsigned long long)tabId;
- (void)setTabId:(unsigned long long)arg1;
- (id)pageBufferUniqueId;
- (void)setPageBufferUniqueId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

