@interface GCChatRoomMessage : NSObject
{
    BOOL _isLocalMessage; // +0x8
    BOOL _isCache; // +0x9
    BOOL _delaySend; // +0xa
    NSString * _chatRoomName; // +0x10
    unsigned long long _messageType; // +0x18
    unsigned long long _messageSubType; // +0x20
    NSString * _userName; // +0x28
    GameChatRoomContact * _userContactInfo; // +0x30
    NSString * _userChatRoomNickName; // +0x38
    NSString * _cliMsgId; // +0x40
    ChatroomMsgPack * _msgPack; // +0x48
    SendChatroomMsgRequest * _sendMsgRequest; // +0x50
    GCImageMsgWrapper * _imgMsgWrapper; // +0x58
}
- (BOOL)isLocalMessage;
- (void)setIsLocalMessage:(BOOL)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (unsigned long long)messageType;
- (void)setMessageType:(unsigned long long)arg1;
- (unsigned long long)messageSubType;
- (void)setMessageSubType:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)userContactInfo;
- (void)setUserContactInfo:(id)arg1;
- (id)userChatRoomNickName;
- (void)setUserChatRoomNickName:(id)arg1;
- (id)cliMsgId;
- (void)setCliMsgId:(id)arg1;
- (id)msgPack;
- (void)setMsgPack:(id)arg1;
- (id)sendMsgRequest;
- (void)setSendMsgRequest:(id)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (BOOL)delaySend;
- (void)setDelaySend:(BOOL)arg1;
- (id)imgMsgWrapper;
- (void)setImgMsgWrapper:(id)arg1;
- (void).cxx_destruct;
@end

