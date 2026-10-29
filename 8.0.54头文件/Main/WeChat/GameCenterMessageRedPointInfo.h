@interface GameCenterMessageRedPointInfo : NSObject
{
    unsigned int _conversationTotalUnreadCount; // +0x8
    unsigned int _interactUnReadCnt; // +0xc
    unsigned int _noticeUnReadCnt; // +0x10
    unsigned int _myGroupUnReadCnt; // +0x14
    unsigned long long _groupLastUpdateTime; // +0x18
    unsigned long long _interactLastUpdateTime; // +0x20
    unsigned long long _noticeLastUpdateTime; // +0x28
    unsigned long long _gameLifeLastUpdateTime; // +0x30
    unsigned long long _chatVcInterNoticeTabLastUpdateTime; // +0x38
    unsigned long long _chatVcChatTabLastUpdateTime; // +0x40
    unsigned long long _lastUpdateTime; // +0x48
}
- (unsigned int)conversationTotalUnreadCount;
- (void)setConversationTotalUnreadCount:(unsigned int)arg1;
- (unsigned int)interactUnReadCnt;
- (void)setInteractUnReadCnt:(unsigned int)arg1;
- (unsigned int)noticeUnReadCnt;
- (void)setNoticeUnReadCnt:(unsigned int)arg1;
- (unsigned int)myGroupUnReadCnt;
- (void)setMyGroupUnReadCnt:(unsigned int)arg1;
- (unsigned long long)groupLastUpdateTime;
- (void)setGroupLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)interactLastUpdateTime;
- (void)setInteractLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)noticeLastUpdateTime;
- (void)setNoticeLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)gameLifeLastUpdateTime;
- (void)setGameLifeLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)chatVcInterNoticeTabLastUpdateTime;
- (void)setChatVcInterNoticeTabLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)chatVcChatTabLastUpdateTime;
- (void)setChatVcChatTabLastUpdateTime:(unsigned long long)arg1;
- (unsigned long long)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned long long)arg1;
@end

