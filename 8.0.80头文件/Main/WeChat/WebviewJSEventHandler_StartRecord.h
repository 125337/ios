@interface WebviewJSEventHandler_StartRecord : WebviewJSEventHandlerBase <IRecordPermissionCheckExt, IWebviewRecorderManagerExt>
{
    BOOL _isCheckingPermission; // +0x8
    unsigned long long _duration; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)realStartRecord;
- (void)updateWebviewTitle;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onStartRecord:(long long)arg1;
- (void)onFinishedRecord:(id)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
- (BOOL)isCheckingPermission;
- (void)setIsCheckingPermission:(BOOL)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
@end
