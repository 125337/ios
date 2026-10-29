@interface CacheFileInfo : NSObject
{
    unsigned int bDebugMode; // +0x8
    NSString * appid; // +0x10
    unsigned long long version; // +0x18
    NSString * subPath; // +0x20
    unsigned long long offset; // +0x28
    unsigned long long size; // +0x30
    WAPackageUnpackLib * pkgLib; // +0x38
    NSString * _packageFilePath; // +0x40
}
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)subPath;
- (void)setSubPath:(id)arg1;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (unsigned int)bDebugMode;
- (void)setBDebugMode:(unsigned int)arg1;
- (id)pkgLib;
- (void)setPkgLib:(id)arg1;
- (id)packageFilePath;
- (void)setPackageFilePath:(id)arg1;
- (void).cxx_destruct;
@end
