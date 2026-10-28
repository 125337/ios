@interface WAJSEventHandler_openAddress : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IWCAddressControlLogic>
{
    BOOL _isForbidDarkMode; // +0x8
    BOOL _isDirectOpenEditor; // +0x9
    BOOL _isFromGift; // +0xa
}
- (void)handleJSEvent:(id)arg1;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)onAddressEditEnd:(id)arg1;
- (void)startEditAddress;
- (BOOL)isForbidDarkMode;
- (void)setIsForbidDarkMode:(BOOL)arg1;
- (BOOL)isDirectOpenEditor;
- (void)setIsDirectOpenEditor:(BOOL)arg1;
- (BOOL)isFromGift;
- (void)setIsFromGift:(BOOL)arg1;
@end
