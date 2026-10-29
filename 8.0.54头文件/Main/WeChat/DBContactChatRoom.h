@interface DBContactChatRoom : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _chatStatus; // +0x8
    unsigned int _chatRoomMaxCount; // +0xc
    unsigned int _chatRoomVersion; // +0x10
    unsigned int _chatRoomAccessType; // +0x14
    unsigned int _chatRoomLocalSendUpgradeType; // +0x18
    unsigned int _inChatRoomStatus; // +0x1c
    NSString * _chatRoomMember; // +0x20
    NSString * _owner; // +0x28
    NSString * _chatRoomData; // +0x30
    DBContactChatRoomDetail * _chatRoomDetail; // +0x38
    NSString * _chatRoomAdmin; // +0x40
    unsigned long long _chatRoomBusinessType; // +0x48
    NSString * _chatRoomSpecialAttentionMem; // +0x50
}
+ (void)PBArrayAdd_chatRoomMember;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_chatStatus;
+ (void)PBArrayAdd_chatRoomMaxCount;
+ (void)PBArrayAdd_chatRoomVersion;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_chatRoomDetail;
+ (void)PBArrayAdd_chatRoomAccessType;
+ (void)PBArrayAdd_chatRoomAdmin;
+ (void)PBArrayAdd_chatRoomBusinessType;
+ (void)PBArrayAdd_chatRoomLocalSendUpgradeType;
+ (void)PBArrayAdd_chatRoomSpecialAttentionMem;
+ (void)PBArrayAdd_inChatRoomStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)chatRoomMember;
- (void)setChatRoomMember:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (unsigned int)chatStatus;
- (void)setChatStatus:(unsigned int)arg1;
- (unsigned int)chatRoomMaxCount;
- (void)setChatRoomMaxCount:(unsigned int)arg1;
- (unsigned int)chatRoomVersion;
- (void)setChatRoomVersion:(unsigned int)arg1;
- (id)chatRoomData;
- (void)setChatRoomData:(id)arg1;
- (id)chatRoomDetail;
- (void)setChatRoomDetail:(id)arg1;
- (unsigned int)chatRoomAccessType;
- (void)setChatRoomAccessType:(unsigned int)arg1;
- (id)chatRoomAdmin;
- (void)setChatRoomAdmin:(id)arg1;
- (unsigned long long)chatRoomBusinessType;
- (void)setChatRoomBusinessType:(unsigned long long)arg1;
- (unsigned int)chatRoomLocalSendUpgradeType;
- (void)setChatRoomLocalSendUpgradeType:(unsigned int)arg1;
- (id)chatRoomSpecialAttentionMem;
- (void)setChatRoomSpecialAttentionMem:(id)arg1;
- (unsigned int)inChatRoomStatus;
- (void)setInChatRoomStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

