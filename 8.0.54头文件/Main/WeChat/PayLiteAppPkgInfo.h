@interface PayLiteAppPkgInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _resourceName; // +0x10
    NSArray * _localResources; // +0x18
}
- (id)init:(id)arg1 resourceName:(id)arg2 localResources:(id)arg3;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (id)localResources;
- (void)setLocalResources:(id)arg1;
- (void).cxx_destruct;
@end

