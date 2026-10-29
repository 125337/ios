@interface WebviewJSEventHandler_openFinderCreateAcctView : WebviewJSEventHandlerBase <WCFinderCreateCoordinatorDelegate>
{
    WCFinderCreateCoordinator * _createCoordinator; // +0x8
    JSEvent * _event; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)returnResult:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end
