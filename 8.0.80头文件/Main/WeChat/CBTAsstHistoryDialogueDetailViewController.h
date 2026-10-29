@interface CBTAsstHistoryDialogueDetailViewController : MMUIViewController <CBTAsstBoardDataControllerDelegate, ICBTAsstBoardDataControllerExt>
{
    BOOL _didInitialLoad; // +0x70
    BOOL _selectBottomBarForwardOnly; // +0x71
    MMTableView * _tableView; // +0x78
    CBTAsstHistoryBoardDataController * _dataController; // +0x80
    NSData * _bubbleExtraInfo; // +0x88
    UIView * _selectBottomBar; // +0x90
    UIButton * _forwardButton; // +0x98
    UIButton * _deleteButton; // +0xa0
    NSString * _originalTitle; // +0xa8
}
- (id)initWithBubbleExtraInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (id)navigationTitleColor;
- (BOOL)useBlackStatusbar;
- (void)setupNavigationBar;
- (void)onBack;
- (void)setupTableView;
- (void)triggerInitialLoad;
- (double)getBottomPanelTopYInWindow;
- (void)onBottomPanelTopSeparatorShouldVisible:(BOOL)arg1;
- (double)getNavSeparatorBottomYInWindow;
- (void)onNavSeparatorShouldVisible:(BOOL)arg1;
- (void)onResendWithText:(id)arg1 agent:(id)arg2 images:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 displayFilePaths:(id)arg6 chatUsernames:(id)arg7 referMsg:(id)arg8;
- (id)boardHostViewController;
- (void)onBoardEnterMultiSelectMode;
- (void)onBoardExitMultiSelectMode;
- (void)onBoardMultiSelectCountChanged:(long long)arg1;
- (void)ensureSelectBottomBarWithForwardOnly:(BOOL)arg1;
- (void)layoutSelectBottomBarButtons;
- (void)onForwardTapped;
- (void)onDeleteTapped;
- (void)onMultiSelectCancel;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)bubbleExtraInfo;
- (void)setBubbleExtraInfo:(id)arg1;
- (BOOL)didInitialLoad;
- (void)setDidInitialLoad:(BOOL)arg1;
- (id)selectBottomBar;
- (void)setSelectBottomBar:(id)arg1;
- (id)forwardButton;
- (void)setForwardButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (BOOL)selectBottomBarForwardOnly;
- (void)setSelectBottomBarForwardOnly:(BOOL)arg1;
- (id)originalTitle;
- (void)setOriginalTitle:(id)arg1;
- (void).cxx_destruct;
@end
