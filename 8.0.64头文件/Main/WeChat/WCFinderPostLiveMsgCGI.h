@interface WCFinderPostLiveMsgCGI : WCFinderLiveBaseCgi
{
    int _msgType; // +0x8
    unsigned int _isFloatMsg; // +0xc
    unsigned int _pbFloatMsgType; // +0x10
    NSString * _msgContent; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    NSData * _liveCookies; // +0x30
    NSString * _clientMsgId; // +0x38
    NSString * _nickName; // +0x40
    NSString * _floatMsgProductId; // +0x48
}
- (id)initWithFinderTaskId:(id)arg1 msgContent:(id)arg2 liveCookies:(id)arg3 clientMsgId:(id)arg4 msgType:(unsigned int)arg5 selfNickName:(id)arg6 extraInfo:(id)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (int)msgType;
- (void)setMsgType:(int)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned int)isFloatMsg;
- (void)setIsFloatMsg:(unsigned int)arg1;
- (unsigned int)pbFloatMsgType;
- (void)setPbFloatMsgType:(unsigned int)arg1;
- (id)floatMsgProductId;
- (void)setFloatMsgProductId:(id)arg1;
- (void).cxx_destruct;
@end
