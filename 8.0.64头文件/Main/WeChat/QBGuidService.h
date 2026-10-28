@interface QBGuidService : QBWupService
+ (id)service;
+ (void)saveGuidData:(id)arg1 returnCode:(long long)arg2;
- (void)getGuidWithTrigeredType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)getGuidWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
@end
