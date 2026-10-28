@interface MMLiveBeautyPackage : NSObject
{
    NSArray * _suites; // +0x8
    MMLiveBeautySuite * _defaultSuite; // +0x10
    NSString * _resourcesRootPath; // +0x18
    NSString * _opaqueResourcesPath; // +0x20
    MMLiveBeautyBadgeCollection * _badges; // +0x28
    MMLiveBeautySuite * _activeSuite; // +0x30
}
+ (id)beautyPackageInResourcePackage:(id)arg1;
+ (id)beautyPackageInLocalDirectory:(id)arg1 withConfigurationPath:(id)arg2;
+ (id)defaultNoopPackage;
+ (id)defaultSuiteInSuites:(id)arg1 byJsonDictionary:(id)arg2;
- (id)suites;
- (void)setSuites:(id)arg1;
- (id)defaultSuite;
- (void)setDefaultSuite:(id)arg1;
- (id)resourcesRootPath;
- (void)setResourcesRootPath:(id)arg1;
- (id)opaqueResourcesPath;
- (void)setOpaqueResourcesPath:(id)arg1;
- (id)badges;
- (void)setBadges:(id)arg1;
- (id)activeSuite;
- (void)setActiveSuite:(id)arg1;
- (void).cxx_destruct;
@end
