@interface WCMktCouponHomeLogicControllerV2 : NSObject <WCMktCouponHomePageV2CgiDelegate, IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCMktDeleteCouponCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bNeedUpdateDataAfterViewControllerWillApper; // +0x9
    id <WCMktCouponHomeLogicControllerV2Delegate> _delegate; // +0x10
    GetCouponAndGiftListResponse * _mktCouponHomePageResponse; // +0x18
    NSMutableArray * _sectionArray; // +0x20
    WCMktCouponHomePageV2Cgi * _couponHomePageCgi; // +0x28
    WCMktDeleteCouponCgi * _deleteCardCgi; // +0x30
    NSString * _deletingCardID; // +0x38
}
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadCouponHomePageCacheDataAndRefreshFromSvr;
- (void)saveCouponHomePageDataToFile;
- (BOOL)hasMktCouponData;
- (BOOL)isMktCouponDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (id)getSectionDisplayNameWithSection:(long long)arg1;
- (id)getCouponElemDataWithIndexPath:(id)arg1;
- (id)getHomePageTitle;
- (id)getRightButtonList;
- (id)getGiftItemsList;
- (id)getCouponItemsList;
- (long long)getSectionIndexWithSectionName:(id)arg1;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (long long)getElemDataRowIndexInCouponListWithCardId:(id)arg1;
- (id)getElemDataIndexPathWithUserCardId:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (void)refreshHomePageFromSvr;
- (void)handleCouponHomePageDataLoadingMore;
- (void)getCoponHomePageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)onGetWCMktCouponHomePageV2CgiResp:(id)arg1;
- (void)handleCouponListDidSelectRowAtIndexPath:(id)arg1;
- (void)handleCouponListDeleteWithIndexPath:(id)arg1;
- (void)onGetDeleteCouponCgiResp:(id)arg1;
- (void)HandleCouponListDetailDeleteCardWithCardId:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)handleDeleteCardWithCardData:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)handleCardDataNeedDeleteWithCardData:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onUseCard:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktCouponHomePageResponse;
- (void)setMktCouponHomePageResponse:(id)arg1;
- (id)sectionArray;
- (void)setSectionArray:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)couponHomePageCgi;
- (void)setCouponHomePageCgi:(id)arg1;
- (id)deleteCardCgi;
- (void)setDeleteCardCgi:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (BOOL)bNeedUpdateDataAfterViewControllerWillApper;
- (void)setBNeedUpdateDataAfterViewControllerWillApper:(BOOL)arg1;
- (void).cxx_destruct;
@end
