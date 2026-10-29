@interface MpLocationImpl : NSObject <MpLocationApi>
- (void)isOpenSystemLocationWithCompletion:(id /* block */)arg1;
- (void)isOpenK1kLocationWithCompletion:(id /* block */)arg1;
- (void)requestLocationAuthWithCompletion:(id /* block */)arg1;
- (void)requestLocationWithSystemAuthWithCompletion:(id /* block */)arg1;
- (void)gotoSystemLocationSettingsWithCompletion:(id /* block */)arg1;
- (void)getUserLocationWithCompletion:(id /* block */)arg1;
@end
