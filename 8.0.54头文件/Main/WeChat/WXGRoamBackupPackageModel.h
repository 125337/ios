@interface WXGRoamBackupPackageModel : NSObject
{
    BOOL _isAutoBackup; // +0x8
    BOOL _isBackupWhenLowPower; // +0x9
    BOOL _isBackupWithMobileNet; // +0xa
    BOOL _isCreate; // +0xb
    BOOL _isBackup; // +0xc
    BOOL _hasPermission; // +0xd
    unsigned int _lastErrorTime; // +0x10
    RoamBackupPackage * _package; // +0x18
    unsigned long long _notifyCode; // +0x20
    unsigned long long _totalSize; // +0x28
    NSMutableArray * _convTimeRangeList; // +0x30
    unsigned long long _restoreSize; // +0x38
    unsigned long long _currentCount; // +0x40
    unsigned long long _totalCount; // +0x48
    unsigned long long _sortNum; // +0x50
}
- (id)package;
- (void)setPackage:(id)arg1;
- (BOOL)isAutoBackup;
- (void)setIsAutoBackup:(BOOL)arg1;
- (BOOL)isBackupWhenLowPower;
- (void)setIsBackupWhenLowPower:(BOOL)arg1;
- (BOOL)isBackupWithMobileNet;
- (void)setIsBackupWithMobileNet:(BOOL)arg1;
- (unsigned int)lastErrorTime;
- (void)setLastErrorTime:(unsigned int)arg1;
- (unsigned long long)notifyCode;
- (void)setNotifyCode:(unsigned long long)arg1;
- (BOOL)isCreate;
- (void)setIsCreate:(BOOL)arg1;
- (BOOL)isBackup;
- (void)setIsBackup:(BOOL)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (id)convTimeRangeList;
- (void)setConvTimeRangeList:(id)arg1;
- (unsigned long long)restoreSize;
- (void)setRestoreSize:(unsigned long long)arg1;
- (unsigned long long)currentCount;
- (void)setCurrentCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (BOOL)hasPermission;
- (void)setHasPermission:(BOOL)arg1;
- (unsigned long long)sortNum;
- (void)setSortNum:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

