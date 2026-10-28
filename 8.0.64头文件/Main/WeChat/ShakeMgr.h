@interface ShakeMgr : MMUserService <ShakeMsgNotifyMgrDelegate, MMServiceProtocol>
{
    long long m_shakeType; // +0x8
    ShakePeopleStorage * m_peopleStorage; // +0x10
    ShakeMusicStorage * m_musicStorage; // +0x18
    ShakeTvStorage * m_tvStorage; // +0x20
    long long m_peopleStorageRefCount; // +0x28
    long long m_pageStorageRefCount; // +0x30
    long long m_musicStorageRefCount; // +0x38
    long long m_tvStorageRefCount; // +0x40
    long long m_shakeShareStorageRefCount; // +0x48
    ShakeMsgNotifyMgr * m_shakeMsgNotifyMgr; // +0x50
    long long m_scene; // +0x58
    NSString * m_sessionId; // +0x60
    long long m_shakeTimestamp; // +0x68
    NSString * m_shakeSessionId; // +0x70
    BOOL _foreground; // +0x78
}
- (id)init;
- (void)dealloc;
- (void)shakeSwitch:(long long)arg1;
- (long long)getShakeType;
- (BOOL)canShowPeople;
- (BOOL)canShowShakeMusic;
- (BOOL)isShakeEnable;
- (BOOL)isShakeMusicOversea;
- (long long)getSoundStatus;
- (void)setSoundStatus:(long long)arg1;
- (void)LoadPeopleStorage;
- (id)getPeopleStorage;
- (void)SavePeopleStorage:(BOOL)arg1;
- (void)ClearPeopleStorage;
- (void)LoadMusicStorage;
- (id)getMusicStorage;
- (void)SaveMusicStorage:(BOOL)arg1;
- (void)ClearMusicStorage;
- (void)LoadTvStorage;
- (id)getTvStorage;
- (void)SaveTvStorage:(BOOL)arg1;
- (void)ClearTvStorage;
- (void)beginTvStorage;
- (void)endTvStorage;
- (void)beginPeopleStorage;
- (void)endPeopleStorage;
- (void)beginMusicStorage;
- (void)endMusicStorage;
- (BOOL)hasUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (id)getUnreadMessages;
- (id)getLastestUnreadMessage;
- (id)getUnreadMsgPidDesc;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (void)markMessageListRead:(id)arg1;
- (void)deleteMessageItem:(id)arg1;
- (void)deleteAllMessages;
- (void)insertMsgItem:(id)arg1;
- (void)onShakeMsgUnreadCountChanged;
- (void)setShakeScene:(long long)arg1;
- (long long)getShakeScene;
- (void)setSessionId:(id)arg1;
- (id)getSessionId;
- (void)setShakeSessionId:(id)arg1;
- (id)getShakeSessionId;
- (void)setShakeTimestamp:(long long)arg1;
- (long long)getShakeTimestamp;
- (void)jumpFromScene:(long long)arg1;
- (BOOL)foreground;
- (void)setForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
