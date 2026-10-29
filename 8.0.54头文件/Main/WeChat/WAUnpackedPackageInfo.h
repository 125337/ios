@interface WAUnpackedPackageInfo : NSObject
{
    unsigned long long _packageType; // +0x8
    NSMutableSet * _setPackageFilePath; // +0x10
    NSMutableSet * _setCacheFileInfoKey; // +0x18
}
+ (id)packageKeyWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (id)init;
- (unsigned long long)packageType;
- (void)setPackageType:(unsigned long long)arg1;
- (id)setPackageFilePath;
- (void)setSetPackageFilePath:(id)arg1;
- (id)setCacheFileInfoKey;
- (void)setSetCacheFileInfoKey:(id)arg1;
- (void).cxx_destruct;
@end

