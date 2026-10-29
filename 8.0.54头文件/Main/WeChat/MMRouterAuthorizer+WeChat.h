@interface MMRouterAuthorizer (WeChat)
+ (void)ShowCannotUseTip:(id)arg1;
- (id /* block */)doUniversalAuth;
- (id)universalAuth;
- (id /* block */)blockInBackDevice;
- (id /* block */)tipCannotFindPageIfNotSatisfy;
- (id /* block */)doLimitedModeCheck;
@end

