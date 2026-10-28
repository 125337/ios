@interface WCNewClickRealAppStatData : NSObject <PBCoding>
{
    unsigned int _realSwitchCount; // +0x8
    int _realInterval; // +0xc
    int _realBackgroundInterval; // +0x10
    unsigned int _realFirstEnterTS; // +0x14
    unsigned int _realLastQuitTS; // +0x18
}
+ (void)PBArrayAdd_realInterval;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)initialize;
- (id)getPBPropertyTable;
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
