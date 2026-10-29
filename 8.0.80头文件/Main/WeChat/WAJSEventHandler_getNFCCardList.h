@interface WAJSEventHandler_getNFCCardList : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onFailReturn;
- (id)passKitFacade;
- (void)showErrorAlertView:(id)arg1;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
