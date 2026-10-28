@interface EnterpriseContactInfoViewController : MMUIViewController <MMWebViewDelegate, EnterpriseMemberViewDelegate, WCActionSheetDelegate, IEnterpriseGroupMgrExt, IEnterpriseContactMgrExt>
{
    CEnterpriseContact * _enterpriseContact; // +0x70
    NSString * _myUserName; // +0x78
    NSMutableArray * _memberDataItemList; // +0x80
    NSMutableArray * _memberViewList; // +0x88
    BOOL _isMuteChanged; // +0x90
    BOOL _isFavoriteChanged; // +0x91
    BOOL _isTopChanged; // +0x92
    BOOL _isChatStatusNotifyOpen; // +0x93
    BOOL _isFavorite; // +0x94
    BOOL _isTop; // +0x95
    BOOL _isDeleteButtonHidden; // +0x96
    BOOL _chatConfig; // +0x97
    MMTableViewInfo * _tableViewInfo; // +0x98
    unsigned int _colCount; // +0xa0
}
- (id)initWithEnterpriseContact:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)initTableViewInfo;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)updateTitleView;
- (void)updateTableFooterView;
- (void)reloadTableViewInfo;
- (id)makeChatRoomSection;
- (id)makeSettingSection;
- (id)makeMemberListSection;
- (void)makeMemberCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)onQuitButtonClicked:(id)arg1;
- (void)quitChatRoom;
- (void)openEditTitle;
- (void)setGroupName:(id)arg1;
- (void)setMuteStatus:(id)arg1;
- (void)setFavStatus:(id)arg1;
- (void)setTopStatus:(id)arg1;
- (void)updateContactSetting;
- (void)enterEnterpriseChat:(id)arg1;
- (void)updateDeleteButtonHidden:(BOOL)arg1;
- (void)switchDeleteButtonHidden;
- (BOOL)isContactInRoomMember:(id)arg1;
- (void)onEnterpriseMemberHeadImageClick:(id)arg1;
- (void)onEnterpriseMemberHeadImageLongPress:(id)arg1;
- (void)onEnterpriseMemberViewDelete:(id)arg1;
- (void)onEnterpriseMemberViewAdd:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupName:(id)arg1 errorCode:(int)arg2;
- (void).cxx_destruct;
@end
