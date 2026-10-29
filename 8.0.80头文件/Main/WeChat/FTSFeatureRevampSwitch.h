@interface FTSFeatureRevampSwitch : NSObject
{
    BOOL _enabledInternal; // +0x8
    BOOL _loaded; // +0x9
    NSLock * _lock; // +0x10
}
+ (id)sharedInstance;
+ (BOOL)enabled;
+ (BOOL)resolveEnabledFromSources;
+ (id)plistEnabled;
+ (id)exptEnabled;
- (id)init;
- (BOOL)enabled;
- (void)loadConfig;
- (void).cxx_destruct;
@end
