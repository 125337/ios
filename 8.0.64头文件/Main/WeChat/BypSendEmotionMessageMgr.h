@interface BypSendEmotionMessageMgr : NSObject <EmoticonUploaderDelegate, IMsgExt>
{
    NSMutableArray * _uploadInfoQueue; // +0x8
    BypEmoticonUploadInfo * _curUploadInfo; // +0x10
    EmoticonUploader * _emoticonUploader; // +0x18
    StoreEmotionBatchEmojiDownLoadCgi * _emojiDownloadCgi; // +0x20
    id <BypSendEmotionMessageMgrDelegate> _delegate; // +0x28
    WCCgiBlockHelper * _curCgiBlockHelper; // +0x30
}
- (id)init;
- (BOOL)IsMsgInUploadQueue:(id)arg1;
- (BOOL)InsertMessageToUploadQueue:(id)arg1;
- (void)StartUpload:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)CheckUpload;
- (BOOL)CreateUploadEvent;
- (BOOL)StartCdnUpload;
- (void)UploadFail;
- (void)StopCurUpload;
- (void)ClearCurUpload;
- (BOOL)bypSendMsg;
- (id)createEmojiPack;
- (void)onSendSuccessedWithSvrId:(long long)arg1;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)arg1;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curCgiBlockHelper;
- (void)setCurCgiBlockHelper:(id)arg1;
- (void).cxx_destruct;
@end
