@interface MMIlinkGetResourceDescriptionReqItem : NSObject
{
    unsigned int _qos; // +0x8
    NSString * _projectId; // +0x10
    NSArray * _resourceNameList; // +0x18
    NSMutableDictionary * _localResources; // +0x20
    NSDictionary * _projectParams; // +0x28
}
- (id)projectId;
- (void)setProjectId:(id)arg1;
- (id)resourceNameList;
- (void)setResourceNameList:(id)arg1;
- (id)localResources;
- (void)setLocalResources:(id)arg1;
- (id)projectParams;
- (void)setProjectParams:(id)arg1;
- (unsigned int)qos;
- (void)setQos:(unsigned int)arg1;
- (void).cxx_destruct;
@end
