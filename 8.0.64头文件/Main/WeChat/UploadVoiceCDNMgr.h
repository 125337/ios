@interface UploadVoiceCDNMgr : BaseUploadVoiceMgr <IMsgExt>
{
    BOOL _bSending; // +0x8
    id <UploadVoiceDelegate> _delegate; // +0x10
    MemoryMappedKV * _tmpUploadItems; // +0x18
    NSMutableDictionary * _readyUploadItems; // +0x20
    UploadVoiceWrap * _currentUploadItem; // +0x28
    NSRecursiveLock * _lock; // +0x30
    MMTimer * _timerCheck; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)InitUploadMgr:(id)arg1 Lock:(id)arg2 Delegate:(id)arg3;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUpload;
- (void)AddNewPart:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10 ForwardFlag:(unsigned int)arg11 msgSource:(id)arg12;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getPBPath;
- (id)loadPB;
- (void)loadItemFromPB;
- (void)updateItemToPB;
- (void)initTmpUploadItems;
- (void)startSend;
- (void)startSend:(id)arg1;
- (void)uploadVoiceToCDN:(id)arg1;
- (void)handleUploadCDNFail:(id)arg1 retryCgi:(BOOL)arg2;
- (void)handleUploadCDNSuccess:(id)arg1;
- (void)handleSendVoiceFail:(id)arg1;
- (void)handleSendVoiceSuccess:(id)arg1;
- (void)deleteUploadItem:(id)arg1;
- (void)reportUploadCDNFail:(id)arg1;
- (void)reportUploadCDNSuccess:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tmpUploadItems;
- (void)setTmpUploadItems:(id)arg1;
- (id)readyUploadItems;
- (void)setReadyUploadItems:(id)arg1;
- (BOOL)bSending;
- (void)setBSending:(BOOL)arg1;
- (id)currentUploadItem;
- (void)setCurrentUploadItem:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)timerCheck;
- (void)setTimerCheck:(id)arg1;
- (void).cxx_destruct;
@end
