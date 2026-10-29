@interface ZidlImplChecker : NSObject
+ (id)sharedInstance;
- (id)init;
- (void)checkZidlImpl:(id)arg1 callback:(id)arg2;
- (void)zidlImplIsReady:(id)arg1;
@end

