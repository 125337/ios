@interface WCMktTicketListLogicController : NSObject <WCMktTicketHomePageCgiDelegate, IWCCardPkgExt, WCMktDeleteTicketCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bIsLoadingMoreMktTicketList; // +0x9
    BOOL _bNeedUpdateDataAfterViewControllerWillApper; // +0xa
    id <WCMktTicketListLogicControllerDelegate> _delegate; // +0x10
    GetMktTicketHomePageResponse * _mktTicketHomePageResponse; // +0x18
    NSMutableArray * _sectionArray; // +0x20
    WCMktTicketHomePageCgi * _ticketHomePageCgi; // +0x28
    WCMktDeleteTicketCgi * _deleteTicketCgi; // +0x30
    NSString * _deletingCardID; // +0x38
}
- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadTicketHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (id)getTicketJumpList;
- (id)getTicketTypeList;
- (id)getLicenseTypeList;
- (id)getMedicateCardBanner;
- (BOOL)hasMedicateCardBanner;
- (BOOL)hasMktTicketData;
- (BOOL)isMktTicketDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (id)getSectionNameWithSection:(long long)arg1;
- (BOOL)isTicketJumpTypeDataWithIndexPath:(id)arg1;
- (id)getTicketJumpElemDataWithIndexPath:(id)arg1;
- (id)getTicketElemDataWithIndexPath:(id)arg1;
- (long long)getTicketJumpiListCount;
- (BOOL)isMedicareCardBannerWithIndexPath:(id)arg1;
- (id)getLastItemIndexPath;
- (void)handleTicketHomePageDataLoadingMore;
- (void)handleTicketListDeleteWithIndexPath:(id)arg1;
- (void)handleTicketListSelectJumpTypeDataWithJumpElemData:(id)arg1;
- (void)handleTicketItemTagBtnClickWithData:(id)arg1;
- (void)handleTicketDetailDeleteCardWithCardId:(id)arg1;
- (void)handleDeleteCardWithCardData:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)refreshHomePageDataFromSvr;
- (void)updateHomePageDataAfterViewControllerWillAppearIfNeed;
- (void)handleMedicateBannerClick;
- (long long)getTicketListSectionIndexWithSectionName:(id)arg1;
- (long long)getElemDataRowIndexInTicketTypeListWithCardId:(id)arg1;
- (long long)getElemDataRowIndexInLicenseTypeListWithCardId:(id)arg1;
- (id)getElemDataIndexPathWithUserCardId:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (void)getTicketHomePageDataFromSvr;
- (void)getMoreTicketHomePageDataFromSvr;
- (void)getTicketHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetMktTicketHomePageCgiResp:(id)arg1;
- (void)sendDeleteTicketItemRequest:(id)arg1;
- (void)onGetDeleteTicketCgiResp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktTicketHomePageResponse;
- (void)setMktTicketHomePageResponse:(id)arg1;
- (id)sectionArray;
- (void)setSectionArray:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)ticketHomePageCgi;
- (void)setTicketHomePageCgi:(id)arg1;
- (BOOL)bIsLoadingMoreMktTicketList;
- (void)setBIsLoadingMoreMktTicketList:(BOOL)arg1;
- (id)deleteTicketCgi;
- (void)setDeleteTicketCgi:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (BOOL)bNeedUpdateDataAfterViewControllerWillApper;
- (void)setBNeedUpdateDataAfterViewControllerWillApper:(BOOL)arg1;
- (void).cxx_destruct;
@end
