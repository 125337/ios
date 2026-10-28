@interface WCPayPlathbPayMoneyLogic : WCPayControlLogic <WCPayPayMoneyLogicDelegate, WCBaseControlLogicDeleagte>
{
    BOOL _bIsPayMoneySucc; // +0x38
    id <WCPayPlathbPayMoneyLogicDelegate> _delegate; // +0x40
    NSString * _prepayId; // +0x48
    WCPayPayMoneyLogic * _paymoneyLogic; // +0x50
}
- (id)initWithPrepayId:(id)arg1 delegate:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)onPayMoneyLogicDidStop;
- (BOOL)gotoViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)prepayId;
- (void)setPrepayId:(id)arg1;
- (id)paymoneyLogic;
- (void)setPaymoneyLogic:(id)arg1;
- (BOOL)bIsPayMoneySucc;
- (void)setBIsPayMoneySucc:(BOOL)arg1;
- (void).cxx_destruct;
@end
