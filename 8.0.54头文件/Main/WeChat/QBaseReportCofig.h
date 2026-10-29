@interface QBaseReportCofig : NSObject
{
    BOOL _beaconEnable; // +0x8
    BOOL _beaconLogEnable; // +0x9
}
- (BOOL)beaconEnable;
- (void)setBeaconEnable:(BOOL)arg1;
- (BOOL)beaconLogEnable;
- (void)setBeaconLogEnable:(BOOL)arg1;
@end

