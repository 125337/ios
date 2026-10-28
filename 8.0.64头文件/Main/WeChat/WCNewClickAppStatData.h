@interface WCNewClickAppStatData : MMObject <PBCoding>
{
    unsigned int _firstEnterTS; // +0x8
    unsigned int _lastQuitTS; // +0xc
    int _interval; // +0x10
    int _backgroundInterval; // +0x14
    unsigned int _switchCount; // +0x18
    unsigned int _realSwitchCount; // +0x1c
    int _realInterval; // +0x20
    int _realBackgroundInterval; // +0x24
    unsigned int _realFirstEnterTS; // +0x28
    unsigned int _realLastQuitTS; // +0x2c
}
+ (void)PBArrayAdd_firstEnterTS;
+ (void)PBArrayAdd_lastQuitTS;
+ (void)PBArrayAdd_interval;
+ (void)PBArrayAdd_backgroundInterval;
+ (void)PBArrayAdd_switchCount;
+ (void)PBArrayAdd_realInterval;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)firstEnterTS;
- (void)setFirstEnterTS:(unsigned int)arg1;
- (unsigned int)lastQuitTS;
- (void)setLastQuitTS:(unsigned int)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (int)backgroundInterval;
- (void)setBackgroundInterval:(int)arg1;
- (unsigned int)switchCount;
- (void)setSwitchCount:(unsigned int)arg1;
- (unsigned int)realSwitchCount;
- (void)setRealSwitchCount:(unsigned int)arg1;
- (int)realInterval;
- (void)setRealInterval:(int)arg1;
- (int)realBackgroundInterval;
- (void)setRealBackgroundInterval:(int)arg1;
- (unsigned int)realFirstEnterTS;
- (void)setRealFirstEnterTS:(unsigned int)arg1;
- (unsigned int)realLastQuitTS;
- (void)setRealLastQuitTS:(unsigned int)arg1;
@end
