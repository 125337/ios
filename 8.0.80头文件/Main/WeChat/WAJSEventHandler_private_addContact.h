@interface WAJSEventHandler_private_addContact : WAJSEventHandler_BaseEvent <WebAddContactDelegate>
{
    MMWebAddContactView * _addContactView; // +0x8
    MBADConversionContext * _mbAD_ctx; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)removeAllAddContactView;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (void).cxx_destruct;
@end
