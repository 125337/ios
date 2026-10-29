@interface WCPayJsOpenResetTransferDelayViewLogic : WCPayControlLogic <WCPayGetTransferWordingCgiDelegate>
{
    unsigned long long _fromScene; // +0x38
    WCPayGetTransferWordingCgi * _wordingCgi; // +0x40
    GetTransferWordingResponse * _wordingResponse; // +0x48
}
- (id)initWithFromScene:(unsigned long long)arg1;
- (void)startLogic;
- (void)onDelayTransferDurationViewControllerBack;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didFailWithError:(id)arg2;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)wordingCgi;
- (void)setWordingCgi:(id)arg1;
- (id)wordingResponse;
- (void)setWordingResponse:(id)arg1;
- (void).cxx_destruct;
@end

