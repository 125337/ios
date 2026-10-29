@interface EnterpriseMsgMgr : MMUserService <MMServiceProtocol, IMsgExt, IAudioToMessageExt, MessageWrapImgDelegate, OpenUploadMgrDelegate, OpenUploadCDNMgrDelegate, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate, EnterpriseVoiceMsgMgrDelegate, EnterpriseSendMsgMgrDelegate, RecordUploadCDNMgrDelegate>
{
    NSMutableDictionary * _dicMsgDB; // +0x8
    NSObject<OS_dispatch_queue> * m_dispatchQueue; // +0x10
    MessagePatternCacheMgr * _msgPatternMgr; // +0x18
    UploadImageCDNMgr * _uploadImageCdnMgr; // +0x20
    DownloadImageCDNMgr * _downloadImageCdnMgr; // +0x28
    ThumbDownloadMgr * _thumbDownloadMgr; // +0x30
    OpenDownloadCDNMgr * _openDownloadCdnMgr; // +0x38
    OpenUploadCDNMgr * _openUploadCDNMgr; // +0x40
    OpenUploadMgr * _openUploadMgr; // +0x48
    RecordUploadCDNMgr * _recordUploadCDNMgr; // +0x50
    MultiMediaUploadUnifyMgr * _multiMediaUploadUnifyMgr; // +0x58
    EnterpriseVoiceMsgMgr * _voiceMsgMgr; // +0x60
    EnterpriseSendMsgMgr * _sendMsgMgr; // +0x68
}
+ (id)GetPathOfOpenUploadCDNFile;
- (void)onServiceInit;
- (id)getMsgDB:(id)arg1;
- (void)deleteMsgDB:(id)arg1;
- (void)BatchAddEnterpriseMsgList:(id)arg1 NotifyArrayMessage:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ForwardMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 Brand:(id)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 Brand:(id)arg6;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 Brand:(id)arg5;
- (id)GetLastMsg:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetLastMsgCreateTime:(id)arg1 Brand:(id)arg2;
- (id)GetFirstUnreadMsg:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetUnReadCount:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetUnReadCount:(id)arg1 Since:(unsigned int)arg2 Brand:(id)arg3;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 Brand:(id)arg3;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (BOOL)isMsgTypeCanSend:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3 Brand:(id)arg4;
- (void)ClearUnReadForSync:(id)arg1 Brand:(id)arg2 CreateTime:(unsigned int)arg3;
- (void)ModMsgStatus:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 Brand:(id)arg4;
- (void)MergeImgStatus:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)ModMsgStatusWithoutNotify:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (id)getDispatchQueue;
- (void)stopUploadDownloadMgr:(id)arg1;
- (void)DelAllMsgForBrand:(id)arg1 chatNameList:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3 Brand:(id)arg4;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)AddMsgPattern:(id)arg1;
- (void)DelMsgPatten:(id)arg1;
- (void)BatchDelMsgPatten:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (BOOL)sendVoiceMsgByUserData:(id)arg1;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)downloadEnterpriseVoiceMsg:(id)arg1;
- (void)ForwardFavItem:(id)arg1 toBizChatId:(id)arg2 brand:(id)arg3;
- (void)copyDataForDataList:(id)arg1 msgWrap:(id)arg2;
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)resendRecordMsg:(id)arg1;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3 Data:(id)arg4 Scene:(unsigned int)arg5;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3 DataPath:(id)arg4 Scene:(unsigned int)arg5;
- (void)resendAppMsg:(id)arg1;
- (void)StartUploadAppMsg:(id)arg1 Scene:(unsigned int)arg2;
- (void)StopUploadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1 Brand:(id)arg2;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 Brand:(id)arg5;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 Brand:(id)arg5;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 Brand:(id)arg5;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 Brand:(id)arg5;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3;
- (void)StopDownloadImage:(id)arg1 Brand:(id)arg2;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StartDownloadThumb:(id)arg1;
- (unsigned int)GetDownloadThumbStatus:(id)arg1;
- (BOOL)IsImageMsgUploadIng:(id)arg1;
- (void)asyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)asyncOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)asyncOnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)asyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2 Brand:(id)arg3;
- (void)asyncOnDelMsg:(id)arg1 DelAll:(BOOL)arg2 Brand:(id)arg3;
- (void)asyncOnUnReadChange:(id)arg1 Brand:(id)arg2;
- (void)mainThreadNotifyToExt:(id)arg1;
- (void)checkMsgList:(id)arg1 chatName:(id)arg2;
- (void)checkMsgStatus:(id)arg1 Msg:(id)arg2;
- (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (void)onUploadImageRequestWithWrap:(id)arg1;
- (void)onGetBigImageResultWithWrap:(id)arg1 isSaveImgOK:(BOOL)arg2;
- (void)onGetBigImageErrorWithWrap:(id)arg1;
- (id)onGetMsg:(id)arg1 LocalID:(unsigned int)arg2 Wrap:(id)arg3;
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onSendMsgStatusChanged:(id)arg1;
- (void)onSendVoiceMsgStatusChanged:(id)arg1;
- (void)onRecordVoiceMsgSucc:(id)arg1;
- (void)onReceiveVoiceMsgStatusChanged:(id)arg1;
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)HandleStatusNotifMsg:(id)arg1;
- (void)HandleRevokeMsg:(id)arg1;
- (void).cxx_destruct;
@end

