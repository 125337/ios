@interface QBProtocolCallback : NSObject
+ (void)initialize;
+ (id)callbackFromRequest:(id)arg1;
+ (void)removeCallbackFromRequest:(id)arg1;
- (void)registerSelfForRequest:(id)arg1;
@end
