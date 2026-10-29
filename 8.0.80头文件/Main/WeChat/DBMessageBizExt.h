@interface DBMessageBizExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _msgInnerType; // +0x10
    unsigned int _msgExtColInt1; // +0x14
    unsigned int _msgExtColInt2; // +0x18
    NSString * _chatUsername; // +0x20
    NSString * _bizId; // +0x28
    NSString * _msgExtColString1; // +0x30
    NSString * _msgExtColString2; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_90:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_91:(void *)arg1;
+ (id)swift_msgInnerType;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_92:(void *)arg1;
+ (id)swift_bizId;
+ (const void *)msgExtColInt1;
+ (const void *)__wcdb_synthesize_93:(void *)arg1;
+ (id)swift_msgExtColInt1;
+ (const void *)msgExtColInt2;
+ (const void *)__wcdb_synthesize_94:(void *)arg1;
+ (id)swift_msgExtColInt2;
+ (const void *)msgExtColString1;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (id)swift_msgExtColString1;
+ (const void *)msgExtColString2;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (id)swift_msgExtColString2;
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
