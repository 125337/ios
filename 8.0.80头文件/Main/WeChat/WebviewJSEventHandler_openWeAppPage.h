@interface WebviewJSEventHandler_openWeAppPage : WebviewJSEventHandlerBase
{
    WAContactGetter * _contactGetter; // +0x8
    BOOL _useEmbedMode; // +0x10
    NSString * _halfScreenStyle; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)doOpenApp:(id)arg1 taskExtInfo:(id)arg2 event:(id)arg3;
- (void)configureOpenParameterBeforeOpen:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (BOOL)useEmbedMode;
- (void)setUseEmbedMode:(BOOL)arg1;
- (id)halfScreenStyle;
- (void)setHalfScreenStyle:(id)arg1;
- (void).cxx_destruct;
@end
