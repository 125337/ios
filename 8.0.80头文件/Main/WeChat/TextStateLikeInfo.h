@interface TextStateLikeInfo : MMObject <WCTTableCoding, TextStateBaseNotifyInfo>
{
    BOOL _bDeleted; // +0x8
    BOOL _bNotify; // +0x9
    BOOL _bHadRead; // +0xa
    unsigned int _likeType; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _likeCount; // +0x14
    unsigned int _source; // +0x18
    unsigned long long _likeId; // +0x20
    NSString * _statusID; // +0x28
    NSString * _nikeName; // +0x30
    NSString * _hashName; // +0x38
    NSString * _headImageUrl; // +0x40
    NSString * _extInfo; // +0x48
    unsigned long long _version; // +0x50
    unsigned long long _likeCountVersion; // +0x58
    NSString * _encodeUsername; // +0x60
    NSString * _affUserName; // +0x68
    StatusCommentMessageThumb * _messageThumbData; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)likeId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_likeId;
+ (const void *)statusID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_statusID;
+ (const void *)nikeName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_nikeName;
+ (const void *)hashName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_hashName;
+ (const void *)headImageUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_headImageUrl;
+ (const void *)likeType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_likeType;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)bNotify;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_bNotify;
+ (const void *)bHadRead;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_bHadRead;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_version;
+ (const void *)likeCountVersion;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_likeCountVersion;
+ (const void *)encodeUsername;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_encodeUsername;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_source;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_table_constraint_15:(void *)arg1;
+ (void)__wcdb_table_constraint_16:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
+ (id)GenerateLikeInfoWithExtInfo:(id)arg1 dataItem:(id)arg2;
+ (id)GenerateLikeInfoWithStatusLiked:(id)arg1;
- (id)profileContact;
- (id)username;
- (id)notifyListReportParams;
- (id)description;
- (unsigned long long)likeId;
- (void)setLikeId:(unsigned long long)arg1;
- (id)statusID;
- (void)setStatusID:(id)arg1;
- (id)nikeName;
- (void)setNikeName:(id)arg1;
- (id)hashName;
- (void)setHashName:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (unsigned int)likeType;
- (void)setLikeType:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)bDeleted;
- (void)setBDeleted:(BOOL)arg1;
- (BOOL)bNotify;
- (void)setBNotify:(BOOL)arg1;
- (BOOL)bHadRead;
- (void)setBHadRead:(BOOL)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)likeCountVersion;
- (void)setLikeCountVersion:(unsigned long long)arg1;
- (id)encodeUsername;
- (void)setEncodeUsername:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)affUserName;
- (void)setAffUserName:(id)arg1;
- (id)messageThumbData;
- (void)setMessageThumbData:(id)arg1;
- (void).cxx_destruct;
@end
