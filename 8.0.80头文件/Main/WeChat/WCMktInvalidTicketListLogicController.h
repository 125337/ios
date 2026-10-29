@interface WCMktInvalidTicketListLogicController : NSObject <WCMktInvalidTicketHomePageCgiDelegate, WCMktDeleteInvalidTicketCgiDelegate, IWCCardPkgExt>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bIsLoadingMoreMktInvalidTicket; // +0x9
    id <WCMktInvalidTicketListLogicControllerDelegate> _delegate; // +0x10
    GetMktInvalidTicketHomePageResponse * _mktInvalidTicketHomePageResponse; // +0x18
    WCMktInvalidTicketHomePageCgi * _invalidTicketHomePageCgi; // +0x20
    WCMktDeleteInvalidTicketCgi * _deleteInvalidTicketCgi; // +0x28
}
- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadInvalidTicketHomePageCacheAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (id)getInvalidTicketList;
- (BOOL)hasMktInvalidTicketData;
- (BOOL)isMktInvalidTicketDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewRowCount;
- (id)getTicketElemDataWithIndexPath:(id)arg1;
- (long long)getInvalidTicketItemIndexWithCardId:(id)arg1;
- (void)handleInvalidTicketLoadingMore;
- (void)handleInvalidTicketListDeleteWithIndexPath:(id)arg1;
- (void)handleInvalidTicketItemTagBtnClickWithData:(id)arg1;
- (void)refreshHomePageDataFromSvr;
- (void)getInvalidTicketHomePageDataFromSvr;
- (void)getMoreInvalidTicketHomePageDataFromSvr;
- (void)getInvalidTicketHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetInvalidTicketHomePageCgiResp:(id)arg1;
- (void)sendDeleteInvalidTicketItemReuqest:(id)arg1;
- (void)onGetDeleteInvalidTicketCgiResp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktInvalidTicketHomePageResponse;
- (void)setMktInvalidTicketHomePageResponse:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)invalidTicketHomePageCgi;
- (void)setInvalidTicketHomePageCgi:(id)arg1;
- (BOOL)bIsLoadingMoreMktInvalidTicket;
- (void)setBIsLoadingMoreMktInvalidTicket:(BOOL)arg1;
- (id)deleteInvalidTicketCgi;
- (void)setDeleteInvalidTicketCgi:(id)arg1;
- (void).cxx_destruct;
@end
