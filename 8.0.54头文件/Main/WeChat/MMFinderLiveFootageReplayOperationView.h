@interface MMFinderLiveFootageReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveReplayBarrageViewDelegate>
{
    BOOL _supressMessageUpdate; // +0x8
    BOOL _replayExplicitlyPaused; // +0x9
    id <MMFinderLiveFootageReplayOperationViewDelegate> _footageReplayOperationViewDelegate; // +0x10
    MMFinderLiveReplayMessageSource * _messageSource; // +0x18
    unsigned long long _lastMessageUpdateTime; // +0x20
    MMFinderLiveFootageReplayModel * _footageReplayModel; // +0x28
    MMFinderLiveReplayBarrageView * _barrageView; // +0x30
    MMUIButton * _orientationButton; // +0x38
}
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)shouldHideMaskWhenCLeanScreen;
- (void)onEnterLive;
- (void)layoutUI;
- (void)createReplayControlView;
- (void)showContents;
- (void)hideContents;
- (void)layoutBarrageView;
- (void)layoutOrientationButton;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)updateLiveMessageAtTime:(unsigned int)arg1;
- (void)onOrientationButtonClicked;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(float)arg1 isAtGreateTime:(BOOL)arg2;
- (void)onScrubberPauseButtonTapped;
- (void)onScrubberPlayButtonTapped;
- (double)toolViewBottom;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)barrageViewDidShowOperationMenu:(id)arg1;
- (void)barrageViewDidHideOperationMenu:(id)arg1;
- (void)barrageView:(id)arg1 reportCommentItem:(id)arg2;
- (id)footageReplayOperationViewDelegate;
- (void)setFootageReplayOperationViewDelegate:(id)arg1;
- (id)messageSource;
- (void)setMessageSource:(id)arg1;
- (unsigned long long)lastMessageUpdateTime;
- (void)setLastMessageUpdateTime:(unsigned long long)arg1;
- (BOOL)supressMessageUpdate;
- (void)setSupressMessageUpdate:(BOOL)arg1;
- (id)footageReplayModel;
- (void)setFootageReplayModel:(id)arg1;
- (id)barrageView;
- (void)setBarrageView:(id)arg1;
- (id)orientationButton;
- (void)setOrientationButton:(id)arg1;
- (BOOL)replayExplicitlyPaused;
- (void)setReplayExplicitlyPaused:(BOOL)arg1;
- (void).cxx_destruct;
@end

