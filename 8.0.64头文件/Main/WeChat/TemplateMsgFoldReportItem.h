@interface TemplateMsgFoldReportItem : MMObject
{
    unsigned int _isCluster; // +0x8
    unsigned int _clusterCount; // +0xc
    long long _opType; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _containerType; // +0x20
    NSString * _clusterId; // +0x28
}
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg1;
- (unsigned int)isCluster;
- (void)setIsCluster:(unsigned int)arg1;
- (id)clusterId;
- (void)setClusterId:(id)arg1;
- (unsigned int)clusterCount;
- (void)setClusterCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
