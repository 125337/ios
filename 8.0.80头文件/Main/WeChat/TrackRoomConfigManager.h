@interface TrackRoomConfigManager : NSObject
+ (BOOL)isV2;
+ (void)setV2:(BOOL)arg1;
+ (void)resetVersion;
+ (unsigned int)leaveTimeoutInterval;
+ (void)setLeaveTimeoutInterval:(unsigned int)arg1;
+ (void)resetLeaveTimeoutInterval;
@end
