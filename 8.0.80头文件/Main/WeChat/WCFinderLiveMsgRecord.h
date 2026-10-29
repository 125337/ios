@interface WCFinderLiveMsgRecord : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalID; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _localClientMsgId; // +0x10
    NSString * _sessionId; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localClientMsgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localClientMsgId;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_sessionId;
+ (const void *)msgLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_msgLocalID;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
