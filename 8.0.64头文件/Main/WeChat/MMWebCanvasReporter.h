@interface MMWebCanvasReporter : MMObject
+ (void)reportEventWithKey:(unsigned int)arg1;
+ (void)reportCostWithKey:(unsigned int)arg1 costInMs:(unsigned long long)arg2;
+ (void)reportCanvasVMSetup:(unsigned long long)arg1;
+ (void)reportLogicJsEngineSetup:(unsigned long long)arg1;
+ (void)reportLogicJsEngineMainContextSetup:(unsigned long long)arg1;
+ (void)reportLogicJsEngineEngineContextSetup:(unsigned long long)arg1;
+ (void)reportLogicJsEngineClientContextSetup:(unsigned long long)arg1;
+ (void)reportRenderJsEngineSetup:(unsigned long long)arg1;
+ (void)reportRenderJsEngineMainContextSetup:(unsigned long long)arg1;
+ (void)reportRenderJsEngineCanvasViewCreate:(unsigned long long)arg1;
+ (void)reportRenderJsEngineClientContext:(unsigned long long)arg1;
+ (void)reportQualityEventWithKey:(unsigned int)arg1;
+ (void)reportLogicMainJsException:(id)arg1;
+ (void)reportLogicEngineJsException:(id)arg1;
+ (void)reportLogicClientJsException:(id)arg1 bizType:(id)arg2;
+ (void)reportRenderMainJsException:(id)arg1;
+ (void)reportRenderClientJsException:(id)arg1 bizType:(id)arg2;
+ (void)reportExceptionWithJsEgineType:(unsigned int)arg1 contextType:(unsigned int)arg2 bizType:(id)arg3 exceptionInfo:(id)arg4;
+ (void)logEvent:(id)arg1;
+ (void)report26632CanvasFirstExpose:(id)arg1 sureHeightPositive:(BOOL)arg2;
@end
