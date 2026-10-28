@interface WebviewJSEventHandler_openProfile : WebviewJSEventHandlerBase <OpenProfileBlockViewControllerDelegate>
{
    JSEvent * _curEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onOpenProfileEnd:(int)arg1;
- (void).cxx_destruct;
@end
