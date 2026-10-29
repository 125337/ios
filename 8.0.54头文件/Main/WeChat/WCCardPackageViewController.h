@interface WCCardPackageViewController : MMUIViewController <IWCCardPkgExt, WCCardDataControllerDelegate, PBMessageObserverDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, UISearchBarDelegate, UITableViewDelegate, IWCCardPkgExt>
{
    double _headViewHeight; // +0x68
    UIButton * _messageTipView; // +0x70
    UIButton * _messageTipViewForShare; // +0x78
    WCCardDataController * _myCardDataController; // +0x80
    WCCardPackageTableView * _myCardTableView; // +0x88
    UIView * _myCardFooterView; // +0x90
    UIScrollView * _myCardLoadingView; // +0x98
    MMUIActivityIndicatorView * _mgCardActivityView; // +0xa0
    UIButton * _myCardHeadView; // +0xa8
    unsigned int _myCardMinUpdateTime; // +0xb0
    MMUISearchBar * _searchBar; // +0xb8
    UISegmentedControl * _segmentedControl; // +0xc0
    double _enterTimeForState; // +0xc8
    BOOL fromAddEntrance; // +0xd0
    BOOL hasAlreadyGetCardLayout; // +0xd1
    BOOL fromShareCardList; // +0xd2
    BOOL _fromMoreViewController; // +0xd3
    id <WCCardPackageViewControllerDelegate> delegate; // +0xd8
}
- (void)initMyCardData;
- (void)initMyCardTableView;
- (void)initMyCardLoadingView;
- (void)loadMoreMyCard;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onSyncEnd:(BOOL)arg1;
- (void)onGetFirstPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(BOOL)arg3 HasBatchGeting:(BOOL)arg4;
- (void)onGetNextPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(BOOL)arg3 HasBatchGeting:(BOOL)arg4;
- (void)onWCCardUpdate:(id)arg1;
- (void)onGetCardLayout;
- (void)onGetCardLayoutStop;
- (void)onWCCardTips;
- (id)getViewController;
- (void)showTableView;
- (void)showLoadingView;
- (BOOL)isFromAddEntrance;
- (double)getViewHeight;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (id)getMyCardTableView;
- (void)onLoadMoreMyCardData;
- (void)stopLoadMoreAnimation;
- (void)scrollToShareCard;
- (void)stopActivityLoading;
- (void)updateTableFooterHasMore:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)initNavigationBar;
- (void)onShowAllMessage;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutTableView;
- (BOOL)shouldInteractiveDismiss;
- (void)onRightButtonOP;
- (void)onCancel;
- (void)gotoMsgCenterViewControllerForNewMsg:(BOOL)arg1;
- (void)showMessageListByMore;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (BOOL)hasEnterCardListBefore;
- (void)setHasEnterCardListBefore;
- (BOOL)hasUnreadMessage;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)initHeaderViewWithLastMsg:(id)arg1;
- (id)genNewMessageTipView:(id)arg1;
- (id)getCardMsgTipWording;
- (void)showMessageListByNewMsg;
- (BOOL)fromAddEntrance;
- (void)setFromAddEntrance:(BOOL)arg1;
- (BOOL)hasAlreadyGetCardLayout;
- (void)setHasAlreadyGetCardLayout:(BOOL)arg1;
- (BOOL)fromShareCardList;
- (void)setFromShareCardList:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)fromMoreViewController;
- (void)setFromMoreViewController:(BOOL)arg1;
- (void).cxx_destruct;
@end

