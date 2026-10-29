@interface WxpayLiteAppGlobalEventRelay : NSObject
{
    NSMutableSet * _keys; // +0x8
}
+ (id)processScopedEventNames;
+ (long long)routeForEvent:(id)arg1 appId:(id)arg2;
+ (id)candidatesFromStack:(id)arg1 gate:(id)arg2;
+ (id)targetsForEvent:(id)arg1 appId:(id)arg2 callId:(long long)arg3 candidates:(id)arg4;
+ (id)dedupKeyForEvent:(id)arg1 appId:(id)arg2 detail:(id)arg3;
- (id)init;
- (BOOL)admitEvent:(id)arg1 appId:(id)arg2 detail:(id)arg3;
- (void)drain;
- (BOOL)hasPendingKeys;
- (void).cxx_destruct;
@end
