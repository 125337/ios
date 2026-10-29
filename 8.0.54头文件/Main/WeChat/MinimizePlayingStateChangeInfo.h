@interface MinimizePlayingStateChangeInfo : NSObject
{
    unsigned int _state; // +0x8
    unsigned long long _startTimeStamp; // +0x10
}
+ (id)stateChangeInfoWithNewState:(unsigned int)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (unsigned long long)startTimeStamp;
- (void)setStartTimeStamp:(unsigned long long)arg1;
@end

