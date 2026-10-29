@interface CBTAsstBottomPanelDataReporter : NSObject
{
    BOOL _holdToTalkTrackingActive; // +0x8
    BOOL _holdToTalkLongPressRecognized; // +0x9
    BOOL _holdToTalkEndReported; // +0xa
    id _target; // +0x10
    id <CBTAsstBottomPanelDataReporterDataSource> _dataSource; // +0x18
    double _holdToTalkPressStartTs; // +0x20
    long long _holdToTalkRecordingModuleStartMs; // +0x28
    long long _holdToTalkVibrationMs; // +0x30
}
- (void)onHoldToTalkPressBegan;
- (void)onHoldToTalkLongPressRecognized;
- (void)onHoldToTalkRecordingReady;
- (void)reportHoldToTalkEndIfNeededWithCancelType:(long long)arg1 ifUserCancel:(BOOL)arg2 trigger:(id)arg3;
- (void)resetHoldToTalkState;
- (id)currentCommonParams;
- (BOOL)currentHasSelectedAttachments;
- (id)currentAttchTypeString;
- (id)currentInputBoxView;
- (void)setupInputBoxReporting;
- (void)reportInputBoxClickWithTrigger:(id)arg1;
- (id)currentAddIconButton;
- (void)setupAddIconReporting;
- (void)reportAddFileFinishWithFileTypes:(id)arg1 fileSizes:(id)arg2;
- (id)addFileJSONStringFromArray:(id)arg1;
- (void)reportAddFileBtnClickWithTrigger:(id)arg1;
- (void)reportAddPhotoBtnClickWithTrigger:(id)arg1;
- (void)reportChooseChatBtnExposure;
- (void)reportChooseChatBtnClick;
- (void)reportAddPhotoFinishWithCount:(long long)arg1;
- (void)reportDelAttchWithType:(long long)arg1 index:(long long)arg2;
- (void)reportPauseShow;
- (void)setupPauseButtonExposureReporting:(id)arg1;
- (void)reportPauseBtnClickWithStatus:(long long)arg1 ifOpenRead:(long long)arg2 showToClkMs:(unsigned long long)arg3 stopParams:(id)arg4;
- (void)reportPauseDisappearWithDurationMs:(unsigned long long)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)holdToTalkTrackingActive;
- (void)setHoldToTalkTrackingActive:(BOOL)arg1;
- (BOOL)holdToTalkLongPressRecognized;
- (void)setHoldToTalkLongPressRecognized:(BOOL)arg1;
- (BOOL)holdToTalkEndReported;
- (void)setHoldToTalkEndReported:(BOOL)arg1;
- (double)holdToTalkPressStartTs;
- (void)setHoldToTalkPressStartTs:(double)arg1;
- (long long)holdToTalkRecordingModuleStartMs;
- (void)setHoldToTalkRecordingModuleStartMs:(long long)arg1;
- (long long)holdToTalkVibrationMs;
- (void)setHoldToTalkVibrationMs:(long long)arg1;
- (void).cxx_destruct;
@end
