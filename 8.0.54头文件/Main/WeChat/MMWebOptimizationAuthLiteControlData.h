@interface MMWebOptimizationAuthLiteControlData : MMObject <PBCoding>
{
    BOOL _hasAllowanceOfFirstAsyncGetA8Key; // +0x8
    BOOL _needAuthState; // +0x9
    BOOL _forbidAsyncGetA8key; // +0xa
    BOOL _fromKara; // +0xb
    unsigned int _controlExpiredTime; // +0xc
    unsigned int _ret; // +0x10
    unsigned int _antiSpamBit; // +0x14
    unsigned int _authBits; // +0x18
    unsigned int _scene; // +0x1c
    NSString * _liteRespUrl; // +0x20
    NSString * _liteUrl; // +0x28
    NSData * _jsapiControlBytes; // +0x30
}
+ (void)PBArrayAdd_hasAllowanceOfFirstAsyncGetA8Key;
+ (void)PBArrayAdd_liteRespUrl;
+ (void)PBArrayAdd_controlExpiredTime;
+ (void)PBArrayAdd_liteUrl;
+ (void)PBArrayAdd_ret;
+ (void)PBArrayAdd_authBits;
+ (void)PBArrayAdd_antiSpamBit;
+ (void)PBArrayAdd_needAuthState;
+ (void)PBArrayAdd_forbidAsyncGetA8key;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_fromKara;
+ (void)PBArrayAdd_jsapiControlBytes;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)controlExpiredTime;
- (void)setControlExpiredTime:(unsigned int)arg1;
- (BOOL)hasAllowanceOfFirstAsyncGetA8Key;
- (void)setHasAllowanceOfFirstAsyncGetA8Key:(BOOL)arg1;
- (id)liteRespUrl;
- (void)setLiteRespUrl:(id)arg1;
- (id)liteUrl;
- (void)setLiteUrl:(id)arg1;
- (unsigned int)ret;
- (void)setRet:(unsigned int)arg1;
- (unsigned int)antiSpamBit;
- (void)setAntiSpamBit:(unsigned int)arg1;
- (unsigned int)authBits;
- (void)setAuthBits:(unsigned int)arg1;
- (BOOL)needAuthState;
- (void)setNeedAuthState:(BOOL)arg1;
- (BOOL)forbidAsyncGetA8key;
- (void)setForbidAsyncGetA8key:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)fromKara;
- (void)setFromKara:(BOOL)arg1;
- (id)jsapiControlBytes;
- (void)setJsapiControlBytes:(id)arg1;
- (void).cxx_destruct;
@end

