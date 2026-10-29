@interface WCPayCheckAuthorityRequestStruct : NSObject
{
    NSString * appId; // +0x8
    NSString * nonceStr; // +0x10
    NSString * timestamp; // +0x18
    NSString * package; // +0x20
    NSString * paySign; // +0x28
    NSString * signType; // +0x30
    NSString * stepInURL; // +0x38
    long long m_enWCPayCheckAuthorityScene; // +0x40
    int m_enWCPayCheckOpenWCPayViewAuthorityScene; // +0x48
    int _JsApiSource; // +0x4c
    unsigned int _payChannel; // +0x50
    NSString * _weAppUsername; // +0x58
    NSString * _weAppPath; // +0x60
    NSString * _commandWord; // +0x68
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)paySign;
- (void)setPaySign:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)signType;
- (void)setSignType:(id)arg1;
- (id)timestamp;
- (void)setTimestamp:(id)arg1;
- (id)stepInURL;
- (void)setStepInURL:(id)arg1;
- (long long)m_enWCPayCheckAuthorityScene;
- (void)setM_enWCPayCheckAuthorityScene:(long long)arg1;
- (int)m_enWCPayCheckOpenWCPayViewAuthorityScene;
- (void)setM_enWCPayCheckOpenWCPayViewAuthorityScene:(int)arg1;
- (id)weAppUsername;
- (void)setWeAppUsername:(id)arg1;
- (id)weAppPath;
- (void)setWeAppPath:(id)arg1;
- (int)JsApiSource;
- (void)setJsApiSource:(int)arg1;
- (unsigned int)payChannel;
- (void)setPayChannel:(unsigned int)arg1;
- (id)commandWord;
- (void)setCommandWord:(id)arg1;
- (void).cxx_destruct;
@end

