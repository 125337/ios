@interface MMNewUploadVoiceMgr : BaseUploadVoiceMgr <PBMessageObserverDelegate, IMsgExt>
{
    CMMDB * m_oMMDB; // +0x8
    NSRecursiveLock * m_oLock; // +0x10
    MMTimer * m_timerCheck; // +0x18
    unsigned int m_uiCurUploadID; // +0x20
    BOOL m_bIsUploading; // +0x24
    id <UploadVoiceDelegate> m_delNotifyToSender; // +0x28
    unsigned int m_uiQueueCount; // +0x30
    BOOL m_bDBError; // +0x34
    NSMutableDictionary * m_dicMergeResult; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)InitUploadMgr:(id)arg1 Lock:(id)arg2 Delegate:(id)arg3;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUploadQueue;
- (BOOL)ModifyMsgSource:(id)arg1 byToUser:(id)arg2 localId:(unsigned int)arg3;
- (void)AddNewPart:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10 ForwardFlag:(unsigned int)arg11 msgSource:(id)arg12;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)insertNewRowInUploadVoice:(id)arg1;
- (BOOL)mergeToDB:(id)arg1;
- (void)DeleteMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (void)CancelUpload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10;
- (BOOL)startSend;
- (BOOL)uploadOnePacket;
- (id)getOneUploadItemFromDB;
- (BOOL)loadDataFromAudioFile:(id)arg1;
- (BOOL)loadDataFromAudioFileForExpirePacket:(id)arg1;
- (void)UpdateRetryCount:(id)arg1;
- (BOOL)CreateUploadEvent:(id)arg1;
- (BOOL)PrepareForUpload:(id)arg1 packetExpireTime:(BOOL)arg2;
- (void)MainThreadNotifyUploadVoiceOK:(id)arg1;
- (BOOL)IsInUploadQueue:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3;
- (void)HandleUploadVoiceOK:(id)arg1;
- (id)loadPB;
- (void)savePB:(id)arg1;
- (BOOL)InsertUploadVoice:(id)arg1;
- (BOOL)UpdateUploadVoiceRetryCount:(id)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 offset:(unsigned int)arg4;
- (BOOL)UpdateUploadVoicePropertys:(id)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 offset:(unsigned int)arg4;
- (BOOL)DeleteUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2;
- (BOOL)DeleteUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2 offset:(unsigned int)arg3;
- (id)GetOneUploadVoice;
- (BOOL)IsExistInUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2 offset:(unsigned int)arg3;
- (unsigned int)GetCountOfUploadVoice;
- (id)getPBPath;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_oMMDB;
- (void)setM_oMMDB:(id)arg1;
- (id)m_oLock;
- (void)setM_oLock:(id)arg1;
- (id)m_timerCheck;
- (void)setM_timerCheck:(id)arg1;
- (id)m_delNotifyToSender;
- (void)setM_delNotifyToSender:(id)arg1;
- (void).cxx_destruct;
@end
