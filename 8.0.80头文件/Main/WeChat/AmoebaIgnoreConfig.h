@interface AmoebaIgnoreConfig : NSObject
{
    NSSet * _ignoreByLogIdSet; // +0x8
    NSSet * _ignoreByParamsSet; // +0x10
    NSSet * _ignorePolicySet; // +0x18
}
+ (id)shareInstance;
- (BOOL)isIgnoredByCloudConfig:(id)arg1 routeRules:(id)arg2 params:(id)arg3;
- (BOOL)isIgnoredPolicyByCloudConfig:(id)arg1 routeRule:(unsigned long long)arg2;
- (id)getIgnoreByLogIdSet;
- (id)getIgnoreByParamsSet;
- (id)getIgnorePolicySet;
- (id)parseIgnoreList:(id)arg1;
- (void).cxx_destruct;
@end
