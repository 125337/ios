@interface MBEventHandler_handleClipboard : MBEventHandlerBaseAsync
- (void)invoke:(id)arg1;
- (id)apiName;
- (BOOL)invokeInMainThread;
- (id)getClipboardData:(id)arg1;
- (void)setClipboardData:(id)arg1;
- (id)clipboardHasStrings;
@end
