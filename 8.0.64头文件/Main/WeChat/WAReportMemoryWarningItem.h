@interface WAReportMemoryWarningItem : WAReportBaseItem
{
    unsigned int _cacheNum; // +0x8
    long long _processMemUsed; // +0x10
    unsigned long long _deviceMem; // +0x18
}
- (int)reportID;
- (id)reportString;
- (unsigned int)cacheNum;
- (void)setCacheNum:(unsigned int)arg1;
- (long long)processMemUsed;
- (void)setProcessMemUsed:(long long)arg1;
- (unsigned long long)deviceMem;
- (void)setDeviceMem:(unsigned long long)arg1;
@end
