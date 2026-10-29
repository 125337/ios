@interface LiteAppJsApiManager : NSObject
+ (void)addJsApi:(id)arg1 name:(id)arg2 clz:(Class)arg3;
+ (void)addJsApi:(id)arg1 clz:(Class)arg2;
+ (Class)getJsApi:(id)arg1 name:(id)arg2;
+ (Class)getJsApi:(id)arg1;
+ (BOOL)findJsApi:(id)arg1 name:(id)arg2;
+ (void)timerRelease;
+ (id)getExcutingApi:(unsigned int)arg1;
+ (void)addExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2 api:(id)arg3;
+ (void)removeExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2;
+ (void)addPermanentJsApi:(unsigned int)arg1 name:(id)arg2 api:(id)arg3;
+ (id)getPermanentJsApi:(unsigned int)arg1 name:(id)arg2;
+ (void)removeAllPermanentJsApi:(unsigned int)arg1;
@end

