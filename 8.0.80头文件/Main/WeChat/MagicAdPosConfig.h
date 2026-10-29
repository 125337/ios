@interface MagicAdPosConfig : NSObject
{
    unsigned char _interceptPolicy; // +0x8
    BOOL _useFallback; // +0x9
    NSString * _posId; // +0x10
    NSString * _interceptScheme; // +0x18
    NSString * _fallbackHintText; // +0x20
    NSString * _fallbackDescText; // +0x28
    NSString * _fallbackIconUrl; // +0x30
    NSString * _fallbackUniversalLink; // +0x38
    NSString * _fallbackUrlScheme; // +0x40
    NSString * _fallbackAppinfoUrl; // +0x48
}
+ (id)configWithPosId:(id)arg1;
- (id)posId;
- (void)setPosId:(id)arg1;
- (unsigned char)interceptPolicy;
- (void)setInterceptPolicy:(unsigned char)arg1;
- (id)interceptScheme;
- (void)setInterceptScheme:(id)arg1;
- (BOOL)useFallback;
- (void)setUseFallback:(BOOL)arg1;
- (id)fallbackHintText;
- (void)setFallbackHintText:(id)arg1;
- (id)fallbackDescText;
- (void)setFallbackDescText:(id)arg1;
- (id)fallbackIconUrl;
- (void)setFallbackIconUrl:(id)arg1;
- (id)fallbackUniversalLink;
- (void)setFallbackUniversalLink:(id)arg1;
- (id)fallbackUrlScheme;
- (void)setFallbackUrlScheme:(id)arg1;
- (id)fallbackAppinfoUrl;
- (void)setFallbackAppinfoUrl:(id)arg1;
- (void).cxx_destruct;
@end
