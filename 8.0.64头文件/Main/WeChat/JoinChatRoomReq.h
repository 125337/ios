@interface JoinChatRoomReq : BaseReq
{
    NSString * groupId; // +0x18
    NSString * chatRoomNickName; // +0x20
    NSString * extMsg; // +0x28
}
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)chatRoomNickName;
- (void)setChatRoomNickName:(id)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (void).cxx_destruct;
@end
