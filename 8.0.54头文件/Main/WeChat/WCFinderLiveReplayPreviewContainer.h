@interface WCFinderLiveReplayPreviewContainer : UIView <MMWebImageViewDelegate, WCFinderLiveReplayPreviewSrcDataExt, WCFinderLiveReplayPreviewDisplayDelegate>
{
    BOOL _isTimeHidden; // +0x8
    BOOL _enterLittleStridePreview; // +0x9
    double _currentTime; // +0x10
    MMFinderLiveReplayGreateTimeModel * _currentGreateTimeModel; // +0x18
    id <WCFinderLiveReplayPreviewDelegate> _previewDelegate; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    WCPlayerView * _previewPlayer; // +0x30
    WCFinderLiveReplayPreviewDisplayView * _previewDisplayView; // +0x38
    MMUIButton * _playButton; // +0x40
    MMUILabel * _currentTimeLabel; // +0x48
    MMUILabel * _descLabel; // +0x50
    double _totalTime; // +0x58
    double _lastRecordTime; // +0x60
    long long _timeDisplayFormat; // +0x68
    double _previewWHPercent; // +0x70
    double _seekStartTime; // +0x78
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPreviewDisplayView;
- (void)updatePreviewDisplayViewOrigin;
- (void)layoutPlayButton;
- (void)layoutCurrentTimeLabel;
- (void)updateCurrentTimeLabelOrigin;
- (void)layoutDescLabel;
- (void)updateDescLabelOrigin;
- (void)updateTimeLabelSizeWithTotalTimeText:(id)arg1;
- (void)updateTimeLabelsHidden;
- (BOOL)updatePreviewDisplayViewSize;
- (void)updateSelfSize;
- (void)updateDescContent:(id)arg1;
- (BOOL)isTimeLabelHidden;
- (id)replayLiveTask;
- (double)preViewWidth;
- (double)preViewHeight;
- (void)updateTotalTime:(double)arg1;
- (void)updateTimeHidden:(BOOL)arg1;
- (void)updatePlayButtonHidden:(BOOL)arg1;
- (BOOL)updatePreviewWHPercent:(double)arg1;
- (void)showWithCurrentTime:(double)arg1;
- (void)showWithGreateTimeModel:(id)arg1;
- (void)updateCurrentTime:(double)arg1;
- (void)updateGreateTimeModel:(id)arg1;
- (void)hide;
- (BOOL)isShown;
- (void)resetToDefaultStridePreview;
- (void)prepareForLittleStridePreview;
- (void)prepareForLargeStridePreview;
- (void)onReplayVideoPrepareToPlay:(id)arg1;
- (BOOL)hasPrepareForPreview;
- (void)startPreview;
- (void)inner_showWithCurrentTime:(double)arg1;
- (void)inner_updateCurrentTime:(double)arg1;
- (void)inner_updateCurrentGreatTimeModel:(id)arg1;
- (void)startAutoCheckCurrentTimeChange;
- (void)stopAutoCheckCurrentTimeChange;
- (void)autoCheckCurrentTimeChange;
- (long long)getCurrentNormalPreviewByMode:(double)arg1;
- (long long)getCurrentAtOncePreviewByMode:(double)arg1;
- (BOOL)isDirectlyUsePlayerPreviewMode:(double)arg1;
- (void)scheduleAutoUpdatePreviewData;
- (void)onPlayButtonClick;
- (void)onReplayPreviewThumbListAppended:(id)arg1 taskId:(id)arg2;
- (void)onReplayPreviewLowBitrateUrlUpdated:(id)arg1 resolutionChanged:(BOOL)arg2 taskId:(id)arg3;
- (void)onReplayPreviewResolutionInfoUpdated:(id)arg1 taskId:(id)arg2;
- (id)getNearestGreateTimeModelWithTime:(double)arg1;
- (BOOL)onDisplaySizeChanged:(CGSize)arg1;
- (void)onFetchAllPreviewPlayerDataChanged;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (id)currentGreateTimeModel;
- (void)setCurrentGreateTimeModel:(id)arg1;
- (id)previewDelegate;
- (void)setPreviewDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)previewPlayer;
- (void)setPreviewPlayer:(id)arg1;
- (id)previewDisplayView;
- (void)setPreviewDisplayView:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (double)lastRecordTime;
- (void)setLastRecordTime:(double)arg1;
- (long long)timeDisplayFormat;
- (void)setTimeDisplayFormat:(long long)arg1;
- (double)previewWHPercent;
- (void)setPreviewWHPercent:(double)arg1;
- (BOOL)isTimeHidden;
- (void)setIsTimeHidden:(BOOL)arg1;
- (BOOL)enterLittleStridePreview;
- (void)setEnterLittleStridePreview:(BOOL)arg1;
- (double)seekStartTime;
- (void)setSeekStartTime:(double)arg1;
- (void).cxx_destruct;
@end

