@interface CreateChatRoomReq : BaseReq
{
    NSString * groupId; // +0x18
    NSString * chatRoomName; // +0x20
    NSString * extMsg; // +0x28
    NSString * chatRoomNickName; // +0x30
}
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (id)chatRoomNickName;
- (void)setChatRoomNickName:(id)arg1;
- (void).cxx_destruct;
@end

