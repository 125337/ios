@interface MMFinderLiveInteractionWishSettingPanel : MMLandscapeDragBarPageSheet <MMFinderLiveInteractionTypeSelectionCellDelegate, MMFinderLiveInteractionCountEditCellDelegate, MMFinderLiveInteractionTextEditCellDelegate>
{
    BOOL _skipFetchOnShowForAiAssistant; // +0x8
    BOOL _disableSetPerformanceName; // +0x9
    BOOL _isKeyBoardShowing; // +0xa
    int _currentInteractionType; // +0xc
    id <MMFinderLiveInteractionWishSettingPanelDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    WCTableViewManager * _tableViewManager; // +0x20
    InteractionWishConfig * _interactionWishConfig; // +0x28
    NSArray * _enableConfigInteractionTypes; // +0x30
    NSArray * _defaultWishConfigList; // +0x38
    double _currentKeyBoardHeight; // +0x40
    MMFinderLiveInteractionCountEditCell * _countEditCell; // +0x48
    MMFinderLiveInteractionTextEditCell * _wishContentEditCell; // +0x50
}
- (id)initWithTaskId:(id)arg1 interactionWishConfig:(id)arg2 enableConfigInteractionTypes:(id)arg3 defaultWishConfigList:(id)arg4 disableSetPerformanceName:(BOOL)arg5;
- (void)setupPageSheetConfig;
- (BOOL)shouldShowPortraitDragBar;
- (void)showWithAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateDetailViewHeight;
- (void)configureDoneButton;
- (void)configureOptionTableView;
- (void)addSettingSections;
- (void)addInteractionTypeOptionsSection;
- (void)addTargetCountEditSection;
- (void)addWishContentEditSection;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)updateInteractionWishConfig;
- (void)onTapped;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onClickMMFinderLiveInteractionTypeSelectionCellContent:(int)arg1;
- (void)onCountEditInputUpdated:(unsigned long long)arg1;
- (void)onTextEditInputUpdated;
- (id)getDefaultInteractionWishConfigByType:(int)arg1;
- (id)defaultTargetCountTextForInteractionType:(int)arg1;
- (void)logDefaultWishConfigList;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (double)tableViewWidth;
- (double)fixedHeight;
- (id)liveTask;
- (id)cornerShapeWithSize:(CGSize)arg1 byRoundingCorners:(unsigned long long)arg2;
- (id)headerViewWithTitle:(id)arg1 height:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)skipFetchOnShowForAiAssistant;
- (void)setSkipFetchOnShowForAiAssistant:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)interactionWishConfig;
- (void)setInteractionWishConfig:(id)arg1;
- (id)enableConfigInteractionTypes;
- (void)setEnableConfigInteractionTypes:(id)arg1;
- (id)defaultWishConfigList;
- (void)setDefaultWishConfigList:(id)arg1;
- (BOOL)disableSetPerformanceName;
- (void)setDisableSetPerformanceName:(BOOL)arg1;
- (BOOL)isKeyBoardShowing;
- (void)setIsKeyBoardShowing:(BOOL)arg1;
- (double)currentKeyBoardHeight;
- (void)setCurrentKeyBoardHeight:(double)arg1;
- (int)currentInteractionType;
- (void)setCurrentInteractionType:(int)arg1;
- (id)countEditCell;
- (void)setCountEditCell:(id)arg1;
- (id)wishContentEditCell;
- (void)setWishContentEditCell:(id)arg1;
- (void).cxx_destruct;
@end
