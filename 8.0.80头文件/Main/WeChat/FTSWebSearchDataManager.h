@interface FTSWebSearchDataManager : NSObject
+ (id)KVMapForJsBizType:(unsigned long long)arg1;
+ (id)getPermanentString:(unsigned long long)arg1 key:(id)arg2;
+ (void)savePermanentString:(unsigned long long)arg1 key:(id)arg2 data:(id)arg3;
+ (void)removePermanentString:(unsigned long long)arg1 key:(id)arg2;
+ (void)addClickFlow:(id)arg1 type:(unsigned long long)arg2;
+ (void)addClickFlowWithExtParmas:(id)arg1 type:(unsigned long long)arg2 extParmas:(id)arg3;
+ (void)addEcsWeShopClickFlow:(id)arg1 type:(unsigned long long)arg2;
@end
