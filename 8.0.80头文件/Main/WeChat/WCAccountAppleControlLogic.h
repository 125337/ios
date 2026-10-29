@interface WCAccountAppleControlLogic : WCAccountBaseControlLogic <AppleIDBindLogicDelegate, WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic * _manualAuthLogic; // +0x30
    AppleIDBindLogic * _appleIDBindLogic; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (id)getViewController;
- (void)onRequestAuthorizeFromAppleFinished:(BOOL)arg1;
- (void)onAuthorizeAppleIDSuceededWithWrap:(id)arg1;
- (void)onAuthorizeAppleIDFailedWithError:(id)arg1;
- (void)startManualAuthWithWrap:(id)arg1;
- (void)startRegisterWithTicket:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (id)manualAuthLogic;
- (void)setManualAuthLogic:(id)arg1;
- (id)appleIDBindLogic;
- (void)setAppleIDBindLogic:(id)arg1;
- (void).cxx_destruct;
@end
