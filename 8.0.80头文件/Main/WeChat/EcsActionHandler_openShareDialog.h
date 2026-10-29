@interface EcsActionHandler_openShareDialog : EcsActionHandler_Base
{
    NSString * _relayParams; // +0x8
    NSMutableArray * _droppedItems; // +0x10
}
+ (id)jsonStringFromObject:(id)arg1;
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)flushDroppedItemsReport;
- (void)sendEvent:(id)arg1;
- (id)relayParams;
- (void)setRelayParams:(id)arg1;
- (id)droppedItems;
- (void)setDroppedItems:(id)arg1;
- (void).cxx_destruct;
@end
