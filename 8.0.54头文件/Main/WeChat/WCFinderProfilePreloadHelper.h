@interface WCFinderProfilePreloadHelper : NSObject
{
    BOOL _useNewCGI; // +0x8
    WCFinderDataService * _dataService; // +0x10
    WCFinderProfilePreloadTask * _fetchingTask; // +0x18
}
- (id)initWithDataService:(id)arg1;
- (BOOL)contentVMShouldPreload:(id)arg1 playPosition:(double)arg2;
- (unsigned long long)skipPreloadInterval;
- (BOOL)couldPreloadUsername:(id)arg1;
- (void)preload:(id)arg1 filledPreloadInfo:(id)arg2;
- (void)_wakePreload;
- (void)_startPrload;
- (void)_finishPreloadCGI:(id)arg1;
- (void)preloadHeaderCGI:(id)arg1;
- (void)preloadHomeCGI:(id)arg1;
- (void)preloadUserPageCGI:(id)arg1;
- (id)dataService;
- (void)setDataService:(id)arg1;
- (id)fetchingTask;
- (void)setFetchingTask:(id)arg1;
- (BOOL)useNewCGI;
- (void)setUseNewCGI:(BOOL)arg1;
- (void).cxx_destruct;
@end

