@interface MMTemplateMsgNotifyInfoFetchItem : NSObject
{
    NSString * _username; // +0x8
    double _updateTime; // +0x10
    unsigned long long _status; // +0x18
    long long _failedCount; // +0x20
}
- (id)initWithUsername:(id)arg1;
- (void)markAsRunning;
- (void)markAsSuccess;
- (void)markAsFailed;
- (void)resetForRetry;
- (BOOL)canRetry;
- (id)username;
- (double)updateTime;
- (void)setUpdateTime:(double)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (long long)failedCount;
- (void)setFailedCount:(long long)arg1;
- (void).cxx_destruct;
@end
