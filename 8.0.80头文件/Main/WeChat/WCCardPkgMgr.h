@interface WCCardPkgMgr : MMUserService <WCMktCardEnteranceStyleCgiDelegate, LocationRetrieveDelegate, MMServiceProtocol, WCCardSyncMgrDelegate, WCCardPkgBatchGetMgrDelegate, WCCardPkgBatchDelMgrDelegate, WCCardMsgCenterMgrDelegate, WCCardBulkImportMgrDelegate, WCCardPkgBatchGetCardItemByTpInfoMgrDelegate, PBMessageObserverDelegate, MMKernelExt, WCCardLayoutMgrDelegate>
{
    WCCardPkgDB * _wcCardPkgDB; // +0x8
    NSObject<OS_dispatch_queue> * _queue_handleCheckCard; // +0x10
    WCCardPkgSyncMgr * _wcCardPkgSyncMgr; // +0x18
    WCCardPkgBatchGetMgr * _wcCardPkgBatchGetMgr; // +0x20
    WCCardPkgBatchDelMgr * _wcCardPkgBatchDelMgr; // +0x28
    WCCardMsgCenterMgr * _wcCardMsgCenterMgr; // +0x30
    WCCardBulkImportMgr * _wcCardBulkImportMgr; // +0x38
    WCCardPkgBatchGetCardItemByTpInfoMgr * _wcCardBatchGetCardItemByIpInfoMgr; // +0x40
    WCCardLayoutMgr * _wcCardLayoutMgr; // +0x48
    WCCardTipController * _wcCardTipController; // +0x50
    LocationRetriever * _locationRetrieve; // +0x58
    CLLocation * _locationForReport; // +0x60
    unsigned int _lastLocationTime; // +0x68
    unsigned int _getItemInfoEventID; // +0x6c
    unsigned int _acceptItemEventID; // +0x70
    unsigned int _giftItemEventID; // +0x74
    unsigned int _getShopsEventID; // +0x78
    unsigned int _getSerialEventID; // +0x7c
    unsigned int _getAvailableEventID; // +0x80
    NSDictionary * _dicCardIdCacheForTips; // +0x88
    BOOL _hasRequestGetCardCount; // +0x90
    CLLocation * _location; // +0x98
    WCMktCardEnteranceStyleCgi * _mktCardStyleCgi; // +0xa0
}
- (id)getQrCodeConfigByCardId:(id)arg1;
- (void)updateOfflineCodesIfNeed;
- (void)updateOfflineCodesIfNeedOnCardHome;
- (BOOL)updateOfflineCodeIfNeed:(id)arg1;
- (BOOL)isOutOfTime:(id)arg1;
- (void)getOfflineCodesFromServer:(id)arg1 scene:(int)arg2;
- (void)reportQrCodeChange:(id)arg1 AtionId:(unsigned long long)arg2;
- (void)reportDynamicCardCodeAction:(id)arg1;
- (void)reportBatchQrCodesChange:(id)arg1;
- (void)updateLocalOfflineQrCodeData:(id)arg1;
- (id)getOneValidQrCode:(id)arg1;
- (id)signTimestamp:(id)arg1 Key:(id)arg2;
- (id)HmacSha256:(id)arg1 data:(id)arg2;
- (id)encryptQrCode:(id)arg1 Code:(id)arg2;
- (id)decryptQrCode:(id)arg1 CodeData:(id)arg2;
- (id)getAesCryptKey:(id)arg1;
- (id)init;
- (void)enterForeground;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)getCardData:(id)arg1;
- (void)stopGetCardData;
- (id)getCardDataFromDB:(id)arg1;
- (unsigned int)acceptCard:(id)arg1;
- (void)stopAcceptCard;
- (unsigned int)giftCard:(id)arg1 staticScene:(unsigned long long)arg2;
- (void)stopGiftCard;
- (void)insertOrUpdateWCCard:(id)arg1;
- (void)clearSyncKey;
- (void)syncByNotify:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)getFirstPageWCCardList;
- (void)getNextPageWCCardListByCurMinUpdateTime:(unsigned int)arg1;
- (BOOL)delWCCard:(id)arg1;
- (unsigned int)getNeedBatchGetWCCardCount;
- (void)startRetriveLocationWithoutRequestAuthorization;
- (void)startRetrieveLocation;
- (void)stopRetrieveLocation;
- (unsigned int)getUsedStoreList:(id)arg1 cardId:(id)arg2 hasLocation:(BOOL)arg3;
- (void)stopGetUsedStoreList;
- (void)getSerialNumberByWXCardID:(id)arg1;
- (unsigned int)getUnreadMsgCount;
- (id)getUnreadMsgList;
- (id)getFirstPageMsgList;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1 HasMore:(BOOL *)arg2;
- (BOOL)delMsg:(id)arg1;
- (id)getLastMsg;
- (BOOL)setAllMsgRead;
- (void)cleanAllMsg;
- (BOOL)setConsumedMsgRead:(id)arg1;
- (void)getAvailableCardInfo:(id)arg1 buff:(id)arg2;
- (void)stopGetAvailableCardInfo;
- (void)getBulkCard:(id)arg1;
- (void)importBulkCard:(id)arg1;
- (void)batchGetCardItemByIpInfo:(id)arg1 templateMsgId:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)getCardCount;
- (void)getCardCountForce;
- (void)internalGetCardCount;
- (BOOL)needShowEntrance;
- (BOOL)hasCardPkgCellEntry;
- (unsigned int)getMyCardCount;
- (id)getCardConfigInfo;
- (void)fixDatabaseBug;
- (void)onAuthOK;
- (void)onSyncResult:(int)arg1;
- (void)onBatchDelCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onBatchGetCardList:(id)arg1 ErrCode:(int)arg2;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onWCCardListUpdate:(unsigned int)arg1;
- (void)onWCCardQrCodeBan:(id)arg1;
- (void)banSomeCodesLogic:(id)arg1;
- (void)banAllCodesLogic:(id)arg1;
- (void)onGetBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onGetBulkInfo:(id)arg1 errCode:(int)arg2;
- (void)onImportBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardOfflineCodeData:(id)arg1 Event:(unsigned int)arg2;
- (void)handleReportDynamicCardCodeActionResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardData:(id)arg1 Event:(unsigned int)arg2;
- (void)keepCachedDataFromOldCard:(id)arg1 toNewCard:(id)arg2;
- (void)handleAcceptCard:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGiftCard:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetApplicableShopsListResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardSerialNumberResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardCountResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAvailableCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCardConfigResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleShareCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)getLastLocation;
- (void)reportLocation:(unsigned int)arg1 TpId:(id)arg2 CardId:(id)arg3;
- (id)getLayoutBuf;
- (void)GetLayoutFromSvr:(unsigned int)arg1;
- (id)getExpiringList;
- (id)getMemberCardList;
- (id)getNearByList;
- (id)getRecentList;
- (id)getLabelList;
- (id)getFirstList;
- (id)getLayoutSubTitle;
- (unsigned int)getTopScene;
- (id)getCardsPkgElementList;
- (id)getMyCardPackageSvrRetEntryList;
- (unsigned int)getHomePageCardNum;
- (void)onGetCardLayoutResp;
- (void)onGetCardLayoutStop;
- (void)onLayoutRedDotChanged;
- (BOOL)batchDelWCCard:(id)arg1;
- (void)clearLayoutRedDot;
- (BOOL)hasLayoutRedDot;
- (id)layoutRedDotTip;
- (BOOL)isGettingLayout;
- (void)clearWCCardTip;
- (id)getCardTip;
- (id)getPathOfCardIdCacheForTips;
- (BOOL)saveCardIdCacheForTips:(id)arg1;
- (void)loadCardIdCacheForTips;
- (void)setHaveShowTipForCardId:(id)arg1;
- (BOOL)isHaveShowTipForCardId:(id)arg1;
- (id)getAllAvailableMemberCards;
- (BOOL)hasEntryShowNewBySvr;
- (BOOL)hasEntryShowRedDotBySvr;
- (BOOL)hasNewEntryRedDotOrNewBySvr;
- (BOOL)hasNewEntryMeRedDotBySvr;
- (id)entryTipWordingBySvr;
- (id)entryTipIconUrlBySvr;
- (void)cleanEntryTipBySvr;
- (id)getRedDotBuffBySvr;
- (void)cleanRedDotBuffBySvr;
- (void)tryToClearEntryTipsForCards:(id)arg1;
- (unsigned int)bubbleMessageCount;
- (id)bubbleMessageWording;
- (id)bubbleMessageIconUrl;
- (void)cleanBubbleMessage;
- (void)requestMktCardEnteranceStyleIfNeed;
- (void)requestMktCardEnteranceStyle;
- (void)onGetCardEnteranceStyleCgiResp:(id)arg1;
- (id)location;
- (id)mktCardStyleCgi;
- (void)setMktCardStyleCgi:(id)arg1;
- (BOOL)hasRequestGetCardCount;
- (void)setHasRequestGetCardCount:(BOOL)arg1;
- (void).cxx_destruct;
@end
