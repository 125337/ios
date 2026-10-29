@interface VoIPCallCaptureReporter : MMUserService <SystemVolumeExt, MMScreenShotExt, MMServiceProtocol>
{
    BOOL _isCallActive; // +0x8
    BOOL _ownsSystemVolumeCheck; // +0x9
    unsigned long long _recordStartTimestampMs; // +0x10
    VoIPCallCaptureSnapshot * _snapshot; // +0x18
    VoIPCallCaptureSnapshot * _callLifecycleSnapshot; // +0x20
}
+ (id)p_screenshotSceneParams;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)onCallActiveBegin;
- (void)onCallActiveEnd;
- (void)onSystemVolumeChangeFrom:(float)arg1 to:(float)arg2 reason:(int)arg3;
- (void)onMMScreenShotDidStartWithReporter:(id)arg1;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (id)p_currentScreenshotReportParams;
- (void)p_onScreenCapturedDidChange:(id)arg1;
- (void)p_syncScreenCapturedState;
- (void)p_takeRecordSnapshotWithCallState:(long long)arg1;
- (void)p_reportScreenshotEnd;
- (void)p_reportRecordEndWithDurationMs:(unsigned long long)arg1;
- (id)p_captureSnapshot;
- (long long)p_currentMultiTalkCallType;
- (long long)p_currentUserCameraState;
- (id)p_currentOtherCameraStateLst;
- (id)p_multiTalkOtherCameraStateLst;
- (long long)p_currentDisplayStatus;
- (BOOL)p_isDoubleToMultiTalk;
- (BOOL)p_canReportCallVolumeEvent;
- (long long)p_volumeReportMemberType;
- (long long)p_volumeReportRoomType;
- (id)p_callVolumeBasicParams;
- (void)p_reportMaximumVolumeIncrease;
- (long long)p_currentSoundVolumePercent;
- (void)p_reportCallEndVolume;
- (BOOL)isCallActive;
- (void)setIsCallActive:(BOOL)arg1;
- (unsigned long long)recordStartTimestampMs;
- (void)setRecordStartTimestampMs:(unsigned long long)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (id)callLifecycleSnapshot;
- (void)setCallLifecycleSnapshot:(id)arg1;
- (BOOL)ownsSystemVolumeCheck;
- (void)setOwnsSystemVolumeCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end
