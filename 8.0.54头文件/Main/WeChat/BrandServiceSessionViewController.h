@interface BrandServiceSessionViewController : BrandSessionViewController <WCActionSheetDelegate, BrandPaySubcribeMgrExt>
{
    BOOL _canShowPersonalCenter; // +0x70
    id <IBrandEcsSessionViewControllerDelegate> _delegate; // +0x78
    BrandSessionTableFooter * _tableFooter; // +0x80
    NSMutableSet * _clickSet; // +0x88
    NSArray * _arrSessionInfo; // +0x90
}
- (id)init;
- (void)initNavigationBar;
- (void)onClickNavBarRightBtn;
- (void)configueShowRedDotOnRightBarBtn:(BOOL)arg1;
- (void)onNavBackBarButtonClicked;
- (void)viewDidLoad;
- (void)loadData;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)report27270:(int)arg1;
- (void)showActionSheetForRightButton;
- (void)addPaySubscribeEntryToActionSheet:(id)arg1;
- (void)addEntryToActionSheet:(id)arg1 withMenuInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellDataAtIndex:(long long)arg1;
- (id)getContactAtIndex:(long long)arg1;
- (void)deleteSessionOnTableView:(id)arg1 indexPath:(id)arg2;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)reportUnfollowSubscribe:(id)arg1 andUnread:(unsigned int)arg2;
- (void)onUpdateUserPaySubcribeEntry:(BOOL)arg1 entryUrl:(id)arg2;
- (id)tableFooter;
- (void)reportOnClickItem:(id)arg1;
- (void)registerExt;
- (void)unRegisterExt;
- (void)onNeedReload;
- (void)reloadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)canShowPersonalCenter;
- (void)setCanShowPersonalCenter:(BOOL)arg1;
- (void)setTableFooter:(id)arg1;
- (id)clickSet;
- (void)setClickSet:(id)arg1;
- (id)arrSessionInfo;
- (void)setArrSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end

