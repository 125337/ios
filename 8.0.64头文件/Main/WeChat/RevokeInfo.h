@interface RevokeInfo : NSObject
{
    unsigned int _counter; // +0x8
    long long _type; // +0x10
    long long _processState; // +0x18
    NSString * _nsChatName; // +0x20
    CMessageWrap * _msgWrap; // +0x28
    NSString * _revokeTicket; // +0x30
    unsigned long long _initTime; // +0x38
    unsigned long long _cost; // +0x40
    long long _result; // +0x48
    RevokeMsgRequest * _request; // +0x50
}
+ (id)getMsgClientID:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 ChatName:(id)arg2 Counter:(unsigned int)arg3 revokeTicket:(id)arg4;
- (void)setProcessState:(long long)arg1;
- (id)generateRevokeRequest;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)processState;
- (unsigned int)counter;
- (void)setCounter:(unsigned int)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)revokeTicket;
- (void)setRevokeTicket:(id)arg1;
- (unsigned long long)initTime;
- (void)setInitTime:(unsigned long long)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end
