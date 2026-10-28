@interface MBEventHandler_addContact : MBEventHandlerBaseAsync <WebAddContactDelegate>
- (void)invoke:(id)arg1;
- (void)removeAllAddContactView;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (id)apiName;
- (BOOL)invokeInMainThread;
@end
