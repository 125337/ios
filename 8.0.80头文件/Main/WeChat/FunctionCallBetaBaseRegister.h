@interface FunctionCallBetaBaseRegister : FunctionCallBaseRegister
- (id)betaFunctionNameOf:(id)arg1;
- (void)unregisterFunctions;
- (void)registerFunction:(id)arg1 withAction:(id /* block */)arg2 schemes:(id)arg3;
- (void)registerAsyncFunction:(id)arg1 withAction:(id /* block */)arg2 schemes:(id)arg3;
@end
