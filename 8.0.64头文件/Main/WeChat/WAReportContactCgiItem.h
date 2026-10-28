@interface WAReportContactCgiItem : WAReportBaseItem
{
    BOOL _ret; // +0x8
    BOOL _isSync; // +0x9
    unsigned long long _startTimeStampInMs; // +0x10
    unsigned long long _endTimeStampInMs; // +0x18
    unsigned long long _costTimeInMs; // +0x20
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned long long)startTimeStampInMs;
- (void)setStartTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)endTimeStampInMs;
- (void)setEndTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)costTimeInMs;
- (void)setCostTimeInMs:(unsigned long long)arg1;
- (BOOL)ret;
- (void)setRet:(BOOL)arg1;
- (BOOL)isSync;
- (void)setIsSync:(BOOL)arg1;
@end
