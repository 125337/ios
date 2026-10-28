@interface NewRemarkViewPageSheetModeViewController : NewRemarkViewController <MMPageSheetAdapterDelegate>
{
    BOOL m_isHadTriggerFirstResponder; // +0x121
    unsigned int _sectionType; // +0x124
    id <NewRemarkViewPageSheetModeViewDelegate> _pageSheetDelegate; // +0x128
}
- (void)reportNewRemarkViewPageSheetUnexp:(unsigned int)arg1;
- (unsigned int)translateSectionTypeToSource;
- (void)viewDidLoad;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewYInPageSheetMode;
- (id)getRightBarButtonItem;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (double)getTipLeftMargin;
- (double)getDescViewHeight;
- (double)getDescViewOriginHeight;
- (void)DismissRemarkViewControllerAnimated;
- (BOOL)shouldInteractiveDismiss;
- (void)triggerFirstResponder;
- (id)createInitLeftBarItem;
- (void)resetRightBarButtonEnabled;
- (void)initProfileRecommendInfo;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (id)getTableHeaderView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)onClickNewContactTagViewPageSheetDone;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (unsigned int)sectionType;
- (void)setSectionType:(unsigned int)arg1;
- (id)pageSheetDelegate;
- (void)setPageSheetDelegate:(id)arg1;
- (void).cxx_destruct;
@end
