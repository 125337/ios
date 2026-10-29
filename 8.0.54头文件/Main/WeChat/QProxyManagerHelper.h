@interface QProxyManagerHelper : NSObject
+ (void)initialize;
+ (int)subResourceTypeForRequest:(id)arg1;
+ (long long)commonDirectTypeWithRequest:(id)arg1 mainResource:(BOOL)arg2;
+ (BOOL)isInDirectListWithRequest:(id)arg1;
+ (void)removeCustomReqHeaders:(id)arg1;
@end

