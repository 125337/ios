@interface MMBatteryMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
}
+ (void)PBArrayAdd_enabled;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
@end
