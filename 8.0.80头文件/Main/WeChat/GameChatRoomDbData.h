@interface GameChatRoomDbData : NSObject <WCTTableCoding>
{
    NSString * _chatRoomUserName; // +0x8
    unsigned long long _lastMaxExposureSeq; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatRoomUserName;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_chatRoomUserName;
+ (const void *)lastMaxExposureSeq;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_lastMaxExposureSeq;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
- (id)chatRoomUserName;
- (void)setChatRoomUserName:(id)arg1;
- (unsigned long long)lastMaxExposureSeq;
- (void)setLastMaxExposureSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
