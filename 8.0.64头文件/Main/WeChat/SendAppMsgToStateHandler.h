@interface SendAppMsgToStateHandler : NSObject <WCShareAuthViewControllerDelegate, TextStatePublishViewControllerDelegate, ShareConfirmViewDelegate>
{
    OpenApiParameter * _parameter; // +0x8
    UINavigationController * _m_navigationController; // +0x10
    OpenApiImageCdnUploader * _uploader; // +0x18
    WXMediaInternalMessage * _mediaMessage; // +0x20
    WXSceneInternalMessage * _sceneInfo; // +0x28
    MMUIViewController * _statePublishVC; // +0x30
}
- (void)sendAppMsgToState:(id)arg1;
- (void)doAppAuth;
- (void)clearAuthHandle;
- (void)clearAllHandle;
- (void)clearAllHandleAndReturn3rdApp;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)showUnsupportErrVC;
- (id)generateSourceInfo;
- (void)generateJumpDataItem:(id /* block */)arg1;
- (void)showStateVC:(id)arg1;
- (void)pullStateForText;
- (void)pullStateForImage;
- (void)pullStateForMusicVideo;
- (void)publishVideoFileState;
- (void)showStateVCWithSourceInfo:(id)arg1 dataItem:(id)arg2 sourceName:(id)arg3;
- (BOOL)isNeedAppendUpgradeH5WithDataItem:(id)arg1;
- (void)launchAppAndSendRespWithErrCode:(int)arg1;
- (void)launchAppAndSendRespWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (id)mediaMessage;
- (void)setMediaMessage:(id)arg1;
- (id)sceneInfo;
- (void)setSceneInfo:(id)arg1;
- (id)statePublishVC;
- (void)setStatePublishVC:(id)arg1;
- (void).cxx_destruct;
@end
