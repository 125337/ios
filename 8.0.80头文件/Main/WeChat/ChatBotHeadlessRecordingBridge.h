@interface ChatBotHeadlessRecordingBridge : NSObject
{
    unsigned long long _pendingHeadlessRecordToken; // +0x8
    CXCallObserver * _callObserver; // +0x10
}
+ (id)sharedBridge;
- (id)init;
- (void)onRequestHeadlessRecordingAsync:(unsigned long long)arg1 isOpen:(BOOL)arg2 uiState:(int)arg3 forbidSendMicStatus:(BOOL)arg4 voipSessionID:(id)arg5 onComplete:(id /* block */)arg6;
- (void)startHeadlessRecordingHardware;
- (void)finishHeadlessRecordRequestWithToken:(unsigned long long)arg1 onComplete:(id /* block */)arg2 state:(int)arg3 errorCode:(int)arg4;
- (void)handleRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (unsigned long long)pendingHeadlessRecordToken;
- (void)setPendingHeadlessRecordToken:(unsigned long long)arg1;
- (id)callObserver;
- (void)setCallObserver:(id)arg1;
- (void).cxx_destruct;
@end
