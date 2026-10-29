@interface WCMktMemberCardHistoryLogicController : NSObject <WCMktMemberCardHistoryPageCgiDelegate, WCMktDeleteInvalidTicketCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bNeedUpdateDataAfterViewControllerWillApper; // +0x9
    id <WCMktMemberCardHistoryLogicControllerDelegate> _delegate; // +0x10
    GetMemberCardHistoryResponse * _mktMemberCardHistoryHomePageResp; // +0x18
    WCMktMemberCardHistoryPageCgi * _historyHomePageCgi; // +0x20
    WCMktDeleteInvalidTicketCgi * _deleteCardCgi; // +0x28
}
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
- (void)saveMemberCardHistoryHomePageDataToFile;
- (BOOL)hasMktMemberCardHistoryData;
- (BOOL)isMktMemberCardHistoryDataAllLoad;
- (BOOL)hasRespData;
- (id)getHistoryPageTitle;
- (long long)getTableViewRowCount;
- (id)getMemberCardHistoryDataWithIndexPath:(id)arg1;
- (id)getRightButtonList;
- (id)getHistoryItemList;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(BOOL)arg2;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)refreshHomePageDataFromSvr;
- (void)handleMemberCardHistoryLoadingMore;
- (void)getMemberCardHistoryPageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)onGetMemberCardHistoryPageCgiResp:(id)arg1;
- (void)handleClickMemberCardHistoryItemWithIndexPath:(id)arg1;
- (void)handleDeleteMemberCardHistoryItemWithIndexPath:(id)arg1;
- (void)onGetDeleteInvalidTicketCgiResp:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mktMemberCardHistoryHomePageResp;
- (void)setMktMemberCardHistoryHomePageResp:(id)arg1;
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

