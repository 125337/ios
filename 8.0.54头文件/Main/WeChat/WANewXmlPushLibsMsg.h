@interface WANewXmlPushLibsMsg : NSObject <WCTTableCoding>
{
    unsigned int _createTime; // +0x8
    unsigned int _expireTime; // +0xc
    unsigned int _busiType; // +0x10
    unsigned int _msgType; // +0x14
    unsigned int _receiveTime; // +0x18
    NSString * _msgId; // +0x20
    NSString * _appId; // +0x28
    NSString * _dataJson; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_msgId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)busiType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_busiType;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)dataJson;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_dataJson;
+ (const void *)receiveTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_receiveTime;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
- (id)description;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (unsigned int)busiType;
- (void)setBusiType:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)dataJson;
- (void)setDataJson:(id)arg1;
- (unsigned int)receiveTime;
- (void)setReceiveTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

