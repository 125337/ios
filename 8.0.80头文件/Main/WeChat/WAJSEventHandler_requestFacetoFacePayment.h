@interface WAJSEventHandler_requestFacetoFacePayment : WAJSEventHandler_BaseEvent <WCPayF2FMiniProgramConfirmRcvrCgiDelegate, WCPayF2FReceiveModalViewDelegate, WCBaseControlMgrExt>
{
    WCPayF2FMiniProgramConfirmRcvrCgi * _confirmRcvrCgi; // +0x8
    WCPayTransferMoneyControlLogic * _transferMoneyControlLogic; // +0x10
    UIButton * _bigBlockBtn; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)blockAction:(id)arg1;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiResponseOK:(id)arg1;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onConfirmRcvrCgiFail;
- (id)kvLogStringWithActionType:(unsigned int)arg1;
- (void)onWCPayF2FReceiveModalViewCancel;
- (void)onWCPayF2FReceiveModalViewClickConfirmBtn:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)dealloc;
- (id)confirmRcvrCgi;
- (void)setConfirmRcvrCgi:(id)arg1;
- (id)transferMoneyControlLogic;
- (void)setTransferMoneyControlLogic:(id)arg1;
- (id)bigBlockBtn;
- (void)setBigBlockBtn:(id)arg1;
- (void).cxx_destruct;
@end
