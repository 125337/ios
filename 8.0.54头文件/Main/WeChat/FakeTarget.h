@interface FakeTarget : NSObject
+ (id)sharedInstance;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
@end

