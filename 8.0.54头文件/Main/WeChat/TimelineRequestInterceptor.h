@interface TimelineRequestInterceptor : NSObject
{
    NSMutableDictionary * _interceptors; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)intercept:(id)arg1;
- (void)registerInterceptor:(id)arg1;
- (id)interceptors;
- (void)setInterceptors:(id)arg1;
- (void).cxx_destruct;
@end

