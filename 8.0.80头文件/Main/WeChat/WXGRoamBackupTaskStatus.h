@interface WXGRoamBackupTaskStatus : NSObject
{
    BOOL _isAutoBackup; // +0x8
    BOOL _isBackup; // +0x9
    int _taskType; // +0xc
    int _state; // +0x10
    int _progress; // +0x14
    unsigned long long _packageId; // +0x18
    unsigned long long _notifyCode; // +0x20
    unsigned long long _currentCount; // +0x28
    unsigned long long _totalCount; // +0x30
    NSDate * _lastUpdateTime; // +0x38
}
- (id)init;
- (id)description;
- (unsigned long long)packageId;
- (void)setPackageId:(unsigned long long)arg1;
- (int)taskType;
- (void)setTaskType:(int)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (unsigned long long)notifyCode;
- (void)setNotifyCode:(unsigned long long)arg1;
- (int)progress;
- (void)setProgress:(int)arg1;
- (unsigned long long)currentCount;
- (void)setCurrentCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (BOOL)isAutoBackup;
- (void)setIsAutoBackup:(BOOL)arg1;
- (BOOL)isBackup;
- (void)setIsBackup:(BOOL)arg1;
- (id)lastUpdateTime;
- (void)setLastUpdateTime:(id)arg1;
- (void).cxx_destruct;
@end
