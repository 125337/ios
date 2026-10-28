@interface WCFinderLiveAttendLotteryCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithTaskId:(id)arg1 attendLotteryType:(unsigned int)arg2 objectId:(unsigned long long)arg3 liveCookies:(id)arg4 successCompletion:(id /* block */)arg5 failedCompletion:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
