@interface OpenIMContactOPService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL m_bSyncOplogIng; // +0x8
    OpenIMContactOPCodePB * m_openImContactOPlogCache; // +0x10
    NSString * m_openImContactOPlogCacheDateFilePath; // +0x18
}
- (id)init;
- (void)loadOpenImOPLogCacheInternal;
- (void)onServiceEnterForeground;
- (BOOL)InsertOpenImOplog:(unsigned int)arg1 dtInput:(id)arg2 needSync:(BOOL)arg3;
- (void)NeedToSyncOplog;
- (void)checkSyncOplog;
- (void)startSyncOplog;
- (unsigned int)startOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2;
- (unsigned int)startOpenIMOplogType:(unsigned int)arg1 dtInput:(id)arg2 observer:(id)arg3;
- (void)OnOpenIMOplogResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)p_getOpenImContactOPlogCacheDataFilePath;
- (id)p_getOpenIMContactOPItemIdWithOplog:(unsigned int)arg1 oplogData:(id)arg2;
- (BOOL)p_saveOpenImContactOPlogCacheDataFileInternal;
- (void).cxx_destruct;
@end

