@interface LiteAppDynamicModuleParamStringifier : NSObject
+ (id)setNativeBuffer:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(BOOL)arg4;
+ (id)stringifyBufferData:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(BOOL)arg4;
+ (id)stringifyJSONObject:(id)arg1;
+ (id)jsonStringifyString:(id)arg1;
+ (id)stringifyDynamicModuleObject:(id)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 isFromView:(BOOL)arg4;
@end

