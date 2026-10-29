@interface MMFinderLiveKTVMusicContainerView : MMFinderLiveKTVBaseView <MMFinderLiveKTVStateExt, MMLiveKtvUserViewDelegate, MMFinderLiveKTVLogicExt, MMFinderLiveKTVBoxExt, MMLiveTaskMgrExt>
{
    BOOL _isUserViewAnimating; // +0x8
    BOOL _isStateVisivilityChangeAnimating; // +0x9
    MMFinderLiveKTVSingingContentView * _singingContentView; // +0x10
    id /* block */ _userTappedBlock; // +0x18
    id /* block */ _userMicMutedBtnTappedBlock; // +0x20
    unsigned long long _scene; // +0x28
    unsigned long long _currState; // +0x30
    MMFinderLiveKTVBeginContentView * _beginContentView; // +0x38
    MMFinderLiveKTVEndContentView * _endContentView; // +0x40
    MMFinderLiveKTVBeginContentView * _nextAdvanceContentView; // +0x48
    MMFinderLiveKTVEmptyContentView * _emptyContentView; // +0x50
    MMLiveKtvUserView * _userView; // +0x58
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x60
}
+ (double)preferHeight;
+ (unsigned long long)transferSingStateToUIState:(long long)arg1 lastUIState:(unsigned long long)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)initDefaultDatas;
- (void)checkKTVState:(id)arg1 changeUpdate:(BOOL)arg2;
- (void)clearStates;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBeginContentView;
- (void)layoutSingingContentView;
- (void)layoutEndContentView;
- (void)layoutNextAdvanceContentView;
- (void)layoutEmptyContentView;
- (void)layoutUserView;
- (id)getSingerPlayerUIDesc;
- (id)getSingerHeaderUIDesc;
- (void)onEnterLive;
- (void)updateMainWidgetsColor:(id)arg1;
- (id)ktvUserView;
- (BOOL)isCurrSingerRectLargeStyle;
- (void)updateUIStateWithSingState:(long long)arg1;
- (void)refreshUIWithSingState:(long long)arg1 forUniqueIdChanged:(id)arg2;
- (void)refreshCurrStateVisivilityFromLastState:(unsigned long long)arg1;
- (void)onCurrStateChangedFromLastState:(unsigned long long)arg1;
- (void)refreshCurrStateUIFromLastState:(unsigned long long)arg1;
- (void)refreshCurrStateUIForUniqueIdChanged:(id)arg1;
- (void)layoutUIForStateChanged;
- (void)startUserViewPrepareToBeginAnimation;
- (void)reportStatus;
- (id)finderTaskId;
- (id)anchorReporter;
- (id)getAnchorReporter;
- (void)onLiveKTVModeChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 uniqueIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemBasicInfoUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songNameUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 nextSongNameUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerContactUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerVoicingChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)updateSingerUserView:(id)arg1;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onUniqueTaskId:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveKtvUserViewAvatarTapped:(id)arg1 highlightingView:(id)arg2;
- (void)onLiveKTVUserView:(id)arg1 micMutedButtonTappedWithUserInfo:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)singingContentView;
- (void)setSingingContentView:(id)arg1;
- (id /* block */)userTappedBlock;
- (void)setUserTappedBlock:(id /* block */)arg1;
- (id /* block */)userMicMutedBtnTappedBlock;
- (void)setUserMicMutedBtnTappedBlock:(id /* block */)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)currState;
- (void)setCurrState:(unsigned long long)arg1;
- (id)beginContentView;
- (void)setBeginContentView:(id)arg1;
- (id)endContentView;
- (void)setEndContentView:(id)arg1;
- (id)nextAdvanceContentView;
- (void)setNextAdvanceContentView:(id)arg1;
- (id)emptyContentView;
- (void)setEmptyContentView:(id)arg1;
- (id)userView;
- (void)setUserView:(id)arg1;
- (BOOL)isUserViewAnimating;
- (void)setIsUserViewAnimating:(BOOL)arg1;
- (BOOL)isStateVisivilityChangeAnimating;
- (void)setIsStateVisivilityChangeAnimating:(BOOL)arg1;
- (void)setAnchorReporter:(id)arg1;
- (void).cxx_destruct;
@end

