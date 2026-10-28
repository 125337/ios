@interface ForwardMsgSpamDbModel : NSObject <WCTTableCoding>
{
    BOOL _open; // +0x8
    NSString * _msgId; // +0x10
    NSString * _username; // +0x18
    unsigned long long _scene; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)open;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_open;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)initWithUsername:(id)arg1 andScene:(unsigned long long)arg2 andMsgId:(id)arg3 andOpenStatus:(BOOL)arg4;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)open;
- (void)setOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
