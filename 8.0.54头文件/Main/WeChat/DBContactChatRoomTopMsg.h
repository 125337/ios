@interface DBContactChatRoomTopMsg : NSObject <WCTTableCoding>
{
    unsigned int _topId; // +0x8
    unsigned int _msgType; // +0xc
    unsigned int _status; // +0x10
    unsigned int _isRevoke; // +0x14
    unsigned int _exposureTime; // +0x18
    NSString * _userName; // +0x20
    NSString * _opUserName; // +0x28
    unsigned long long _msgSvrID; // +0x30
    NSString * _msgSummary; // +0x38
    NSString * _msgUserName; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_userName;
+ (const void *)topId;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_topId;
+ (const void *)opUserName;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_opUserName;
+ (const void *)msgSvrID;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_msgSvrID;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_msgType;
+ (const void *)msgSummary;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_msgSummary;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_status;
+ (const void *)msgUserName;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_msgUserName;
+ (const void *)isRevoke;
+ (const void *)__wcdb_synthesize_45:(void *)arg1;
+ (id)swift_isRevoke;
+ (const void *)exposureTime;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (id)swift_exposureTime;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (void)__wcdb_column_constraint_48:(void *)arg1;
+ (void)__wcdb_column_constraint_49:(void *)arg1;
+ (void)__wcdb_index_50:(void *)arg1;
+ (void)__wcdb_index_51:(void *)arg1;
+ (void)__wcdb_table_constraint_52:(void *)arg1;
+ (void)__wcdb_table_constraint_53:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)topId;
- (void)setTopId:(unsigned int)arg1;
- (id)opUserName;
- (void)setOpUserName:(id)arg1;
- (unsigned long long)msgSvrID;
- (void)setMsgSvrID:(unsigned long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)msgSummary;
- (void)setMsgSummary:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (unsigned int)isRevoke;
- (void)setIsRevoke:(unsigned int)arg1;
- (unsigned int)exposureTime;
- (void)setExposureTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

