@interface MMFinderLiveCreateVoteViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveCreateVoteHeaderTableViewCellDelegate, WCActionSheetDelegate, MMFinderLiveVoteDurationPickerViewDelegate, MMTableViewDelegate>
{
    MMTableView * _tableView; // +0x70
    UIView * _tableViewHeaderBackgroundView; // +0x78
    MMFinderLiveLiveVoteItem * _voteItem; // +0x80
    MMFinderLiveLiveVoteChoice * _editingChoice; // +0x88
    MMFinderLiveLiveVoteChoice * _deletingChoice; // +0x90
    NSIndexPath * _indexPathToActivate; // +0x98
    MMFinderLiveCreateVoteHeaderTableViewCell * _headerCell; // +0xa0
    FixTitleColorButton * _confirmButton; // +0xa8
    double _keyboardHeight; // +0xb0
    MMFinderLiveTaskId * _taskId; // +0xb8
    UIView * _sectionRoundView; // +0xc0
    id /* block */ _successBlock; // +0xc8
    MMFinderLiveVoteDurationPickerView * _durationPickerView; // +0xd0
    MMFinderLiveLiveVoteItem * _prefillItem; // +0xd8
}
+ (void)presentCreateVoteInViewController:(id)arg1 taskId:(id)arg2 successBlock:(id /* block */)arg3;
+ (id)createVoteViewControllerWithTaskId:(id)arg1 successBlock:(id /* block */)arg2;
+ (id)createVoteViewControllerWithTaskId:(id)arg1 prefillItem:(id)arg2 successBlock:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutYAxisForConfirmButtonAndTableView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)initNavBar;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)initConfirmButton;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)mmTableView:(id)arg1 shouldPassHitTest:(CGPoint)arg2 withEvent:(id)arg3;
- (void)handleTableViewPan:(id)arg1;
- (BOOL)handleItemShouldBeginEditing:(id)arg1;
- (void)handleItemDeletingChanged:(id)arg1 deleting:(BOOL)arg2;
- (void)handleItemEndEditing:(id)arg1;
- (void)deleteItem:(id)arg1 correspondingIndexPath:(id)arg2;
- (void)addNewChoice:(BOOL)arg1;
- (void)createVoteHeaderCell:(id)arg1 didUpdateQuestion:(id)arg2;
- (void)createVoteHeaderCellWillBeginEditing:(id)arg1;
- (void)createVoteHeaderCellDidClickSelectionTypeButton:(id)arg1;
- (void)createVoteHeaderCellDidClickDurationLimitButton:(id)arg1;
- (id)createRoundedSectionHeaderView;
- (void)updateConfirmButtonEnableState:(id)arg1;
- (id)editingChoiceIndexPath;
- (id)indexPathForChoice:(id)arg1;
- (void)resignAllActiveCells;
- (void)onHistoryButtonClick;
- (void)onBackButtonClicked:(id)arg1;
- (void)onConfirmButtonClicked;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)liveVoteDurationPickerView:(id)arg1 didSelectDuration:(unsigned long long)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewHeaderBackgroundView;
- (void)setTableViewHeaderBackgroundView:(id)arg1;
- (id)voteItem;
- (void)setVoteItem:(id)arg1;
- (id)editingChoice;
- (void)setEditingChoice:(id)arg1;
- (id)deletingChoice;
- (void)setDeletingChoice:(id)arg1;
- (id)indexPathToActivate;
- (void)setIndexPathToActivate:(id)arg1;
- (id)headerCell;
- (void)setHeaderCell:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)sectionRoundView;
- (void)setSectionRoundView:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id)durationPickerView;
- (void)setDurationPickerView:(id)arg1;
- (id)prefillItem;
- (void)setPrefillItem:(id)arg1;
- (void).cxx_destruct;
@end
