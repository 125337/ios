@interface PhoneAuthGetPhoneNumberLogicPhoneInfo : MMObject
{
    BOOL _isBindWechat; // +0x8
    BOOL _needAuth; // +0x9
    BOOL _allowSendSms; // +0xa
    NSString * _mobile; // +0x10
    NSString * _showMobile; // +0x18
    NSString * _encryptData; // +0x20
    NSString * _iv; // +0x28
    NSString * _cloudId; // +0x30
    NSString * _data; // +0x38
}
- (id)getResultDic;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (id)showMobile;
- (void)setShowMobile:(id)arg1;
- (BOOL)isBindWechat;
- (void)setIsBindWechat:(BOOL)arg1;
- (BOOL)needAuth;
- (void)setNeedAuth:(BOOL)arg1;
- (BOOL)allowSendSms;
- (void)setAllowSendSms:(BOOL)arg1;
- (id)encryptData;
- (void)setEncryptData:(id)arg1;
- (id)iv;
- (void)setIv:(id)arg1;
- (id)cloudId;
- (void)setCloudId:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

