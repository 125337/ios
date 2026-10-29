@interface WAPluginPermissionInfo : NSObject <WCTTableCoding>
{
    NSString * _appID; // +0x8
    NSData * _control_bytes; // +0x10
    WAPluginStatePermissionBytes * _state_bytes; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)control_bytes;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_control_bytes;
+ (const void *)state_bytes;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_state_bytes;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)control_bytes;
- (void)setControl_bytes:(id)arg1;
- (id)state_bytes;
- (void)setState_bytes:(id)arg1;
- (void).cxx_destruct;
@end

