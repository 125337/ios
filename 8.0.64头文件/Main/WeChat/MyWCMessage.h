@interface MyWCMessage : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _m_localId; // +0xc
    unsigned int _m_type; // +0x10
    unsigned int _m_source; // +0x14
    unsigned int _m_flag; // +0x18
    unsigned int _m_createTime; // +0x1c
    unsigned int _m_commentFlag; // +0x20
    long long lastInsertedRowID; // +0x28
    NSString * _m_id; // +0x30
    NSString * _m_parentId; // +0x38
    NSString * _m_fromUser; // +0x40
    NSString * _m_fromNickname; // +0x48
    NSString * _m_toUser; // +0x50
    NSString * _m_toNickname; // +0x58
    NSString * _m_content; // +0x60
    NSData * _m_ref; // +0x68
    NSData * _m_metaData; // +0x70
    NSString * _m_commentId; // +0x78
    NSString * _m_clientId; // +0x80
    NSString * _m_comment64Id; // +0x88
    long long _m_springWishFlag; // +0x90
    long long _m_messgaeRelevanceType; // +0x98
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_localId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_localId;
+ (const void *)m_type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_type;
+ (const void *)m_source;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_m_source;
+ (const void *)m_flag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_m_flag;
+ (const void *)m_createTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_m_createTime;
+ (const void *)m_id;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_id;
+ (const void *)m_parentId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_m_parentId;
+ (const void *)m_fromUser;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_m_fromUser;
+ (const void *)m_fromNickname;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_m_fromNickname;
+ (const void *)m_toUser;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_m_toUser;
+ (const void *)m_toNickname;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_m_toNickname;
+ (const void *)m_content;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_m_content;
+ (const void *)m_ref;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_m_ref;
+ (const void *)m_metaData;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_m_metaData;
+ (const void *)m_commentId;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_m_commentId;
+ (const void *)m_clientId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_m_clientId;
+ (const void *)m_comment64Id;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_m_comment64Id;
+ (const void *)m_commentFlag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_m_commentFlag;
+ (const void *)m_springWishFlag;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_m_springWishFlag;
+ (const void *)m_messgaeRelevanceType;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_m_messgaeRelevanceType;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_index_28:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_column_constraint_30:(void *)arg1;
+ (void)__wcdb_column_constraint_31:(void *)arg1;
+ (void)__wcdb_column_constraint_32:(void *)arg1;
+ (void)__wcdb_column_constraint_33:(void *)arg1;
+ (void)__wcdb_column_constraint_34:(void *)arg1;
+ (void)__wcdb_column_constraint_35:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)m_localId;
- (void)setM_localId:(unsigned int)arg1;
- (unsigned int)m_type;
- (void)setM_type:(unsigned int)arg1;
- (unsigned int)m_source;
- (void)setM_source:(unsigned int)arg1;
- (unsigned int)m_flag;
- (void)setM_flag:(unsigned int)arg1;
- (unsigned int)m_createTime;
- (void)setM_createTime:(unsigned int)arg1;
- (id)m_id;
- (void)setM_id:(id)arg1;
- (id)m_parentId;
- (void)setM_parentId:(id)arg1;
- (id)m_fromUser;
- (void)setM_fromUser:(id)arg1;
- (id)m_fromNickname;
- (void)setM_fromNickname:(id)arg1;
- (id)m_toUser;
- (void)setM_toUser:(id)arg1;
- (id)m_toNickname;
- (void)setM_toNickname:(id)arg1;
- (id)m_content;
- (void)setM_content:(id)arg1;
- (id)m_ref;
- (void)setM_ref:(id)arg1;
- (id)m_metaData;
- (void)setM_metaData:(id)arg1;
- (id)m_commentId;
- (void)setM_commentId:(id)arg1;
- (id)m_clientId;
- (void)setM_clientId:(id)arg1;
- (id)m_comment64Id;
- (void)setM_comment64Id:(id)arg1;
- (unsigned int)m_commentFlag;
- (void)setM_commentFlag:(unsigned int)arg1;
- (long long)m_springWishFlag;
- (void)setM_springWishFlag:(long long)arg1;
- (long long)m_messgaeRelevanceType;
- (void)setM_messgaeRelevanceType:(long long)arg1;
- (void).cxx_destruct;
@end
