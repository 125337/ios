@interface MJClipBundlePlayerViewController : MMUIViewController <WCFinderProgressPanelViewDelegate, WCFinderProgressBarExtendDelegate>
{
    BOOL _isVideoPlaying; // +0x68
    BOOL _isDragGREnding; // +0x69
    WCFinderFeedContentVM * _contentVM; // +0x70
    WCFinderPostSessionModel * _postSession; // +0x78
    MJPublisherMovieCompositionTask * _compositeTask; // +0x80
    UIView * _renderViewContainer; // +0x88
    UIView * _bottomViewContainer; // +0x90
    UIView * _gestureCaptureView; // +0x98
    MMUIImageView * _playIconView; // +0xa0
    WCFinderTableViewParamModel * _tableViewParamModel; // +0xa8
    WCFinderFullInteractivePanelView * _interactivePanelView; // +0xb0
    WCFinderInteractivePanelConfigParamsModel * _interactivePanelConfigModel; // +0xb8
    unsigned long long _toolbarConfig; // +0xc0
    WCFinderPortraitProgressPanelView * _portraitProgressPanelView; // +0xc8
    WCFinderLandscapeProgressPanelView * _landscapeProgressPanelView; // +0xd0
    WCFinderProgressControlPanelConfigParamsModel * _progressControlConfigModel; // +0xd8
    UILabel * _longVideoEntry; // +0xe0
    double _currentTimeInSeconds; // +0xe8
    double _durationInSeconds; // +0xf0
    MMUIButton * _closeButton; // +0xf8
}
- (id)initWithPostSession:(id)arg1 contentVM:(id)arg2 toolbarConfig:(unsigned long long)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupViews;
- (void)_playVideo;
- (void)_playVideoWithStartTime:(double)arg1;
- (void)_pauseVideo;
- (void)_pauseVideoWithCompletionHandler:(id /* block */)arg1;
- (void)_shutdownPlayback;
- (void)templateMoviePlayer:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)templateMoviePlayerWillStopPlaying:(id)arg1;
- (void)templateMoviePlayer:(id)arg1 playbackTimeDidChange:(struct)arg2 mediaTimeRange:(struct)arg3;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onApplicationWillEnterForegroundNotification:(id)arg1;
- (void)onApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)onCloseButtonClicked;
- (void)handleTapGR:(id)arg1;
- (id)closeButton;
- (void)triggerPauseVideoAction;
- (void)manualTriggerPauseVideoAction;
- (void)updateVideoState:(BOOL)arg1;
- (void)reversePauseLikeProgressViewsHiddenState;
- (void)reversePauseLikeProgressViewsHiddenStateWithPauseSelectState:(BOOL)arg1;
- (void)layoutCurProgressBar;
- (void)updatePanelViewShowState:(long long)arg1;
- (void)updateProgressBarAndPlayTimeLabelWithCurrentPlayDuration:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(BOOL)arg3 manual:(BOOL)arg4;
- (unsigned long long)getStartImmersiveProgressBarDragStyle;
- (void)replayAndHideProgressControlPanelView;
- (void)checkInteractivePanelViewProgressExtend;
- (id)interactivePanelView;
- (id)tableViewParamModel;
- (id)interactivePanelConfigModel;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (BOOL)isInSubScene;
- (id)progressControlConfigModel;
- (void)configProgressPanelViewVisible;
- (id)progressControlPanelView;
- (id)landscapeProgressPanelView;
- (id)portraitProgressPanelView;
- (id)longVideoEntry;
- (BOOL)currentSceneIsLandSpace;
- (BOOL)isPanGesEnable:(CGPoint)arg1;
- (CGRect)progressHotRect;
- (id)progressControlPanelGetLongVideoEntry;
- (id)progressControlPanelGetMediaCollectionView;
- (void)progressControlPanelClickPauseButton:(id)arg1;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2 dragType:(unsigned long long)arg3;
- (double)immersiveProgressControlBottom;
- (void)progressControlPanelClickPlayButton:(id)arg1;
- (void)updateLongVideoEntry;
- (void)updateLongVideoEntryAnimated:(BOOL)arg1;
- (void)updateLongVideoEntryHiddenStatus;
- (void)setLongVideoEntryHidden:(BOOL)arg1;
- (void)updateLongVideoEntryVideoDuration:(double)arg1 currentPlayPosition:(double)arg2;
- (void)updateLongVideoEntryLayout;
- (id)lightWhiteColor;
- (BOOL)useTransparentNavibar;
- (id)contentVM;
- (id)postSession;
- (id)compositeTask;
- (id)renderViewContainer;
- (void)setRenderViewContainer:(id)arg1;
- (id)bottomViewContainer;
- (void)setBottomViewContainer:(id)arg1;
- (id)gestureCaptureView;
- (void)setGestureCaptureView:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (void)setTableViewParamModel:(id)arg1;
- (void)setInteractivePanelView:(id)arg1;
- (void)setInteractivePanelConfigModel:(id)arg1;
- (unsigned long long)toolbarConfig;
- (void)setToolbarConfig:(unsigned long long)arg1;
- (void)setPortraitProgressPanelView:(id)arg1;
- (void)setLandscapeProgressPanelView:(id)arg1;
- (void)setProgressControlConfigModel:(id)arg1;
- (void)setLongVideoEntry:(id)arg1;
- (double)currentTimeInSeconds;
- (void)setCurrentTimeInSeconds:(double)arg1;
- (double)durationInSeconds;
- (void)setDurationInSeconds:(double)arg1;
- (BOOL)isVideoPlaying;
- (void)setIsVideoPlaying:(BOOL)arg1;
- (BOOL)isDragGREnding;
- (void)setIsDragGREnding:(BOOL)arg1;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end

