@interface WCMktCouponHistoryLogicController : NSObject <WCMktCouponHistoryPageCgiDelegate, WCMktDeleteCouponInInvalidlistCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bNeedUpdateDataAfterViewControllerWillApper; // +0x9
    id <WCMktCouponHistoryLogicControllerDelegate> _delegate; // +0x10
    GetCouponAndGiftHistoryResponse * _mktCouponHistoryHomePageResp; // +0x18
    WCMktCouponHistoryPageCgi * _historyHomePageCgi; // +0x20
    WCMktDeleteCouponInInvalidlistCgi * _deleteCardCgi; // +0x28
}
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
- (void)saveCouponHistoryHomePageDataToFile;
- (BOOL)hasMktCouponHistoryData;
- (BOOL)isMktCouponHistoryDataAllLoad;
- (BOOL)hasRespData;
- (id)getHistoryPageTitle;
- (long long)getTableViewRowCount;
- (id)getCouponHistoryDataWithIndexPath:(id)arg1;
- (id)getRightButtonList;
- (id)getHistoryItemList;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)refreshHomePageDataFromSvr;
- (void)handleCouponHistoryLoadingMore;
- (void)getCoponHistoryPageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)onGetCouponHistoryPageCgiResp:(id)arg1;
- (void)handleClickCouponHistoryItemWithIndexPath:(id)arg1;
- (void)handleDeleteCouponHistoryItemWithIndexPath:(id)arg1;
- (void)onGetMktDeleteCouopnInInvalidlistCgiResp:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktCouponHistoryHomePageResp;
- (void)setMktCouponHistoryHomePageResp:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)historyHomePageCgi;
- (void)setHistoryHomePageCgi:(id)arg1;
- (id)deleteCardCgi;
- (void)setDeleteCardCgi:(id)arg1;
- (BOOL)bNeedUpdateDataAfterViewControllerWillApper;
- (void)setBNeedUpdateDataAfterViewControllerWillApper:(BOOL)arg1;
- (void).cxx_destruct;
@end

