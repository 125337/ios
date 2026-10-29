@interface WAReportLaunchCgiItem : WAReportBaseItem
{
    BOOL _isParallel; // +0x8
    unsigned int _ret; // +0xc
    unsigned int _isSync; // +0x10
    unsigned int _isNormalOpen; // +0x14
    unsigned long long _startTimeStampInMs; // +0x18
    unsigned long long _endTimeStampInMs; // +0x20
    unsigned long long _costTimeInMs; // +0x28
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
- (unsigned int)isSync;
- (void)setIsSync:(unsigned int)arg1;
- (unsigned int)isNormalOpen;
- (void)setIsNormalOpen:(unsigned int)arg1;
- (BOOL)isParallel;
- (void)setIsParallel:(BOOL)arg1;
@end

