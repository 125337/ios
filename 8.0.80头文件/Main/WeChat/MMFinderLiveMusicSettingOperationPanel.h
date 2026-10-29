@interface MMFinderLiveMusicSettingOperationPanel : MMLandscapeDragBarPageSheet <MMPageSheetGestureRecognizerDelegate, MMFinderLiveMusicSettingOperationTableDataDelegate, MMFinderLiveMusicSettingSearchExt, MMLiveMusicPlayLogicDelegate, MMLiveAnchorSEISynchronizeDelegate, MMLiveAnchorSEISynchronizeExt, MMRefreshTableFooterDelegate, MMFinderLiveMusicDataMgrExt, MMLiveTaskMgrExt>
{
    BOOL _needcheckSongOptSource; // +0x8
    BOOL _isAutoPausing; // +0x9
    BOOL _prepardForSEIMessage; // +0xa
    id <MMFinderLiveMusicSettingOperationDelegate> _operationDelegate; // +0x10
    id <MMFinderLiveMusicSettingReportDelegate> _reportDelegate; // +0x18
    NSString * _aiAssistantId; // +0x20
    MMLiveMusicPlayLogic * _musicPlayLogic; // +0x28
    MMFinderLiveMusicSettingOperationTableViewModel * _musicTableViewModel; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    long long _currentState; // +0x40
    UIView * _panelView; // +0x48
    MMFinderLiveMusicSettingOperationNavBar * _navBar; // +0x50
    UIImageView * _noMusicTipImage; // +0x58
    MMUILabel * _noMusicTipTitle; // +0x60
    MMUILabel * _noMusicTipLabel; // +0x68
    UIButton * _addMusicButton; // +0x70
    UIView * _tableHeaderView; // +0x78
    MMUILabel * _musicCountTipLabel; // +0x80
    MMTableView * _musicTableView; // +0x88
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x90
    MMFinderLiveMusicTableViewBottomEditingBar * _tableEditingBar; // +0x98
    MMFinderLiveMusicVolumnBar * _volumnBar; // +0xa0
    unsigned long long _musicCountWhileEditing; // +0xa8
    CGPoint _previousPanPos; // +0xb0
}
+ (id)transferMusicItem:(id)arg1;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)pageSheetDidDismiss;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutNavBar;
- (void)layoutActivityIndicatorView;
- (void)layoutNoMusicTipViews;
- (void)layoutAddMusicButton;
- (void)layoutMucisTableView;
- (void)layoutMusicVolumeBar;
- (void)layoutTableEditingBar;
- (void)updateWidgetsHidden;
- (void)setNoMusicTipViewsHidden:(BOOL)arg1;
- (id)getCurrentTitleView;
- (id)getCurrentLeftButton;
- (id)currentMusicItem;
- (id)getCurrentRightView;
- (void)bindMusicPlayLogic:(id)arg1;
- (id)musicTableViewModel;
- (void)setCurrentState:(long long)arg1;
- (id)musicCountTipLabel;
- (void)adjustUIForMusicTableEditingModeChanged;
- (double)getMusicTableHeight;
- (double)getMusicTableTop;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateMusicCountTip:(unsigned long long)arg1;
- (void)updateCurrentStateWithRefreshUI:(BOOL)arg1;
- (void)showMusicVolumeBar;
- (void)hideMusicVolumeBar;
- (void)createMusicVolumeBar;
- (void)handleMusicSettingOperationTap:(long long)arg1 open:(BOOL)arg2;
- (void)updatePageSheetConfigForSettingStateChanged;
- (id)createOperationTableFooterView;
- (id)createOperationNoDataTableFooterView;
- (id)createOperationTableHeaderView;
- (void)startGetMusicDataListInNormalModeIfNeeded;
- (void)startGetMusicDataListInNormalMode;
- (void)insertMusicData:(id)arg1 animated:(BOOL)arg2;
- (BOOL)continueGetMusicDataListInEditingMode;
- (BOOL)continueGetMusicDataListInNormalMode;
- (void)checkAndUpdatePlayingMusicItemAfterEditing;
- (void)startLoading;
- (void)stopLoading;
- (void)showToast:(id)arg1;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)addButtonAction;
- (void)handleMusicTableInteractivePanGesture:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (BOOL)isPlayingMusic;
- (void)syncBGMWithsuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (void)updateUIWithSong:(id)arg1 playStatus:(unsigned int)arg2 volume:(int)arg3 songOptVersion:(unsigned long long)arg4;
- (long long)handleMusicSettingInteractiveTap:(long long)arg1;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onMusicSettingTableDataSelectAllStateChanged:(BOOL)arg1;
- (void)onMusicSettingTableDataLoaded;
- (void)onMusicSettingTableDataCleared;
- (void)onMusicSettingTableDataBeginEdit;
- (void)onMusicSettingTableDataEndEdit:(BOOL)arg1;
- (void)onMusicSettingTableDataDeleteDateItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onMusicSettingTableDataDidSelect:(id)arg1 isInEditing:(BOOL)arg2;
- (void)onMusicSettingTableDidScroll;
- (id)getCurrentBriefMusicInfos;
- (void)synchronizeModifiedBriefMusicInfos:(id)arg1;
- (void)onMusicSettingTableDataDeleteDidSelectInEditingMode:(BOOL)arg1;
- (void)onMusicSettingTableDataDeleteDataItemList:(id)arg1;
- (void)onMusicSearchDataItemAdded:(id)arg1;
- (id)stringWithouHighlightedMark:(id)arg1;
- (void)onPlayMusicItemWillStart:(id)arg1;
- (void)onPlayMusicItem:(id)arg1 started:(long long)arg2;
- (void)onPlayMusicItem:(id)arg1 completed:(long long)arg2;
- (void)onPlayMusicItemPaused:(id)arg1;
- (void)onPlayMusicItemResumed:(id)arg1;
- (void)onPlayMusicItemStoped:(id)arg1;
- (void)onRequestSynchronzizeInfoForSEIAnchorInfo:(id)arg1;
- (void)onLiveAnchorSEISynchronizeRegistered:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onNotifyAllMusicDataCountChanged:(unsigned long long)arg1;
- (void)onLiveTaskMainOrAssistantAnchorExit:(id)arg1;
- (void)onLiveTaskMainOrAssistantAnchorRestore:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)currentLiveTask;
- (void)fetchDataAndShowMusicSearchPanel;
- (void)reportAction:(unsigned long long)arg1 music:(id)arg2 refreshPlayId:(BOOL)arg3;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)aiAssistantId;
- (void)setAiAssistantId:(id)arg1;
- (BOOL)needcheckSongOptSource;
- (void)setNeedcheckSongOptSource:(BOOL)arg1;
- (id)musicPlayLogic;
- (void)setMusicPlayLogic:(id)arg1;
- (void)setMusicTableViewModel:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentState;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)noMusicTipImage;
- (void)setNoMusicTipImage:(id)arg1;
- (id)noMusicTipTitle;
- (void)setNoMusicTipTitle:(id)arg1;
- (id)noMusicTipLabel;
- (void)setNoMusicTipLabel:(id)arg1;
- (id)addMusicButton;
- (void)setAddMusicButton:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (void)setMusicCountTipLabel:(id)arg1;
- (id)musicTableView;
- (void)setMusicTableView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)tableEditingBar;
- (void)setTableEditingBar:(id)arg1;
- (id)volumnBar;
- (void)setVolumnBar:(id)arg1;
- (CGPoint)previousPanPos;
- (void)setPreviousPanPos:(CGPoint)arg1;
- (BOOL)isAutoPausing;
- (void)setIsAutoPausing:(BOOL)arg1;
- (BOOL)prepardForSEIMessage;
- (void)setPrepardForSEIMessage:(BOOL)arg1;
- (unsigned long long)musicCountWhileEditing;
- (void)setMusicCountWhileEditing:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
