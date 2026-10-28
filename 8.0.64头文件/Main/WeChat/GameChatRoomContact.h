@interface GameChatRoomContact : NSObject <WCTTableCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _userName; // +0x10
    NSData * _pbData; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)pbData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_pbData;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)init;
- (id)userData;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)pbData;
- (void)setPbData:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
