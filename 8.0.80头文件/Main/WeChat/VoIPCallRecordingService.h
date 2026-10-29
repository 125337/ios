@interface VoIPCallRecordingService : MMUserService <MMScreenShotExt, MMServiceProtocol>
{
    long long _state; // +0x8
    NSObject<OS_dispatch_queue> * _recordingQueue; // +0x10
    unsigned long long _screenShotMomentNs; // +0x18
    unsigned long long _recordingOutputDurationNs; // +0x20
    long long _recordingWindowMode; // +0x28
    id /* block */ _pendingFutureSaveBlock; // +0x30
    NSMutableArray * _pendingTasks; // +0x38
    VoIPCallRecordingTask * _currentTask; // +0x40
    NSMutableDictionary * _screenShotSnapshots; // +0x48
    NSMutableDictionary * _screenShotBlocks; // +0x50
    double _pipelineStartTime; // +0x58
    CGSize _recordingCanvasSize; // +0x60
}
+ (id)currentReportContextWithSource:(long long)arg1;
+ (BOOL)reportSaveButtonExposureWithSource:(long long)arg1;
+ (BOOL)reportSaveButtonClickWithContext:(id)arg1;
+ (BOOL)reportSavedTipsExposureWithContext:(id)arg1;
+ (BOOL)reportSavedTipsClickWithContext:(id)arg1;
+ (BOOL)reportSaveResultWithContext:(id)arg1 success:(BOOL)arg2 durationMs:(unsigned long long)arg3;
+ (BOOL)reportOpenSystemAlbumSuccessWithContext:(id)arg1;
+ (BOOL)p_reportEvent:(id)arg1 viewId:(id)arg2 context:(id)arg3 extraParams:(id)arg4;
+ (id)sharedInstance;
+ (BOOL)isEnabled;
+ (BOOL)isRecordingHighlightExperimentEnabledReadOnly;
+ (BOOL)isInRecordingTalking;
+ (unsigned long long)nowPtsNs;
- (void)generateAvatarPlaceholdersWithSdkVideoSnap:(id)arg1 uiStateSnap:(id)arg2 startNs:(unsigned long long)arg3 endNs:(unsigned long long)arg4 canvasSize:(CGSize)arg5 callbackQueue:(id)arg6 requireLocalPlaceholder:(BOOL)arg7 requireRemotePlaceholder:(BOOL)arg8 completion:(id /* block */)arg9;
- (void)p_collectPlaceholderNeedsForState:(id)arg1 localNeeds:(BOOL[3])arg2 remoteNeeds:(BOOL[3])arg3 localSubSize:(CGSize *)arg4 remoteSubSize:(CGSize *)arg5;
- (CGSize)p_placeholderSizeForStyle:(long long)arg1 subSize:(CGSize)arg2 canvasSize:(CGSize)arg3;
- (BOOL)p_placeholderSetHasAnyBuffer:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)p_recordingOutputDurationSecondsFromExpt;
- (void)p_refreshRecordingOutputDurationFromExpt;
- (long long)p_recordingWindowModeFromExpt;
- (void)p_refreshRecordingWindowModeFromExpt;
- (long long)p_coverSelectionFromExpt;
- (void)updateRecordingCanvasSize:(CGSize)arg1;
- (void)startRecordingWithCompletion:(id /* block */)arg1;
- (void)stopRecordingForCallEnd;
- (void)saveLast5SecondsWithViewController:(id)arg1 fromScreenShot:(BOOL)arg2;
- (void)p_processNextTaskIfNeeded;
- (void)p_executeTask:(id)arg1;
- (void)p_runRecordingPipelineWithLocalAudioSnap:(id)arg1 remoteAudioSnap:(id)arg2 uiStateSnap:(id)arg3 canvasSize:(CGSize)arg4 sdkVideoSnap:(id)arg5 freezeTimestampNs:(unsigned long long)arg6 localPlaceholders:(id)arg7 remotePlaceholders:(id)arg8 task:(id)arg9;
- (void)p_transitionToState:(long long)arg1 reason:(id)arg2;
- (void)p_completeTask:(id)arg1 path:(id)arg2 errorMessage:(id)arg3;
- (void)p_rejectTask:(id)arg1 message:(id)arg2;
- (void)p_cancelTask:(id)arg1;
- (id)p_clipAudioSnapshot:(id)arg1 startNs:(unsigned long long)arg2 endNs:(unsigned long long)arg3 label:(id)arg4;
- (id)p_generateOutputPathWithFormat:(unsigned long long)arg1;
- (void)p_releaseReencodedSamples:(id)arg1;
- (void)p_callCompletionOnMain:(id /* block */)arg1 path:(id)arg2;
- (void)onMMScreenShotWillShow;
- (void)onFinishScreenShot;
- (void)beginScreenShotPreservation;
- (void)markScreenShotPreservationEndRequested;
- (void)p_doClearScreenShotPreservation;
- (void)p_captureScreenShotSnapshotWithAnchor:(unsigned long long)arg1;
- (void)p_scheduleScreenShotSnapshotCaptureWithAnchor:(unsigned long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (CGSize)recordingCanvasSize;
- (void)setRecordingCanvasSize:(CGSize)arg1;
- (id)recordingQueue;
- (void)setRecordingQueue:(id)arg1;
- (unsigned long long)screenShotMomentNs;
- (void)setScreenShotMomentNs:(unsigned long long)arg1;
- (unsigned long long)recordingOutputDurationNs;
- (void)setRecordingOutputDurationNs:(unsigned long long)arg1;
- (long long)recordingWindowMode;
- (void)setRecordingWindowMode:(long long)arg1;
- (id /* block */)pendingFutureSaveBlock;
- (void)setPendingFutureSaveBlock:(id /* block */)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)screenShotSnapshots;
- (void)setScreenShotSnapshots:(id)arg1;
- (id)screenShotBlocks;
- (void)setScreenShotBlocks:(id)arg1;
- (double)pipelineStartTime;
- (void)setPipelineStartTime:(double)arg1;
- (void).cxx_destruct;
@end
