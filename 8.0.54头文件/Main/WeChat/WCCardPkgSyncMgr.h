@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate>
{
    NSData * _syncKeyBuffer; // +0x8
    WCCardPkgDB * _wcCardPkgDB; // +0x10
    id <WCCardSyncMgrDelegate> _delegate; // +0x18
}
- (id)getSyncKeyBufferFilePath;
- (BOOL)saveSyncKeyBuffer:(id)arg1;
- (void)loadSyncKeyBuffer;
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (void)clearSyncKey;
- (void)syncByNotify:(unsigned int)arg1 Scene:(unsigned int)arg2;
- (void)handleWCCardSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

