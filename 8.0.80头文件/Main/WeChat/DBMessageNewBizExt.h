@interface DBMessageNewBizExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _msgInnerType; // +0x10
    unsigned int _status; // +0x14
    unsigned int _invalidTime; // +0x18
    unsigned int _msgExtColInt1; // +0x1c
    unsigned int _msgExtColInt2; // +0x20
    NSString * _chatUsername; // +0x28
    NSString * _bizId; // +0x30
    NSString * _msgExtColString1; // +0x38
    NSString * _msgExtColString2; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_97:(void *)arg1;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_98:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_99:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_100:(void *)arg1;
+ (id)swift_msgInnerType;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (id)swift_bizId;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (id)swift_status;
+ (const void *)invalidTime;
+ (const void *)__wcdb_synthesize_103:(void *)arg1;
+ (id)swift_invalidTime;
+ (const void *)msgExtColInt1;
+ (const void *)__wcdb_synthesize_104:(void *)arg1;
+ (id)swift_msgExtColInt1;
+ (const void *)msgExtColInt2;
+ (const void *)__wcdb_synthesize_105:(void *)arg1;
+ (id)swift_msgExtColInt2;
+ (const void *)msgExtColString1;
+ (const void *)__wcdb_synthesize_106:(void *)arg1;
+ (id)swift_msgExtColString1;
+ (const void *)msgExtColString2;
+ (const void *)__wcdb_synthesize_107:(void *)arg1;
+ (id)swift_msgExtColString2;
+ (void)__wcdb_index_108:(void *)arg1;
+ (void)__wcdb_index_109:(void *)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)msgInnerType;
- (void)setMsgInnerType:(unsigned int)arg1;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)invalidTime;
- (void)setInvalidTime:(unsigned int)arg1;
- (unsigned int)msgExtColInt1;
- (void)setMsgExtColInt1:(unsigned int)arg1;
- (unsigned int)msgExtColInt2;
- (void)setMsgExtColInt2:(unsigned int)arg1;
- (id)msgExtColString1;
- (void)setMsgExtColString1:(id)arg1;
- (id)msgExtColString2;
- (void)setMsgExtColString2:(id)arg1;
- (void).cxx_destruct;
@end
