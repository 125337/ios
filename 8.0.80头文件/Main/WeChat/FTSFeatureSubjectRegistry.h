@interface FTSFeatureSubjectRegistry : NSObject
{
    NSMutableDictionary * _providerByKind; // +0x8
    NSLock * _lock; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)registerProvider:(id)arg1;
- (void)unregisterProviderForKind:(unsigned long long)arg1;
- (void)unregisterAllProviders;
- (id)enabledProviders;
- (id)providerForKind:(unsigned long long)arg1;
- (id)featureItemForFeatureID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
