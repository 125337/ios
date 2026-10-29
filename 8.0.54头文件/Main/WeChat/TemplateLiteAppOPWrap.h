@interface TemplateLiteAppOPWrap : NSObject
{
    BOOL _isTransparent; // +0x8
    BOOL _isForbidRightgesture; // +0x9
    NSString * _appid; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    NSString * _minVersion; // +0x28
    unsigned long long _openType; // +0x30
    double _heightPercent; // +0x38
    NSString * _defaultUrl; // +0x40
}
+ (id)liteAppOPWrapWithJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (unsigned long long)openType;
- (void)setOpenType:(unsigned long long)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isForbidRightgesture;
- (void)setIsForbidRightgesture:(BOOL)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (id)defaultUrl;
- (void)setDefaultUrl:(id)arg1;
- (void).cxx_destruct;
@end

