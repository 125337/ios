@interface WAAgentSessionPage : UIView <WAAgentSessionNavBarDelegate, UITableViewDataSource, UITableViewDelegate, WAAgentSessionTextCellDelegate, WAAgentSessionSuggestionsCellDelegate, WAAgentSessionContainerCellDelegate, WAAgentInputNewPanelDelegate>
{
    BOOL _darkModeEnabled; // +0x8
    BOOL _navBarHidden; // +0x9
    BOOL _autoScrollDisabled; // +0xa
    BOOL _isHeaderLoading; // +0xb
    id <WAAgentSessionPageDelegate> _delegate; // +0x10
    NSString * _appID; // +0x18
    WAContact * _contact; // +0x20
    WAAgentInputNewPanel * _inputNewPanel; // +0x28
    WAAgentSessionNavBar * _navBar; // +0x30
    UITableView * _tableView; // +0x38
    NSString * _currentSessionId; // +0x40
    unsigned long long _displayMode; // +0x48
    unsigned long long _presentMode; // +0x50
    NSLayoutConstraint * _inputPanelBottomConstraint; // +0x58
    double _inputPanelBottomOffset; // +0x60
    double _scrollDistance; // +0x68
    NSMutableArray * _sessionIds; // +0x70
    NSMutableDictionary * _sessionViewModels; // +0x78
    double _currentKeyboardHeight; // +0x80
    UIView * _bottomBlurView; // +0x88
    CAGradientLayer * _bottomBlurGradientLayer; // +0x90
    NSString * _thinkingWindowStartMessageId; // +0x98
    NSString * _thinkingWindowEndMessageId; // +0xa0
    long long _state; // +0xa8
    UITapGestureRecognizer * _tapGesture; // +0xb0
    unsigned long long _messageIdCounter; // +0xb8
    NSMutableSet * _registeredContainerCellIds; // +0xc0
    double _extraScrollFooterHeight; // +0xc8
    NSMutableDictionary * _pendingFrameSetViewMap; // +0xd0
    WAWatermarkView * _waterMarkView; // +0xd8
    UIView * _headerView; // +0xe0
    MMUIActivityIndicatorView * _headerLoadingView; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 displayMode:(unsigned long long)arg2 presentMode:(unsigned long long)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)onAppear;
