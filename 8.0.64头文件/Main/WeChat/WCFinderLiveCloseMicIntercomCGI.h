@interface WCFinderLiveCloseMicIntercomCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    WCFinderContact * _toFinderContact; // +0x10
    NSString * _sdkUserId; // +0x18
    NSString * _sessionId; // +0x20
    long long _closeScene; // +0x28
    NSData * _liveCookies; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 sdkUserId:(id)arg4 sessionId:(id)arg5 closeScene:(long long)arg6 liveCookies:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)closeScene;
- (void)setCloseScene:(long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
