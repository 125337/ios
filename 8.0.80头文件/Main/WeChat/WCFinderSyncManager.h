@interface WCFinderSyncManager : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _md5List; // +0x8
    NSMutableArray * _syncRequestArray; // +0x10
    FinderSyncRequest * _currentSyncRequest; // +0x18
    NSData * _lastBuffer; // +0x20
}
- (id)init;
- (void)setLastBuffer:(id)arg1;
- (void)updateSyncBuffer;
- (BOOL)checkSyncSelectorCanIgnore:(id)arg1;
- (void)syncWithRequest:(id)arg1;
- (void)checkQueue;
- (void)_syncWithRequest:(id)arg1;
- (void)mockCgiFailAction:(id)arg1;
- (id)md5List;
- (id)syncRequestArray;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setMd5List:(id)arg1;
- (void)setSyncRequestArray:(id)arg1;
- (id)currentSyncRequest;
- (void)setCurrentSyncRequest:(id)arg1;
- (id)lastBuffer;
- (void).cxx_destruct;
@end
