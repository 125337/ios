@interface WCShareCardSyncMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned long long _syncMaxSeq; // +0x8
    WCShareCardDB * _wcShareCardDB; // +0x10
    unsigned int _defaultIntervalSeconds; // +0x18
    unsigned int _lastSyncTime; // +0x1c
    id <WCShareCardSyncMgrDelegate> _delegate; // +0x20
}
- (id)init;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (void)clearSyncKey;
- (void)makeSyncCgi;
- (void)doSyncInternal;
- (void)doSync;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleShareCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)loadSyncSeq;
- (id)getWCShareCardSyncInfoPath;
- (BOOL)saveSyncMaxSeq:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

