@interface WAReportGetUrlCgiItem : WAReportBaseItem
{
    BOOL _isParallel; // +0x8
    BOOL _isUsed; // +0x9
    unsigned int _ret; // +0xc
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
- (unsigned int)ret;
- (void)setRet:(unsigned int)arg1;
- (BOOL)isParallel;
- (void)setIsParallel:(BOOL)arg1;
- (BOOL)isUsed;
- (void)setIsUsed:(BOOL)arg1;
@end

