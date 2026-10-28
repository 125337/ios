@interface GameWebViewTimeRecord : MMObject
{
    unsigned long long[5] _timeArray; // +0x8
    unsigned long long _a8KeyStartTime; // +0x30
    unsigned long long _a8KeyFinishTime; // +0x38
    unsigned long long _preverifyStartTime; // +0x40
    unsigned long long _preverifyFinishTime; // +0x48
    unsigned long long _userClickToCreateTime; // +0x50
    unsigned int _initTimestamp; // +0x58
}
- (unsigned int)initDuration;
- (unsigned int)idleDuration;
- (unsigned int)loadDuration;
- (unsigned int)renderDuration;
- (void)markA8KeyStartTimeToCurrent;
- (void)markA8KeyFinishTimeToCurrent;
- (unsigned int)a8KeyDuration;
- (void)markPreverifyStartTimeToCurrent;
- (void)markPreverifyFinishTimeToCurrent;
- (unsigned int)preverifyDuration;
- (void)markTimeToCurrentForType:(unsigned long long)arg1;
- (unsigned long long)getTimeForType:(unsigned long long)arg1;
- (void)markUserClickTime:(unsigned long long)arg1;
- (unsigned int)getUserClickTime;
- (unsigned int)calculateDurationWithEndTimeType:(unsigned long long)arg1;
- (unsigned int)initTimestamp;
@end
