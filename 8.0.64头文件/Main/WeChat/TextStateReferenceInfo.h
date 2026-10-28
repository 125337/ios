@interface TextStateReferenceInfo : NSObject <WCTTableCoding, TextStateBaseNotifyInfo>
{
    BOOL _isRead; // +0x8
    BOOL _notify; // +0x9
    unsigned int _createTime; // +0xc
    unsigned int _type; // +0x10
    unsigned int _referenceCount; // +0x14
    NSString * _textStateId; // +0x18
    NSString * _username; // +0x20
    NSString * _extInfo; // +0x28
    StatusCommentMessageThumb * _messageThumbData; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_textStateId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)referenceCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_referenceCount;
+ (const void *)isRead;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_isRead;
+ (const void *)notify;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_notify;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_type;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (id)referenceInfoFromStatusReferenced:(id)arg1 textStateId:(id)arg2;
- (id)profileContact;
- (id)statusID;
- (id)notifyListReportParams;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)referenceCount;
- (void)setReferenceCount:(unsigned int)arg1;
- (BOOL)isRead;
- (void)setIsRead:(BOOL)arg1;
- (BOOL)notify;
- (void)setNotify:(BOOL)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)messageThumbData;
- (void)setMessageThumbData:(id)arg1;
- (void).cxx_destruct;
@end
