@interface WCPayOfflineAckMsgCgi : WCPayBaseTenPayCgi
{
    BOOL _bIsProcessed; // +0x8
    BOOL _bIsPosEnabled; // +0x9
    BOOL _bIsMsgFromPull; // +0xa
    int _payMsgType; // +0xc
    NSString * _ack_key; // +0x10
    NSString * _req_key; // +0x18
    NSString * _transId; // +0x20
    id <WCPayOfflineAckMsgCgiDelegate> _cgiDelegate; // +0x28
}
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)callErrorDelegate;
- (id)ack_key;
- (void)setAck_key:(id)arg1;
- (id)req_key;
- (void)setReq_key:(id)arg1;
- (int)payMsgType;
- (void)setPayMsgType:(int)arg1;
- (id)transId;
- (void)setTransId:(id)arg1;
- (BOOL)bIsProcessed;
- (void)setBIsProcessed:(BOOL)arg1;
- (BOOL)bIsPosEnabled;
- (void)setBIsPosEnabled:(BOOL)arg1;
- (BOOL)bIsMsgFromPull;
- (void)setBIsMsgFromPull:(BOOL)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
