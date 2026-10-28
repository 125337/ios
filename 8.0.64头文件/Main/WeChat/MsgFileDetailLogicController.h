@interface MsgFileDetailLogicController : FileDetailLogicController <IMsgExt, IEnterpriseMsgExt, IMsgRevokeExt, MMAppAttachFileMgrExt, ILanTransferClientExt>
{
    CMessageWrap * m_wrapMsg; // +0x8
    NSString * m_nsUsrName; // +0x10
    BOOL m_bFileExpired; // +0x18
    BOOL m_bRegister; // +0x19
    BOOL m_bDownloading; // +0x1a
    BOOL m_bHasRevoke; // +0x1b
    BOOL m_bIsFileExistInSvr; // +0x1c
    ShareDataToOpenSDKController * m_shareOpenSDKController; // +0x20
    BOOL _canMsgLocate; // +0x28
    BOOL _isRestartDownloadWhenRealtimeUploadComplete; // +0x29
    int _uploadStatus; // +0x2c
    id <AppDetailDelegate> _m_delegate; // +0x30
    WCUIAlertView * _alertView; // +0x38
    NSString * _fileId; // +0x40
    UINavigationController * _showNavigationController; // +0x48
    id /* block */ _bottomLeftAction; // +0x50
    id /* block */ _bottomLeftString; // +0x58
}
- (id)initWithMsgWrap:(id)arg1 userName:(id)arg2;
- (id)initWithMsgWrap:(id)arg1 userName:(id)arg2 canMsgLocate:(BOOL)arg3 bottomLeftAction:(id /* block */)arg4 bottomLeftString:(id /* block */)arg5 ofNavController:(id)arg6;
- (void)commonInitWithMsg:(id)arg1 userName:(id)arg2;
- (void)dealloc;
- (void)tryRegister;
- (void)startDownload;
- (void)stopDownload;
- (void)checkIsFileExistInSvr;
- (void)onForwardToContact:(id)arg1;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (id)generateFavoriteItem;
- (void)OnForwardToDevice:(id)arg1;
- (void)OnOpened;
- (void)OnOpenByOtherAppWithHasOpen:(BOOL)arg1;
- (BOOL)isDownloading;
- (BOOL)forbidOperation;
- (BOOL)canShowMsgForwardToDevice;
- (BOOL)canAddToFavorites;
- (unsigned int)GetPreviewType;
- (id)GetForwardData;
- (id)getFileIdentifier;
- (unsigned long long)GetFileSize;
- (id)GetFileName;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (unsigned long long)GetTempSize;
- (id)GetMsg;
- (long long)getMsgSvrID;
- (id)getChatUsername;
- (unsigned long long)getChatType;
- (void)shareToFriend;
- (void)cancelGetAppMsgStateNotUpload;
- (int)getFileExpiredDays;
- (id)getMusicLocalFileDataUnit;
- (unsigned int)getMsgUiDownloadStatus;
- (unsigned int)isRealtimeUploadingStatus;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(BOOL)arg2 taskInfo:(id)arg3;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)handleModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)unRegisterExtension;
- (void)updateStatusWhenDownloadFinish:(id)arg1;
- (void)updateDownloadProgress:(id)arg1;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (BOOL)configWithMinimizeData:(id)arg1;
- (id)getMinimizeTaskData;
- (BOOL)isMinimizeEnable;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (id)getHandOffItem;
- (void)stopDownloadAppMsgByUser;
- (void)startDownloadAppMsgUploading;
- (void)tryRegisterMsgExt;
- (BOOL)checkUpdateFileDetailViewController:(id)arg1 state:(unsigned int)arg2;
- (void)onLanTransfer:(id)arg1 clientDownloadOK:(id)arg2;
- (BOOL)needShowLocateBtn;
- (BOOL)onMsgLocate;
- (BOOL)canShowSessionSourceButton;
- (id)sessionSourceButtonTitle;
- (void)pressSessionSourceButton;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)canMsgLocate;
- (void)setCanMsgLocate:(BOOL)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (int)uploadStatus;
- (void)setUploadStatus:(int)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (BOOL)isRestartDownloadWhenRealtimeUploadComplete;
- (void)setIsRestartDownloadWhenRealtimeUploadComplete:(BOOL)arg1;
- (id)showNavigationController;
- (void)setShowNavigationController:(id)arg1;
- (id /* block */)bottomLeftAction;
- (void)setBottomLeftAction:(id /* block */)arg1;
- (id /* block */)bottomLeftString;
- (void)setBottomLeftString:(id /* block */)arg1;
- (void).cxx_destruct;
@end
