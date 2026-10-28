@interface WCMktCouponHomeLogicController : NSObject <WCMktCouponHomePageCgiDelegate, IWCCardPkgExt, WCMktGetCardPkgMchInfoCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bNeedUpdateMchInfoAfterViewControllerAppear; // +0x9
    BOOL _bHasHandleLocation; // +0xa
    unsigned int _svrRetChangeRule; // +0xc
    id <WCMktCouponHomeLogicControllerDelegate> _delegate; // +0x10
    GetCouponHomePageResponse * _couponHomePageResponse; // +0x18
    WCMktCouponHomePageCgi * _homePageCgi; // +0x20
    WCMktGetCardPkgMchInfoCgi * _getMchInfoCgi; // +0x28
    NSMutableArray * _expandMerchatIDList; // +0x30
    NSString * _currentOpenMchID; // +0x38
    NSString * _deletingCardID; // +0x40
    NSString * _deletingMchID; // +0x48
}
- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadCouponHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (BOOL)isSvrReturnSortRule:(unsigned int)arg1;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (BOOL)isDenyLocationAccess;
- (unsigned int)getCouponListSortRule;
- (id)getCouponElemListData;
- (id)getCouponItemIndexPathWithMchID:(id)arg1;
- (id)getCouponElementWithMchID:(id)arg1;
- (BOOL)isCouponDataAllLoad;
- (BOOL)hasCouponData;
- (BOOL)shouldShowSortTypeEntry;
- (long long)getTableViewRowCount;
- (id)getUserCouponSortInfo;
- (id)getSortListWording;
- (id)getCouponItemWithIndexPath:(id)arg1;
- (id)historyEntryWording;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (id)getLastItemIndexPath;
- (BOOL)isLastCouponItemWithIndexPath:(id)arg1;
- (void)forceUseSortByAcceptTime;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (BOOL)isMerchantCardListExpandWithID:(id)arg1;
- (void)handleClickExpandOrCollapseBtnWithID:(id)arg1;
- (void)handleMerchantItemCellClickTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleMerchantItemCellClickCardItemTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)updateMerchantInfoWithMchID:(id)arg1;
- (void)updateMerchantInfoAfterViewControllerWillAppearIfNeed;
- (void)deleteCardWithCardData:(id)arg1 mchID:(id)arg2;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)handleClickMerchantAreaWithMerchantID:(id)arg1;
- (void)handleClickElemData:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateMchInfo:(BOOL)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateMchInfo:(BOOL)arg2;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleEnterHistoryEntry;
- (void)getHomePageDataFromSvr;
- (void)refreshHomePageDataFromSvr;
- (void)handleHomePageDataLoadingMore;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetMktCouponHomePageResp:(id)arg1;
- (void)sendGetMchInfoRequest:(id)arg1;
- (void)onGetCardPkgMchInfoCgiResp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)couponHomePageResponse;
- (void)setCouponHomePageResponse:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)homePageCgi;
- (void)setHomePageCgi:(id)arg1;
- (unsigned int)svrRetChangeRule;
- (void)setSvrRetChangeRule:(unsigned int)arg1;
- (id)getMchInfoCgi;
- (void)setGetMchInfoCgi:(id)arg1;
- (id)expandMerchatIDList;
- (void)setExpandMerchatIDList:(id)arg1;
- (BOOL)bNeedUpdateMchInfoAfterViewControllerAppear;
- (void)setBNeedUpdateMchInfoAfterViewControllerAppear:(BOOL)arg1;
- (id)currentOpenMchID;
- (void)setCurrentOpenMchID:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (id)deletingMchID;
- (void)setDeletingMchID:(id)arg1;
- (BOOL)bHasHandleLocation;
- (void)setBHasHandleLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end
