@interface EcsShareJsApiReporter : NSObject
+ (void)reportCall:(id)arg1;
+ (void)reportSuccess:(id)arg1 extra:(id)arg2;
+ (void)reportFail:(id)arg1 extra:(id)arg2;
+ (void)reportCancel:(id)arg1 extra:(id)arg2;
+ (void)reportWithApiName:(id)arg1 value:(long long)arg2 extra:(id)arg3;
+ (id)jsonStringFromDictionary:(id)arg1;
@end
