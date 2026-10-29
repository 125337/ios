@interface WCPayRetrySendTransferMessageControlLogic : WCPayControlLogic <WCPayUnionTransferNotifyCgiDelegate>
{
    id <WCPayRetrySendTransferMessageLogicDelegate> _logicDelegate; // +0x38
    WCPayUnionTransferNotifyCgi * _unionNotifyCgi; // +0x40
}
- (void)startLogic;
- (void)ToRetrySendMsg;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)arg1;
- (void)onWCPayUnionTransferNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)delayStopLogic;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)unionNotifyCgi;
- (void)setUnionNotifyCgi:(id)arg1;
- (void).cxx_destruct;
@end

