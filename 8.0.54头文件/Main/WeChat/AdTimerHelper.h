@interface AdTimerHelper : NSObject
{
    unsigned long long _activeTime; // +0x8
}
- (id)init;
- (void)start;
- (unsigned long long)stop;
- (unsigned long long)endAndReturnTimeInMs;
- (unsigned long long)activeTime;
- (void)setActiveTime:(unsigned long long)arg1;
@end

