@interface DBFavoritesItem : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _localId; // +0xc
    unsigned int _favId; // +0x10
    unsigned int _type; // +0x14
    unsigned int _time; // +0x18
    unsigned int _updateSeq; // +0x1c
    unsigned int _localUpdateSeq; // +0x20
    unsigned int _sourceType; // +0x24
    unsigned int _localStatus; // +0x28
    unsigned int _webCacheStatus; // +0x2c
    unsigned int _usedTimes; // +0x30
    unsigned int _IntRes2; // +0x34
    unsigned int _IntRes3; // +0x38
    long long lastInsertedRowID; // +0x40
    NSString * _fromUser; // +0x48
    NSString * _toUser; // +0x50
    NSString * _realChatName; // +0x58
    NSString * _sourceId; // +0x60
    NSString * _xml; // +0x68
    long long _dataTotalSize; // +0x70
    NSString * _StrRes1; // +0x78
    NSString * _StrRes2; // +0x80
    NSString * _StrRes3; // +0x88
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)favId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_favId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_type;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_time;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_updateSeq;
+ (const void *)localUpdateSeq;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_localUpdateSeq;
+ (const void *)fromUser;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_fromUser;
+ (const void *)toUser;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_toUser;
+ (const void *)realChatName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_realChatName;
+ (const void *)sourceType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_sourceType;
+ (const void *)localStatus;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_localStatus;
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_sourceId;
+ (const void *)xml;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_xml;
+ (const void *)dataTotalSize;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_dataTotalSize;
+ (const void *)webCacheStatus;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_webCacheStatus;
+ (const void *)usedTimes;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_usedTimes;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)IntRes3;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_IntRes3;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_StrRes2;
+ (const void *)StrRes3;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_StrRes3;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_index_28:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_32:(void *)arg1;
+ (void)__wcdb_index_33:(void *)arg1;
+ (void)__wcdb_index_34:(void *)arg1;
+ (void)__wcdb_index_35:(void *)arg1;
+ (void)__wcdb_index_36:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_39:(void *)arg1;
+ (void)__wcdb_column_constraint_40:(void *)arg1;
+ (void)__wcdb_column_constraint_41:(void *)arg1;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
+ (void)__wcdb_column_constraint_46:(void *)arg1;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (void)__wcdb_column_constraint_48:(void *)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)updateSeq;
- (void)setUpdateSeq:(unsigned int)arg1;
- (unsigned int)localUpdateSeq;
- (void)setLocalUpdateSeq:(unsigned int)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (id)toUser;
- (void)setToUser:(id)arg1;
- (id)realChatName;
- (void)setRealChatName:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (unsigned int)localStatus;
- (void)setLocalStatus:(unsigned int)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)xml;
- (void)setXml:(id)arg1;
- (long long)dataTotalSize;
- (void)setDataTotalSize:(long long)arg1;
- (unsigned int)webCacheStatus;
- (void)setWebCacheStatus:(unsigned int)arg1;
- (unsigned int)usedTimes;
- (void)setUsedTimes:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (unsigned int)IntRes3;
- (void)setIntRes3:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (id)StrRes3;
- (void)setStrRes3:(id)arg1;
- (void).cxx_destruct;
@end

