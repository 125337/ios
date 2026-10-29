@interface MMSessionLastMsgInfo : NSObject <WCTTableCoding>
{
    NSString * _username; // +0x8
    long long _lastMsgServerId; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)lastMsgServerId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastMsgServerId;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)lastMsgServerId;
- (void)setLastMsgServerId:(long long)arg1;
- (void).cxx_destruct;
@end
