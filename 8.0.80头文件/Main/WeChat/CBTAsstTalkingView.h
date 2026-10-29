@interface CBTAsstTalkingView : UIView <CBTAsstBottomPanelDelegate, CBTAsstBoardViewDelegate, UIGestureRecognizerDelegate, MMEdgeTipsViewDelegate, CBTAsstReddotObserverBase, IMMFontMgrExt, CBTTalkingViewOptionalProtocol>
{
    BOOL _isHalfScreenMode; // +0x8
    BOOL _showTempChatTips; // +0x9
    BOOL _isMicOpen; // +0xa
    BOOL _lastTTSClickPlayingSnapshot; // +0xb
    BOOL _pendingViewportReserveOnKeyboardHide; // +0xc
    BOOL _pendingPanelRaiseRestoreForKeyboardHide; // +0xd
    BOOL _selectBottomBarForwardOnly; // +0xe
    int _openScene; // +0x10
    unsigned int _viewStatus; // +0x14
    unsigned long long _halfScreenSourceType; // +0x18
    id <CBTAsstTalkingViewDelegate> _delegate; // +0x20
    ChatBotVoIPRoomInfo * _roomInfo; // +0x28
    MMUIButton * _notionBtn; // +0x30
    MMUIButton * _backBtn; // +0x38
    MMUIButton * _ttsReadBtn; // +0x40
    CBTAsstBottomPanel * _bottomPanel; // +0x48
    NSDictionary * _pendingShortcutBarReportExtraParams; // +0x50
    NSArray * _pendingLocalShortcutItems; // +0x58
    CBTAsstBoardView * _boardView; // +0x60
    UILabel * _centerLabel; // +0x68
    UILabel * _subTitleLabel; // +0x70
    UIView * _titleContainerView; // +0x78
    UIButton * _settingsBtn; // +0x80
    NSLayoutConstraint * _bottomPanelBottomConstraint; // +0x88
    NSLayoutConstraint * _boardViewBottomToVoiceInputBtnConstraint; // +0x90
    NSLayoutConstraint * _boardViewBottomToShortcutBarConstraint; // +0x98
    UITapGestureRecognizer * _dismissKeyboardOnBoardTapGes; // +0xa0
    MMEdgeTipsView * _edgeTipsView; // +0xa8
    UIView * _titleFadeView; // +0xb0
    CAGradientLayer * _titleFadeLayer; // +0xb8
    UIView * _selectNavBar; // +0xc0
    UILabel * _selectCountLabel; // +0xc8
    UIView * _navSeparatorView; // +0xd0
    UIView * _selectBottomBar; // +0xd8
    UIView * _subagentSelectView; // +0xe0
    UIView * _subagentSelectBgView; // +0xe8
    UIView * _subagentSelectContentView; // +0xf0
    CBTSubagentSelectCardView * _subagentSelectMineView; // +0xf8
    CBTSubagentSelectCardView * _subagentSelectAgentView; // +0x100
    UIView * _subagentSelectCollapseBtn; // +0x108
    MMBadgeView * _settingsReddotView; // +0x110
    CBTAsstReddotObserver * _reddotObserver; // +0x118
}
- (id)pendingReferMsgForCurrentFeatureState;
- (id)edgeTipsTextColor;
- (id)headerArrowImage;
- (id)backButtonImage;
- (id)edgeTipsImage;
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3 delegate:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3 delegate:(id)arg4 isHalfScreenMode:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3 delegate:(id)arg4 isHalfScreenMode:(BOOL)arg5 halfScreenSourceType:(unsigned long long)arg6;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)selectModeOverlayBackgroundColor;
- (void)layoutContentViews;
- (void)layoutNotionBtn;
- (void)onNotionBtnClick;
- (void)layoutSettingsBtn;
- (void)onUpdate;
- (void)onNewbieAnimationAvailable;
- (void)refreshSettingsReddot;
- (void)attachPressedFeedbackToNavButton:(id)arg1;
- (void)_onNavBtnTouchDown:(id)arg1;
- (void)_onNavBtnTouchUp:(id)arg1;
- (void)layoutTTSReadBtn;
- (void)updateTTSReadBtnIconWithEnabled:(BOOL)arg1;
- (void)setupTTSReadBtnReporting;
- (void)reportTTSReadBtnExp;
- (void)onTTSReadBtnClick;
- (void)tryAutoReadAloudCurrentRoundIfNeeded;
- (id)lastAIAnswerTraceMsgidIfStreaming;
- (BOOL)handleToggleTTSReadEnabled;
- (void)refreshTTSReadStateFromCpp;
- (void)layoutCenterLayout;
- (void)layoutNavSeparator;
- (void)_updateNavSeparatorColor;
- (void)onTitleClick:(id)arg1;
- (void)onCenterLabelPress:(id)arg1;
- (void)onSubagentSelectDismiss;
- (void)showSubagentSelectView;
- (void)hideSubagentSelectView;
- (void)layoutBackBtn;
- (void)close;
- (void)layoutBottomPanel;
- (void)updateShowTempChatTips:(BOOL)arg1;
- (void)layoutBoardView;
- (void)updateShortcutBarReportExtraParams:(id)arg1;
- (void)updateLocalShortcutItems:(id)arg1;
- (void)layoutSubagentSelectView;
- (void)layoutEdgeTipsView;
- (void)onClickEdgeTipsView:(id)arg1;
- (void)showEdgeTipsWithTitle:(id)arg1;
- (void)hideEdgeTips;
- (void)refreshTheme;
- (void)appendSubagentNameToTitle:(id)arg1;
- (void)removeSubagentNameFromTitle:(id)arg1;
- (void)updateSubagentSelectMineAvatarImage:(id)arg1 mineName:(id)arg2 agentAvatarUrl:(id)arg3 agentName:(id)arg4;
- (void)scrollBoardCellToTopWithIndexPath:(id)arg1;
- (void)openMic;
- (void)openMicWithImages:(id)arg1;
- (void)openMicWithImages:(id)arg1 filePaths:(id)arg2 fileNames:(id)arg3;
- (void)openMicWithImages:(id)arg1 filePaths:(id)arg2 fileNames:(id)arg3 micBizInfo:(id)arg4;
- (void)closeMic:(BOOL)arg1 images:(id)arg2;
- (void)closeMic:(BOOL)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5;
- (void)closeMic:(BOOL)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 chatUsernames:(id)arg6;
- (void)rebindVoipSession;
- (id)voipSession;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 images:(id)arg3;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 images:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 displayFilePaths:(id)arg6;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 images:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 displayFilePaths:(id)arg6 chatUsernames:(id)arg7;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 images:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 displayFilePaths:(id)arg6 chatUsernames:(id)arg7 micBizInfo:(id)arg8;
- (void)updateMicrophoneFromExternalInput:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 chatUsernames:(id)arg6;
- (void)updateMicrophoneFromExternalInput:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 chatUsernames:(id)arg6 micBizInfo:(id)arg7;
- (void)onStopButtonClick;
- (void)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2;
- (void)bottomPanel:(id)arg1 insertImages:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)insertMultimodalCard:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)onDirectRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2;
- (void)insertImages:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 chatUsernames:(id)arg6;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 chatUsernames:(id)arg8;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3 fileNames:(id)arg4 displayFilePaths:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 chatUsernames:(id)arg8 referMsg:(id)arg9;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2 filePaths:(id)arg3;
- (void)sendTextToBoard:(id)arg1 images:(id)arg2;
- (void)bottomPanelDidEndRecording:(id)arg1 recordName:(id)arg2 duration:(double)arg3 meetingId:(id)arg4;
- (void)bottomPanelDidBlockPendingUserASR:(id)arg1;
- (void)bottomPanel:(id)arg1 didSelectShortcutItem:(id)arg2;
- (void)bottomPanelViewStatusDidChange:(unsigned int)arg1;
- (void)bottomPanelContentLayoutDidChange:(id)arg1;
- (BOOL)returnToLatestMessageForBottomPanelInteractionIfNeeded;
- (void)syncBoardViewBottomAnchorForShortcutBar;
- (id)voiceInputOverlayHostBoardView;
- (double)getBottomPanelTopYInWindow;
- (void)onBottomPanelTopSeparatorShouldVisible:(BOOL)arg1;
- (void)onReferWithMessage:(id)arg1;
- (double)getNavSeparatorBottomYInWindow;
- (void)onNavSeparatorShouldVisible:(BOOL)arg1;
- (void)updateBoardViewBaselineBottom;
- (void)updateBoardViewBaselineBottomWithRetry:(long long)arg1;
- (void)syncBoardViewAdjustmentForPanel;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (BOOL)hasUserSentContent;
- (BOOL)isInAnsweringRound;
- (BOOL)isWaitingForTurnComplete;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)onFontSizeChange;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)syncNativeKeyboardHiddenWithoutAnimation;
- (void)restoreKeyboardIfNeeded;
- (void)checkKeyboardState;
- (void)resetKeyboardStateForHalfScreen;
- (BOOL)isOwningViewControllerOnTop;
- (void)boardView:(id)arg1 onResendWithText:(id)arg2 agent:(id)arg3 images:(id)arg4 filePaths:(id)arg5 fileNames:(id)arg6 displayFilePaths:(id)arg7 chatUsernames:(id)arg8 referMsg:(id)arg9;
- (void)boardViewDidEnterMultiSelectMode:(id)arg1;
- (void)boardViewDidExitMultiSelectMode:(id)arg1;
- (void)boardViewDidScroll:(id)arg1;
- (void)boardView:(id)arg1 didUpdateNavSeparatorVisible:(BOOL)arg2;
- (void)boardView:(id)arg1 multiSelectCountChanged:(long long)arg2;
- (void)_showSelectNavBarAndBottomBar;
- (void)_hideSelectNavBarAndBottomBar;
- (void)_ensureSelectNavBar;
- (void)_ensureSelectBottomBarWithForwardOnly:(BOOL)arg1;
- (void)_layoutSelectNavBarIfNeeded;
- (void)_layoutSelectBottomBarIfNeeded;
- (void)_onSelectCancelTapped;
- (void)_onAppDidBecomeActiveForMSExitBug:(id)arg1;
- (void)_onAppWillResignActiveForMSExitBug:(id)arg1;
- (void)_onSelectForwardTapped;
- (void)_onDeleteConfirmTapped;
- (void)onBoardViewTapped;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)notifyVisibleCellsOnAppear;
- (id)getScrollView;
- (double)getBottomPanelTopY;
- (id)boardDataController;
- (void)snapshotTTSPlayStateForReport;
- (void)exitMultiSelectMode;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (unsigned long long)halfScreenSourceType;
- (void)setHalfScreenSourceType:(unsigned long long)arg1;
- (BOOL)showTempChatTips;
- (void)setShowTempChatTips:(BOOL)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (BOOL)lastTTSClickPlayingSnapshot;
- (void)setLastTTSClickPlayingSnapshot:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (unsigned int)viewStatus;
- (void)setViewStatus:(unsigned int)arg1;
- (id)notionBtn;
- (void)setNotionBtn:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)ttsReadBtn;
- (void)setTtsReadBtn:(id)arg1;
- (id)bottomPanel;
- (void)setBottomPanel:(id)arg1;
- (id)pendingShortcutBarReportExtraParams;
- (void)setPendingShortcutBarReportExtraParams:(id)arg1;
- (id)pendingLocalShortcutItems;
- (void)setPendingLocalShortcutItems:(id)arg1;
- (id)boardView;
- (void)setBoardView:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)settingsBtn;
- (void)setSettingsBtn:(id)arg1;
- (id)bottomPanelBottomConstraint;
- (void)setBottomPanelBottomConstraint:(id)arg1;
- (id)boardViewBottomToVoiceInputBtnConstraint;
- (void)setBoardViewBottomToVoiceInputBtnConstraint:(id)arg1;
- (id)boardViewBottomToShortcutBarConstraint;
- (void)setBoardViewBottomToShortcutBarConstraint:(id)arg1;
- (id)dismissKeyboardOnBoardTapGes;
- (void)setDismissKeyboardOnBoardTapGes:(id)arg1;
- (BOOL)pendingViewportReserveOnKeyboardHide;
- (void)setPendingViewportReserveOnKeyboardHide:(BOOL)arg1;
- (BOOL)pendingPanelRaiseRestoreForKeyboardHide;
- (void)setPendingPanelRaiseRestoreForKeyboardHide:(BOOL)arg1;
- (id)edgeTipsView;
- (void)setEdgeTipsView:(id)arg1;
- (id)titleFadeView;
- (void)setTitleFadeView:(id)arg1;
- (id)titleFadeLayer;
- (void)setTitleFadeLayer:(id)arg1;
- (id)selectNavBar;
- (void)setSelectNavBar:(id)arg1;
- (id)selectCountLabel;
- (void)setSelectCountLabel:(id)arg1;
- (id)navSeparatorView;
- (void)setNavSeparatorView:(id)arg1;
- (id)selectBottomBar;
- (void)setSelectBottomBar:(id)arg1;
- (id)subagentSelectView;
- (void)setSubagentSelectView:(id)arg1;
- (id)subagentSelectBgView;
- (void)setSubagentSelectBgView:(id)arg1;
- (id)subagentSelectContentView;
- (void)setSubagentSelectContentView:(id)arg1;
- (id)subagentSelectMineView;
- (void)setSubagentSelectMineView:(id)arg1;
- (id)subagentSelectAgentView;
- (void)setSubagentSelectAgentView:(id)arg1;
- (id)subagentSelectCollapseBtn;
- (void)setSubagentSelectCollapseBtn:(id)arg1;
- (id)settingsReddotView;
- (void)setSettingsReddotView:(id)arg1;
- (id)reddotObserver;
- (void)setReddotObserver:(id)arg1;
- (BOOL)selectBottomBarForwardOnly;
- (void)setSelectBottomBarForwardOnly:(BOOL)arg1;
- (void).cxx_destruct;
@end
