@interface WCStoryChatRoomSync : NSObject <WCTTableCoding>
{
    unsigned int _nextSyncTime; // +0x8
    NSString * _chatRoomName; // +0x10
    NSData * _buffer; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_chatRoomName;
+ (const void *)nextSyncTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_nextSyncTime;
+ (const void *)buffer;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_buffer;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
- (id)description;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (unsigned int)nextSyncTime;
- (void)setNextSyncTime:(unsigned int)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (void).cxx_destruct;
@end
