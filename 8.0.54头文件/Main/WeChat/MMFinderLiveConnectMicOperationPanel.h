@interface MMFinderLiveConnectMicOperationPanel : MMPageSheetBaseView <UIGestureRecognizerDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicContainerViewDelegate, MMFinderLiveConnectMicModePageSheetViewDelegate, MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate, MMFinderLiveConnectMicConditionChooseDelegate, MMFinderLiveConnectMicInviteAnchorViewDelegate>
{
    BOOL _enableOperation; // +0x8
    BOOL _isShowing; // +0x9
    BOOL _canAutoConnect; // +0xa
    BOOL _canSelectMicMode; // +0xb
    BOOL _shouldCheckNewMicConditionAfterAppear; // +0xc
    BOOL _isMultiAnchorMicEnabled; // +0xd
    BOOL _isAudiencePkEnable; // +0xe
    id <MMFinderLiveConnectMicOperationPanelDelegate> _actionDelegate; // +0x10
    unsigned long long _panelMode; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _panelView; // +0x28
    MMUnderlineTabsView * _tabsView; // +0x30
    MMFinderLiveConnectMicTabView * _audienceTabView; // +0x38
    MMFinderLiveConnectMicTabView * _anchorTabView; // +0x40
    MMFinderLiveConnectMicAudienceContainerView * _audienceContainerView; // +0x48
    MMFinderLiveConnectMicAnchorContainerView * _anchorContainerView; // +0x50
    unsigned long long _curConditionType; // +0x58
    unsigned long long _micLayoutMode; // +0x60
    MMFinderLiveConnectMicLayoutModeSubtitleWrap * _micLayoutModeSubtitleWrap; // +0x68
    MMFinderLiveConnectMicSearchAudienceView * _searchAudiencePanel; // +0x70
    MMFinderLiveConnectMicBaseContainerView * _currentContainerView; // +0x78
    unsigned long long _pkState; // +0x80
    MMFinderLiveConnectMicIncomingAudienceSettingsPanel * _audienceSettingsPanel; // +0x88
}
+ (id)TabItemWithTabView:(id)arg1;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 panelMode:(unsigned long long)arg3 canSelectMicMode:(BOOL)arg4 conditionType:(unsigned long long)arg5 micLayoutMode:(unsigned long long)arg6 andCanAutoConnect:(BOOL)arg7 isMultiAnchorMicEnabled:(BOOL)arg8 isAudiencePkEnable:(BOOL)arg9;
- (void)setupPageSheetConfig;
- (void)reloadContent;
- (id)makeCloseButton;
- (id)makeSwitchConnectMicModeButton;
- (void)layoutSubviews;
- (void)updatePanelViews;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2 recentRemovedUserList:(id)arg3;
- (void)updateAnchorPanelWithPkInfo:(id)arg1;
- (void)scrollPanelToTopWithTabType:(unsigned long long)arg1;
- (void)showPanelWithTargetTabType:(unsigned long long)arg1;
- (void)restoreAnchorPanelFromPk;
- (void)updateAnchorContainerMicList:(BOOL)arg1;
- (void)configAudienceContainerView;
- (void)showAudienceContainerViewDirectly;
- (void)changeToContainerWithType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updatePanelAppearanceForPkPanel:(BOOL)arg1 targetTabView:(id)arg2;
- (void)updateAudiencePanelMicConditionType:(unsigned long long)arg1;
- (void)updateAudiencePanelMicLayoutMode:(unsigned long long)arg1;
- (void)updateAudiencePanelCanAutoConnect:(BOOL)arg1;
- (void)updateAudiencePanelMicLayoutModeSubtitles:(id)arg1;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)requestPanelInfoForPaidConnectMic;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (unsigned long long)currentTabType;
- (id)tabsView;
- (id)configUnderlineTabsView;
- (id)audienceTabView;
- (id)anchorTabView;
- (BOOL)isOrdinaryLiveMode;
- (BOOL)isPaidConnectMic;
- (void)closeAction;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)onTapSwitchConnectMicMode;
- (void)onFinderLiveConnectMicContainerViewOpenSearchOnlineAnchor;
- (void)onFinderLiveConnectMicContainerViewRandomMatchButtonClicked;
- (void)onFinderLiveConnectMicContainerViewOpenDetailSettingViewForAudienceMic;
- (void)onFinderLiveConnectMicContainerViewChangeConditionTypeAudience:(unsigned long long)arg1;
- (void)onFinderLiveConnectMicContainerViewCloseDetailSettingView;
- (BOOL)onFinderLiveConnectMicContainerViewIsFocusBlocked;
- (void)onFinderLiveConnectMicContainerViewUpdateCanAutoConnect:(BOOL)arg1;
- (void)onFinderLiveConnectMicContainerViewShowSelectMicLayoutModePannel;
- (void)onFinderLiveConnectMicContainerViewShowIncomingAudienceSettingsPanel;
- (void)onFinderLiveConnectMicContainerViewShowSearchAudiencePannelWithMicUserList:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewCloseMic;
- (void)onFinderLiveConnectMicContainerViewInviteAnchorPK:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewInitiateAudiencePk;
- (void)onFinderLiveConnectMicContainerViewShowKtvSongList;
- (void)onFinderLiveConnectMicContainerViewModifyPaidConnectMicSetting;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (void)onConnectMicFocusChangeCanceled;
- (void)onConnectMicConditionChanged:(unsigned long long)arg1;
- (void)onConnectMicAutoConnectChanged:(BOOL)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveInviteAnchorViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveInviteAnchorViewRandomMatchRequested;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 conditionChanged:(unsigned long long)arg2;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 autoConnectChanged:(BOOL)arg2;
- (void)onConnectMicAudienceSettingsPanelClosed:(id)arg1;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicConditionClose;
- (id)getFinderLiveTask;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)enableOperation;
- (void)setEnableOperation:(BOOL)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (unsigned long long)panelMode;
- (void)setPanelMode:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (void)setTabsView:(id)arg1;
- (void)setAudienceTabView:(id)arg1;
- (void)setAnchorTabView:(id)arg1;
- (id)audienceContainerView;
- (void)setAudienceContainerView:(id)arg1;
- (id)anchorContainerView;
- (void)setAnchorContainerView:(id)arg1;
- (unsigned long long)curConditionType;
- (void)setCurConditionType:(unsigned long long)arg1;
- (unsigned long long)micLayoutMode;
- (void)setMicLayoutMode:(unsigned long long)arg1;
- (BOOL)canAutoConnect;
- (void)setCanAutoConnect:(BOOL)arg1;
- (BOOL)canSelectMicMode;
- (void)setCanSelectMicMode:(BOOL)arg1;
- (id)micLayoutModeSubtitleWrap;
- (void)setMicLayoutModeSubtitleWrap:(id)arg1;
- (id)searchAudiencePanel;
- (void)setSearchAudiencePanel:(id)arg1;
- (id)currentContainerView;
- (void)setCurrentContainerView:(id)arg1;
- (BOOL)shouldCheckNewMicConditionAfterAppear;
- (void)setShouldCheckNewMicConditionAfterAppear:(BOOL)arg1;
- (unsigned long long)pkState;
- (void)setPkState:(unsigned long long)arg1;
- (BOOL)isMultiAnchorMicEnabled;
- (void)setIsMultiAnchorMicEnabled:(BOOL)arg1;
- (BOOL)isAudiencePkEnable;
- (void)setIsAudiencePkEnable:(BOOL)arg1;
- (id)audienceSettingsPanel;
- (void)setAudienceSettingsPanel:(id)arg1;
- (void).cxx_destruct;
@end

