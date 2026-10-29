@interface MMLiveInfoItem : MMObject <WCTTableCoding, NSCopying>
{
    BOOL useDefaultLiveName; // +0x8
    unsigned int createTime; // +0xc
    unsigned int endTime; // +0x10
    unsigned int status; // +0x14
    unsigned int _barStatus; // +0x18
    unsigned int _liveType; // +0x1c
    long long liveId; // +0x20
    NSString * liveName; // +0x28
    NSString * roomId; // +0x30
    NSString * anchor; // +0x38
    long long timeId; // +0x40
    NSData * _liveExtraData; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)liveName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_liveName;
+ (const void *)roomId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_roomId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_status;
+ (const void *)anchor;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_anchor;
+ (const void *)timeId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_timeId;
+ (const void *)barStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_barStatus;
+ (const void *)useDefaultLiveName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_useDefaultLiveName;
+ (const void *)liveType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_liveType;
+ (const void *)liveExtraData;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_liveExtraData;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
+ (id)createItemWithLiveInfo:(id)arg1 roomId:(id)arg2;
+ (id)createItemWithShareLiveMsg:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finderLiveShareItem;
- (BOOL)isFinderLive;
- (BOOL)isGroupLive;
- (id)description;
- (long long)liveId;
- (void)setLiveId:(long long)arg1;
- (id)liveName;
- (void)setLiveName:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (long long)timeId;
- (void)setTimeId:(long long)arg1;
- (BOOL)useDefaultLiveName;
- (void)setUseDefaultLiveName:(BOOL)arg1;
- (unsigned int)barStatus;
- (void)setBarStatus:(unsigned int)arg1;
- (unsigned int)liveType;
- (void)setLiveType:(unsigned int)arg1;
- (id)liveExtraData;
- (void)setLiveExtraData:(id)arg1;
- (void).cxx_destruct;
@end
