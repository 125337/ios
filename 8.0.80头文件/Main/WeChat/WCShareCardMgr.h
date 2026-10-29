@interface WCShareCardMgr : MMUserService <MMServiceProtocol, WCShareCardSyncMgrDelegate, WCShareCardBatchGetMgrDelegate, PBMessageObserverDelegate, LocationRetrieveDelegate, MMKernelExt>
{
    WCShareCardDB * _wcShareCardDB; // +0x8
    WCShareCardSyncMgr * _wcShareCardSyncMgr; // +0x10
    WCShareCardBatchGetMgr * _wcShareCardBatchGetMgr; // +0x18
    LocationRetriever * _locationRetrieve; // +0x20
    unsigned int _lastLocationTime; // +0x28
    unsigned int uiLastMarkShareCardEventID; // +0x2c
    NSString * _curHomePageLayoutBuff; // +0x30
    BOOL _bIsLocalCityLayoutEnd; // +0x38
    BOOL _bIsOtherCityLayoutEnd; // +0x39
    BOOL _bIsHomePageFirstPageData; // +0x3a
    NSMutableDictionary * _dicCardForMask; // +0x40
    WCNewShareCardLayoutCache * _shareCardLayoutCache; // +0x48
    NSArray * _arrNeedAnimtionCardData; // +0x50
    CLLocation * _location; // +0x58
}
- (id)shareCardLayoutCache;
- (BOOL)loadShareCardLayoutCache;
- (BOOL)hasShareCardLayoutCacheData;
- (void)saveShareCardLayoutCacheWithLoacalList:(id)arg1 otherCityList:(id)arg2 cityName:(id)arg3 entryTip:(id)arg4 entryIcons:(id)arg5 entryShowRedDot:(BOOL)arg6 entryShowNew:(BOOL)arg7;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)insertOrUpdateWCCard:(id)arg1;
- (BOOL)needShowShareCardEntrance;
- (void)onAuthOK;
- (void)shareCardWithWhoCanSee:(id)arg1 visibleUserList:(id)arg2 invisibleUserList:(id)arg3 visibleTagIDList:(id)arg4 invisibleTagIDList:(id)arg5;
- (void)shareCardGetReward:(id)arg1 BrandUsername:(id)arg2 ConsumedBoxID:(id)arg3 visibleUserList:(id)arg4 invisibleUserList:(id)arg5 visibleTagIDList:(id)arg6 invisibleTagIDList:(id)arg7;
- (void)shareCardListToFriend:(id)arg1 consumedboxCardId:(id)arg2 visibleUserList:(id)arg3 invisibleUserList:(id)arg4 visibleTagIDList:(id)arg5 invisibleTagIDList:(id)arg6 staticScene:(unsigned long long)arg7;
- (void)getShareCardsHomePageLayout;
- (BOOL)getShareCardsHomePageLayoutMore;
- (void)getShareCardsHomePageLayoutInternal;
- (void)startRetrieveLocation;
- (void)stopRetrieveLocation;
- (void)tagCardHasBeenRed;
- (unsigned int)getShareCardCount;
- (unsigned int)getShareCardAvailableCount;
- (void)clearSyncKey;
- (void)doSync;
- (void)shareCardConsumed:(id)arg1 fromScene:(unsigned int)arg2 withCode:(id)arg3;
- (unsigned int)getValidShareCardCount:(id)arg1;
- (unsigned int)getShareCardCount:(id)arg1;
- (id)getShareCardByCardIdFromDB:(id)arg1;
- (void)getShareCardFromSvr:(id)arg1;
- (BOOL)getShareCardByCardTpIdFromDB:(id)arg1 andShareCardList:(id)arg2;
- (void)deleteShareCardByCardIdFromDB:(id)arg1;
- (void)markShareCardByCardId:(id)arg1 mark:(BOOL)arg2 notify:(BOOL)arg3 scene:(int)arg4;
- (void)internalMarkShareCard:(id)arg1;
- (void)keepCachedDataFromOldCard:(id)arg1 toNewCard:(id)arg2;
- (void)handleOnGetMarkShareCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOnGetShareCardItemResp:(id)arg1;
- (void)handleOnGetShareCardConsumedInfoResp:(id)arg1;
- (void)handleOnGetHomePageLayoutResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWCShareCardSyncEnd;
- (void)onBatchGetShareCardList:(id)arg1 ErrCode:(int)arg2;
- (void)onBatchGetEnd:(unsigned int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (BOOL)shouldResetLocation;
- (void)saveShareCardsToDB:(id)arg1;
- (id)arrNeedAnimtionCardData;
- (void)setArrNeedAnimtionCardData:(id)arg1;
- (id)location;
- (void).cxx_destruct;
@end
