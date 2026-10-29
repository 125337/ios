@interface CDownloadVoiceMgr : MMObject <PBMessageObserverDelegate>
{
    NSRecursiveLock * m_oLock; // +0x8
    unsigned int m_uiCurDownloadID; // +0x10
    id <DownloadVoiceDelegate> m_delNotifyToReceiver; // +0x18
    unsigned long long m_uiQueueCount; // +0x20
    BOOL _canAutoDownload; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)Start;
- (void)Stop;
- (BOOL)IsInDownloadQueue:(id)arg1 LocalID:(unsigned int)arg2 VoiceLen:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)UpdateRetryCount:(id)arg1;
- (void)DeleteMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (unsigned int)getInitStatus;
- (BOOL)readyToCheckDownloadQueue;
- (void)CheckDownloadQueue;
- (void)OnSyncDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 CreateTime:(unsigned int)arg4 Xml:(id)arg5 Voice:(id)arg6;
- (void)AddNewDownload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 VoiceLen:(unsigned int)arg4 VoiceTime:(unsigned int)arg5 CreateTime:(unsigned int)arg6 EndFlag:(unsigned int)arg7 bufid:(unsigned long long)arg8;
- (void)PrepareForDownload:(id)arg1;
- (void)HandleDownloadError:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)loadPB;
- (void)savePB:(id)arg1;
- (BOOL)IsExistInDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2 voiceLength:(unsigned int)arg3 endFlag:(unsigned int)arg4;
- (BOOL)DeleteDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)DeleteDownloadVoiceByChatName:(id)arg1 localId:(unsigned int)arg2 voiceLength:(unsigned int)arg3 endFlag:(unsigned int)arg4;
- (id)GetOneDownloadVoice;
- (BOOL)InsertDownloadVoice:(id)arg1;
- (BOOL)UpdateDownloadVoiceRetryCount:(unsigned int)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 voiceLen:(unsigned int)arg4 endFlag:(unsigned int)arg5;
- (long long)GetCountOfDownloadVoice;
- (id)getPBPath;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (id)m_delNotifyToReceiver;
- (void)setM_delNotifyToReceiver:(id)arg1;
- (BOOL)canAutoDownload;
- (void)setCanAutoDownload:(BOOL)arg1;
- (void).cxx_destruct;
@end

