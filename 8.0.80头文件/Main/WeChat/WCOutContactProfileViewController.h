@interface WCOutContactProfileViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate, WCOutInviteFriendLogicDelegate>
{
    WCOutPhoneContact * m_contact; // +0x70
    MMTableView * m_tableView; // +0x78
    NSMutableArray * m_sectionKeyArray; // +0x80
    NSMutableArray * m_cellKeyForOtherSectionArray; // +0x88
    NSArray * m_recentCallLists; // +0x90
    NSArray * m_phoneLists; // +0x98
    double m_nameLabel_X; // +0xa0
    BOOL m_isShowAllRecentCallCell; // +0xa8
    BOOL m_isShowGreenBtn; // +0xa9
    CContactVerifyLogic * m_oContactVerifyLogic; // +0xb0
    MMHDHeadImageView * m_HDHeadImageView; // +0xb8
    WCOutInviteFriendLogic * _inviteFriendLogic; // +0xc0
}
- (id)initWithWCOutPhoneContact:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)configData;
- (void)configTableView;
- (void)configTableViewHeaderView;
- (void)configTableViewFooterView;
- (void)configModel;
- (void)savePhoneNumToAddressBook;
- (void)showAllRecentCallItems;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)showAllRecentCallCell;
- (id)baseInfoCellWithInfo:(id)arg1;
- (id)phoneWithLabelCellAtRow:(unsigned long long)arg1 InTableView:(id)arg2;
- (id)recentCallCellAtRow:(unsigned long long)arg1;
- (int)numberOfRowForRecentCallSection;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgOK;
- (void)onSendVerifyMsgCancel;
- (void)addNewCall:(id)arg1;
- (void)updateWCOutContacts:(id)arg1;
- (void)updateWCOutContactsInfo;
- (id)inviteFriendLogic;
- (void)setInviteFriendLogic:(id)arg1;
- (void).cxx_destruct;
@end
