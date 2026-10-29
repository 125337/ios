@interface WXGSpeedFilter : NSObject
{
    NSMutableArray * m_speedCycleArray; // +0x8
    unsigned long long m_tailPoint; // +0x10
    unsigned long long m_windowSize; // +0x18
    float m_currentSpeed; // +0x20
    unsigned long long m_addSpeedCount; // +0x28
}
- (id)init;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (void)addSpeed:(float)arg1;
- (float)getSpeed;
- (void).cxx_destruct;
@end

