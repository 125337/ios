@interface WAHotspotWiFiObject : MMObject
{
    BOOL _secure; // +0x8
    BOOL _autoJoined; // +0x9
    BOOL _justJoined; // +0xa
    NSString * _SSID; // +0x10
    NSString * _BSSID; // +0x18
    NSString * _password; // +0x20
    NEHotspotNetwork * _hotspotNetwork; // +0x28
    double _signalStrength; // +0x30
}
+ (id)wifiWithSSID:(id)arg1;
+ (id)wifiWithSSID:(id)arg1 BSSID:(id)arg2 password:(id)arg3;
+ (id)wifiWithHotspotNetwork:(id)arg1;
- (id)initWithSSID:(id)arg1;
- (id)initWithSSID:(id)arg1 BSSID:(id)arg2 password:(id)arg3;
- (id)initWithHotspotNetwork:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)description;
- (id)wifiDictionaryObject;
- (id)prefillBSSIDForiOS:(id)arg1;
- (double)rssi;
- (id)SSID;
- (id)BSSID;
- (BOOL)secure;
- (id)password;
- (id)hotspotNetwork;
- (double)signalStrength;
- (BOOL)autoJoined;
- (BOOL)justJoined;
- (void).cxx_destruct;
@end
