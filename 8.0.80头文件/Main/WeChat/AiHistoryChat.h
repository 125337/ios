@interface AiHistoryChat : NSObject <WCTTableCoding>
{
    int _chatType; // +0x8
    NSString * _chatId; // +0x10
    unsigned long long _createTimeStamp; // +0x18
    unsigned long long _updateTimeStamp; // +0x20
    NSString * _title; // +0x28
    NSString * _extInfo; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_chatId;
+ (const void *)chatType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_chatType;
+ (const void *)createTimeStamp;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_createTimeStamp;
+ (const void *)updateTimeStamp;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_updateTimeStamp;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_title;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_extInfo;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)JSONDictionary;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (int)chatType;
- (void)setChatType:(int)arg1;
- (unsigned long long)createTimeStamp;
- (void)setCreateTimeStamp:(unsigned long long)arg1;
- (unsigned long long)updateTimeStamp;
- (void)setUpdateTimeStamp:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
