@interface WxpayLiteAppPayLinkTarget : NSObject
{
    BOOL _transparent; // +0x8
    BOOL _isHalfScreen; // +0x9
    NSString * _appId; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    double _heightPercent; // +0x28
    NSString * _minVersion; // +0x30
}
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (BOOL)transparent;
- (void)setTransparent:(BOOL)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
