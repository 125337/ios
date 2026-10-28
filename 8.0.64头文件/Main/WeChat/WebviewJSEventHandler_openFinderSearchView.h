@interface WebviewJSEventHandler_openFinderSearchView : WebviewJSEventHandlerBase
{
    JSEvent * _event; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)returnResult:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end
