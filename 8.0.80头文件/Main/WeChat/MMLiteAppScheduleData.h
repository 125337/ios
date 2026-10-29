@interface MMLiteAppScheduleData : NSObject <PBCoding>
{
    BOOL _forceDispatch; // +0x8
    int _interval; // +0xc
    int _repeat; // +0x10
    int _aliveDurationSeconds; // +0x14
    NSString * _actionName; // +0x18
    NSString * _actionPayload; // +0x20
    long long _lastTriggerTime; // +0x28
    long long _setTime; // +0x30
}
+ (void)PBArrayAdd_interval;
+ (void)PBArrayAdd_repeat;
+ (void)PBArrayAdd_actionName;
+ (void)PBArrayAdd_actionPayload;
+ (void)PBArrayAdd_forceDispatch;
+ (void)PBArrayAdd_aliveDurationSeconds;
+ (void)PBArrayAdd_lastTriggerTime;
+ (void)PBArrayAdd_setTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (int)interval;
- (void)setInterval:(int)arg1;
- (int)repeat;
- (void)setRepeat:(int)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)actionPayload;
- (void)setActionPayload:(id)arg1;
- (BOOL)forceDispatch;
- (void)setForceDispatch:(BOOL)arg1;
- (int)aliveDurationSeconds;
- (void)setAliveDurationSeconds:(int)arg1;
- (long long)lastTriggerTime;
- (void)setLastTriggerTime:(long long)arg1;
- (long long)setTime;
- (void)setSetTime:(long long)arg1;
- (void).cxx_destruct;
@end
