@interface WCMktMemberCardHomeLogicController : NSObject <WCMktMemberCardHomePageCgiDelegate, IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCMktDeleteTicketCgiDelegate>
{
    BOOL _bHasSendHomePageRequest; // +0x8
    BOOL _bNeedRefreshHomePageAfterAppear; // +0x9
    BOOL _bHasHandleLocation; // +0xa
    unsigned int _svrRetChangeRule; // +0xc
    id <WCMktMemberCardHomeLogicControllerDelegate> _delegate; // +0x10
    GetMemberCardHomePageResponse * _memberCardHomePageResponse; // +0x18
    WCMktMemberCardHomePageCgi * _homePageCgi; // +0x20
    NSString * _deletingCardID; // +0x28
    WCMktDeleteTicketCgi * _deleteCardCgi; // +0x30
}
- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)setupData;
- (void)loadMemberCardHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (BOOL)isSvrReturnSortRule:(unsigned int)arg1;
- (unsigned int)getSortRuleReqNum:(unsigned int)arg1;
- (BOOL)isDenyLocationAccess;
- (BOOL)shouldShowSortTypeEntry;
- (unsigned int)getMemberCardSortRule;
- (void)removeMemberListDataWithUserCardId:(id)arg1;
- (BOOL)isMemberCardAllLoad;
- (BOOL)hasMemberCardData;
- (long long)getTableViewRowCount;
- (id)getUserMemberCardSortInfo;
- (id)getSortListWording;
- (unsigned int)getSortRuleFromSortWording:(id)arg1;
- (id)getMemberCardListData;
- (id)getMemberCardItemWithIndexPath:(id)arg1;
- (id)bubblePhoneMemberCardEntryWording;
- (id)getRightButtonList;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)arg1;
- (void)handleMemberCardCellClickWithIndexPath:(id)arg1;
- (void)handleRemoveMemberCardCellWithIndexPath:(id)arg1;
- (void)handleEnterHistoryEntry;
- (void)handleH5OpenWithUrl:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleEnterPhoneMemberCardEntry;
- (void)refreshHomePageFromSvrIfNecessaryAfterViewAppear;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)getHomePageDataFromSvr;
- (void)refreshHomePageDataFromSvr;
- (void)handleHomePageDataLoadingMore;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onGetWCMktMemberCardPageCgiResp:(id)arg1;
- (void)sendDeleteCardRequestWithUserCardId:(id)arg1;
- (void)onGetDeleteTicketCgiResp:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)updateRecentListAfterCardDataChange;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)memberCardHomePageResponse;
- (void)setMemberCardHomePageResponse:(id)arg1;
- (BOOL)bHasSendHomePageRequest;
- (void)setBHasSendHomePageRequest:(BOOL)arg1;
- (id)homePageCgi;
- (void)setHomePageCgi:(id)arg1;
- (id)deletingCardID;
- (void)setDeletingCardID:(id)arg1;
- (id)deleteCardCgi;
- (void)setDeleteCardCgi:(id)arg1;
- (unsigned int)svrRetChangeRule;
- (void)setSvrRetChangeRule:(unsigned int)arg1;
- (BOOL)bNeedRefreshHomePageAfterAppear;
- (void)setBNeedRefreshHomePageAfterAppear:(BOOL)arg1;
- (BOOL)bHasHandleLocation;
- (void)setBHasHandleLocation:(BOOL)arg1;
- (void).cxx_destruct;
@end
