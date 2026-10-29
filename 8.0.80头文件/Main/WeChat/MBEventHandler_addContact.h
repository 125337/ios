@interface MBEventHandler_addContact : MBEventHandlerBaseAsync <WebAddContactDelegate>
{
    MBADConversionContext * _mbAD_ctx; // +0x8
}
- (void)invoke:(id)arg1;
- (void)removeAllAddContactView;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (id)apiName;
- (BOOL)invokeInMainThread;
- (void).cxx_destruct;
@end
