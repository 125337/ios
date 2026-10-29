@interface WCPlayerActionEvent : NSObject
{
    unsigned long long _actionType; // +0x8
    unsigned long long _refTimeMs; // +0x10
    double _playbackTime; // +0x18
    NSMutableDictionary * _extras; // +0x20
}
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)refTimeMs;
- (void)setRefTimeMs:(unsigned long long)arg1;
- (double)playbackTime;
- (void)setPlaybackTime:(double)arg1;
- (id)extras;
- (void)setExtras:(id)arg1;
- (void).cxx_destruct;
@end
