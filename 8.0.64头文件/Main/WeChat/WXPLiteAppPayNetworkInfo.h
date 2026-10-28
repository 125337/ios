@interface WXPLiteAppPayNetworkInfo : NSObject <LiteAppDynamicModuleObject>
{
    NSString * _oaid; // +0x8
    NSNumber * _adbEnable; // +0x10
    NSNumber * _developmentSettingEnable; // +0x18
    NSDictionary * _extendInfo; // +0x20
    BOOL * _isWechatClient; // +0x28
    NSNumber * _fontLevel; // +0x30
}
- (id)toDictionary;
- (id)getDictionaryFromJsonString:(id)arg1;
- (id)oaid;
- (void)setOaid:(id)arg1;
- (id)adbEnable;
- (void)setAdbEnable:(id)arg1;
- (id)developmentSettingEnable;
- (void)setDevelopmentSettingEnable:(id)arg1;
- (id)extendInfo;
- (void)setExtendInfo:(id)arg1;
- (BOOL *)isWechatClient;
- (void)setIsWechatClient:(BOOL *)arg1;
- (id)fontLevel;
- (void)setFontLevel:(id)arg1;
- (void).cxx_destruct;
@end
