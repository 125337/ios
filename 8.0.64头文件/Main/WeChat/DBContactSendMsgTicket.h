@interface DBContactSendMsgTicket : NSObject <WCTTableCoding>
{
    NSString * _userName; // +0x8
    NSString * _sendMsgTicket; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_userName;
+ (const void *)sendMsgTicket;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_sendMsgTicket;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (void)__wcdb_column_constraint_29:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)sendMsgTicket;
- (void)setSendMsgTicket:(id)arg1;
- (void).cxx_destruct;
@end
