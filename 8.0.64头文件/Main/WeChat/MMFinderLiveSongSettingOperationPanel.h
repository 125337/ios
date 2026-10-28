@interface MMFinderLiveSongSettingOperationPanel : MMPageSheetBaseView <MMPageSheetGestureRecognizerDelegate, MMFinderLiveSongSettingOperationTableDataDelegate, MMFinderLiveAddNewSongPanelDelegate, MMRefreshTableFooterDelegate, MMFinderLiveSongDataMgrExt, WCActionSheetDelegate>
{
    BOOL _isDataEnd; // +0x8
    BOOL _isAutoPausing; // +0x9
    BOOL _prepardForSEIMessage; // +0xa
    BOOL _isAudience; // +0xb
    BOOL _isBackFromDisappear; // +0xc
    NSString * _targetVisibleSongName; // +0x10
    id /* block */ _audienceOrderSongCallback; // +0x18
    id /* block */ _anchorSingSongCallback; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    long long _currentState; // +0x30
    UIView * _panelView; // +0x38
    MMFinderLiveMusicSettingOperationNavBar * _navBar; // +0x40
    UIImageView * _noMusicImgView; // +0x48
    MMUILabel * _noMusicTitleLabel; // +0x50
    MMUILabel * _noMusicTipLabel; // +0x58
    UIButton * _addMusicButton; // +0x60
    UIView * _tableHeaderView; // +0x68
    MMUILabel * _musicNameTipLabel; // +0x70
    MMUILabel * _heartValueLabel; // +0x78
    MMFinderLiveSongSettingTableView * _musicTableView; // +0x80
    MMFinderLiveMusicRelatedSettingTableFooterView * _footerView; // +0x88
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x90
    MMFinderLiveSongSettingOperationTableViewModel * _musicTableViewModel; // +0x98
    MMFinderLiveMusicTableViewBottomEditingBar * _tableEditingBar; // +0xa0
    NSString * _currentSingingSongName; // +0xa8
    UIView * _songEnableSwitchBGView; // +0xb0
    MMUILabel * _songEnableSwitchLabel; // +0xb8
    UISwitch * _songEnableSwitch; // +0xc0
    CGPoint _previousPanPos; // +0xc8
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 isAudience:(BOOL)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (BOOL)shouldAdaptToDarkLight;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPanelView;
- (void)layoutNavBar;
- (void)layoutActivityIndicatorView;
- (void)layoutNoMusicImgView;
- (void)layoutNoMusicTitleLabel;
- (void)layoutNoMusicTipLabel;
- (void)layoutAddMusicButton;
- (void)layoutMucisTableView;
- (void)layoutTableEditingBar;
- (void)updateWidgetsHidden;
- (BOOL)isInLive;
- (id)musicTableViewModel;
- (void)setCurrentState:(long long)arg1;
- (void)setIsDataEnd:(BOOL)arg1;
- (void)createMusicNameTipLabel;
- (void)createHeartValueLabel;
- (void)createSongEnableSwitchViews;
- (BOOL)enableLiveSongs;
- (void)adjustUIForMusicTableEditingModeChanged;
- (double)getMusicTableHeight;
- (double)getMusicTableTop;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateCurrentStateWithRefreshUI:(BOOL)arg1;
- (void)handleMusicSettingOperationTap:(long long)arg1 open:(BOOL)arg2;
- (void)updatePageSheetConfigForSettingStateChanged;
- (id)createOperationTableFooterView;
- (void)reloadUpdateOperationTableHeader;
- (void)updateOperationTableHeader;
- (BOOL)shouldShowHeaderSwitchViews;
- (id)createOperationTableHeaderView;
- (double)getTableHeaderHeight;
- (void)updateTableHeaderViewWidgetsOrigin;
- (void)startGetMusicDataListInNormalMode;
- (id)getSortedSongItemList:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)showConfirmDisableSingSongSheet;
- (void)pageSheetWillAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onSongEnableSwitchChanged:(id)arg1;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)addButtonAction;
- (void)handleMusicTableInteractivePanGesture:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)loadData;
- (void)onSongSettingTableDataLoaded;
- (void)onSongSettingTableDataCleared;
- (void)onSongSettingTableDataBeginEdit;
- (void)onSongSettingTableDataEndEdit:(BOOL)arg1;
- (void)onSongSettingTableDidScroll;
- (void)onSongSettingTableDataDeleteDateItem:(id)arg1 atIndexPath:(id)arg2;
- (void)onSongSettingTableDataDidSelect:(id)arg1 isInEditing:(BOOL)arg2;
- (void)onSongSettingTableDataDidFinishSing:(id)arg1;
- (void)onSongSettingTableDataDidChangeSing:(id)arg1;
- (void)synchronizeModifiedSongItemArray:(id)arg1;
- (void)onSongSettingTableDataDeleteDidSelectInEditingMode:(BOOL)arg1;
- (void)onSongSettingTableDataDeleteDataItemList:(id)arg1;
- (void)onSongSettingTableAllDataCountChanged:(unsigned long long)arg1;
- (void)onSongSettingTableDataSelectAllStateChanged:(BOOL)arg1;
- (void)updateDataLoadedTitleWithCount:(unsigned long long)arg1;
- (void)addSongPanel:(id)arg1 didCloseWithLatestSongs:(id)arg2;
- (void)autoEnableLiveSongsIfNeeded;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)setSingSongEnabled:(BOOL)arg1;
- (id)currentLiveTask;
- (void)postAnchorSingingSong:(id)arg1;
- (id)targetVisibleSongName;
- (void)setTargetVisibleSongName:(id)arg1;
- (id /* block */)audienceOrderSongCallback;
- (void)setAudienceOrderSongCallback:(id /* block */)arg1;
- (id /* block */)anchorSingSongCallback;
- (void)setAnchorSingSongCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentState;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)noMusicImgView;
- (void)setNoMusicImgView:(id)arg1;
- (id)noMusicTitleLabel;
- (void)setNoMusicTitleLabel:(id)arg1;
- (id)noMusicTipLabel;
- (void)setNoMusicTipLabel:(id)arg1;
- (id)addMusicButton;
- (void)setAddMusicButton:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)musicNameTipLabel;
- (void)setMusicNameTipLabel:(id)arg1;
- (id)heartValueLabel;
- (void)setHeartValueLabel:(id)arg1;
- (id)musicTableView;
- (void)setMusicTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setMusicTableViewModel:(id)arg1;
- (id)tableEditingBar;
- (void)setTableEditingBar:(id)arg1;
- (BOOL)isDataEnd;
- (CGPoint)previousPanPos;
- (void)setPreviousPanPos:(CGPoint)arg1;
- (BOOL)isAutoPausing;
- (void)setIsAutoPausing:(BOOL)arg1;
- (BOOL)prepardForSEIMessage;
- (void)setPrepardForSEIMessage:(BOOL)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)currentSingingSongName;
- (void)setCurrentSingingSongName:(id)arg1;
- (BOOL)isBackFromDisappear;
- (void)setIsBackFromDisappear:(BOOL)arg1;
- (id)songEnableSwitchBGView;
- (void)setSongEnableSwitchBGView:(id)arg1;
- (id)songEnableSwitchLabel;
- (void)setSongEnableSwitchLabel:(id)arg1;
- (id)songEnableSwitch;
- (void)setSongEnableSwitch:(id)arg1;
- (void).cxx_destruct;
@end
