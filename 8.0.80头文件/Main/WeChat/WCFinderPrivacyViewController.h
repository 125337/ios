@interface WCFinderPrivacyViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCMomentsContactTagListViewControllerDelegate, MultiSelectContactsViewControllerDelegate, IContactLabelMgrExt, WCCreateNewGroupDemoViewControllerDelegate>
{
    unsigned int _createTagEventId; // +0x70
    id <WCFinderPrivacyViewControllerDelegate> _delegate; // +0x78
    WCFinderPrivacyViewModel * _viewModel; // +0x80
    UITableView * _tableView; // +0x88
    WCCreateNewGroupDemoViewController * _groupVC; // +0x90
    NSString * _createTagName; // +0x98
    NSMutableSet * _undeterminedContactSet; // +0xa0
    NSMutableSet * _contactSetImportFromGroup; // +0xa8
    NSMutableSet * _contactSetNotImportFromGroup; // +0xb0
}
- (void)onSaveAsNewTag;
- (void)handleMultiSelectContactReturn:(id)arg1;
- (void)handleMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)handleTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)contactNamesComponentsJoinedByComma:(id)arg1;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateViewModel;
- (void)initView;
- (void)initNavBarButton;
- (void)initTableView;
- (long long)currentPrivacy;
- (id)currentItem;
- (void)updateWithViewModel:(id)arg1;
- (void)updateWithSelectedContactSet:(id)arg1;
- (void)updateWithSelectedContactTags:(id)arg1;
- (void)updateWithAllContactsSelected:(BOOL)arg1;
- (BOOL)hasSelectedContactsOrTags;
- (BOOL)scopeHasChanged;
- (void)updateWithSaveAsTag:(id)arg1;
- (void)reloadTableView;
- (void)resizeTableFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onReturn;
- (void)onDone;
- (void)showShouldSelectOneLeastAlert;
- (void)showHasChangeShareScopeAlert;
- (void)openAddFromTag;
- (void)openAddFromFriend;
- (BOOL)canSelectPrivacySetting:(long long)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactCancelForSns;
- (BOOL)onMultiSelectContactCompleted:(id)arg1 finished:(BOOL)arg2;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)groupVC;
- (void)setGroupVC:(id)arg1;
- (id)createTagName;
- (void)setCreateTagName:(id)arg1;
- (unsigned int)createTagEventId;
- (void)setCreateTagEventId:(unsigned int)arg1;
- (id)undeterminedContactSet;
- (void)setUndeterminedContactSet:(id)arg1;
- (id)contactSetImportFromGroup;
- (void)setContactSetImportFromGroup:(id)arg1;
- (id)contactSetNotImportFromGroup;
- (void)setContactSetNotImportFromGroup:(id)arg1;
- (void).cxx_destruct;
@end
