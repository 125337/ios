@interface BrandProfileTraceManager : NSObject
{
    NSMutableDictionary * _spanMap; // +0x8
    OtelSpanContext * _parentCtx; // +0x10
    NSLock * _lock; // +0x18
}
+ (id)sharedManager;
- (id)init;
- (BOOL)createProfileSpanWithPageId:(id)arg1 externalParent:(id)arg2;
- (BOOL)createProfileSpanWithPageId:(id)arg1 externalParent:(id)arg2 isServiceBrand:(BOOL)arg3;
- (id)spanForPageId:(id)arg1;
- (void)setStringAttributeForPageId:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setInt64AttributeForPageId:(id)arg1 key:(id)arg2 value:(long long)arg3;
- (void)addEventForPageId:(id)arg1 name:(id)arg2;
- (void)addEventForPageId:(id)arg1 name:(id)arg2 attributeKey:(id)arg3 int64Value:(long long)arg4;
- (void)addEventForPageId:(id)arg1 name:(id)arg2 int64Attributes:(id)arg3;
- (void)addEventForPageId:(id)arg1 name:(id)arg2 int64Attributes:(id)arg3 stringAttributes:(id)arg4;
- (void)setSourceItemAttributesForPageId:(id)arg1 bizUin:(long long)arg2 mid:(long long)arg3 idx:(long long)arg4 itemShowType:(long long)arg5 reqId:(id)arg6 sessionId:(id)arg7;
- (void)endProfileSpanWithPageId:(id)arg1;
- (void).cxx_destruct;
@end
