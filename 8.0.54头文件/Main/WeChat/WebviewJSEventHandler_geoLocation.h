@interface WebviewJSEventHandler_geoLocation : WebviewJSEventHandlerBase <LocationRetrieveDelegate, IWebviewAskAuthorizationLogicExt>
{
    long long m_geoLocationType; // +0x8
    LocationRetriever * _locationRetriever; // +0x10
    JSEvent * _jsEvent; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)startRetrieverAddress;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void).cxx_destruct;
@end

