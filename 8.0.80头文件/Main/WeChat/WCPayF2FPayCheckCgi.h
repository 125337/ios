@interface WCPayF2FPayCheckCgi : WCPayBaseCgi
{
    unsigned int _amount; // +0x8
    NSString * _f2fId; // +0x10
    NSString * _transId; // +0x18
    NSString * _extendStr; // +0x20
    NSString * _receiverOpenId; // +0x28
    id <WCPayF2FPayCheckCgiDelegate> _cgiDelegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)f2fId;
- (void)setF2fId:(id)arg1;
- (id)transId;
- (void)setTransId:(id)arg1;
- (id)extendStr;
- (void)setExtendStr:(id)arg1;
- (id)receiverOpenId;
- (void)setReceiverOpenId:(id)arg1;
- (unsigned int)amount;
- (void)setAmount:(unsigned int)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
