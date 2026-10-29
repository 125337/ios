@interface LiteAppTriggerActionsInfo : MMObject <WCTTableCoding, NSCopying>
{
    NSString * eventName; // +0x8
    NSString * appId; // +0x10
    NSString * triggerActionsJson; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)eventName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_eventName;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appId;
+ (const void *)triggerActionsJson;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_triggerActionsJson;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)triggerActionsJson;
- (void)setTriggerActionsJson:(id)arg1;
- (void).cxx_destruct;
@end
