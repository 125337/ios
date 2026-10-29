@interface MpStorageImpl : NSObject <MpStorageApi>
+ (void)resolvePath:(id /* block */)arg1 logName:(id)arg2 completion:(id /* block */)arg3;
- (void)getUserStoragePathWithCompletion:(id /* block */)arg1;
- (void)getCacheRootWithCompletion:(id /* block */)arg1;
- (void)getTmpRootWithCompletion:(id /* block */)arg1;
@end
