@interface MassSendMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol, IMsgExt>
{
    MassSendInfo * m_info; // +0x8
    unsigned int m_uiEventID; // +0x10
    unsigned int m_uiMaxSupport; // +0x14
    CMMDB * m_oMMDB; // +0x18
    NSRecursiveLock * m_oLock; // +0x20
    NSMutableDictionary * m_dicContacts; // +0x28
    BOOL m_bDataNeedReload; // +0x30
    BOOL m_bCancel; // +0x31
    BOOL m_bFreqLimit; // +0x32
}
- (void)onServiceInit;
- (void)getAllContactsFromDB;
- (BOOL)autoReload;
- (id)getContactByName:(id)arg1;
- (BOOL)addContactInDB:(id)arg1;
- (void)addContact:(id)arg1;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)getRealChatUsrByMD5:(id)arg1;
- (id)getToListMD5:(id)arg1;
- (id)getToList:(id)arg1;
- (void)safeCallFailExtension:(unsigned int)arg1;
- (void)safeCallFailExtension:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (BOOL)WriteAudioFile:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 Data:(id)arg5;
- (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)SaveMesThumb:(id)arg1 MsgWrap:(id)arg2;
- (void)addLocalMessage:(id)arg1;
- (void)CreateMassSendEvent;
- (void)MassSend:(id)arg1;
- (void)hanldeMassSendUploadOK:(id)arg1;
- (void)addSystemMsgWithMassMsgSvrID:(unsigned long long)arg1 msgIdForNewXmlList:(id)arg2;
- (void)cancelFreqLimit;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)CancelMassSend;
- (void)tryUploadDataWithMars;
- (void)uploadDataWithMars;
- (void)onUploadCdnSucc:(id)arg1;
- (void)updateVoiceMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (void)updateVideoMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (void)updateImageMsgWrap:(id)arg1 taskInfo:(id)arg2;
- (id)generateVoiceRequestDataWithTaskInfo:(id)arg1;
- (id)generateVideoRequestDataWithTaskInfo:(id)arg1;
- (BOOL)GetStartAndEndDateFromXmlContent:(id)arg1 arrStart:(id)arg2 arrEnd:(id)arg3;
- (BOOL)isNeedBeTop:(id)arg1;
- (id)genMainFrameSessionInfo:(id)arg1;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)HandleMassSendTopMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)InsertMassSendContact:(id)arg1;
- (id)GetAllMassSendContact;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)m_info;
- (void)setM_info:(id)arg1;
- (void).cxx_destruct;
@end
