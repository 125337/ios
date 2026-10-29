@interface WAReportCgiCostTimeItem : WAReportBaseItem
{
    unsigned int _costTime; // +0x8
    unsigned int _responseSize; // +0xc
    int _ret; // +0x10
    int _bizRet; // +0x14
    int _cgiNo; // +0x18
    long long _startTimeStamp; // +0x20
    long long _endTimeStamp; // +0x28
}
- (int)reportID;
- (id)reportString;
- (long long)startTimeStamp;
- (void)setStartTimeStamp:(long long)arg1;
- (long long)endTimeStamp;
- (void)setEndTimeStamp:(long long)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (unsigned int)responseSize;
- (void)setResponseSize:(unsigned int)arg1;
- (int)ret;
- (void)setRet:(int)arg1;
- (int)bizRet;
- (void)setBizRet:(int)arg1;
- (int)cgiNo;
- (void)setCgiNo:(int)arg1;
@end

