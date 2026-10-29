@interface MessageVoiceTransTimings : NSObject
{
    long long _checkStartMs; // +0x8
    long long _firstPacketSentMs; // +0x10
    long long _lastPacketSentMs; // +0x18
    long long _firstResultMs; // +0x20
    long long _endResultMs; // +0x28
}
- (long long)checkStartMs;
- (void)setCheckStartMs:(long long)arg1;
- (long long)firstPacketSentMs;
- (void)setFirstPacketSentMs:(long long)arg1;
- (long long)lastPacketSentMs;
- (void)setLastPacketSentMs:(long long)arg1;
- (long long)firstResultMs;
- (void)setFirstResultMs:(long long)arg1;
- (long long)endResultMs;
- (void)setEndResultMs:(long long)arg1;
@end
