@interface GameChatRoomPbDbData : NSObject <WCTTableCoding>
{
    NSString * _keyWithCategroy; // +0x8
    NSData * _pbData; // +0x10
    NSString * _additionalInfo; // +0x18
    NSString * _pbClassName; // +0x20
    double _createTime; // +0x28
    double _expireDuration; // +0x30
    WXPBGeneratedMessage * _pbMsg; // +0x38
    NSString * _category; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)keyWithCategroy;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_keyWithCategroy;
+ (const void *)category;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_category;
+ (const void *)pbData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_pbData;
+ (const void *)pbClassName;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_pbClassName;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)expireDuration;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_expireDuration;
+ (const void *)additionalInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_additionalInfo;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)dbKeyFromCategory:(id)arg1 key:(id)arg2;
- (id)initWithCategory:(id)arg1 key:(id)arg2 pbData:(id)arg3;
- (BOOL)isOfPbClass:(Class)arg1;
- (id)keyWithCategroy;
- (void)setKeyWithCategroy:(id)arg1;
- (id)pbData;
- (void)setPbData:(id)arg1;
- (id)additionalInfo;
- (void)setAdditionalInfo:(id)arg1;
- (id)pbClassName;
- (void)setPbClassName:(id)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (double)expireDuration;
- (void)setExpireDuration:(double)arg1;
- (id)pbMsg;
- (void)setPbMsg:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (void).cxx_destruct;
@end
