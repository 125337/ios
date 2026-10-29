@interface WAReportUpdatableMsgActionItem : WAReportBaseItem
{
    unsigned int _subscribeState; // +0x8
    NSString * _shareTicket; // +0x10
    NSString * _chatName; // +0x18
    NSString * _fullPagePath; // +0x20
    unsigned long long _eventId; // +0x28
    NSNumber * _pushMsgState; // +0x30
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)shareTicket;
- (void)setShareTicket:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)fullPagePath;
- (void)setFullPagePath:(id)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)pushMsgState;
- (void)setPushMsgState:(id)arg1;
- (unsigned int)subscribeState;
- (void)setSubscribeState:(unsigned int)arg1;
- (void).cxx_destruct;
@end

