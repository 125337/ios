@interface MMLiveBeautyResourcePackageModel : NSObject
{
    unsigned long long _packageType; // +0x8
    NSString * _instancePath; // +0x10
    NSString * _configurationPath; // +0x18
    NSString * _uri; // +0x20
    NSString * _md5Hash; // +0x28
    NSString * _masterId; // +0x30
    NSString * _masterPath; // +0x38
    NSString * _manifestPath; // +0x40
}
+ (id)packageWithType:(unsigned long long)arg1 uri:(id)arg2 md5Hash:(id)arg3;
- (id)initWithPackageType:(unsigned long long)arg1 uri:(id)arg2 md5Hash:(id)arg3;
- (id)createFetcherTask;
- (unsigned long long)packageType;
- (void)setPackageType:(unsigned long long)arg1;
- (id)instancePath;
- (void)setInstancePath:(id)arg1;
- (id)configurationPath;
- (void)setConfigurationPath:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)md5Hash;
- (void)setMd5Hash:(id)arg1;
- (id)masterId;
- (void)setMasterId:(id)arg1;
- (id)masterPath;
- (void)setMasterPath:(id)arg1;
- (id)manifestPath;
- (void)setManifestPath:(id)arg1;
- (void).cxx_destruct;
@end
