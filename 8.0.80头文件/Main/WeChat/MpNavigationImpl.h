@interface MpNavigationImpl : NSObject <MpNavigationApi>
- (void)openUrlRequest:(id)arg1 error:(id *)arg2;
- (void)openUrlAndAwaitDismissRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)openMpAppUrlUrl:(id)arg1 error:(id *)arg2;
@end
