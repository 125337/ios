@interface FTSFeatureMessageSectionConfig : NSObject
{
    BOOL _splitEnabledInternal; // +0x8
    long long _homePageDisplayCountInternal; // +0x10
    unsigned long long _enabledCategoriesInternal; // +0x18
    BOOL _loaded; // +0x20
    NSLock * _lock; // +0x28
}
+ (id)sharedInstance;
+ (id)defaultConfigDict;
+ (id)plistConfigDict;
+ (id)exptConfigDict;
- (id)init;
- (BOOL)splitEnabled;
- (long long)homePageDisplayCount;
- (unsigned long long)enabledCategories;
- (BOOL)isCategoryEnabled:(unsigned long long)arg1;
- (void)loadConfig;
- (void)applyMergedDict:(id)arg1;
- (void)mergeDict:(id)arg1 into:(id)arg2;
- (void).cxx_destruct;
@end
