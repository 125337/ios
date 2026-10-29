@interface BotContactOPLogService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL m_bSyncOplogIng; // +0x8
    BotContactOPCodePB * m_botContactOPlogCache; // +0x10
    NSString * m_botContactOPlogCacheDateFilePath; // +0x18
}
- (id)init;
- (void)loadBotOPLogCacheInternal;
- (void)onServiceEnterForeground;
- (BOOL)InsertBotOplogType:(unsigned int)arg1 bizType:(unsigned int)arg2 dtInput:(id)arg3 needSync:(BOOL)arg4;
- (void)NeedToSyncOplog;
- (void)checkSyncOplog;
- (void)startSyncOplog;
- (unsigned int)startBotOplogType:(unsigned int)arg1 bizType:(unsigned int)arg2 dtInput:(id)arg3;
- (unsigned int)startBotOplogType:(unsigned int)arg1 bizType:(unsigned int)arg2 dtInput:(id)arg3 observer:(id)arg4;
- (void)OnBotOplogResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)p_getBotContactOPlogCacheDataFilePath;
- (id)p_getBotContactOPItemIdWithOplog:(unsigned int)arg1 bizType:(unsigned int)arg2 oplogData:(id)arg3;
- (BOOL)p_saveBotContactOPlogCacheDataFileInternal;
- (void).cxx_destruct;
@end
