@interface WebviewAuthorizationCache : NSObject
{
    NSMutableDictionary * _dicScope2ApiInfo; // +0x8
}
- (id)init;
- (void)addScopeInfoList:(id)arg1;
- (void)addScopeInfo:(id)arg1 forScope:(id)arg2;
- (void)removeScopeInfoForScope:(id)arg1;
- (id)getScopeInfoForScope:(id)arg1;
- (BOOL)isExistAuthInfoForScope:(id)arg1;
- (BOOL)isNOUseScope:(id)arg1;
- (BOOL)isAuthorizedScope:(id)arg1;
- (BOOL)isExistAuthInfoForApi:(id)arg1 inScope:(id)arg2;
- (BOOL)isAuthorizedApi:(id)arg1 inScope:(id)arg2;
- (void).cxx_destruct;
@end

