@interface MBWAUnpackedPackageInfo : NSObject
{
    NSMutableSet * _setPackageFilePath; // +0x8
    NSMutableSet * _setCacheFileInfoKey; // +0x10
}
+ (id)packageKeyWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (id)init;
- (id)setPackageFilePath;
- (void)setSetPackageFilePath:(id)arg1;
- (id)setCacheFileInfoKey;
- (void)setSetCacheFileInfoKey:(id)arg1;
- (void).cxx_destruct;
@end

