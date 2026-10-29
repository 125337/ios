@interface UploadVoicePrintMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _uploadType; // +0x8
    unsigned int _curVoiceId; // +0xc
    unsigned int _curResId; // +0x10
    unsigned int _curScene; // +0x14
    BOOL _isUploading; // +0x18
    BOOL _isEnd; // +0x19
    NSMutableArray * _uploadQueue; // +0x20
    unsigned int _voiceTicket; // +0x28
    unsigned int _cacheLastOffset; // +0x2c
    unsigned int _cacheLastlength; // +0x30
    unsigned int _sameLoopCount; // +0x34
    float _upload_per_time; // +0x38
    id <UploadVoicePrintMgrDelegate> delegate; // +0x40
    MMTimer * checkUploadQueueTimer; // +0x48
    NSString * RsaVerifyTicket; // +0x50
    NSString * RsaCreateTicket; // +0x58
    NSString * _RsaVoiceKey; // +0x60
}
- (void)cleanItem;
- (void)HandleReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearTempFile;
- (void)stopUploadTask;
- (void)stopUploadTaskWithErr:(int)arg1 andErrMsg:(id)arg2;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)checkUploadQueue;
- (void)doUpload:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (id)init;
- (void)dealloc;
- (void)ResetVoiceTicket;
- (void)Start:(unsigned int)arg1 UploadType:(unsigned int)arg2 withScene:(unsigned int)arg3 andResID:(unsigned int)arg4;
- (void)Stop;
- (void)MainUpdateQueue:(id)arg1;
- (void)AddNewPart:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (unsigned int)curResId;
- (void)setCurResId:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)checkUploadQueueTimer;
- (void)setCheckUploadQueueTimer:(id)arg1;
- (id)RsaVerifyTicket;
- (void)setRsaVerifyTicket:(id)arg1;
- (id)RsaCreateTicket;
- (void)setRsaCreateTicket:(id)arg1;
- (id)RsaVoiceKey;
- (void)setRsaVoiceKey:(id)arg1;
- (void).cxx_destruct;
@end

