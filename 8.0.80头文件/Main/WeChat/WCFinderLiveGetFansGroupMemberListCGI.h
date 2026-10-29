@interface WCFinderLiveGetFansGroupMemberListCGI : WCFinderLiveBaseCgi
{
    int _memberType; // +0x8
    int _sortType; // +0xc
    NSData * _liveCookies; // +0x10
    NSData * _lastBuffer; // +0x18
    long long _liveScene; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 lastBuffer:(id)arg2 liveCookies:(id)arg3 liveScene:(long long)arg4 filterType:(unsigned long long)arg5 sortType:(unsigned long long)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)convertFansGroupMemberList:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (int)memberType;
- (void)setMemberType:(int)arg1;
- (int)sortType;
- (void)setSortType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
