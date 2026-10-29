@interface WCMomentsContentDiscoverer : NSObject <WCFinderKeywordConfigsChangedExt>
{
    BOOL _hotwordConfigurationsChanged; // +0x8
    WCFacade * _referredFacade; // +0x10
    NSArray * _hotwordConfigurations; // +0x18
    WCHotwordRegExpReplacer * _hotwordRegExpReplacer; // +0x20
    NSMutableDictionary * _discoveryContentCacheForDataItems; // +0x28
    NSMutableDictionary * _discoveryContentCacheForUserComments; // +0x30
}
- (id)retrieveOriginalStringFromDiscoveryString:(id)arg1 forDataItem:(id)arg2;
- (id)retrieveOriginalStringFromDiscoveryString:(id)arg1 forUserComment:(id)arg2;
- (id)init;
- (id)keyForDataItem:(id)arg1;
- (id)keyForUserComment:(id)arg1;
- (void)clearCache;
- (BOOL)canDisplayHotwords;
- (unsigned long long)matchingHotwordsMaxCount;
- (unsigned long long)matchingHotwordsMaxLength;
- (void)updateHotwordConfigurations:(id)arg1;
- (void)checkUpdatesForHotwords;
- (id)hotwordConfigurationsFromFinderConfigurations:(id)arg1;
- (id)hotwordRegExpReplacerFromConfigurations:(id)arg1;
- (void)discoverInAllContentsForDataItems:(id)arg1;
- (void)discoverInContentDescForDataItem:(id)arg1;
- (void)discoverInContentForUserComment:(id)arg1 fromDataItem:(id)arg2;
- (unsigned long long)hotwordDiscoverContentTypesForDataItem:(id)arg1;
- (void)discoverHotwordsForDataItems:(id)arg1;
- (void)discoverHotwordsForDataItem:(id)arg1;
- (void)_discoverHotwordsInContentDescForDataItem:(id)arg1;
- (void)_discoverHotwordsInContentForUserComment:(id)arg1 fromDataItem:(id)arg2;
- (id)urlStringForHotwordMatch:(id)arg1;
- (id)hotwordMatchFromURLString:(id)arg1;
- (void)onFinderKeywordConfigsChanged:(id)arg1;
- (id)referredFacade;
- (void)setReferredFacade:(id)arg1;
- (BOOL)hotwordConfigurationsChanged;
- (void)setHotwordConfigurationsChanged:(BOOL)arg1;
- (id)hotwordConfigurations;
- (void)setHotwordConfigurations:(id)arg1;
- (id)hotwordRegExpReplacer;
- (void)setHotwordRegExpReplacer:(id)arg1;
- (id)discoveryContentCacheForDataItems;
- (void)setDiscoveryContentCacheForDataItems:(id)arg1;
- (id)discoveryContentCacheForUserComments;
- (void)setDiscoveryContentCacheForUserComments:(id)arg1;
- (void).cxx_destruct;
@end

