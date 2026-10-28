@interface WCFinderLiteAppInfo : NSObject <WCFinderLiteAppInfoProvider>
{
    BOOL _isTransparent; // +0x8
    unsigned int _openType; // +0xc
    unsigned int _heightPercent; // +0x10
    NSString * _appID; // +0x18
    NSString * _path; // +0x20
    NSString * _query; // +0x28
    NSString * _minVersion; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)genFinderLiteAppInfo;
- (id)convertToFinderJumpInfoLiteappInfo;
- (BOOL)isValid;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (unsigned int)openType;
- (void)setOpenType:(unsigned int)arg1;
- (unsigned int)heightPercent;
- (void)setHeightPercent:(unsigned int)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (void).cxx_destruct;
@end
