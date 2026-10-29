@interface WCFinderMsgChatInfoViewController : MMUIViewController <WCFinderMsgSessionMgrExt, WCFinderFansProfileViewControllerDelegate>
{
    id <WCFinderMsgChatInfoViewControllerDelegate> _delegate; // +0x68
    CBaseContact * _myRoleContact; // +0x70
    CBaseContact * _sessionContact; // +0x78
    CBaseContact * _realChatContact; // +0x80
    MMTableViewInfo * _tableViewMgr; // +0x88
    WCFinderMsgChatInfoReporter * _reporter; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setReportChatSessionId:(id)arg1;
- (void)fetchLatestMsgSessionState;
- (void)initView;
- (void)reloadTableViewData;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)openContactInfo;
- (void)onBlockSwitchChange:(id)arg1;
- (void)onClearAllMessage:(id)arg1;
- (void)onExpose:(id)arg1;
- (BOOL)isContactBlocked;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)myRoleContact;
- (void)setMyRoleContact:(id)arg1;
- (id)sessionContact;
- (void)setSessionContact:(id)arg1;
- (id)realChatContact;
- (void)setRealChatContact:(id)arg1;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

