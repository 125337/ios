@interface WeClawMgr : MMUserService <IMsgExt, WeClawStreamMsgItemDelegate, MMServiceProtocol>
{
    BOOL _supportCodeHighlight; // +0x8
    BOOL _enableStreamMsg; // +0x9
    BOOL _enableWeClawStyleBubble; // +0xa
    MemoryMappedKV * _heightCacheKV; // +0x10
    WCTDatabase * _database; // +0x18
    NSMutableDictionary * _runningStreamItems; // +0x20
    NSMutableDictionary * _pendingInterationOptions; // +0x28
    NSMutableDictionary * _streamDigestCache; // +0x30
}
- (void)onServiceInit;
- (BOOL)isThinkingStreaming:(id)arg1 svrId:(long long)arg2;
- (BOOL)isResultStreaming:(id)arg1 svrId:(long long)arg2;
- (void)initDB;
- (id)streamMsgTable;
- (void)saveStreamMsgItem:(id)arg1;
- (id)getStreamMsgByUsername:(id)arg1 svrId:(long long)arg2;
- (BOOL)removeStreamMsgItemBySvrId:(long long)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleNewXmlReplaceMsg:(id)arg1;
- (void)onStreamTaskStop:(id)arg1;
- (void)cacheDigestMsgForUsername:(id)arg1 svrId:(long long)arg2;
- (id)cachedDigestMsgForSession:(id)arg1 svrId:(long long)arg2;
- (void)tryRemoveCacheDigestMsgForSvrId:(long long)arg1;
- (id)pendingInterationOptionContxt:(long long)arg1;
- (void)addPendingInterationOption:(id)arg1;
- (void)removePendingInterationOption:(id)arg1;
- (void)clearAllPendingInterationOptions:(id)arg1;
- (BOOL)supportCodeHighlight;
- (void)setSupportCodeHighlight:(BOOL)arg1;
- (BOOL)enableStreamMsg;
- (void)setEnableStreamMsg:(BOOL)arg1;
- (BOOL)enableWeClawStyleBubble;
- (void)setEnableWeClawStyleBubble:(BOOL)arg1;
- (id)heightCacheKV;
- (void)setHeightCacheKV:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)runningStreamItems;
- (void)setRunningStreamItems:(id)arg1;
- (id)pendingInterationOptions;
- (void)setPendingInterationOptions:(id)arg1;
- (id)streamDigestCache;
- (void)setStreamDigestCache:(id)arg1;
- (void).cxx_destruct;
@end
