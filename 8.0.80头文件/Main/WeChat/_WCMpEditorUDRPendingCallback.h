@interface _WCMpEditorUDRPendingCallback : NSObject
{
    id /* block */ _callback; // +0x8
    NSTimer * _timeoutTimer; // +0x10
}
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (void).cxx_destruct;
@end
