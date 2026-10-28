@interface WCDBRepairRecord : NSObject <PBCoding>
{
    int _tag; // +0x8
    int _repairTimes; // +0xc
    NSDate * _lastRepairTime; // +0x10
}
+ (void)PBArrayAdd_tag;
+ (void)PBArrayAdd_repairTimes;
+ (void)PBArrayAdd_lastRepairTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (int)tag;
- (void)setTag:(int)arg1;
- (int)repairTimes;
- (void)setRepairTimes:(int)arg1;
- (id)lastRepairTime;
- (void)setLastRepairTime:(id)arg1;
- (void).cxx_destruct;
@end
