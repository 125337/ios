@interface YYWKSchemeGuardModel : NSObject
{
    BOOL _hasNonGameHost; // +0x8
    BOOL _enableCustomHttpSchemeFailed; // +0x9
    BOOL _registerCustomHttpSchemeFailed; // +0xa
    BOOL _isSchemeGameWkWebViewVisible; // +0xb
    int _gameWkWebViewCrashCt; // +0xc
    int _continuousCrash; // +0x10
    NSString * _nonGameHostMainUrl; // +0x18
    NSString * _nonGameHostReourceUrl; // +0x20
    double _lastDisableTime; // +0x28
}
- (BOOL)hasNonGameHost;
- (void)setHasNonGameHost:(BOOL)arg1;
- (BOOL)enableCustomHttpSchemeFailed;
- (void)setEnableCustomHttpSchemeFailed:(BOOL)arg1;
- (BOOL)registerCustomHttpSchemeFailed;
- (void)setRegisterCustomHttpSchemeFailed:(BOOL)arg1;
- (BOOL)isSchemeGameWkWebViewVisible;
- (void)setIsSchemeGameWkWebViewVisible:(BOOL)arg1;
- (int)gameWkWebViewCrashCt;
- (void)setGameWkWebViewCrashCt:(int)arg1;
- (int)continuousCrash;
- (void)setContinuousCrash:(int)arg1;
- (id)nonGameHostMainUrl;
- (void)setNonGameHostMainUrl:(id)arg1;
- (id)nonGameHostReourceUrl;
- (void)setNonGameHostReourceUrl:(id)arg1;
- (double)lastDisableTime;
- (void)setLastDisableTime:(double)arg1;
- (void).cxx_destruct;
@end

