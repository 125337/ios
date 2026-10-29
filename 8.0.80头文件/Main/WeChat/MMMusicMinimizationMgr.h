@interface MMMusicMinimizationMgr : MMUserService <IMusicPlayerExt, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, MMServiceProtocol>
{
    MMMultipleMusicViewController * _nativePlayerViewController; // +0x8
    BOOL _autoCloseAtFinish; // +0x10
    BOOL _startSuccesss; // +0x11
    MMMusicInfo * _lastPlayMusic; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (void)commonUninit;
- (id)getCurPlayerViewController;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)prepareForMusicPlay:(id)arg1;
- (void)onMusicInfoUpdated;
- (void)updateMusicPlayMinimizationView:(BOOL)arg1;
- (BOOL)checkCanAddToPositiveMinimization;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)arg1;
- (void)closeViewController:(id)arg1;
- (void)addToMinimizeTask:(id)arg1 positive:(BOOL)arg2 isFromMenu:(BOOL)arg3;
- (BOOL)isMusicPlayerAddedToMinimizationList;
- (id)getCurMusicMinimizeTask;
- (BOOL)changeMusicPlayerPositiveState:(BOOL)arg1 isFromMenu:(BOOL)arg2;
- (BOOL)removeMinimizeTask;
- (void)addMusicPlayerToMinimizationList:(id)arg1;
- (void)removeMusicPlayerFromMinimizationList;
- (BOOL)updateMinimizationStateWithMusicInfo:(id)arg1 isPositive:(BOOL)arg2;
- (void)startMinimizeMusicPlayer;
- (id)transitionController;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onPlayPauseBtnClicked:(id)arg1 isToPlay:(BOOL)arg2;
- (void)onNextBtnClicked:(id)arg1;
- (id)dataFromMusicInfo:(id)arg1;
- (id)genMinimizationMusicPlayerTaskKey;
- (id)encodeMusicInfo:(id)arg1;
- (id)decodeMusicInfo:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (BOOL)autoCloseAtFinish;
- (void)setAutoCloseAtFinish:(BOOL)arg1;
- (id)lastPlayMusic;
- (void)setLastPlayMusic:(id)arg1;
- (BOOL)startSuccesss;
- (void)setStartSuccesss:(BOOL)arg1;
- (void).cxx_destruct;
@end
