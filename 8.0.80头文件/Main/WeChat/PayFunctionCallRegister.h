@interface PayFunctionCallRegister : FunctionCallBaseRegister
+ (id)makeSelfRetainedCallbackWithHandler:(id /* block */)arg1;
+ (id)errorMessageForResultCode:(int)arg1;
+ (id)buildMemberUsername2DisplayMapWithGroupContact:(id)arg1;
+ (id)displayNameForUsername:(id)arg1 usrMap:(id)arg2;
+ (id)usernameForDisplayName:(id)arg1 groupContact:(id)arg2 usrMap:(id)arg3;
+ (id)yuanStringFromFen:(long long)arg1;
+ (id)ledgerMemberAmountDict:(id)arg1 usrMap:(id)arg2;
+ (id)ledgerComplexItemDict:(id)arg1 usrMap:(id)arg2;
+ (void)openPaySettingsDirectPageId:(long long)arg1;
+ (void)openPaySecurityDirectPageId:(long long)arg1;
+ (void)queryPaySettingsDirectPageId:(long long)arg1 biometricType:(id)arg2 handler:(id /* block */)arg3;
+ (void)queryPaySecurityDirectPageId:(long long)arg1 handler:(id /* block */)arg2;
+ (void)operatePaySettingsDirectPageId:(long long)arg1 enable:(BOOL)arg2 handler:(id /* block */)arg3;
+ (void)operatePaySecurityDirectPageId:(long long)arg1 enable:(BOOL)arg2 handler:(id /* block */)arg3;
- (id)moduleName;
- (void)registerModuleFunctions;
@end
