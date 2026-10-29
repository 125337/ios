@interface WCFinderCommonCountModel : NSObject
{
    long long _currentCount; // +0x8
    long long _targetCount; // +0x10
}
- (id)initWithCurrentCount:(long long)arg1 targetCount:(long long)arg2;
- (long long)currentCount;
- (void)setCurrentCount:(long long)arg1;
- (long long)targetCount;
- (void)setTargetCount:(long long)arg1;
@end

