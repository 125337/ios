@interface WAJSEventHandler_addCard : WAJSEventHandler_BaseEvent
{
    WCCardAddHelper * _addHelper; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)getViewController;
- (void)onAddSuccess:(id)arg1;
- (void)onAddFail:(id)arg1;
- (void)onAddCancel;
- (void).cxx_destruct;
@end
