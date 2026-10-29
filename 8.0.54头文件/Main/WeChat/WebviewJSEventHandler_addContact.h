@interface WebviewJSEventHandler_addContact : WebviewJSEventHandlerBase <WebAddContactDelegate>
{
    MMWebAddContactView * m_jsAddContactView; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (void)dealloc;
- (void).cxx_destruct;
@end

