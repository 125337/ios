@interface WCMicroMerchantFeed : NSObject <WCTTableCoding>
{
    unsigned int _groupTime; // +0x8
    unsigned int _status; // +0xc
    int _topFeedType; // +0x10
    unsigned int _realWsVersion; // +0x14
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
+ (const void *)__wcdb_synthesize_94:(void *)arg1;
+ (id)swift_feedId;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)groupTime;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (id)swift_groupTime;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_97:(void *)arg1;
+ (id)swift_username;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_98:(void *)arg1;
+ (id)swift_title;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_99:(void *)arg1;
+ (id)swift_status;
+ (const void *)titleV2;
+ (const void *)__wcdb_synthesize_100:(void *)arg1;
+ (id)swift_titleV2;
+ (const void *)topFeedType;
+ (const void *)__wcdb_synthesize_101:(void *)arg1;
+ (id)swift_topFeedType;
+ (const void *)realWsVersion;
+ (const void *)__wcdb_synthesize_102:(void *)arg1;
+ (id)swift_realWsVersion;
+ (void)__wcdb_column_constraint_103:(void *)arg1;
+ (void)__wcdb_column_constraint_104:(void *)arg1;
+ (void)__wcdb_column_constraint_105:(void *)arg1;
+ (void)__wcdb_column_constraint_106:(void *)arg1;
+ (void)__wcdb_index_107:(void *)arg1;
+ (void)__wcdb_column_constraint_108:(void *)arg1;
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
- (unsigned int)realWsVersion;
- (void)setRealWsVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
