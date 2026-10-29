@interface QEngineResourceManager : NSObject
{
    NSString * _optionalResourcePath; // +0x8
    NSString * _configDirectoryPath; // +0x10
    NSBundle * _QMapKitBundle; // +0x18
    NSString * _businessKey; // +0x20
}
+ (id)vectorDataOnlineDirectoryPath;
+ (id)engineLogDirectoryPath;
+ (id)satelliteOnlineDirectoryPath;
+ (id)worldmapOnlineDirectoryPath;
+ (id)roadEventDataOnlineDirectoryPath;
+ (id)defaultConfigDirectoryPath;
- (BOOL)fileNameShouldBeCopied:(id)arg1 shouldBeDeletedInConfig:(BOOL *)arg2;
- (void)copyConfigResource;
- (id)localVersionPlistPath;
- (BOOL)shouldOverwrite:(id)arg1;
- (BOOL)compareResourceVersion:(id)arg1 cacheVersionDict:(id)arg2;
- (BOOL)checkConfigFileMD5:(id)arg1;
- (void)setupBundle;
- (void)setupConfigDirectoryWithBusinessKey:(id)arg1;
- (id)initWithBusinessKey:(id)arg1;
- (id)optionalResourcePath;
- (void)setOptionalResourcePath:(id)arg1;
- (id)configDirectoryPath;
- (void)setConfigDirectoryPath:(id)arg1;
- (id)QMapKitBundle;
- (void)setQMapKitBundle:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (void).cxx_destruct;
@end

