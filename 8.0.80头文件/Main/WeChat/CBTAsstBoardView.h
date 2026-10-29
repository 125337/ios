@interface CBTAsstBoardView : UIView <ICBTAsstBoardDataControllerExt, IChatBotVoIPSessionDelegate, CBTAsstBoardDataControllerDelegate>
{
    BOOL _skipFirstGreetingBubble; // +0x8
    BOOL _showTempChatTips; // +0x9
    BOOL _isHalfScreenMode; // +0xa
    BOOL _recordingAdjustmentActive; // +0xb
    id <CBTAsstBoardViewDelegate> _delegate; // +0x10
    ChatBotVoIPSession * _voipSession; // +0x18
    CBTAsstBoardDataController * _dataController; // +0x20
    unsigned long long _halfScreenSourceType; // +0x28
    UITableView * _tableView; // +0x30
    UIView * _voiceInputSolidOverlayView; // +0x38
    CGPoint _savedContentOffset; // +0x40
}
- (void)setVoipSession:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initDataController;
- (void)setSkipFirstGreetingBubble:(BOOL)arg1;
- (void)setSkipFirstGreetingBubbleForBoardAndDataController:(BOOL)arg1;
- (void)setIsHalfScreenModeForBoardAndDataController:(BOOL)arg1;
- (void)updateShowTempChatTips:(BOOL)arg1;
- (void)setupHalfScreenTempChatTipsHeader;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutTableView;
- (void)cleanupScreenWithNeedClearData:(BOOL)arg1;
- (void)stopAllStream;
- (void)terminateCurrentDialogue;
- (void)terminateCurrentDialogueWithWeAppInterruptType:(long long)arg1;
- (void)handleOpenMicEvent;
- (void)handleCloseMicEvent:(BOOL)arg1 referMsg:(id)arg2;
- (void)stopWeAppProcess;
- (void)stopLoading;
- (void)stopThinking;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3 referMsg:(id)arg4;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 referMsg:(id)arg3;
- (void)refreshTheme;
- (BOOL)hasUserSentContent;
- (void)increaseTableViewContentOffsetY:(double)arg1;
- (BOOL)needScrollLastVMToVisiableWhenKeyboardShow:(double)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onBoardFontSizeChanged;
- (void)onBoardEnterMultiSelectMode;
- (void)onBoardExitMultiSelectMode;
- (void)onBoardMultiSelectCountChanged:(long long)arg1;
- (void)exitMultiSelectMode;
- (id)selectedViewModels;
- (BOOL)isInMultiSelectMode;
- (void)forwardSelectedViewModels;
- (void)copySelectedViewModels;
- (void)confirmDeleteSelectedDialogues;
- (void)subAgentRemoveWithSubagentId:(id)arg1 isNeedLoading:(BOOL)arg2;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)onSetMicrophoneMute:(BOOL)arg1;
- (void)scrollToRowAtIndex:(long long)arg1;
- (void)insertImages:(id)arg1 referMsg:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)insertFiles:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)insertFiles:(id)arg1 uploadFilePaths:(id)arg2 uploadState:(unsigned long long)arg3 completeHandle:(id /* block */)arg4;
- (void)insertFiles:(id)arg1 uploadFilePaths:(id)arg2 fileNames:(id)arg3 uploadState:(unsigned long long)arg4 referMsg:(id)arg5 completeHandle:(id /* block */)arg6;
- (void)insertChats:(id)arg1 referMsg:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)insertMultimodalCard:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)onDirectRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2;
- (void)sendRecordCardToBoard:(id)arg1 duration:(double)arg2 meetingId:(id)arg3;
- (void)blockPendingUserASR;
- (void)onRecvA2UIDefinition:(id)arg1;
- (void)createAndAddViewModelForLayoutId:(id)arg1 layoutData:(id)arg2 callInput:(id)arg3;
- (id)createUserSelectViewModelWithLayoutData:(id)arg1 isSingleUser:(BOOL)arg2 callInput:(id)arg3;
- (id)createSendConfirmViewModelWithLayoutData:(id)arg1 callInput:(id)arg2;
- (id)createCallPickerViewModelWithLayoutData:(id)arg1 callInput:(id)arg2;
- (void)scrollCellToTableViewTopWithIndexPath:(id)arg1;
- (void)reserveBottomSlackForViewportGrow:(double)arg1;
- (void)refreshBottomBlankAfterViewportChange;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)notifyVisibleCellsOnAppear;
- (void)pauseAndDiscardViewModelsWithTraceMsgId:(id)arg1;
- (id)getScrollView;
- (BOOL)returnToLatestMessageForBottomPanelInteractionWithCompletion:(id /* block */)arg1;
- (void)adjustForRecordingWithOverlayView:(id)arg1 lastNonBlankCellPadding:(double)arg2 animated:(BOOL)arg3;
- (void)restoreBottomInsetAdjustmentAnimated:(BOOL)arg1;
- (void)onResendWithText:(id)arg1 agent:(id)arg2 images:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 displayFilePaths:(id)arg6 chatUsernames:(id)arg7 referMsg:(id)arg8;
- (double)getBottomPanelTopYInWindow;
- (void)onBottomPanelTopSeparatorShouldVisible:(BOOL)arg1;
- (void)onReferWithMessage:(id)arg1;
- (double)getNavSeparatorBottomYInWindow;
- (void)onNavSeparatorShouldVisible:(BOOL)arg1;
- (id)boardHostViewController;
- (void)recheckBottomPanelOverlapWithBubble;
- (id)voiceInputSolidOverlayResolvedColor;
- (void)showVoiceInputSolidOverlay;
- (void)hideVoiceInputSolidOverlay;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voipSession;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (BOOL)skipFirstGreetingBubble;
- (unsigned long long)halfScreenSourceType;
- (void)setHalfScreenSourceType:(unsigned long long)arg1;
- (BOOL)showTempChatTips;
- (void)setShowTempChatTips:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (BOOL)recordingAdjustmentActive;
- (void)setRecordingAdjustmentActive:(BOOL)arg1;
- (CGPoint)savedContentOffset;
- (void)setSavedContentOffset:(CGPoint)arg1;
- (id)voiceInputSolidOverlayView;
- (void)setVoiceInputSolidOverlayView:(id)arg1;
- (void).cxx_destruct;
@end
