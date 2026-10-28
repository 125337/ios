@interface RemoteControlCheck : MMRootService <WCAudioSessionExt, MMServiceProtocol>
{
    BOOL mIsCondRecordCheck; // +0x8
    BOOL mIsForceRecordCheck; // +0x9
    BOOL mIsRecordCheckEnabled; // +0xa
    BOOL mIsRecordMayStart; // +0xb
    BOOL mIsPlayCheckEnabled; // +0xc
    BOOL mIsReceiveRemoteEvents; // +0xd
    BOOL _isTingChecking; // +0xe
}
- (BOOL)CanRecord;
- (void)plugin_on;
- (void)plugin_off;
- (void)realBeginReceiveRemoteControlEvent;
- (void)beginReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)realEndReceiveRemoteControlEvent;
- (void)endReceiveRemoteControlEvent:(unsigned int)arg1;
- (void)registerNotify;
- (void)unregisterNotify;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOverride;
- (BOOL)IsOpenRemoteControl;
- (BOOL)IsSoundPlaying;
- (void)dealloc;
- (void)startRecordCheckIfOpenRC;
- (void)stopRecordCheckIfOpenRC;
- (void)startRecordCheck;
- (void)stopRecordCheck;
- (BOOL)isRecordChecking;
- (void)startPlayCheck;
- (void)stopPlayCheck;
- (BOOL)isPlayChecking;
- (void)startTingCheck;
- (void)stopTingCheck;
- (void)HandleRemoteControlEvent:(id)arg1;
- (BOOL)isTingChecking;
- (void)setIsTingChecking:(BOOL)arg1;
@end
