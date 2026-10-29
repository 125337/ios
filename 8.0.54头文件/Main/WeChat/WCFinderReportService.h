@interface WCFinderReportService : MMUserService <MMServiceProtocol>
{
    WCFinderTimelineFluencyReportManager * _finderReportManager; // +0x8
    WCFinderLoadReporter * _loadReporter; // +0x10
    WCFinderFluencyReportCenter * _fluencyReportCenter; // +0x18
    NSMutableArray * _streamEntranceResourceIdStack; // +0x20
    NSMapTable * _pageUdfInfoMap; // +0x28
    NSMapTable * _pageCGIByPassBufferMap; // +0x30
    NSPointerArray * _clientPageUdfKVQueue; // +0x38
    NSMapTable * _clientKVPageUdfKVMap; // +0x40
    NSString * _latestFeedID; // +0x48
    unsigned long long _latestMediaType; // +0x50
    WCPlayerPlaybackInfo * _latestPlaybackInfo; // +0x58
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)pushTraceIdWithFromScene:(int)arg1 toScene:(int)arg2 entranceType:(unsigned long long)arg3;
- (void)popTraceId:(id)arg1;
- (id)getTraceId;
- (id)getSourceId;
- (void)bindViewController:(id)arg1;
- (void)addCGIByPassBuffer:(id)arg1 toVC:(id)arg2;
- (id)currentCGIByPassBuffers;
- (void)addPageUdfInfoWithViewController:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getCurrentPageUdfInfoDict;
- (id)getPageUdfInfoValueWithViewController:(id)arg1 key:(id)arg2;
- (void)addKVPageUdfInfoWithViewController:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addKVPageUdfInfoWithViewController:(id)arg1 udfKV:(id)arg2;
- (void)bindKVPageUdfInfoWithViewController:(id)arg1;
- (id)getTopKVPageUdfInfoDict;
- (void)configLatestFeedID:(id)arg1 mediaType:(unsigned long long)arg2 playbackInfo:(id)arg3;
- (void)onApplicationWillResignActive;
- (int)getCurScene;
- (id)finderReportManager;
- (void)setFinderReportManager:(id)arg1;
- (id)loadReporter;
- (void)setLoadReporter:(id)arg1;
- (id)fluencyReportCenter;
- (void)setFluencyReportCenter:(id)arg1;
- (id)streamEntranceResourceIdStack;
- (void)setStreamEntranceResourceIdStack:(id)arg1;
- (id)pageUdfInfoMap;
- (void)setPageUdfInfoMap:(id)arg1;
- (id)pageCGIByPassBufferMap;
- (void)setPageCGIByPassBufferMap:(id)arg1;
- (id)clientPageUdfKVQueue;
- (void)setClientPageUdfKVQueue:(id)arg1;
- (id)clientKVPageUdfKVMap;
- (void)setClientKVPageUdfKVMap:(id)arg1;
- (id)latestFeedID;
- (void)setLatestFeedID:(id)arg1;
- (unsigned long long)latestMediaType;
- (void)setLatestMediaType:(unsigned long long)arg1;
- (id)latestPlaybackInfo;
- (void)setLatestPlaybackInfo:(id)arg1;
- (void).cxx_destruct;
@end

