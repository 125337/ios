@interface FunctionCallBaseRegister : NSObject
{
    NSMutableSet * _functionNames; // +0x8
}
- (id)init;
- (id)moduleName;
- (void)registerFunctions;
- (void)unregisterFunctions;
- (void)registerModuleFunctions;
- (void)addFunctionName:(id)arg1;
- (void)registerFunction:(id)arg1 withAction:(id /* block */)arg2 schemes:(id)arg3;
- (void)registerAsyncFunction:(id)arg1 withAction:(id /* block */)arg2 schemes:(id)arg3;
- (id)functionNames;
- (void).cxx_destruct;
@end
