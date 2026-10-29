@interface TencentLBSWifiLocation : NSObject
{
    int _wlanUse; // +0x8
    CLLocation * _location; // +0x10
}
- (id)init;
- (BOOL)isWifiLocationValid;
- (id)description;
- (id)location;
- (void)setLocation:(id)arg1;
- (int)wlanUse;
- (void)setWlanUse:(int)arg1;
- (void).cxx_destruct;
@end

