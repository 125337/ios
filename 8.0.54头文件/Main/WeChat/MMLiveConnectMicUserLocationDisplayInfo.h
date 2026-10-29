@interface MMLiveConnectMicUserLocationDisplayInfo : NSObject
{
    BOOL _isOver; // +0x8
    NSString * _sdkUserId; // +0x10
    NSString * _locationName; // +0x18
    unsigned long long _expiredTime; // +0x20
}
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)locationName;
- (void)setLocationName:(id)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (BOOL)isOver;
- (void)setIsOver:(BOOL)arg1;
- (void).cxx_destruct;
@end

