@interface WCDeviceStepObject : MMObject
{
    unsigned int beginTime; // +0x8
    unsigned int endTime; // +0xc
    unsigned int m7StepCount; // +0x10
    unsigned int hkStepCount; // +0x14
    NSMutableArray * allHKSampleSource; // +0x18
}
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)m7StepCount;
- (void)setM7StepCount:(unsigned int)arg1;
- (unsigned int)hkStepCount;
- (void)setHkStepCount:(unsigned int)arg1;
- (id)allHKSampleSource;
- (void)setAllHKSampleSource:(id)arg1;
- (void).cxx_destruct;
@end

