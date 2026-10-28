@interface WAReportJsApiInfoCgiItem : WAReportBaseItem
{
    unsigned int _costTimeMs; // +0x8
    unsigned int _ret; // +0xc
    unsigned int _isSync; // +0x10
    unsigned int _NetworkType; // +0x14
    long long _startTimeStampMs; // +0x18
    long long _endTimeStampMs; // +0x20
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)costTimeMs;
- (void)setCostTimeMs:(unsigned int)arg1;
- (long long)startTimeStampMs;
- (void)setStartTimeStampMs:(long long)arg1;
- (long long)endTimeStampMs;
- (void)setEndTimeStampMs:(long long)arg1;
- (unsigned int)ret;
- (void)setRet:(unsigned int)arg1;
- (unsigned int)isSync;
- (void)setIsSync:(unsigned int)arg1;
- (unsigned int)NetworkType;
- (void)setNetworkType:(unsigned int)arg1;
@end
