@interface MegaVideoPageMonitorHelper : NSObject
{
    BOOL _hasInit; // +0x8
    BOOL _hasEnter; // +0x9
    id <MegaVideoObjcPageMonitor> _pageMonitor; // +0x10
}
+ (id)CgiMainFeedList;
+ (id)CgiRelatedList;
+ (id)ViewIdMainFeed;
+ (id)ViewIdRelatedFeed;
+ (id)ViewIdPlayer;
- (id)init;
- (void)initMonitorWithSessionKey:(id)arg1 startTime:(long long)arg2 pageId:(long long)arg3 pageType:(long long)arg4 enterType:(long long)arg5;
- (void)didChangePageState:(long long)arg1;
- (void)onExit;
- (void)onResume;
- (void)onPause;
- (void)onAction:(long long)arg1;
- (void)onViewExposeWithViewId:(id)arg1 index:(long long)arg2;
- (void)onViewClickWithViewId:(id)arg1;
- (void)onViewFocusWithViewId:(id)arg1;
- (void)onViewAutoPlayWithViewId:(id)arg1;
- (void)useCacheWithCgiName:(id)arg1;
- (void)onCgiRequestWithCgiName:(id)arg1 requestType:(long long)arg2;
- (void)onCgiBackWithCgiName:(id)arg1 success:(BOOL)arg2 cgiTimeCost:(long long)arg3 requestType:(long long)arg4;
- (id)pageMonitor;
- (BOOL)hasInit;
- (BOOL)hasEnter;
- (void).cxx_destruct;
@end

