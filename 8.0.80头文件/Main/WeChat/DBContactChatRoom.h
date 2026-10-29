@interface DBContactChatRoom : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _chatStatus; // +0x8
    unsigned int _chatRoomMaxCount; // +0xc
    unsigned int _chatRoomVersion; // +0x10
    unsigned int _chatRoomAccessType; // +0x14
    unsigned int _chatRoomLocalSendUpgradeType; // +0x18
    unsigned int _inChatRoomStatus; // +0x1c
    unsigned int _chatRoomQRCodeAccessType; // +0x20
    NSString * _chatRoomMember; // +0x28
    NSString * _owner; // +0x30
    NSString * _chatRoomData; // +0x38
    DBContactChatRoomDetail * _chatRoomDetail; // +0x40
    NSString * _chatRoomAdmin; // +0x48
    unsigned long long _chatRoomBusinessType; // +0x50
    NSString * _chatRoomSpecialAttentionMem; // +0x58
    NSString * _chatRoomBypMemberList; // +0x60
    NSData * _chatRoomBypMemberData; // +0x68
    NSData * _chatRoomBypDerivedSyncKey; // +0x70
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
+ (void)PBArrayAdd_chatRoomQRCodeAccessType;
+ (void)PBArrayAdd_chatRoomBypMemberList;
+ (void)PBArrayAdd_chatRoomBypMemberData;
+ (void)PBArrayAdd_chatRoomBypDerivedSyncKey;
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
- (unsigned int)chatRoomQRCodeAccessType;
- (void)setChatRoomQRCodeAccessType:(unsigned int)arg1;
- (id)chatRoomBypMemberList;
- (void)setChatRoomBypMemberList:(id)arg1;
- (id)chatRoomBypMemberData;
- (void)setChatRoomBypMemberData:(id)arg1;
- (id)chatRoomBypDerivedSyncKey;
- (void)setChatRoomBypDerivedSyncKey:(id)arg1;
- (void).cxx_destruct;
@end
