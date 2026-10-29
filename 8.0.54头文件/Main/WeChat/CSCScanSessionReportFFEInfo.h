@interface CSCScanSessionReportFFEInfo : MMObject
{
    Log engineLog; // +0x8
    long long _tentativeCount; // +0xf0
    long long _maxScore2ConfirmedCount; // +0xf8
    long long _tentative2ConfirmedCount; // +0x100
    long long _tentative2DeletedCount; // +0x108
    long long _confirmed2MissCount; // +0x110
    long long _miss2DeletedCount; // +0x118
    long long _miss2ConfirmedCount; // +0x120
    long long _doudiCount; // +0x128
    double _detectAvgValue; // +0x130
    double _detectMaxValue; // +0x138
}
- (void)setEngineLogInfo:(Log)arg1;
- (Log)engineLogInfo;
- (long long)tentativeCount;
- (void)setTentativeCount:(long long)arg1;
- (long long)maxScore2ConfirmedCount;
- (void)setMaxScore2ConfirmedCount:(long long)arg1;
- (long long)tentative2ConfirmedCount;
- (void)setTentative2ConfirmedCount:(long long)arg1;
- (long long)tentative2DeletedCount;
- (void)setTentative2DeletedCount:(long long)arg1;
- (long long)confirmed2MissCount;
- (void)setConfirmed2MissCount:(long long)arg1;
- (long long)miss2DeletedCount;
- (void)setMiss2DeletedCount:(long long)arg1;
- (long long)miss2ConfirmedCount;
- (void)setMiss2ConfirmedCount:(long long)arg1;
- (long long)doudiCount;
- (void)setDoudiCount:(long long)arg1;
- (double)detectAvgValue;
- (void)setDetectAvgValue:(double)arg1;
- (double)detectMaxValue;
- (void)setDetectMaxValue:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

