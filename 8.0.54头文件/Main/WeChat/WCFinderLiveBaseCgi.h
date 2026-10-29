@interface WCFinderLiveBaseCgi : WCFinderBaseCgi
{
    BOOL _isForbidCancelCGI; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    NSString * _liveSessionKey; // +0x18
}
- (void)setRequest:(id)arg1;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (id)liveTask;
- (id)finderLiveTask;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)liveSessionKey;
- (void)setLiveSessionKey:(id)arg1;
- (BOOL)isForbidCancelCGI;
- (void)setIsForbidCancelCGI:(BOOL)arg1;
- (void).cxx_destruct;
@end

