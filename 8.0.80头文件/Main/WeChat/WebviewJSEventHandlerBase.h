@interface WebviewJSEventHandlerBase : MMObject <WebviewJSEventHandler>
{
    id <WebviewJSEventHandlerBaseDelegate> m_delegate; // +0x8
    JSEvent * _currentEvent; // +0x10
    long long _vcScene; // +0x18
}
- (void)setIsFromJsCore:(BOOL)arg1;
- (BOOL)isFromJsCore;
- (id)gameGetAppIdFromdict:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)webviewController;
- (id)wxBaseWebViewController;
- (id)mmWebViewController;
- (void)dealloc;
- (long long)vcScene;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)currentEvent;
- (void)setCurrentEvent:(id)arg1;
- (void)setVcScene:(long long)arg1;
- (void).cxx_destruct;
@end
