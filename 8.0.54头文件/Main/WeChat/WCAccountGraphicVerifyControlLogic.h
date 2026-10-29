@interface WCAccountGraphicVerifyControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyViewControllerDelegate, PBMessageObserverDelegate>
{
    BOOL m_bFromManualAuth; // +0x30
    id <WCAccountGraphicVerifyControlLogicDelegate> m_delegate; // +0x38
}
+ (BOOL)isGraphicVerifyError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)parseImg;
- (void)stopLogic;
- (void)startLogicFromManualAuth:(BOOL)arg1;
- (BOOL)startAuth:(id)arg1;
- (void)onGraphicVerifyWithVerifyCode:(id)arg1;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

