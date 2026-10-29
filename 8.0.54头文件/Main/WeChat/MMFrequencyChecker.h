@interface MMFrequencyChecker : NSObject
{
    MemoryMappedKV * mmkv; // +0x8
    NSString * module; // +0x10
}
- (unsigned int)LastTriggerTimeStamp;
- (void)setLastTriggerTimeStamp:(unsigned int)arg1;
- (unsigned int)FirstTriggerTimeStamp;
- (void)setFirstTriggerTimeStamp:(unsigned int)arg1;
- (unsigned int)TriggeredTimes;
- (void)setTriggeredTimes:(unsigned int)arg1;
- (id)initWithID:(id)arg1;
- (BOOL)canTriggerWithInterval:(unsigned long long)arg1 forSubModule:(id)arg2;
- (BOOL)canTriggerWithInterval:(unsigned long long)arg1 maxTriggerTimes:(unsigned long long)arg2 resetPeriod:(unsigned long long)arg3;
- (void)invalid;
- (void)resetLimit;
- (void).cxx_destruct;
@end

