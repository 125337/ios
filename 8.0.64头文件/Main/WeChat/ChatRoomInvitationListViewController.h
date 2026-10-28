@interface ChatRoomInvitationListViewController : MMUIViewController <ChatRoomInvitationMgrExt, UITableViewDelegate, UITableViewDataSource, IContactMgrExt, ChatRoomInvitationMultiMenuTableViewCellDelegate>
{
    unsigned int _unReadCount; // +0x70
    CContact * _roomContact; // +0x78
    long long _source; // +0x80
    ChatRoomInvitationContactProfileLogic * _contactProfileLogic; // +0x88
    UILabel * _emptyTipsLabel; // +0x90
    MMTableView * _tableView; // +0x98
    NSMutableArray * _arrInvitations; // +0xa0
    UIView * _hasReadSectionHeaderView; // +0xa8
}
- (void)viewDidLoad;
- (void)initData;
- (void)reloadData;
- (void)updateContacts:(id)arg1;
- (void)initView;
- (id)getChatRoomInvitationListEmptyTips;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (BOOL)shouldRestrictContentViewSize;
- (Class)getChatRoomInvitationMultiMenuTableViewCellClass;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 invitationWrap:(id)arg2;
- (void)addMultiMenu:(id)arg1 invitationWrap:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)shouldShowHasReadSectionHeaderViewForSection:(long long)arg1;
- (void)makeHasReadSectionHeaderView;
- (void)onTapApproveForChatRoomInvitation:(id)arg1;
- (void)onOpenContactProfile:(id)arg1 invitationWrap:(id)arg2;
- (void)onOpenMsgHistoryOfContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onReceiveNewChatRoomInvitation:(id)arg1;
- (void)onChatRoomInvitationStatusUpdated:(id)arg1;
- (void)onReplaceOldChatRoomInvitation:(id)arg1 withNewInvitation:(id)arg2;
- (void)onApproveChatRoomInvitation:(id)arg1 success:(BOOL)arg2 errInfo:(id)arg3;
- (void)handelApproveChatRoomInvitation:(id)arg1 success:(BOOL)arg2 errInfo:(id)arg3;
- (BOOL)checkCanTapApproveForChatRoomInvitation:(id)arg1;
- (id)getCircleButtonImage:(id)arg1 coler:(id)arg2;
- (double)hasReadSectionHeaderHeight;
- (id)roomContact;
- (void)setRoomContact:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (unsigned int)unReadCount;
- (void)setUnReadCount:(unsigned int)arg1;
- (id)contactProfileLogic;
- (void)setContactProfileLogic:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)arrInvitations;
- (void)setArrInvitations:(id)arg1;
- (id)hasReadSectionHeaderView;
- (void)setHasReadSectionHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
