@interface QRCodeOAuthData : MMObject
{
    unsigned int _lpTimeout; // +0x8
    unsigned int _lpInterval; // +0xc
    NSString * _uuid; // +0x10
    NSString * _appId; // +0x18
    NSString * _appName; // +0x20
    NSString * _appDesc; // +0x28
    NSString * _appIconUrl; // +0x30
    NSData * _qrCodeData; // +0x38
}
- (id)description;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appDesc;
- (void)setAppDesc:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)qrCodeData;
- (void)setQrCodeData:(id)arg1;
- (unsigned int)lpTimeout;
- (void)setLpTimeout:(unsigned int)arg1;
- (unsigned int)lpInterval;
- (void)setLpInterval:(unsigned int)arg1;
- (void).cxx_destruct;
@end

