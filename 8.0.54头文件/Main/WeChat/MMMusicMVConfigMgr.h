@interface MMMusicMVConfigMgr : MMUserService <MMServiceProtocol>
{
    BOOL _degradeToH5; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)commonInit;
- (unsigned long long)musicUIStyleWithMusicBizScene:(unsigned long long)arg1 bNewMvMsg:(BOOL)arg2 appId:(id)arg3;
- (unsigned long long)__musicUIStyleWithMusicBizScene:(unsigned long long)arg1 bNewMvMsg:(BOOL)arg2 appId:(id)arg3;
- (BOOL)isChatRoomSwitchOpen;
- (BOOL)isForbidMusicCache;
@end

