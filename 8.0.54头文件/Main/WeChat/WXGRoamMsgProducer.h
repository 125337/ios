@interface WXGRoamMsgProducer : NSObject
{
    unsigned int _fromTimeSec; // +0x8
    unsigned int _toTimeSec; // +0xc
    NSString * _userName; // +0x10
    unsigned long long _trueOffset; // +0x18
    unsigned long long _lastRowID; // +0x20
    unsigned long long _filterMsgCnt; // +0x28
    WXGBackupMMDB * _backupMMDB; // +0x30
    NSRecursiveLock * _handlerLock; // +0x38
}
- (id)init;
- (id)getMsgOffset:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)fromTimeSec;
- (void)setFromTimeSec:(unsigned int)arg1;
- (unsigned int)toTimeSec;
- (void)setToTimeSec:(unsigned int)arg1;
- (unsigned long long)trueOffset;
- (void)setTrueOffset:(unsigned long long)arg1;
- (unsigned long long)lastRowID;
- (void)setLastRowID:(unsigned long long)arg1;
- (unsigned long long)filterMsgCnt;
- (void)setFilterMsgCnt:(unsigned long long)arg1;
- (id)backupMMDB;
- (void)setBackupMMDB:(id)arg1;
- (id)handlerLock;
- (void)setHandlerLock:(id)arg1;
- (void).cxx_destruct;
@end

