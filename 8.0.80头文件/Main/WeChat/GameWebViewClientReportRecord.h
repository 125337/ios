@interface GameWebViewClientReportRecord : MMObject
{
    BOOL _reportOnExit; // +0x8
    BOOL _isReportNow; // +0x9
    BOOL _isImportant; // +0xa
    BOOL _isTimeMillSecond; // +0xb
    NSNumber * _logId; // +0x10
    NSString * _reportStr; // +0x18
    NSString * _timePlaceHolderKey; // +0x20
    NSNumber * _reportDuration; // +0x28
    unsigned long long _startTimeStamp; // +0x30
}
- (void)reportLog;
- (void)reportLogByOtherPageDurationSec:(double)arg1;
- (id)replaceStr:(id)arg1 occurrenceOfString:(id)arg2 withString:(id)arg3;
- (BOOL)reportOnExit;
- (void)setReportOnExit:(BOOL)arg1;
- (id)logId;
- (void)setLogId:(id)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (id)timePlaceHolderKey;
- (void)setTimePlaceHolderKey:(id)arg1;
- (id)reportDuration;
- (void)setReportDuration:(id)arg1;
- (unsigned long long)startTimeStamp;
- (void)setStartTimeStamp:(unsigned long long)arg1;
- (BOOL)isReportNow;
- (void)setIsReportNow:(BOOL)arg1;
- (BOOL)isImportant;
- (void)setIsImportant:(BOOL)arg1;
- (BOOL)isTimeMillSecond;
- (void)setIsTimeMillSecond:(BOOL)arg1;
- (void).cxx_destruct;
@end
