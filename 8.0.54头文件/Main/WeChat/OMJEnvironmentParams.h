@interface OMJEnvironmentParams : NSObject
{
    BOOL _createDirectoryIfNotExist; // +0x8
    NSString * _persistentDirectory; // +0x10
    NSString * _cachesDirectory; // +0x18
    NSString * _temporaryDirectory; // +0x20
    NSString * _resourcesDirectory; // +0x28
    NSString * _clipBundleDirectory; // +0x30
    NSString * _localeID; // +0x38
}
- (id)initWithPersistentDirectory:(id)arg1 cachesDirectory:(id)arg2 temporaryDirectory:(id)arg3 resourcesDirectory:(id)arg4 createDirectoryIfNotExist:(BOOL)arg5 localeID:(id)arg6;
- (id)initWithPersistentDirectory:(id)arg1 cachesDirectory:(id)arg2 temporaryDirectory:(id)arg3 resourcesDirectory:(id)arg4 clipBundleDirectory:(id)arg5 createDirectoryIfNotExist:(BOOL)arg6 localeID:(id)arg7;
- (id)persistentDirectory;
- (id)cachesDirectory;
- (id)temporaryDirectory;
- (id)resourcesDirectory;
- (id)clipBundleDirectory;
- (BOOL)createDirectoryIfNotExist;
- (id)localeID;
- (void).cxx_destruct;
@end

