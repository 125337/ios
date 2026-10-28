@interface BrandIAPPrepayRequestStruct : NSObject
{
    NSString * _appId; // +0x8
    NSString * _nonceStr; // +0x10
    NSString * _timestamp; // +0x18
    NSString * _package; // +0x20
    NSString * _paySign; // +0x28
    NSString * _signType; // +0x30
    NSString * _stepInURL; // +0x38
    NSString * _extKey; // +0x40
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (id)timestamp;
- (void)setTimestamp:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)paySign;
- (void)setPaySign:(id)arg1;
- (id)signType;
- (void)setSignType:(id)arg1;
- (id)stepInURL;
- (void)setStepInURL:(id)arg1;
- (id)extKey;
- (void)setExtKey:(id)arg1;
- (void).cxx_destruct;
@end
