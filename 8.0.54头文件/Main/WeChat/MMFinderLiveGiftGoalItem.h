@interface MMFinderLiveGiftGoalItem : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _giftId; // +0x10
    unsigned long long _targetCount; // +0x18
    unsigned long long _currentCount; // +0x20
    unsigned long long _stagingUnixEpochTimeInSeconds; // +0x28
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)giftId;
- (void)setGiftId:(id)arg1;
- (unsigned long long)targetCount;
- (void)setTargetCount:(unsigned long long)arg1;
- (unsigned long long)currentCount;
- (void)setCurrentCount:(unsigned long long)arg1;
- (unsigned long long)stagingUnixEpochTimeInSeconds;
- (void)setStagingUnixEpochTimeInSeconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

