@interface WCMktCardHomeLogicController : NSObject <WCMktCardHomePageCgiDelegate, IWCCardPkgExt, WCMktGetCardPkgMchInfoCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bIsLoadingMoreMktCardList; // +0x9
    BOOL _bNeedUpdateMchInfoAfterViewControllerAppear; // +0xa
    unsigned int _svrRetChangeRule; // +0xc
    id <WCMktCardHomeLogicControllerDelegate> _delegate; // +0x10
    GetMktCardHomePageResponse * _mktCardHomePageResponse; // +0x18
    NSMutableArray * _sectionArray; // +0x20
    NSMutableArray * _expandMerchatIDList; // +0x28
    WCMktCardHomePageCgi * _homePageCgi; // +0x30
    WCMktGetCardPkgMchInfoCgi * _getMchInfoCgi; // +0x38
    NSString * _currentOpenMchID; // +0x40
    NSString * _deletingCardID; // +0x48
    NSString * _deletingMchID; // +0x50
}
- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (id)getHomePageStoreListData;
- (id)getHomePageTopCellListData;
- (BOOL)hasMktCardData;
- (BOOL)isMktCardDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (id)getHomePageElementWithIndexPath:(id)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (id)getStoreListIndexPathWithMchID:(id)arg1;
- (id)getHomePageElementWithMchID:(id)arg1;
- (id)getHomePageFaqItem;
- (id)getLastItemIndexPath;
- (BOOL)shouldShowSortTypeEntry;
- (id)getTicketAndCertSectionRightContent;
- (id)getStoreListSectionHeaderCellIndexPath;
- (id)getHomePageTopCellElemWithIndexPath:(id)arg1;
- (BOOL)isLastTopCellItemWithIndexPath:(id)arg1;
- (BOOL)isLastHomePageElemItemIndexPath:(id)arg1;
- (BOOL)isMerchantCardListExpandWithID:(id)arg1;
- (void)handleClickExpandOrCollapseBtnWithID:(id)arg1;
- (void)handleHomePageDataLoadingMore;
- (void)handleMerchantItemCellClickTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleMerchantItemCellClickCardItemTagBtnToOpenTinyApp:(id)arg1 merchantID:(id)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateMchInfo:(BOOL)arg2;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateMchInfo:(BOOL)arg2;
- (void)updateMerchantInfoWithMchID:(id)arg1;
- (void)updateMerchantInfoAfterViewControllerWillAppearIfNeed;
- (void)deleteCardWithCardData:(id)arg1 mchID:(id)arg2;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)refreshHomePageDataFromSvr;
- (void)handleClickMerchantAreaWithMerchantID:(id)arg1;
- (void)handleClickElemData:(id)arg1;
- (void)handleFaqItemClick;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleHomePageTopCellClickWithIndexPath:(id)arg1;
- (long long)getListSectionIndexWithSectionName:(id)arg1;
- (id)getUserHomePageSortInfo;
- (unsigned int)getUserHomePageSortRule;
- (BOOL)isSvrReturnSortRule:(unsigned int)arg1;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (BOOL)isDenyLocationAccess;
- (id)getSortListWording;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (void)getHomePageDataFromSvr;
- (void)getMoreHomePageDataFromSvr;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetWCMktCardHomePageCgiResp:(id)arg1;
- (void)sendGetMchInfoRequest:(id)arg1;
- (void)onGetCardPkgMchInfoCgiResp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktCardHomePageResponse;
- (void)setMktCardHomePageResponse:(id)arg1;
- (id)sectionArray;
- (void)setSectionArray:(id)arg1;
- (id)expandMerchatIDList;
- (void)setExpandMerchatIDList:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)homePageCgi;
- (void)setHomePageCgi:(id)arg1;
- (BOOL)bIsLoadingMoreMktCardList;
- (void)setBIsLoadingMoreMktCardList:(BOOL)arg1;
- (id)getMchInfoCgi;
- (void)setGetMchInfoCgi:(id)arg1;
- (BOOL)bNeedUpdateMchInfoAfterViewControllerAppear;
- (void)setBNeedUpdateMchInfoAfterViewControllerAppear:(BOOL)arg1;
- (id)currentOpenMchID;
- (void)setCurrentOpenMchID:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (id)deletingMchID;
- (void)setDeletingMchID:(id)arg1;
- (unsigned int)svrRetChangeRule;
- (void)setSvrRetChangeRule:(unsigned int)arg1;
- (void).cxx_destruct;
@end

