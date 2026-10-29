@interface FTSFeatureSectionConfig : NSObject
{
    NSDictionary * _configByKind; // +0x8
    BOOL _aggregationEnabledInternal; // +0x10
    long long _homePageDisplayCountInternal; // +0x18
    BOOL _loaded; // +0x20
    NSLock * _lock; // +0x28
}
+ (id)sharedInstance;
+ (id)defaultConfigDict;
+ (id)plistConfigDict;
+ (id)exptConfigDict;
- (id)init;
- (BOOL)aggregationEnabled;
- (long long)homePageDisplayCount;
- (id)configForKind:(unsigned long long)arg1;
- (void)loadConfig;
- (void)applyMergedDict:(id)arg1;
- (void)mergeDict:(id)arg1 into:(id)arg2;
- (id)debugDescriptionForLog;
- (void).cxx_destruct;
@end
