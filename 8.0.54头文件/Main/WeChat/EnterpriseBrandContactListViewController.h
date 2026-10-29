@interface EnterpriseBrandContactListViewController : MMUIViewController <ForwardMessageLogicDelegate, EnterpriseBrandContactHelperDelegate, IEnterpriseSessionMgrExt, IEnterpriseBizTransferExt, UITableViewDataSource, UITableViewDelegate, contactInfoDelegate, IEnterpriseBrandContactMgrExt, IEnterpriseGroupMgrExt>
{
    ForwardMessageLogicController * m_forwardLogic; // +0x68
    NSMutableArray * _sectionKeyArray; // +0x70
    NSMutableDictionary * _allContactsDic; // +0x78
    CContact * _mainBrandContact; // +0x80
    NSArray * _arySubBrandContact; // +0x88
    MMTableView * _tableView; // +0x90
    MMScrollView * _emptyView; // +0x98
    unsigned int _fromScene; // +0xa0
    unsigned int _statContactCount; // +0xa4
    unsigned int _enterTime; // +0xa8
    EnterpriseBrandContactHelper * _helper; // +0xb0
}
- (id)initWithMainContact:(id)arg1 fromScene:(unsigned int)arg2;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)reportEnter;
- (void)reportSubBrandEnter:(id)arg1 SubType:(int)arg2;
- (void)reportQuit;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)getViewController;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (void)openInviteColleages;
- (id)getCurrentViewController;
- (void)openDisabledBrandList:(id)arg1;
- (void)openEnterpriseChat;
- (void)openMainBrandInfo:(id)arg1;
- (void)makeChatBrandCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)onCleanUpEnterpriseChat:(id)arg1;
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(id)arg2 shareInfo:(id)arg3 mainBrandUserName:(id)arg4;
- (void)registerYReportSdk;
- (void).cxx_destruct;
@end

