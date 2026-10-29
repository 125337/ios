@interface MBCacheFileInfo : NSObject
{
    NSString * bizName; // +0x8
    NSString * subPath; // +0x10
    unsigned long long offset; // +0x18
    unsigned long long size; // +0x20
    WAPackageUnpackLib * pkgLib; // +0x28
    NSString * _packageFilePath; // +0x30
}
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)subPath;
- (void)setSubPath:(id)arg1;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)pkgLib;
- (void)setPkgLib:(id)arg1;
- (id)packageFilePath;
- (void)setPackageFilePath:(id)arg1;
- (void).cxx_destruct;
@end

