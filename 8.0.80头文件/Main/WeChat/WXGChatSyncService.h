@interface WXGChatSyncService : MMUserService <IMsgExt, MMServiceProtocol>
{
    unsigned int m_pcVersion; // +0x8
    unsigned int m_macVersion; // +0xc
    unsigned int m_iPadMinVersion; // +0x10
    NSMutableDictionary * _deviceLogicMap; // +0x18
}
- (id)init;
- (unsigned int)getPCVersion;
- (unsigned int)getMacVersion;
- (unsigned int)getiPadMinVersion;
- (void)setAllowSync:(BOOL)arg1;
- (BOOL)getAllowSync;
- (id)getChatSyncLogicBy:(id)arg1;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (void)startSleepSyncWithExt:(id)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (void)startGetMoreSynceWithExt:(id)arg1 withPemKey:(id)arg2 withDeviceContext:(id)arg3;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)p_parseAppMsg:(id)arg1;
- (id)deviceLogicMap;
- (void)setDeviceLogicMap:(id)arg1;
- (void).cxx_destruct;
@end
