@interface TencentLBSBeaconDefaults : NSObject
{
    NSArray * _supportedProximityUUIDs; // +0x8
    NSNumber * _defaultPower; // +0x10
}
+ (id)sharedDefaults;
- (id)init;
- (id)defaultProximityUUID;
- (id)supportedProximityUUIDs;
- (id)defaultPower;
- (void).cxx_destruct;
@end

