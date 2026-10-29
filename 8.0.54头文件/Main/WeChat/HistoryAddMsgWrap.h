@interface HistoryAddMsgWrap : MMObject <WCTTableCoding>
{
    int _msgType; // +0x8
    unsigned int _status; // +0xc
    unsigned int _imgStatus; // +0x10
    unsigned int _createTime; // +0x14
    unsigned int _msgSeq; // +0x18
    NSString * _fromUserName; // +0x20
    NSString * _toUserName; // +0x28
    NSString * _content; // +0x30
    NSString * _msgSource; // +0x38
    NSString * _pushContent; // +0x40
    long long _newMsgId; // +0x48
    NSString * _chatName; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)fromUserName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_fromUserName;
+ (const void *)toUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_toUserName;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_content;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_status;
+ (const void *)imgStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_imgStatus;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)msgSource;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_msgSource;
+ (const void *)pushContent;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_pushContent;
+ (const void *)newMsgId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_newMsgId;
+ (const void *)msgSeq;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_msgSeq;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_chatName;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (id)generateWithMsgWrap:(id)arg1;
- (id)generateMsgWrap;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (int)msgType;
- (void)setMsgType:(int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)imgStatus;
- (void)setImgStatus:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (id)pushContent;
- (void)setPushContent:(id)arg1;
- (long long)newMsgId;
- (void)setNewMsgId:(long long)arg1;
- (unsigned int)msgSeq;
- (void)setMsgSeq:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (void).cxx_destruct;
@end