- (void)releaseOffScreenContainers;
- (void)releaseOffScreenContainersForViewModel:(id)arg1;
- (void)didTakeSnapshot;
- (void)printVisibleContainerCellTreeView;
- (void)setupNavBarWithPosition:(unsigned long long)arg1 displayMode:(unsigned long long)arg2 presentMode:(unsigned long long)arg3;
- (void)setupTableView;
- (void)setupWaterMarkView;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setNavBarHidden:(BOOL)arg1;
- (void)switchToFullScreenAnimated:(BOOL)arg1;
- (void)switchToPageSheetAnimated:(BOOL)arg1;
- (void)switchToPresentMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updateDisplayMode:(unsigned long long)arg1;
- (void)onAgentNavBarBackButtonClick;
- (id)allSessionIds;
- (id)createNewSession;
- (unsigned int)generateSessionId;
- (void)createSessionWithId:(id)arg1;
- (void)switchToSessionWithId:(id)arg1;
- (void)removeAllSessions;
- (id)generateMessageId;
- (id)currentSessionViewModel;
- (void)addItem:(id)arg1 autoScroll:(BOOL)arg2;
- (BOOL)currentSessionContainSameItem:(id)arg1;
- (void)addItems:(id)arg1 isAppendingTail:(BOOL)arg2 autoScroll:(BOOL)arg3;
- (void)updateItem:(id)arg1;
- (void)updateItem:(id)arg1 withOldMessageId:(id)arg2;
- (void)stopAndCollapseLastRunningThinkingCell;
- (void)collapseLastRunningThinkingCellKeepingState;
- (void)removeItem:(id)arg1;
- (void)handleItem:(id)arg1 autoScroll:(BOOL)arg2;
- (void)removeRowWithViewModel:(id)arg1 animate:(BOOL)arg2;
- (void)setThinkingVisibleWindowFromMessageId:(id)arg1 toMessageId:(id)arg2;
- (void)updateThinkingWindowMask;
- (void)scrollToThinkingWindowStartAnimated:(BOOL)arg1;
- (double)thinkingWindowStartOffsetY;
- (void)clampScrollToThinkingWindow;
- (void)pinThinkingWindowOffsetSync;
- (void)pinThinkingWindowOffsetSyncIfNeeded;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToCurrentSessionAnimated:(BOOL)arg1;
- (void)scrollToItemWithMessageId:(id)arg1 animated:(BOOL)arg2;
- (long long)sectionIndexForSessionId:(id)arg1;
- (id)sessionViewModelAtSection:(long long)arg1;
- (unsigned long long)indexForMessageId:(id)arg1 inSessionVM:(id)arg2;
- (double)cellHeightForViewModel:(id)arg1;
- (double)contentHeightForSection:(long long)arg1;
- (double)spacerHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textCell:(id)arg1 didTapMiniAppLink:(id)arg2 path:(id)arg3 linkContent:(id)arg4;
- (void)textCell:(id)arg1 didTapLink:(id)arg2;
- (void)handleThinkingCellTapLink:(id)arg1;
- (void)textCellDidUpdateHeight:(id)arg1;
- (void)textCell:(id)arg1 didTriggerCardAction:(id)arg2;
- (BOOL)textCellShouldUseFixedLayoutWidth:(id)arg1;
- (void)suggestionsCell:(id)arg1 didTapSuggestion:(id)arg2;
- (long long)getState;
- (void)setState:(long long)arg1;
- (id)currentContainerCell;
- (id)containerCellContainingContainerId:(unsigned int)arg1;
- (id)indexPathForContainerId:(unsigned int)arg1;
- (double)currentRoundChatContentHeight;
- (double)currentRoundChatContentHeightForWidth:(double)arg1;
- (double)cellHeightForViewModel:(id)arg1 width:(double)arg2;
- (id)lastMessageIdInCurrentSession;
- (id)currentRoundFirstUserMessageId;
- (id)cellViewModelContainingContainerId:(unsigned int)arg1;
- (void)requestSessionContainer:(id)arg1 renderCardData:(id)arg2 autoScroll:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)setFrameSetView:(id)arg1 forContainerId:(unsigned int)arg2 frameId:(unsigned int)arg3;
- (void)markContainerExpired:(unsigned int)arg1 expiredText:(id)arg2;
- (id)frameSetViewForContainerId:(unsigned int)arg1;
- (void)updateRelatedPage:(id)arg1 forContainerId:(unsigned int)arg2;
- (void)cleanupViewModelStackForContainerId:(unsigned int)arg1;
- (void)updateScrollViewContentSizeForFrameSetViewSizeChange:(id)arg1;
- (void)updateContainerCellHeightForFrameSetView:(id)arg1;
- (void)containerCellDidTapExpandButton:(id)arg1;
- (void)containerCell:(id)arg1 didChangeContentHeight:(double)arg2 rootContainerId:(unsigned int)arg3;
- (void)containerCell:(id)arg1 requestRecoverFrameSetViewForContainerId:(unsigned int)arg2 containerSize:(CGSize)arg3 sectionId:(id)arg4;
- (void)setAppID:(id)arg1;
- (void)setupInputPanel;
- (void)setupBottomBlurView;
- (void)layoutBottomBlurView;
- (void)setInputPeakPower:(float)arg1;
- (void)sessionPageViewWillDisappear;
- (void)inputPanel:(id)arg1 didSendText:(id)arg2 images:(id)arg3 fileItems:(id)arg4;
- (void)inputPanelDidStartVoicePress:(id)arg1;
- (void)inputPanelDidEndVoicePress:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (void)inputPanelDidCancelVoicePress:(id)arg1;
- (void)inputPanelDidTapInput:(id)arg1;
- (void)inputPanelDidClickPlusButton:(id)arg1;
- (void)inputPanelDidExposeAttachmentPanel:(id)arg1;
- (void)inputPanelDidClickPhotoButton:(id)arg1;
- (void)inputPanelDidClickCameraButton:(id)arg1;
- (void)inputPanelDidClickFileButton:(id)arg1;
- (void)inputPanel:(id)arg1 didPreviewImageAtIndex:(long long)arg2;
- (void)inputPanel:(id)arg1 didPreviewFileAtIndex:(long long)arg2;
- (void)inputPanel:(id)arg1 keyboardWillShowWithHeight:(double)arg2;
- (void)inputPanel:(id)arg1 keyboardWillHideWithHeight:(double)arg2;
- (void)adjustScrollViewIfLastCellObscuredByKeyboardHeight:(double)arg1;
- (void)onInputPanelResign;
- (void)forceRedrawAllStreamTextViews;
- (void)invalidateAllCachedHeights;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appID;
- (BOOL)darkModeEnabled;
- (void)setDarkModeEnabled:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)inputNewPanel;
- (void)setInputNewPanel:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (BOOL)navBarHidden;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)currentSessionId;
- (void)setCurrentSessionId:(id)arg1;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (unsigned long long)presentMode;
- (void)setPresentMode:(unsigned long long)arg1;
- (id)inputPanelBottomConstraint;
- (void)setInputPanelBottomConstraint:(id)arg1;
- (double)inputPanelBottomOffset;
- (void)setInputPanelBottomOffset:(double)arg1;
- (double)scrollDistance;
- (void)setScrollDistance:(double)arg1;
- (id)sessionIds;
- (void)setSessionIds:(id)arg1;
- (id)sessionViewModels;
- (void)setSessionViewModels:(id)arg1;
- (double)currentKeyboardHeight;
- (void)setCurrentKeyboardHeight:(double)arg1;
- (id)bottomBlurView;
- (void)setBottomBlurView:(id)arg1;
- (id)bottomBlurGradientLayer;
- (void)setBottomBlurGradientLayer:(id)arg1;
- (id)thinkingWindowStartMessageId;
- (void)setThinkingWindowStartMessageId:(id)arg1;
- (id)thinkingWindowEndMessageId;
- (void)setThinkingWindowEndMessageId:(id)arg1;
- (long long)state;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)autoScrollDisabled;
- (void)setAutoScrollDisabled:(BOOL)arg1;
- (unsigned long long)messageIdCounter;
- (void)setMessageIdCounter:(unsigned long long)arg1;
- (id)registeredContainerCellIds;
- (void)setRegisteredContainerCellIds:(id)arg1;
- (double)extraScrollFooterHeight;
- (void)setExtraScrollFooterHeight:(double)arg1;
- (id)pendingFrameSetViewMap;
- (void)setPendingFrameSetViewMap:(id)arg1;
- (id)waterMarkView;
- (void)setWaterMarkView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerLoadingView;
- (void)setHeaderLoadingView:(id)arg1;
- (BOOL)isHeaderLoading;
- (void)setIsHeaderLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
