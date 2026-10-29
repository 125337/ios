@interface WCFinderDramaPermeateStreamDataProvider : NSObject
{
    BOOL _hasMore; // +0x8
    BOOL _isFetching; // +0x9
    id <WCFinderDramaPermeateStreamDataProviderDelegate> _delegate; // +0x10
    NSString * _nextPageBuffer; // +0x18
    unsigned long long _tabSessionId; // +0x20
    unsigned long long _dramaTabEnterType; // +0x28
    unsigned long long _requestGeneration; // +0x30
}
+ (id)contentVMsFromObjects:(id)arg1 tabSessionId:(unsigned long long)arg2 dramaTabEnterType:(unsigned long long)arg3;
+ (void)updateDramaReportInfoForDataItems:(id)arg1 tabSessionId:(unsigned long long)arg2 dramaTabEnterType:(unsigned long long)arg3;
+ (void)prefetchFirstScreenToCacheIfNeeded;
+ (void)prefetchFirstScreenToCacheIfNeededWithCompletion:(id /* block */)arg1;
+ (BOOL)isFirstScreenRequesting;
+ (BOOL)hasFreshFirstScreenCache;
+ (unsigned long long)firstScreenCacheTimestamp;
+ (BOOL)hasValidFirstScreenCacheWithFirstObjectTid:(id)arg1;
+ (unsigned long long)firstScreenCacheObjectCount;
+ (void)prefetchGuideFirstScreenWithBubbleBuffer:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)isUsableGuideFirstScreenResponse:(id)arg1;
+ (void)clearFirstScreenCache;
+ (BOOL)hasFreshFirstScreenCacheFromCurrentProcess;
+ (void)clearCurrentProcessFirstScreenCacheFlag;
+ (BOOL)_requestFirstScreenWithCompletion:(id /* block */)arg1 markMemoryCache:(BOOL)arg2;
+ (BOOL)_hasMoreWithResponse:(id)arg1 previousNextPageBuffer:(id)arg2;
+ (void)_writeFirstScreenCacheWithResponse:(id)arg1 generation:(unsigned long long)arg2 markMemoryCache:(BOOL)arg3;
+ (void)_finishFirstScreenRequestWithResponse:(id)arg1 errorType:(int)arg2 errorMsg:(id)arg3;
- (id)init;
- (void)fetchFirstScreen;
- (void)loadMore;
- (void)invalidateCurrentRequest;
- (void)restoreCursorWithNextPageBuffer:(id)arg1 tabSessionId:(unsigned long long)arg2 hasMore:(BOOL)arg3 dramaTabEnterType:(unsigned long long)arg4;
- (void)_fetchWithIsFirst:(BOOL)arg1;
- (void)_deliverObjects:(id)arg1 isFirst:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)nextPageBuffer;
- (void)setNextPageBuffer:(id)arg1;
- (unsigned long long)tabSessionId;
- (void)setTabSessionId:(unsigned long long)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (unsigned long long)dramaTabEnterType;
- (void)setDramaTabEnterType:(unsigned long long)arg1;
- (unsigned long long)requestGeneration;
- (void)setRequestGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
