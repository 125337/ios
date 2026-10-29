@interface MMFinderLiveGetMusicTabListCGI : WCFinderLiveBaseCgi
{
    unsigned int _tabType; // +0x8
    id /* block */ _success; // +0x10
    id /* block */ _fail; // +0x18
    NSData * _lastBuffer; // +0x20
    NSData * _liveCookies; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 lastBuffer:(id)arg2 liveCookies:(id)arg3 tabType:(unsigned int)arg4 success:(id /* block */)arg5 fail:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)fail;
- (void)setFail:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

