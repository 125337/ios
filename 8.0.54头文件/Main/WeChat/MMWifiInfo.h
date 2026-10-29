@interface MMWifiInfo : NSObject
{
    NSString * _wifiSSID; // +0x8
    NSString * _wifiBSSID; // +0x10
    unsigned long long _updateTimeInMs; // +0x18
}
- (void)accessWifiInfo:(id *)arg1 BSSID:(id *)arg2;
- (id)wifiSSID;
- (void)setWifiSSID:(id)arg1;
- (id)wifiBSSID;
- (void)setWifiBSSID:(id)arg1;
- (unsigned long long)updateTimeInMs;
- (void)setUpdateTimeInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

