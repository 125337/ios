@interface WCFinderLiveGetFriendBoxLiveMsgCGI : WCFinderLiveBaseBoxCgi
{
    NSData * _liveCookies; // +0x8
    NSData * _lastBuffer; // +0x10
    FinderLiveBoxId * _boxId; // +0x18
    unsigned long long _objectId; // +0x20
    unsigned long long _liveId; // +0x28
    NSString * _finderUsername; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 lastBuffer:(id)arg3 boxId:(id)arg4 objectId:(unsigned long long)arg5 liveId:(unsigned long long)arg6 finderUsername:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
