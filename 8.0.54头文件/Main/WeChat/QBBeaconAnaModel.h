@interface QBBeaconAnaModel : NSObject
{
    BOOL isReet; // +0x8
    float osVerFloat; // +0xc
    NSString * appId; // +0x10
    NSString * appVersion; // +0x18
    NSString * qua; // +0x20
    NSString * guid; // +0x28
    NSString * gatewayIP; // +0x30
    NSString * osVer; // +0x38
    NSString * bundleId; // +0x40
    NSString * udidVendor; // +0x48
    NSString * advUid; // +0x50
    NSString * hardwareModel; // +0x58
    NSString * country; // +0x60
    NSString * language; // +0x68
    NSString * qimei; // +0x70
    NSString * channel_id; // +0x78
    NSString * sdkVersion; // +0x80
    NSString * wifiName; // +0x88
    NSString * imsi; // +0x90
    NSString * wifiMac; // +0x98
    NSString * networkType; // +0xa0
    NSString * apn; // +0xa8
    NSString * _sessionid; // +0xb0
    NSDictionary * _addParams; // +0xb8
}
+ (id)getDefualtQBBeaconAnaModel;
- (id)init;
- (void).cxx_destruct;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)qua;
- (void)setQua:(id)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)gatewayIP;
- (void)setGatewayIP:(id)arg1;
- (id)osVer;
- (void)setOsVer:(id)arg1;
- (float)osVerFloat;
- (void)setOsVerFloat:(float)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)udidVendor;
- (void)setUdidVendor:(id)arg1;
- (id)advUid;
- (void)setAdvUid:(id)arg1;
- (id)hardwareModel;
- (void)setHardwareModel:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)qimei;
- (void)setQimei:(id)arg1;
- (id)channel_id;
- (void)setChannel_id:(id)arg1;
- (BOOL)isReet;
- (void)setIsReet:(BOOL)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (id)imsi;
- (void)setImsi:(id)arg1;
- (id)wifiMac;
- (void)setWifiMac:(id)arg1;
- (id)networkType;
- (void)setNetworkType:(id)arg1;
- (id)apn;
- (void)setApn:(id)arg1;
- (id)sessionid;
- (void)setSessionid:(id)arg1;
- (id)addParams;
- (void)setAddParams:(id)arg1;
@end

