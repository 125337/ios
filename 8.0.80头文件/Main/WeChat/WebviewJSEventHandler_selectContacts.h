@interface WebviewJSEventHandler_selectContacts : WebviewJSEventHandlerBase <SessionSelectControllerDelegate>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (id)getContactsFromSelectedUserNames:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
