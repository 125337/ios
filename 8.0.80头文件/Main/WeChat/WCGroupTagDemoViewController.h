@interface WCGroupTagDemoViewController : MMUIViewController <WCCreateNewGroupDemoViewControllerDelegate, WCFacadeExt, GroupSelectContactsViewControllerDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long m_originPrivacy; // +0x70
    long long m_currentPrivacy; // +0x78
    BOOL m_privacyGroupHidden; // +0x80
    NSMutableArray * m_arrAllLabelName; // +0x88
    NSMutableSet * m_currentLabelName; // +0x90
    NSMutableSet * m_originLabelName; // +0x98
    MMTableView * m_tableView; // +0xa0
    BOOL m_hasTryTransferLabel; // +0xa8
    NSMutableDictionary * m_dicGroupLabel; // +0xb0
    unsigned int m_transferEventId; // +0xb8
    long long m_transferPrivacy; // +0xc0
    double m_originContentOffset; // +0xc8
    BOOL m_bShowDetail; // +0xd0
    WCCreateNewGroupDemoViewController * newGroup; // +0xd8
    NSMutableSet * m_contactSetImportFromGroup; // +0xe0
    NSMutableSet * m_contactSetNotImportFromGroup; // +0xe8
    BOOL m_privacyGroupAndVisibleHidden; // +0xf0
    BOOL _isImportTagFromGroupEnable; // +0xf1
    BOOL _isMultiSelectOpenForChatroom; // +0xf2
    unsigned int _createTagEventId; // +0xf4
    id <WCGroupTagViewControllerDelegate> m_delegate; // +0xf8
    NSString * m_title; // +0x100
    NSArray * _tmpSelectContact; // +0x108
    unsigned long long _sourceScene; // +0x110
    NSString * _createTagName; // +0x118
    NSArray * _undeterminedTempContacts; // +0x120
    NSArray * _originTmpSelectContacts; // +0x128
    NSArray * _tmpSelectChatroomContacts; // +0x130
}
- (id)init;
- (id)initWithOriginPrivacy:(long long)arg1 originContact:(id)arg2 originLabel:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (id)getAllTmpSelectArray;
- (void)setM_privacyGroupAndVisibleHidden:(BOOL)arg1;
- (void)reloadAllTableView;
- (void)onWCGroupUpdated;
- (void)willShow;
- (id)loadAllTagNameList;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (int)getCellType:(id)arg1;
- (BOOL)isSelected:(int)arg1 postPrivacy:(long long)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showTransferTip;
- (void)onShowTransferTipConfirm;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)canSelectPrivacySetting:(long long)arg1;
- (void)onDataChange;
- (BOOL)hasChangePrivacy;
- (void)onReturn;
- (void)onDone;
- (void)openAddFromChatroom;
- (void)editContactLabels;
- (void)onAllTagNameUpdate;
- (void)selectContacts;
- (void)createNewLabel:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onSaveAsNewGroup;
- (void)onMultiSelectContactCancelForSns;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)sortAndSaveSnsGroupLabel;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)deleteOldSnsGroup;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)contactNamesComponentsJoinedByComma:(id)arg1;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reportSaveNewGroupAlertAction:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_privacyGroupHidden;
- (void)setM_privacyGroupHidden:(BOOL)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (BOOL)m_privacyGroupAndVisibleHidden;
- (id)tmpSelectContact;
- (void)setTmpSelectContact:(id)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (unsigned int)createTagEventId;
- (void)setCreateTagEventId:(unsigned int)arg1;
- (id)createTagName;
- (void)setCreateTagName:(id)arg1;
- (id)undeterminedTempContacts;
- (void)setUndeterminedTempContacts:(id)arg1;
- (id)originTmpSelectContacts;
- (void)setOriginTmpSelectContacts:(id)arg1;
- (BOOL)isImportTagFromGroupEnable;
- (void)setIsImportTagFromGroupEnable:(BOOL)arg1;
- (id)tmpSelectChatroomContacts;
- (void)setTmpSelectChatroomContacts:(id)arg1;
- (BOOL)isMultiSelectOpenForChatroom;
- (void)setIsMultiSelectOpenForChatroom:(BOOL)arg1;
- (void).cxx_destruct;
@end
