@interface WSWebViewPlugin_queryStack : WSWebViewPluginBase
- (void)pushQuery:(id)arg1;
- (unsigned int)__getCorrectLevel:(id)arg1;
- (BOOL)enableBackToLastQuery;
- (void)backToLastQuery;
- (void)clear;
- (id)searchPage;
@end

