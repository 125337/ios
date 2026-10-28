@interface WCFinderLiveReserveMilestoneLotteryCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithFinderTaskId:(id)arg1 noticeId:(id)arg2 liveCookies:(id)arg3 audienceFinderUsername:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequestWithId:(id)arg1 liveCookies:(id)arg2 audienceFinderUsername:(id)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
