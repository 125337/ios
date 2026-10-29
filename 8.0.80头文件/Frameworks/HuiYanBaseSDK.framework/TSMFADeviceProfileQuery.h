@interface TSMFADeviceProfileQuery : TSMFAQuery
+ (id)task;
- (void)executeWithCompletion:(id /* block */)arg1;
- (void)cancel;
@end
