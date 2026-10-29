@interface WCMicroMerchantFeed : NSObject <WCTTableCoding>
{
    unsigned int _groupTime; // +0x8
    unsigned int _status; // +0xc
    int _topFeedType; // +0x10
    NSString * _feedId; // +0x18
    NSString * _groupId; // +0x20
    NSString * _username; // +0x28
    NSString * _title; // +0x30
    NSString * _titleV2; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)feedId;
+ (const void *)__wcdb_synthesize_87:(void *)arg1;
+ (id)swift_feedId;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_88:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)groupTime;
+ (const void *)__wcdb_synthesize_89:(void *)arg1;
+ (id)swift_groupTime;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_90:(void *)arg1;
+ (id)swift_username;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_91:(void *)arg1;
+ (id)swift_title;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_92:(void *)arg1;
+ (id)swift_status;
+ (const void *)titleV2;
+ (const void *)__wcdb_synthesize_93:(void *)arg1;
+ (id)swift_titleV2;
+ (const void *)topFeedType;
+ (const void *)__wcdb_synthesize_94:(void *)arg1;
+ (id)swift_topFeedType;
+ (void)__wcdb_column_constraint_95:(void *)arg1;
+ (void)__wcdb_column_constraint_96:(void *)arg1;
+ (void)__wcdb_column_constraint_97:(void *)arg1;
+ (void)__wcdb_column_constraint_98:(void *)arg1;
+ (void)__wcdb_index_99:(void *)arg1;
+ (void)__wcdb_column_constraint_100:(void *)arg1;
- (id)description;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)groupTime;
- (void)setGroupTime:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)titleV2;
- (void)setTitleV2:(id)arg1;
- (int)topFeedType;
- (void)setTopFeedType:(int)arg1;
- (void).cxx_destruct;
@end

