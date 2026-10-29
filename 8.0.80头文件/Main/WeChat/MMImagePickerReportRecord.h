@interface MMImagePickerReportRecord : NSObject <WCTTableCoding>
{
    unsigned int _eventMask; // +0x8
    NSString * _recordKey; // +0x10
    NSString * _clientID; // +0x18
    NSString * _username; // +0x20
    NSString * _payload; // +0x28
    unsigned long long _expireAt; // +0x30
    unsigned long long _serverID; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)recordKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_recordKey;
+ (const void *)clientID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_clientID;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_username;
+ (const void *)payload;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_payload;
+ (const void *)expireAt;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_expireAt;
+ (const void *)serverID;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_serverID;
+ (const void *)eventMask;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_eventMask;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)recordKey;
- (void)setRecordKey:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (unsigned long long)expireAt;
- (void)setExpireAt:(unsigned long long)arg1;
- (unsigned long long)serverID;
- (void)setServerID:(unsigned long long)arg1;
- (unsigned int)eventMask;
- (void)setEventMask:(unsigned int)arg1;
- (void).cxx_destruct;
@end
