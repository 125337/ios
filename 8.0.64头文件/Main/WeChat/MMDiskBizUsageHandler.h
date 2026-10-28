@interface MMDiskBizUsageHandler : NSObject
{
    MMBizFileMatchNode * _appRootMatchNode; // +0x8
}
+ (long long)p_validateStoreTimeType:(const MMDiskUsageBizRule *)arg1;
+ (BOOL)p_isRuleValid:(const MMDiskUsageBizRule *)arg1;
+ (id)ruleDescription:(const MMDiskUsageBizRule *)arg1;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (MMBizMatchInfo)fileMatchedBizType:(id)arg1 inFolder:(id)arg2;
- (void)patchAppendBizRule:(MMDiskUsageBizRule)arg1;
- (id)getRootMatchNode;
- (id)loadPathMatchRulesWithOtherUser:(BOOL)arg1;
- (BOOL)addPathComponent:(id)arg1 withRule:(const MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3;
- (BOOL)addPathComponent:(id)arg1 withRule:(const MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3 supportModify:(BOOL)arg4;
- (void)p_makeArrayBizFileNodeOtherUser:(id)arg1;
- (void)p_makeArrayBizFileNodeZeroAppData:(id)arg1;
- (id)appRootMatchNode;
- (void)setAppRootMatchNode:(id)arg1;
- (void).cxx_destruct;
@end
