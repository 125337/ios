@interface WCMktCardHomeLogicControllerV2 : NSObject <WCMktCardHomePageV2CgiDelegate, WCMktRemoveCardInRecentListCgiDelegate, WCNewCardDetailViewControllerDelegate, IWCCardPkgExt>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    id <WCMktCardHomeLogicControllerV2Delegate> _delegate; // +0x10
    GetMktCardHomePageV2Response * _mktCardHomePageResponse; // +0x18
    WCMktCardHomePageV2Cgi * _homePageCgi; // +0x20
    WCMktRemoveCardInRecentListCgi * _removeCardInRecentListCgi; // +0x28
    NSString * _deletingCardID; // +0x30
}
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (BOOL)isRecentListCardDataAllLoad;
- (id)getHomePageFaqItem;
- (id)getHomePageTopCellGroupData;
- (id)getHomePageRecentCardListData;
- (BOOL)hasRespData;
- (BOOL)hasTopCellListData;
- (BOOL)hasRecentListData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (BOOL)isTopCellSection:(long long)arg1;
- (BOOL)isTopCellIndexPath:(id)arg1;
- (id)getRecentListHeaderTitle;
- (id)getRecentListEmptyTips;
- (BOOL)isLastTopCellItemWithIndexPath:(id)arg1;
- (id)getHomePageTopCellElemWithIndexPath:(id)arg1;
- (id)getHomePageRecentCellElemWithIndexPath:(id)arg1;
- (void)handleRemoveRecentListCellWithIndexPath:(id)arg1;
- (void)refreshHomePageDataFromSvr;
- (void)handleHomePageDataLoadingMore;
- (void)handleFaqItemClick;
- (void)handleHomePageElemCellClickWithIndexPath:(id)arg1;
- (void)handleTopCellSectionClickWithIndexPath:(id)arg1;
- (void)handleRecentCardSectionClickWithIndexPath:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1;
- (void)removeRecentListDataWithUserCardId:(id)arg1;
- (void)getMoreHomePageDataFromSvr;
- (void)getHomePageDataFromSvrWithOffset:(double)arg1;
- (void)onGetWCMktCardHomePageV2CgiResp:(id)arg1;
- (void)removeRecentListCardWithData:(id)arg1;
- (void)onGetMktRemoveCardInRecentListCgiResp:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)updateRecentListAfterCardDataChange;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktCardHomePageResponse;
- (void)setMktCardHomePageResponse:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)homePageCgi;
- (void)setHomePageCgi:(id)arg1;
- (id)removeCardInRecentListCgi;
- (void)setRemoveCardInRecentListCgi:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (void).cxx_destruct;
@end
