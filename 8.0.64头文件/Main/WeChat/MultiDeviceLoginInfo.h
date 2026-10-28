@interface MultiDeviceLoginInfo : NSObject
{
    BOOL _showSyncChat; // +0x8
    BOOL _showPrivacyAgree; // +0x9
    unsigned int _fromScene; // +0xc
    unsigned int _iconType; // +0x10
    unsigned int _sessionCountLimit; // +0x14
    unsigned int _timeout; // +0x18
    unsigned int _functionBit; // +0x1c
    unsigned int _clientVersion; // +0x20
    unsigned int _deviceState; // +0x24
    unsigned int _deviceClientVersion; // +0x28
    NSString * _URLString; // +0x30
    NSDictionary * _extInfo; // +0x38
    NSString * _tips; // +0x40
    NSString * _title; // +0x48
    NSString * _confirmButtonTitle; // +0x50
    NSString * _cancelButtonTitle; // +0x58
    NSString * _warningTips; // +0x60
    NSString * _deviceTips; // +0x68
    long long _responseType; // +0x70
    NSString * _usageURL; // +0x78
    NSString * _spamSecondVerifyURL; // +0x80
    NSString * _multiDeviceTips; // +0x88
    NSString * _autoLoginSwitchTip; // +0x90
    NSString * _deviceName; // +0x98
}
- (id)initWithURLString:(id)arg1 fromScene:(unsigned int)arg2 extInfo:(id)arg3;
- (void)setExtInfo:(id)arg1;
- (id)confirmButtonTitle;
- (id)cancelButtonTitle;
- (id)deviceIconImage;
- (id)title;
- (BOOL)showSyncChatEntrance;
- (BOOL)shouldSelectSyncChatByDefault;
- (BOOL)showAutoLoginEntrance;
- (BOOL)isAutoLoginEnabled;
- (id)URLString;
- (void)setURLString:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)extInfo;
- (id)tips;
- (void)setTips:(id)arg1;
- (void)setTitle:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (void)setConfirmButtonTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (id)warningTips;
- (void)setWarningTips:(id)arg1;
- (id)deviceTips;
- (void)setDeviceTips:(id)arg1;
- (unsigned int)sessionCountLimit;
- (void)setSessionCountLimit:(unsigned int)arg1;
- (unsigned int)timeout;
- (void)setTimeout:(unsigned int)arg1;
- (long long)responseType;
- (void)setResponseType:(long long)arg1;
- (unsigned int)functionBit;
- (void)setFunctionBit:(unsigned int)arg1;
- (unsigned int)clientVersion;
- (void)setClientVersion:(unsigned int)arg1;
- (id)usageURL;
- (void)setUsageURL:(id)arg1;
- (id)spamSecondVerifyURL;
- (void)setSpamSecondVerifyURL:(id)arg1;
- (unsigned int)deviceState;
- (void)setDeviceState:(unsigned int)arg1;
- (id)multiDeviceTips;
- (void)setMultiDeviceTips:(id)arg1;
- (id)autoLoginSwitchTip;
- (void)setAutoLoginSwitchTip:(id)arg1;
- (unsigned int)deviceClientVersion;
- (void)setDeviceClientVersion:(unsigned int)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (BOOL)showSyncChat;
- (void)setShowSyncChat:(BOOL)arg1;
- (BOOL)showPrivacyAgree;
- (void)setShowPrivacyAgree:(BOOL)arg1;
- (void).cxx_destruct;
@end
