@interface GameLifeInfo : NSObject
{
    BOOL _replaceNotice; // +0x8
    GameLifeInfoChatRoom * _chatRoomInfo; // +0x10
}
- (BOOL)replaceNotice;
- (void)setReplaceNotice:(BOOL)arg1;
- (id)chatRoomInfo;
- (void)setChatRoomInfo:(id)arg1;
- (void).cxx_destruct;
@end
