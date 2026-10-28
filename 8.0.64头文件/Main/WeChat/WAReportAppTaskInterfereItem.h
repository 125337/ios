@interface WAReportAppTaskInterfereItem : WAReportBaseItem
{
    unsigned int _costTime; // +0x8
    unsigned int _action; // +0xc
    long long _startTimeStamp; // +0x10
    long long _endTimeStamp; // +0x18
}
- (int)reportID;
- (id)reportString;
- (long long)startTimeStamp;
- (void)setStartTimeStamp:(long long)arg1;
- (long long)endTimeStamp;
- (void)setEndTimeStamp:(long long)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
@end
