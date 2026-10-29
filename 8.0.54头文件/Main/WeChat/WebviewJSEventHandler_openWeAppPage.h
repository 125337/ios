@interface WebviewJSEventHandler_openWeAppPage : WebviewJSEventHandlerBase
{
    WAContactGetter * _contactGetter; // +0x8
    BOOL _useEmbedMode; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)useEmbedMode;
- (void)setUseEmbedMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

