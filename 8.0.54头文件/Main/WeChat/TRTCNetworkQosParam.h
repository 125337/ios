@interface TRTCNetworkQosParam : NSObject
{
    long long _preference; // +0x8
    long long _controlMode; // +0x10
}
- (TRTCNetworkQosParam)convertToCppParams;
- (id)init;
- (long long)preference;
- (void)setPreference:(long long)arg1;
- (long long)controlMode;
- (void)setControlMode:(long long)arg1;
@end

