@interface ChatBotVoIPReportData : ChatBotReportData
{
    unsigned int _roomType; // +0x8
    int _action; // +0xc
    unsigned int _roomMemberCount; // +0x10
    unsigned int _cardType; // +0x14
    unsigned int _openScene; // +0x18
    unsigned long long _roomId; // +0x20
    NSString * _chatBotUsername; // +0x28
    NSString * _userMsgId; // +0x30
    NSString * _chatBotAnswerId; // +0x38
    NSString * _cardID; // +0x40
    NSString * _talkingChatBotUsername; // +0x48
    unsigned long long _internalTimeStampMs; // +0x50
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)logId;
- (unsigned long long)timeStampMS;
- (unsigned long long)fromUserUin;
- (unsigned int)network;
- (id)getLogContent;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (unsigned int)roomType;
- (void)setRoomType:(unsigned int)arg1;
- (id)chatBotUsername;
- (void)setChatBotUsername:(id)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (id)userMsgId;
- (void)setUserMsgId:(id)arg1;
- (id)chatBotAnswerId;
- (void)setChatBotAnswerId:(id)arg1;
- (unsigned int)roomMemberCount;
- (void)setRoomMemberCount:(unsigned int)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)cardID;
- (void)setCardID:(id)arg1;
- (id)talkingChatBotUsername;
- (void)setTalkingChatBotUsername:(id)arg1;
- (unsigned int)openScene;
- (void)setOpenScene:(unsigned int)arg1;
- (unsigned long long)internalTimeStampMs;
- (void)setInternalTimeStampMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
