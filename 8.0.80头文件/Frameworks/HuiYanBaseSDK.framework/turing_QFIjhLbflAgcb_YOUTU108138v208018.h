@interface turing_QFIjhLbflAgcb_YOUTU108138v208018 : NSObject
{
    BOOL _hasExtensionPoint; // +0x8
    NSString * _bundleIdentifier; // +0x10
    NSString * _executablePath; // +0x18
    NSString * _processName; // +0x20
    NSDictionary * _infoPlist; // +0x28
    NSString * _extensionPointIdentifier; // +0x30
    NSArray * _pathComponents; // +0x38
    NSString * _parentBundleIdentifier; // +0x40
}
+ (id)processInfoWithMainBundle:(id)arg1;
- (id)initWithMainBundle:(id)arg1;
- (BOOL)hasExtensionPointValue;
- (BOOL)isValid;
- (void)_setupWithMainBundle:(id)arg1;
- (id)_extractParentBundleId:(id)arg1;
- (void)dealloc;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (id)executablePath;
- (void)setExecutablePath:(id)arg1;
- (id)processName;
- (void)setProcessName:(id)arg1;
- (id)infoPlist;
- (void)setInfoPlist:(id)arg1;
- (id)extensionPointIdentifier;
- (void)setExtensionPointIdentifier:(id)arg1;
- (BOOL)hasExtensionPoint;
- (id)pathComponents;
- (void)setPathComponents:(id)arg1;
- (id)parentBundleIdentifier;
- (void)setParentBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
