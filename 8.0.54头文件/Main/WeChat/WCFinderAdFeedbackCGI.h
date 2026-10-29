@interface WCFinderAdFeedbackCGI : WCFinderBaseCgi
{
    int _feedbackType; // +0x8
    NSMutableArray * _reasonArray; // +0x10
    WCFinderAdFeedbackParams * _params; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFeedbackType:(int)arg1 reasonArray:(id)arg2 params:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (BOOL)needADDeviceInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)feedbackType;
- (void)setFeedbackType:(int)arg1;
- (id)reasonArray;
- (void)setReasonArray:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

