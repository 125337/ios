@interface MMSpecialMsgClusterSearchResult : MMSpecialMsgSearchResult
{
    NSString * _clusterUsername; // +0x50
    NSArray * _arrClusterMsgItem; // +0x58
}
- (id)clusterUsername;
- (void)setClusterUsername:(id)arg1;
- (id)arrClusterMsgItem;
- (void)setArrClusterMsgItem:(id)arg1;
- (void).cxx_destruct;
@end

