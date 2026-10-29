@interface SendAppMsgToWCHandler : MMObject <WCShareAuthViewControllerDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, WCCommitViewResultDelegate>
{
    OpenApiParameter * _parameter; // +0x8
    UINavigationController * m_confirmViewController; // +0x10
    MMTipsViewController * _tipsViewController; // +0x18
    BOOL _canReturnRightShareResult; // +0x20
    BOOL _isCancelled; // +0x21
    UINavigationController * _m_navigationController; // +0x28
}
- (void)asyncGenUploadTaskWithLocalIdentifier:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleFormUploadTaskError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showAlertWithMessage:(id)arg1 handle:(id /* block */)arg2;
- (long long)currentAuthorizationStatus;
- (id)init;
- (void)dealloc;
- (void)sendAppMsgToWC:(id)arg1;
- (void)cancelSendAppMsgToWC;
- (id)appId;
- (id)appData;
- (BOOL)shouldStayInWechat;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandleAndReturn3rdApp:(int)arg1;
- (void)launchAppAndSendRespWithErrCode:(int)arg1 errStr:(id)arg2;
- (id)sendTimeLineTextWithComunicateData:(id)arg1;
- (id)sendTimeLinePhotoWithComunicateData:(id)arg1;
- (id)sendTimeLineMusicWithComunicateData:(id)arg1 shareType:(long long)arg2;
- (id)sendTimeLineVideoWithComunicateData:(id)arg1;
- (id)getTmpFilePathWithMP4Ext;
- (id)saveAndCheckVideoWithComunicateData:(id)arg1 pickerScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (id)saveVideoData:(id)arg1;
- (BOOL)checkVideoDataWithPath:(id)arg1 pickerScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (id)sendTimeLineVideoFileWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (id)genUploadTaskWithVideoPath:(id)arg1 comunicateData:(id)arg2 withAppID:(id)arg3 extraInfo:(id)arg4;
- (id)sendTimeLineWeAppWithComunicateData:(id)arg1;
- (id)sendTimeLineFeedWithComunicateData:(id)arg1;
- (id)sendTimeLineGameShareCardWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (void)showConfirmView;
- (void)closeConfirmView;
- (void)sendTimeLineWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (void)handleUploadTask:(id)arg1 mediaMessage:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidRedirect:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)removeAuthViewController;
- (void)reportShareResult:(int)arg1;
- (void)handleGetGameShareDataFail;
- (void)getGameShareInfo:(id)arg1 appId:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (BOOL)canReturnRightShareResult;
- (void)setCanReturnRightShareResult:(BOOL)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end

