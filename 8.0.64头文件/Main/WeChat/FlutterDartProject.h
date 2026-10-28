@interface FlutterDartProject : NSObject
{
    Settings _settings; // +0x8
}
+ (id)flutterAssetsName:(id)arg1;
+ (id)domainNetworkPolicy:(id)arg1;
+ (BOOL)allowsArbitraryLoads:(id)arg1;
+ (id)lookupKeyForAsset:(id)arg1;
+ (id)lookupKeyForAsset:(id)arg1 fromBundle:(id)arg2;
+ (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
+ (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2 fromBundle:(id)arg3;
+ (id)defaultBundleIdentifier;
- (id)init;
- (id)initWithArgs:(id)arg1;
- (id)initWithPrecompiledDartBundle:(id)arg1;
- (id)initWithSettings:(const void *)arg1;
- (PlatformData)defaultPlatformData;
- (const void *)settings;
- (RunConfiguration)runConfiguration;
- (RunConfiguration)runConfigurationForEntrypoint:(id)arg1;
- (RunConfiguration)runConfigurationForEntrypoint:(id)arg1 libraryOrNil:(id)arg2;
- (RunConfiguration)runConfigurationForEntrypoint:(id)arg1 libraryOrNil:(id)arg2 entrypointArgs:(id)arg3;
- (BOOL)isWideGamutEnabled;
- (BOOL)isImpellerEnabled;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
