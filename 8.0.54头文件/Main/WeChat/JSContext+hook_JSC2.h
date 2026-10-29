@interface JSContext (hook_JSC2)
+ (id)jsc2_alloc;
+ (id)jsc2_currentContext;
+ (id)jsc2_currentCallee;
+ (id)jsc2_currentThis;
+ (id)jsc2_currentArguments;
+ (id)jsc2_contextWithJSGlobalContextRef:(OpaqueJSContext *)arg1;
@end

