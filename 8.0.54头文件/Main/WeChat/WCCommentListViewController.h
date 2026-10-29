@interface WCCommentListViewController : MMUIViewController <WCCommentListContentViewDelegate, IContactMgrExt, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, IMsgExt, WCFacadeExt, WCActionSheetDelegate, MMRefreshTableFooterDelegate, WCCommentDetailViewControllerFBDelegate, WCImageFullScreeViewMgrExt>
{
    MMTableView * _tableView; // +0x68
    WCTimeLineFooterView * _footerView; // +0x70
    NSMutableArray * _arrCommentList; // +0x78
    NSMutableDictionary * _dicDataItems; // +0x80
    NSMutableArray * _arrCommentListFromDB; // +0x88
    unsigned int _autoGetMoreCount; // +0x90
    BOOL _bUnreadOnly; // +0x94
    BOOL _bHasNullIDs; // +0x95
    BOOL _bHasMoreItems; // +0x96
    NSMutableDictionary * _dicCells; // +0x98
    NSMutableDictionary * _dicCellHeights; // +0xa0
    unsigned int _fromScene; // +0xa8
    unsigned int _totalUnreadCount; // +0xac
    unsigned int _clickLikeCount; // +0xb0
    unsigned int _clickCommentCount; // +0xb4
    unsigned long long _totalBrowseTime; // +0xb8
    WCStatTimerHelper * _statTimeHelper; // +0xc0
    NSMutableSet * updatingItemIDs; // +0xc8
    unsigned long long _enterStartTime; // +0xd0
    NSMutableDictionary * _clickArray; // +0xd8
    BOOL _isNewMessageMuteTipsEnabled; // +0xe0
    BOOL _shouldShowMuteTips; // +0xe1
    WCMomentsPageContext * _pageContext; // +0xe8
    WCCommentEmotionFloatView * _commentEmotionView; // +0xf0
    UIView * _commentEmotionBgView; // +0xf8
    WCSNSMessage * _selectedMessage; // +0x100
    WCImageView * _selectedImageView; // +0x108
    NSMutableSet * _updatedItemIds; // +0x110
    NSMutableSet * _deletedItemIds; // +0x118
    NSString * _triggleMuteTipsItemId; // +0x120
    WCCommentListTipsView * _commentListTipsView; // +0x128
}
- (id)init;
- (void)dealloc;
- (id)pageContext;
- (void)markMessageAllRead;
- (void)viewDidLoad;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)willDisappear;
- (void)viewDidTransitionToNewSize;
- (BOOL)showNavigationBarSepLine;
- (void)reportBrowseMessageListInfo;
- (id)createCommentJson:(id)arg1 isIgnored:(BOOL)arg2;
- (id)getObjIDByWCMessage:(id)arg1;
- (void)addWCMessagesWithArray:(id)arg1 MoreData:(BOOL)arg2;
- (void)getData;
- (void)getMoreData;
- (void)initCommentListTipsView;
- (void)initTableFooterView;
- (void)initTableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)getLoadMoreCell;
- (void)updateCommentCache:(id)arg1;
- (void)updateCacheBySnsObjDeleteMsg:(id)arg1;
- (void)updateCacheBySnsAdNotInterestsMsg:(id)arg1;
- (void)updateCacheByServerPushDeleteAdMsg:(id)arg1;
- (void)updateEditInfo:(id)arg1 indexPath:(id)arg2;
- (id)getRightestViewFor:(id)arg1;
- (BOOL)isCellMarkedAsIgnoreNotification:(id)arg1;
- (double)contentViewHeightExcludeCommentListTipsView;
- (double)contentViewYExcludeCommentListTipsView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openWCCommentDetail:(id)arg1 imageViewForShow:(id)arg2;
- (void)openWCCommentImageView:(id)arg1;
- (void)openWCCommentDetail:(id)arg1 withDataItem:(id)arg2;
- (void)showInvisibleTipsWithMessage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)clearList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onClearList:(id)arg1;
- (void)onRestartUpload;
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onDeleteData;
- (void)onCommentListViewDataChanged:(id)arg1;
- (void)onViewAnimationWillHide;
- (void)onReveiceWCDeleteMessage:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadAdSpecialClick:(id)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (void)commentListContentView:(id)arg1 didClickWCImage:(id)arg2;
- (void)onSetWCMessageNotifyFinished:(long long)arg1 dataItemID:(id)arg2 opFlag:(BOOL)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (BOOL)bUnreadOnly;
- (void)setBUnreadOnly:(BOOL)arg1;
- (void)setPageContext:(id)arg1;
- (id)commentEmotionView;
- (void)setCommentEmotionView:(id)arg1;
- (id)commentEmotionBgView;
- (void)setCommentEmotionBgView:(id)arg1;
- (id)selectedMessage;
- (void)setSelectedMessage:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)updatedItemIds;
- (void)setUpdatedItemIds:(id)arg1;
- (id)deletedItemIds;
- (void)setDeletedItemIds:(id)arg1;
- (id)triggleMuteTipsItemId;
- (void)setTriggleMuteTipsItemId:(id)arg1;
- (BOOL)isNewMessageMuteTipsEnabled;
- (void)setIsNewMessageMuteTipsEnabled:(BOOL)arg1;
- (BOOL)shouldShowMuteTips;
- (void)setShouldShowMuteTips:(BOOL)arg1;
- (id)commentListTipsView;
- (void)setCommentListTipsView:(id)arg1;
- (void).cxx_destruct;
@end

