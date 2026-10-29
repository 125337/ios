@interface WAWebViewPlugin_Recorder : WAWebViewPluginBase <IRecordPermissionCheckExt, IWebviewRecorderManagerExt, IVOIPUILogicMgrExt, MultiTalkMgrExt>
{
    BOOL _isCheckingPermission; // +0x8
    id <IWAWebViewPluginDelegate> _resultDelegate; // +0x10
    unsigned long long _duration; // +0x18
}
- (void)dealloc;
- (void)startRecorderForDuration:(unsigned long long)arg1;
- (void)stopRecorder;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)realStartRecord;
- (void)registerRecordingPrivacy;
- (void)unregisterRecordingPrivacy;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onStartRecord:(long long)arg1;
- (void)onRecordTimeTooShort;
- (void)onFinishedRecord:(id)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onBeginMultiTalk;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (BOOL)isCheckingPermission;
- (void)setIsCheckingPermission:(BOOL)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

