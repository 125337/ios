@interface WCDBBackupRecord : NSObject <PBCoding>
{
    unsigned int _incrementalBackupTimes; // +0x8
    long long _bakeupSize; // +0x10
    long long _backupTimes; // +0x18
    NSDate * _startRecordTime; // +0x20
    long long _walFrameCount; // +0x28
    long long _tableCount; // +0x30
    long long _associatedTableCount; // +0x38
    long long _leafPageCount; // +0x40
    long long _processTime; // +0x48
    long long _skipTimes; // +0x50
    long long _actualCPUProcessTime; // +0x58
    long long _getCPUTimeFalseTimes; // +0x60
    NSDate * _beginBackupTime; // +0x68
    unsigned long long _beginBackupCPUTime; // +0x70
    long long _incrementalMaterialSize; // +0x78
}
+ (void)PBArrayAdd_bakeupSize;
+ (void)PBArrayAdd_backupTimes;
+ (void)PBArrayAdd_startRecordTime;
+ (void)PBArrayAdd_walFrameCount;
+ (void)PBArrayAdd_tableCount;
+ (void)PBArrayAdd_associatedTableCount;
+ (void)PBArrayAdd_leafPageCount;
+ (void)PBArrayAdd_processTime;
+ (void)PBArrayAdd_beginBackupTime;
+ (void)PBArrayAdd_skipTimes;
+ (void)PBArrayAdd_actualCPUProcessTime;
+ (void)PBArrayAdd_getCPUTimeFalseTimes;
+ (void)PBArrayAdd_beginBackupCPUTime;
+ (void)PBArrayAdd_incrementalBackupTimes;
+ (void)PBArrayAdd_incrementalMaterialSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)bakeupSize;
- (void)setBakeupSize:(long long)arg1;
- (long long)backupTimes;
- (void)setBackupTimes:(long long)arg1;
- (id)startRecordTime;
- (void)setStartRecordTime:(id)arg1;
- (long long)walFrameCount;
- (void)setWalFrameCount:(long long)arg1;
- (long long)tableCount;
- (void)setTableCount:(long long)arg1;
- (long long)associatedTableCount;
- (void)setAssociatedTableCount:(long long)arg1;
- (long long)leafPageCount;
- (void)setLeafPageCount:(long long)arg1;
- (long long)processTime;
- (void)setProcessTime:(long long)arg1;
- (long long)skipTimes;
- (void)setSkipTimes:(long long)arg1;
- (long long)actualCPUProcessTime;
- (void)setActualCPUProcessTime:(long long)arg1;
- (long long)getCPUTimeFalseTimes;
- (void)setGetCPUTimeFalseTimes:(long long)arg1;
- (id)beginBackupTime;
- (void)setBeginBackupTime:(id)arg1;
- (unsigned long long)beginBackupCPUTime;
- (void)setBeginBackupCPUTime:(unsigned long long)arg1;
- (unsigned int)incrementalBackupTimes;
- (void)setIncrementalBackupTimes:(unsigned int)arg1;
- (long long)incrementalMaterialSize;
- (void)setIncrementalMaterialSize:(long long)arg1;
- (void).cxx_destruct;
@end

