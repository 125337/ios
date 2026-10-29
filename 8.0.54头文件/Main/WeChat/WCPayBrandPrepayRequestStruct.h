@interface WCPayBrandPrepayRequestStruct : NSObject
{
    NSString * appId; // +0x8
    NSString * nonceStr; // +0x10
    NSString * timestamp; // +0x18
    NSString * package; // +0x20
    NSString * paySign; // +0x28
    NSString * signType; // +0x30
    NSString * stepInURL; // +0x38
    NSString * stepInAppUserName; // +0x40
    unsigned int payChannel; // +0x48
    NSString * extInfo; // +0x50
    unsigned int payScene; // +0x58
    NSString * weappPayCookies; // +0x60
    unsigned int _weappEnterScene; // +0x68
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
- (id)stepInAppUserName;
- (void)setStepInAppUserName:(id)arg1;
- (id)stepInURL;
- (void)setStepInURL:(id)arg1;
- (unsigned int)payChannel;
- (void)setPayChannel:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)payScene;
- (void)setPayScene:(unsigned int)arg1;
- (id)weappPayCookies;
- (void)setWeappPayCookies:(id)arg1;
- (unsigned int)weappEnterScene;
- (void)setWeappEnterScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

