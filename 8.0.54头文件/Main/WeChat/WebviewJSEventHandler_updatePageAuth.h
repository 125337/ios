@interface WebviewJSEventHandler_updatePageAuth : WebviewJSEventHandlerBase
{
    BOOL _isUpdating; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endWithError:(id)arg1 event:(id)arg2;
- (void)endWithSuccessResult:(id)arg1 event:(id)arg2;
- (void)endWithResult:(id)arg1 event:(id)arg2;
- (BOOL)isUpdating;
- (void)setIsUpdating:(BOOL)arg1;
@end

