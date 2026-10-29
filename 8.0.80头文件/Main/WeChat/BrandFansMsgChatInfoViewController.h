@interface BrandFansMsgChatInfoViewController : MMUIViewController <BrandFansContactMgrExt, BrandFansContactProfileControllerDelegate>
{
    id <BrandFansMsgChatInfoViewControllerDelegate> _delegate; // +0x70
    BrandFansContact * _fansContact; // +0x78
    BrandFansMsgSessionInfo * _sessionInfo; // +0x80
    MMTableViewInfo * _tableViewMgr; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)initView;
- (void)clickLinkAction;
- (void)reloadTableViewData;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)openContactInfo;
- (void)onClearAllMessage:(id)arg1;
- (void)deleteMsgAction;
- (void)onExpose:(id)arg1;
- (void)brandFansContactUpdatedForOpenID:(id)arg1 contact:(id)arg2;
- (void)clickViewDetailInController:(id)arg1;
- (void)clickBlockContactInController:(id)arg1;
- (void)confirmBlockContact;
- (void)clickUnblockContactInController:(id)arg1;
- (void)clickViewProfileInController:(id)arg1;
- (void)goToBizProfileWithUsername:(id)arg1;
- (void)goToFinderProfileWithUsername:(id)arg1;
- (void)clickSendMessageInController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fansContact;
- (void)setFansContact:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (void).cxx_destruct;
@end
