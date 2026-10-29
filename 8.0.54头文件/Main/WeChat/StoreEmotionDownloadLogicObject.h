@interface StoreEmotionDownloadLogicObject : MMObject <StoreEmotionDownloadLogicObjectDelegate>
{
    BOOL _m_isActive; // +0x8
    int _maxWWANDownloadPacks; // +0xc
    NSArray * _serverPids; // +0x10
    OrderedDictionary * _needDownloadPids; // +0x18
    NSMutableDictionary * _emotionsProgress; // +0x20
    NSMutableDictionary * _emotionsState; // +0x28
    id <StoreEmotionDownloadLogicObjectDelegate> _delegate; // +0x30
    NSMutableArray * _failedArray; // +0x38
    EmotionSummary * _downloadingItemSummary; // +0x40
}
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;
- (void)startLogic;
- (void)startLogicWithPids:(id)arg1;
- (id)returnDownloadingInfoToMgr;
- (float)getDownloadingProgressFromItem:(id)arg1;
- (int)getStateWithItem:(id)arg1;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectFailedWithItem:(id)arg1;
- (BOOL)isActive;
- (void)downloadServerXMLEmotionWithPid:(id)arg1;
- (void)startInternalLogic;
- (void)downloadFirstStoreEmoticon;
- (void)getNeededDownloadStoreEmotionFromServerPids:(id)arg1;
- (id)getStoreEmotionList;
- (void)configEmotionProgressWithProductID:(id)arg1;
- (void)onAllEmotionDownloadFinish;
- (void)downloadHighPrivillageWithItem:(id)arg1;
- (int)maxWWANDownloadPacks;
- (void)setMaxWWANDownloadPacks:(int)arg1;
- (id)serverPids;
- (void)setServerPids:(id)arg1;
- (id)needDownloadPids;
- (void)setNeedDownloadPids:(id)arg1;
- (id)emotionsProgress;
- (void)setEmotionsProgress:(id)arg1;
- (id)emotionsState;
- (void)setEmotionsState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)m_isActive;
- (void)setM_isActive:(BOOL)arg1;
- (id)failedArray;
- (void)setFailedArray:(id)arg1;
- (id)downloadingItemSummary;
- (void)setDownloadingItemSummary:(id)arg1;
- (void).cxx_destruct;
@end

