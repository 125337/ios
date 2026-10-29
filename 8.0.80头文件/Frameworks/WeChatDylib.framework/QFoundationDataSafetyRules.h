@interface QFoundationDataSafetyRules : NSObject
{
    NSMutableDictionary * _domainRuleMaps; // +0x8
}
- (id)init;
- (void)registerDomianRules:(id)arg1;
- (void)unregisterDomianRules:(id)arg1;
- (id)replaceOriginDomain:(id)arg1;
- (id)domainRuleMaps;
- (void)setDomainRuleMaps:(id)arg1;
- (void).cxx_destruct;
@end
