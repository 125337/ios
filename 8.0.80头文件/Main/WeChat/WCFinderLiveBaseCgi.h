@interface WCFinderLiveBaseCgi : WCFinderBaseCgi <MMLiveTaskMgrExt>
{
    BOOL _isForbidCancelCGI; // +0x8
    BOOL _isLiveImportant; // +0x9
    unsigned int _cgiRetryCountAfterBindCellular; // +0xc
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    NSString * _liveSessionKey; // +0x18
}
- (void)setRequest:(id)arg1;
- (void)start;
- (void)onCgiDelayToGetResponse;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (BOOL)ignoreError;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)enableBindCellular;
- (BOOL)enableCustomTimeout;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (id)liveTask;
- (id)finderLiveTask;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)liveSessionKey;
- (void)setLiveSessionKey:(id)arg1;
- (BOOL)isForbidCancelCGI;
- (void)setIsForbidCancelCGI:(BOOL)arg1;
- (BOOL)isLiveImportant;
- (void)setIsLiveImportant:(BOOL)arg1;
- (unsigned int)cgiRetryCountAfterBindCellular;
- (void)setCgiRetryCountAfterBindCellular:(unsigned int)arg1;
- (void).cxx_destruct;
@end
