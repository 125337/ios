@interface WCClassifyMembersViewController : MMUIViewController <WCActionSheetDelegate, MMTableViewDelegate, NewChatRoomMemberItemViewDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, WCFacadeExt, WCCreateNewGroupViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    WCGroup * _group; // +0x68
    NSMutableArray * _arrGroupTempMember; // +0x70
    NSString * _tempGroupName; // +0x78
    NSMutableDictionary * _dicGroupOutsiderMember; // +0x80
    NSMutableDictionary * _dicGroupMemberView; // +0x88
    NSMutableArray * _arrGroupMember; // +0x90
    MMTableView * _tableView; // +0x98
    BOOL _deleteStatus; // +0xa0
    WCOpLog * _wcOpLog; // +0xa8
    BOOL m_hasAddMemberWhenOnDone; // +0xb0
    BOOL m_hasDelMemberWhenOnDone; // +0xb1
    BOOL m_hasReturnAddMemberResponse; // +0xb2
    BOOL m_hasReturnDelMemberResponse; // +0xb3
    double m_defaultGroupCellHeight; // +0xb8
    WCSnsPrivacyReporter * m_snsReporter; // +0xc0
}
- (id)getDefaultGroupName;
- (id)getGroupName;
- (void)updateTitle;
- (void)updateNavigation;
- (long long)getColCount;
- (void)makeGroupNameCell:(id)arg1;
- (void)loadMemberList;
- (void)loadOutsiderMembers;
- (void)initData;
- (void)initBlacklistFooterView;
- (void)initOutsiderFooterView;
- (void)initFooterView;
- (void)initView;
- (void)startLoadingWithTitle:(id)arg1;
- (void)stopLoading;
- (void)reloadMemberListAndView;
- (void)reloadMember:(id)arg1;
- (void)initGroupTempMember;
- (id)initWithWCGroup:(id)arg1;
- (void)onDismiss;
- (BOOL)shouldModGroup;
- (void)onCancel;
- (void)modOutsiderGroup;
- (void)resetBlackListControlStatus;
- (void)onDone;
- (void)onSelectRoundCell;
- (void)showAlert:(id)arg1;
- (void)tryDeleteGroup;
- (void)onDeleteGroup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)OnWCCreatNewGroupName:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onLongPressEx:(id)arg1;
- (void)setShowRemoveMember;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCDeleteGroupReturn:(BOOL)arg1 groupID:(id)arg2;
- (void)processModContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getDefaultGroupCellHeight;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)initSnsReporter;
- (void)doSnsReportAfterCgiSuccess;
- (id)dicGroupMemberView;
- (void)setDicGroupMemberView:(id)arg1;
- (id)arrGroupTempMember;
- (void)setArrGroupTempMember:(id)arg1;
- (id)arrGroupMember;
- (void)setArrGroupMember:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (id)tempGroupName;
- (void)setTempGroupName:(id)arg1;
- (id)dicGroupOutsiderMember;
- (void)setDicGroupOutsiderMember:(id)arg1;
- (void).cxx_destruct;
@end

