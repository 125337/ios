@interface WCHomepageCgi : WCBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _currentContinueReqCount; // +0x18
    SnsUserPageRequest * _originalRequest; // +0x20
    SnsUserPageResponse * _responseToProcess; // +0x28
    double _startTime; // +0x30
    double _endTime; // +0x38
}
- (id)init;
- (void)continueRequestWithMaxID:(unsigned long long)arg1;
- (void)startRequest:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (id)getMergeResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)exceptionReportThatReceivesNoFeedWithContinueIDWithResponse:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)currentContinueReqCount;
- (void)setCurrentContinueReqCount:(unsigned long long)arg1;
- (id)originalRequest;
- (void)setOriginalRequest:(id)arg1;
- (id)responseToProcess;
- (void)setResponseToProcess:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (void).cxx_destruct;
@end
