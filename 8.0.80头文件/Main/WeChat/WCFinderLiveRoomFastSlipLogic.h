@interface WCFinderLiveRoomFastSlipLogic : NSObject
{
    long long _consecutiveFastSlipCount; // +0x8
    double _lastEventTime; // +0x10
}
- (void)recordLiveRoomSwitchWithDirection:(long long)arg1;
- (long long)consecutiveFastSlipCount;
- (void)setConsecutiveFastSlipCount:(long long)arg1;
- (double)lastEventTime;
- (void)setLastEventTime:(double)arg1;
@end
