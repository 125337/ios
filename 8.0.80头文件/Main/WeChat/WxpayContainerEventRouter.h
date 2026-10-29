@interface WxpayContainerEventRouter : NSObject
+ (id)post:(id)arg1 host:(Class)arg2;
+ (void)targetReady:(id)arg1;
+ (void)targetClosed:(unsigned long long)arg1;
+ (void)resetForTesting;
@end
