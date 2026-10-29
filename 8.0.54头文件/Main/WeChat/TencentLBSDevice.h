@interface TencentLBSDevice : NSObject
{
    BOOL _canUseHttp; // +0x8
    NSString * _model; // +0x10
    NSString * _systemVersion; // +0x18
    NSString * _identifierForVendor; // +0x20
    NSString * _identifierForIdentifier; // +0x28
    NSString * _appName; // +0x30
    NSString * _buildDate; // +0x38
    NSString * _accessTokenMD5; // +0x40
    NSString * _sdkVersion; // +0x48
    NSString * _appLabel; // +0x50
    NSString * _appVersion; // +0x58
    NSString * _deviceModel; // +0x60
    NSString * _openid; // +0x68
    NSString * _phoneNumber; // +0x70
}
+ (id)currentDevice;
- (id)init;
- (void)updateIdfa:(id)arg1;
- (void)getStoredId;
- (id)deviceModelName;
- (BOOL)supportATS;
- (id)model;
- (void)setModel:(id)arg1;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg1;
- (id)identifierForVendor;
- (void)setIdentifierForVendor:(id)arg1;
- (id)identifierForIdentifier;
- (void)setIdentifierForIdentifier:(id)arg1;
- (BOOL)canUseHttp;
- (void)setCanUseHttp:(BOOL)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)buildDate;
- (void)setBuildDate:(id)arg1;
- (id)accessTokenMD5;
- (void)setAccessTokenMD5:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (id)appLabel;
- (void)setAppLabel:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)deviceModel;
- (void)setDeviceModel:(id)arg1;
- (id)openid;
- (void)setOpenid:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (void).cxx_destruct;
@end

