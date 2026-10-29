@interface WeNoteRecordingMinimizeMgr : NSObject <MinimizeTaskStateInfoDelegate, IWNAudioMgrExt, IMinimizeTaskDelegateInterface>
{
    BOOL _extRegistered; // +0x8
    BOOL _floatingWindowVisible; // +0x9
}
+ (id)sharedInstance;
- (BOOL)isFloatingWindowVisible;
- (void)showFloatingWindow;
- (void)hideFloatingWindow;
- (void)forceStopRecordingAndDismissWithReason:(long long)arg1;
- (void)ensureExtRegistered;
- (void)unregisterExt;
- (void)showMinimizeTask;
- (void)removeMinimizeTask;
- (void)updateRecordingTitle;
- (id)recordingTitleStringFolded:(BOOL)arg1;
- (void)applyRecordingFloatUIForFoldState:(BOOL)arg1;
- (id)buildMinimizeTaskData;
- (id)buildMinimizeTaskDataFoldedForTitle:(BOOL)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnWNAudioRecordLevelMeter:(float)arg1;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4 StopReason:(long long)arg5;
- (void)onCloseBtnClicked:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onOuterContentTaskFoldStateChanged:(id)arg1 fold:(BOOL)arg2;
- (void)showRecordingSavedSnackBarWithFavLocalId:(unsigned int)arg1;
- (void)navigateBackToNote;
- (BOOL)extRegistered;
- (void)setExtRegistered:(BOOL)arg1;
- (BOOL)floatingWindowVisible;
- (void)setFloatingWindowVisible:(BOOL)arg1;
@end
