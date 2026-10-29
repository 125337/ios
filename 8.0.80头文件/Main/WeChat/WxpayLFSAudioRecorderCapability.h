@interface WxpayLFSAudioRecorderCapability : WxpayHostPlatformCapability <IRecordPermissionCheckExt, LiteAppRecorderDelegate, WCAudioModuleDelegate>
{
    BOOL _frameRecordedEnabled; // +0x8
    BOOL _lastFrameSent; // +0x9
    NSString * _allowedRoot; // +0x10
    NSLock * _lock; // +0x18
    NSMutableArray * _pendingAuthReplies; // +0x20
    LiteAppBaseRecorder * _recorder; // +0x28
    NSString * _activeSessionId; // +0x30
    NSString * _activeFilePath; // +0x38
    NSString * _activeModuleIdentifier; // +0x40
    id /* block */ _activeStreamReply; // +0x48
    unsigned long long _audioThreshold; // +0x50
    unsigned long long _frameSeq; // +0x58
}
- (id)initWithEngineRoot:(id)arg1;
- (void)dealloc;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (void)handleAuthorizeWithReply:(id /* block */)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)validateOutputFile:(id)arg1;
- (void)handleStart:(id)arg1 reply:(id /* block */)arg2;
- (id)handlePause:(id)arg1;
- (id)handleResume:(id)arg1;
- (id)handleStop:(id)arg1;
- (id)handleRelease:(id)arg1;
- (void)stopAndCleanupLocked;
- (void)deactivateAudioModuleOnMain;
- (void)onRecorderDidRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(id)arg2 error:(id)arg3;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)allowedRoot;
- (void)setAllowedRoot:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)pendingAuthReplies;
- (void)setPendingAuthReplies:(id)arg1;
- (id)recorder;
- (void)setRecorder:(id)arg1;
- (id)activeSessionId;
- (void)setActiveSessionId:(id)arg1;
- (id)activeFilePath;
- (void)setActiveFilePath:(id)arg1;
- (id)activeModuleIdentifier;
- (void)setActiveModuleIdentifier:(id)arg1;
- (id /* block */)activeStreamReply;
- (void)setActiveStreamReply:(id /* block */)arg1;
- (unsigned long long)audioThreshold;
- (void)setAudioThreshold:(unsigned long long)arg1;
- (BOOL)frameRecordedEnabled;
- (void)setFrameRecordedEnabled:(BOOL)arg1;
- (BOOL)lastFrameSent;
- (void)setLastFrameSent:(BOOL)arg1;
- (unsigned long long)frameSeq;
- (void)setFrameSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
