@interface WCOutContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCActionSheetDelegate, UISearchBarDelegate, WCOutInviteFriendLogicDelegate, MMImageLoaderObserver, WCSearchDelegate>
{
    MMTableView * m_tableView; // +0x70
    MMUIView * m_noDataView; // +0x78
    UIImageView * redDotView; // +0x80
    UIButton * m_callBtn; // +0x88
    NSMutableDictionary * m_allContactsDic; // +0x90
    NSMutableArray * m_sectionKeyArray; // +0x98
    NSMutableDictionary * m_nonAddressBookContactsDic; // +0xa0
    NSMutableDictionary * m_contactToArchiveDic; // +0xa8
    NSMutableArray * m_lastCallArchives; // +0xb0
    double m_lastScrollViewOffset; // +0xb8
    MMTimer * m_hideIndexTitleTimer; // +0xc0
    long long m_lastScrollTime; // +0xc8
    NSString * m_curLanguage; // +0xd0
    WCOutPhoneContact * m_selectedContactInActionSheet; // +0xd8
    NSArray * m_phoneArrayShowInActionSheet; // +0xe0
    BOOL _bShowIndexTitle; // +0xe8
    BOOL _isSearching; // +0xe9
    NSArray * _fliterContacts; // +0xf0
    NSString * _searchText; // +0xf8
    WCOutInviteFriendLogic * _inviteFriendLogic; // +0x100
    MMUILabel * _balanceLabel; // +0x108
    MMUILabel * _packageLabel; // +0x110
    MMUILabel * _discountLabel; // +0x118
    UIButton * _callbtn; // +0x120
    UIView * _activityView; // +0x128
    MMUIImageView * _activityImgView; // +0x130
    WCOActivityMsgInfo * _activityInfo; // +0x138
    WCSearcher * _searcher; // +0x140
}
- (id)init;
- (void)viewDidLoad;
- (void)setupDeepLinkConfig;
- (void)viewWillAppear:(BOOL)arg1;
- (void)configModel;
- (void)configView;
- (void)configData;
- (void)configSearchDisplayController;
- (void)configAccuntSection;
- (void)configRecentCallContacts;
- (void)configNoDataHintsLabel;
- (void)configTableView;
- (void)configureBackBarButtomItem;
- (void)showProfileForContact:(id)arg1 AndIsFromLastCallContact:(BOOL)arg2;
- (void)deleteRecentCallItemAtIndex:(long long)arg1;
- (void)setBShowIndexTitle:(BOOL)arg1;
- (void)OnOpenAccount;
- (void)onClickBottomBtn;
- (void)hideIndexTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)KeypadAndContactCellAtIndexpath:(id)arg1;
- (void)onCellBtnClick:(id)arg1;
- (id)accountCellAtIndexpath:(id)arg1;
- (id)contactCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 filtercontactCellAtIndexPath:(id)arg2;
- (id)lastCallCellAtRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)updateWCOutContacts:(id)arg1;
- (void)updateWCOutContactsInfo;
- (void)addNewCall:(id)arg1;
- (void)updateNewxmlInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)allContacts;
- (void)search:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)didReceiveCouponResponse;
- (void)refreshbalanceLabel;
- (id)getbalanceLabelText;
- (id)getActivityTips;
- (id)getPackageTitle;
- (double)getAccountCellHeight;
- (void)configActivityView;
- (void)onBackClick:(id)arg1;
- (void)onTryBtnClick:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (BOOL)bShowIndexTitle;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (id)fliterContacts;
- (void)setFliterContacts:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)inviteFriendLogic;
- (void)setInviteFriendLogic:(id)arg1;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg1;
- (id)packageLabel;
- (void)setPackageLabel:(id)arg1;
- (id)discountLabel;
- (void)setDiscountLabel:(id)arg1;
- (id)callbtn;
- (void)setCallbtn:(id)arg1;
- (id)activityView;
- (void)setActivityView:(id)arg1;
- (id)activityImgView;
- (void)setActivityImgView:(id)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void).cxx_destruct;
@end
