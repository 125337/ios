@interface WCFinderLivePostPersonalMsgCGI : WCFinderLiveBaseCgi
{
    unsigned int _msgType; // +0x8
    NSString * _localClientMsgId; // +0x10
    FinderLiveAppMsg * _appMsg; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _finderUserName; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failBlock; // +0x48
}
+ (BOOL)isErrorTypeNotNeedRetry:(int)arg1;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 sessionId:(id)arg4 liveCookies:(id)arg5 fromUser:(id)arg6 toUser:(id)arg7 content:(id)arg8 clientMsgId:(id)arg9 successBlock:(id /* block */)arg10 failBlock:(id /* block */)arg11;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 sessionId:(id)arg3 liveCookies:(id)arg4 clientMsgId:(id)arg5 uploadAppMsg:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (id)appMsg;
- (void)setAppMsg:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
