@interface MMMusicMVMinimizationMgr : MMUserService <IMusicPlayerExt, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, IMinimizeTaskExt, MinimizeTaskContainerInfoDelegate, IMusicMVPostDataServiceExt, MiniAudioTaskContentViewDelegate, MinimizeNewTransitionControllerDelegate, MMServiceProtocol>
{
    MMMusicViewController * _nativePlayerViewController; // +0x8
    BOOL _hasAlertWhenPlayFail; // +0x10
    BOOL _isMVPlaying; // +0x11
    BOOL _isMinimizeWindowShowing; // +0x12
    BOOL _forbidAddMinimizeTaskWhenMusicStateChange; // +0x13
    BOOL _startSuccesss; // +0x14
    BOOL _hasFoldFloatingView; // +0x15
    MMMusicInfo * _lastPlayMusic; // +0x18
    UIView * _minimizeContainerView; // +0x20
    MMUIButton * _minimizeCoverBgBtn; // +0x28
    MMUIButton * _minimizeCloseBtn; // +0x30
    MiniAudioTaskContentView * _contentView; // +0x38
}
+ (id)transitionController;
+ (id)genMinimizationMusicPlayerTaskKey;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)commonInit;
- (id)getCurPlayerViewController;
- (void)updateCurThumbImage:(id)arg1 musicId:(id)arg2;
- (void)updateMinimizeContainerViewWithThumbImage:(id)arg1;
- (void)updateCurThumbViewWithMusicInfo:(id)arg1;
- (void)updateCurMusicViewController:(id)arg1;
- (void)installMinimizeContainerView;
- (void)onMinimizeMusicContainerClicked;
- (void)onMinimizeMusicCloseClicked;
- (void)addMusicToPullDownHistory;
- (id)createUsedTaskDataWithMusicInfo:(id)arg1;
- (BOOL)isInBlackList:(id)arg1;
- (BOOL)shouldBlockMinimizeWindowDisplayForTask:(id)arg1;
- (void)minimizeWindowWillShow:(BOOL)arg1;
- (void)minimizeWindowWillHide:(BOOL)arg1;
- (void)updatePlayModeWithCurrentMusicInfoWithMinimizeWindowShowing:(BOOL)arg1;
- (void)updatePlayModeWithMusicInfo:(id)arg1 minimizeWindowShowing:(BOOL)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)tryAddMusicInfoToMinimizeTask:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)hasOtherOuterContainerMinimizeTask;
- (void)prepareForMusicPlay:(id)arg1;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)arg1;
- (void)onMusicInfoUpdated;
- (BOOL)isMusicPlayerAddedToMinimizationList;
- (id)getCurMusicMinimizeTask;
- (BOOL)removeMinimizeTask;
- (BOOL)removeMinimizeTaskByCloseButton:(BOOL)arg1;
- (void)addMinimizeTaskWhenEdgePopEnd;
- (void)addMusicPlayerToMinimizationList:(id)arg1 scene:(unsigned long long)arg2;
- (void)tryRemoveMvMusicMinimizeTask;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(CGPoint)arg1;
- (void)updateMinimizeContainerViewStickyOrientation:(BOOL)arg1;
- (id)dataFromMusicInfo:(id)arg1;
- (id)encodeMusicInfo:(id)arg1;
- (id)decodeMusicInfoWithTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)onMVPostDataServicePostMVSuccess:(id)arg1 svrDataItem:(id)arg2 localId:(id)arg3 relatedDraftId:(id)arg4;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)getMinimizationTransitionContext;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (BOOL)isMVPlaying;
- (void)setIsMVPlaying:(BOOL)arg1;
- (BOOL)isMinimizeWindowShowing;
- (void)setIsMinimizeWindowShowing:(BOOL)arg1;
- (BOOL)forbidAddMinimizeTaskWhenMusicStateChange;
- (void)setForbidAddMinimizeTaskWhenMusicStateChange:(BOOL)arg1;
- (id)lastPlayMusic;
- (void)setLastPlayMusic:(id)arg1;
- (BOOL)startSuccesss;
- (void)setStartSuccesss:(BOOL)arg1;
- (id)minimizeContainerView;
- (void)setMinimizeContainerView:(id)arg1;
- (id)minimizeCoverBgBtn;
- (void)setMinimizeCoverBgBtn:(id)arg1;
- (id)minimizeCloseBtn;
- (void)setMinimizeCloseBtn:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)hasFoldFloatingView;
- (void)setHasFoldFloatingView:(BOOL)arg1;
- (void).cxx_destruct;
@end
