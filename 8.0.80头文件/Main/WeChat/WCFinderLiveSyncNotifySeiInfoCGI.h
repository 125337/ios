@interface WCFinderLiveSyncNotifySeiInfoCGI : WCFinderLiveBaseCgi
{
    NSData * _liveCookies; // +0x8
    FinderNotifySeiInfo * _notifySeiInfo; // +0x10
    id /* block */ _completion; // +0x18
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 notifySeiInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)notifySeiInfo;
- (void)setNotifySeiInfo:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
