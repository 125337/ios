@interface MMIlinkCheckResourceRequestInfo : NSObject
{
    NSString * _projectId; // +0x8
    NSString * _resourceName; // +0x10
    NSArray * _localResources; // +0x18
}
- (id)projectId;
- (void)setProjectId:(id)arg1;
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (id)localResources;
- (void)setLocalResources:(id)arg1;
- (void).cxx_destruct;
@end

