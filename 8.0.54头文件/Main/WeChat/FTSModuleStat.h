@interface FTSModuleStat : NSObject
{
    unsigned int _moduleType; // +0x8
    unsigned int _resultCnt; // +0xc
    unsigned long long _startTime; // +0x10
    unsigned long long _endTime; // +0x18
}
- (void)setModuleType:(unsigned int)arg1;
- (unsigned int)calTime;
- (unsigned int)moduleType;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned int)resultCnt;
- (void)setResultCnt:(unsigned int)arg1;
@end

