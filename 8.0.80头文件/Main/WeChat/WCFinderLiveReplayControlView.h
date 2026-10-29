@interface WCFinderLiveReplayControlView : WCPlayerControlView <WCFinderLiveReplayProgressBarDelegate, WCFinderLiveReplayPreviewDelegate>
{
    BOOL _useSeekTimeView; // +0x8
    BOOL _useDualLineProgressBarInPortrait; // +0x9
    unsigned int _externalProgressManipulationInitialTime; // +0xc
    WCFinderLiveReplayProgressBar * _replayProgressBar; // +0x10
    id <WCFinderLiveReplayControlDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMUIButton * _operateButton; // +0x28
    UIView * _backTapView; // +0x30
    MMFinderLiveReplaySeekTimeView * _seekTimeView; // +0x38
    WCFinderLiveReplayPreviewContainer * _previewContainer; // +0x40
    NSDictionary * _greateTimeDict; // +0x48
    CGSize _replayVideoInitSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initNotifications;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBackTapView;
- (void)layoutProgressBar;
- (void)layoutOperateButton;
- (BOOL)needShowOperateButton;
- (void)updateOperateButton;
- (void)layoutPreviewContainer;
- (void)createPreviewContainer;
- (void)updatePreviewContainerOrigin;
- (void)showPreviewContainer:(double)arg1 bySlider:(BOOL)arg2;
- (void)updatePreviewContainer:(double)arg1;
- (void)hidePreviewContainer;
- (void)setProgress:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)showBottomToolView;
- (void)hideBottomToolView;
- (void)onExitLive;
- (void)beginExternalProgressManipulation;
- (void)externalProgressManipulationWithPanRatio:(double)arg1 slowChange:(BOOL)arg2;
- (int)getTargetTimeWithPanRatio:(double)arg1 slowChange:(BOOL)arg2;
- (double)getLinearChangeUnit:(BOOL)arg1;
- (void)endExternalProgressManipulation;
- (void)updateGreateTimeList:(id)arg1;
- (BOOL)isPreviewContainerShow;
- (void)handleForReplayMomentsViewOpened;
- (void)handleForReplayMomentsViewClosed;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderScrubbEnd:(unsigned long long)arg1 time:(float)arg2;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onTotalDisplayTimeUpdate:(unsigned int)arg1;
- (void)onSliderChangeToPercent:(float)arg1;
- (void)onGreateTimeDotTap:(double)arg1;
- (void)onSliderBarTap;
- (struct)getCurrentPlaybackTime;
- (BOOL)shouldConsumeTouchFromFullScreenGesture:(id)arg1 fromView:(id)arg2;
- (id)replayTask;
- (void)setUseDualLineProgressBarInPortrait:(BOOL)arg1;
- (void)pauseVideo;
- (void)playVideo;
- (id)tryGetGreateTimeModelWithTime:(double)arg1;
- (void)onPreviewContainterSizeChanged:(CGSize)arg1;
- (void)onPreviewContainterInvokeToSlider:(double)arg1;
- (id)getNearestGreateTimeModelWithTime:(double)arg1;
- (void)onInvokeScheduleAutoUpdatePreviewData;
- (void)onSingleTapGestureRecognizer:(id)arg1;
- (void)onStopButtonClick;
- (void)onPlayButtonClick;
- (void)handleUIOrientationChanged:(id)arg1;
- (id)replayProgressBar;
- (void)setReplayProgressBar:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useSeekTimeView;
- (void)setUseSeekTimeView:(BOOL)arg1;
- (CGSize)replayVideoInitSize;
- (void)setReplayVideoInitSize:(CGSize)arg1;
- (BOOL)useDualLineProgressBarInPortrait;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)operateButton;
- (void)setOperateButton:(id)arg1;
- (unsigned int)externalProgressManipulationInitialTime;
- (void)setExternalProgressManipulationInitialTime:(unsigned int)arg1;
- (id)backTapView;
- (void)setBackTapView:(id)arg1;
- (id)seekTimeView;
- (void)setSeekTimeView:(id)arg1;
- (id)previewContainer;
- (void)setPreviewContainer:(id)arg1;
- (id)greateTimeDict;
- (void)setGreateTimeDict:(id)arg1;
- (void).cxx_destruct;
@end
