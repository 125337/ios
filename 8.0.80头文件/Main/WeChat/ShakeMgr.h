@interface ShakeMgr : MMUserService <MMServiceProtocol>
{
    ShakeMusicStorage * m_musicStorage; // +0x8
    long long m_musicStorageRefCount; // +0x10
    long long m_scene; // +0x18
    NSString * m_sessionId; // +0x20
    long long m_shakeTimestamp; // +0x28
    NSString * m_shakeSessionId; // +0x30
    BOOL _foreground; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)shakeSwitch:(long long)arg1;
- (long long)getShakeType;
- (BOOL)canShowShakeMusic;
- (BOOL)isShakeMusicOversea;
- (long long)getSoundStatus;
- (void)setSoundStatus:(long long)arg1;
- (void)LoadMusicStorage;
- (id)getMusicStorage;
- (void)SaveMusicStorage;
- (void)ClearMusicStorage;
- (void)beginMusicStorage;
- (void)endMusicStorage;
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
