@interface DBContactChatRoomToolMessageEvent : NSObject <WCTTableCoding>
{
    unsigned int _eventTime; // +0x8
    unsigned int _createTime; // +0xc
    unsigned int _nReply; // +0x10
    unsigned int _isDispose; // +0x14
    NSString * _eventID; // +0x18
    long long _nRelatedMesSvrID; // +0x20
    NSString * _userName; // +0x28
    NSString * _appUserName; // +0x30
    NSString * _appPath; // +0x38
    NSString * _title; // +0x40
    NSString * _desc; // +0x48
    NSString * _customInfo; // +0x50
    NSString * _creatorUserName; // +0x58
    NSMutableDictionary * _extInfo; // +0x60
    NSString * _manager; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)eventID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_eventID;
+ (const void *)nRelatedMesSvrID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_nRelatedMesSvrID;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appUserName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_appUserName;
+ (const void *)appPath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_appPath;
+ (const void *)eventTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_eventTime;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_title;
+ (const void *)desc;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_desc;
+ (const void *)customInfo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_customInfo;
+ (const void *)creatorUserName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_creatorUserName;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)manager;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_manager;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)nReply;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_nReply;
+ (const void *)isDispose;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isDispose;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_table_constraint_17:(void *)arg1;
+ (void)__wcdb_table_constraint_18:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
- (id)eventID;
- (void)setEventID:(id)arg1;
- (long long)nRelatedMesSvrID;
- (void)setNRelatedMesSvrID:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)appPath;
- (void)setAppPath:(id)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (id)creatorUserName;
- (void)setCreatorUserName:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)nReply;
- (void)setNReply:(unsigned int)arg1;
- (unsigned int)isDispose;
- (void)setIsDispose:(unsigned int)arg1;
- (void).cxx_destruct;
@end
