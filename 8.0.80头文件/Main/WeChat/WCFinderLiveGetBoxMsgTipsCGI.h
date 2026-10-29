@interface WCFinderLiveGetBoxMsgTipsCGI : WCFinderLiveBaseBoxCgi
{
    NSData * _liveCookies; // +0x8
    unsigned long long _objectId; // +0x10
    unsigned long long _liveId; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _boxList; // +0x28
    NSString * _finderUsername; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 boxList:(id)arg3 objectId:(unsigned long long)arg4 liveId:(unsigned long long)arg5 finderUsername:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)configBoxIdList;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)boxList;
- (void)setBoxList:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
