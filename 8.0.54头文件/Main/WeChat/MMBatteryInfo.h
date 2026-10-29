@interface MMBatteryInfo : NSObject <PBCoding, WCTColumnCoding>
{
    float _batteryLevel; // +0x8
    long long _batteryState; // +0x10
}
+ (void)PBArrayAdd_batteryState;
+ (void)PBArrayAdd_batteryLevel;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)currentBatteryInfo;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (long long)batteryState;
- (void)setBatteryState:(long long)arg1;
- (float)batteryLevel;
- (void)setBatteryLevel:(float)arg1;
@end

