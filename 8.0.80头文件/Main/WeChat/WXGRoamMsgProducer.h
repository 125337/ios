@interface WXGRoamMsgProducer : NSObject
{
    BOOL _descending; // +0x8
    unsigned int _fromTimeSec; // +0xc
    unsigned int _toTimeSec; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _trueOffset; // +0x20
    unsigned long long _lastRowID; // +0x28
    unsigned long long _filterMsgCnt; // +0x30
    WXGBackupMMDB * _backupMMDB; // +0x38
    WCTDatabase * _database; // +0x40
    NSRecursiveLock * _handlerLock; // +0x48
}
- (id)init;
- (id)getMsgOffset:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)fromTimeSec;
- (void)setFromTimeSec:(unsigned int)arg1;
- (unsigned int)toTimeSec;
- (void)setToTimeSec:(unsigned int)arg1;
- (BOOL)descending;
- (void)setDescending:(BOOL)arg1;
- (unsigned long long)trueOffset;
- (void)setTrueOffset:(unsigned long long)arg1;
- (unsigned long long)lastRowID;
- (void)setLastRowID:(unsigned long long)arg1;
- (unsigned long long)filterMsgCnt;
- (void)setFilterMsgCnt:(unsigned long long)arg1;
- (id)backupMMDB;
- (void)setBackupMMDB:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)handlerLock;
- (void)setHandlerLock:(id)arg1;
- (void).cxx_destruct;
@end
