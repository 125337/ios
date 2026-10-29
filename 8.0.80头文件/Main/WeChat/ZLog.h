@interface ZLog : NSObject
+ (BOOL)logReady;
+ (id)logDelegateBeforeReady;
+ (void)setLogDelegateBeforeReady:(id)arg1;
+ (void)notifyReady;
- (id)init;
- (void).cxx_destruct;
@end
