@interface SendAppMsgToFavoritesHandler : MMObject <WCShareAuthViewControllerDelegate, MMTipsViewControllerDelegate, ShareFavoritesConfirmLogicHelperDelegate>
{
    OpenApiParameter * _parameter; // +0x8
    ShareFavoritesConfirmLogicHelper * _shareHelper; // +0x10
    BOOL _canReturnRightShareResult; // +0x18
    UINavigationController * _m_navigationController; // +0x20
    MMTipsViewController * _tipsViewController; // +0x28
    NSData * _hdSongAlbumData; // +0x30
    OpenApiImageCdnUploader * _uploader; // +0x38
}
- (void)dealloc;
- (void)sendAppMsgToFavorites:(id)arg1;
- (void)cancelSendAppMsgToFavorites;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandleAndReturn3rdApp:(BOOL)arg1;
- (void)launchAppAndSendRespWithErrCode:(int)arg1;
- (void)removeConfirmView;
- (void)saveData:(id)arg1 ToFile:(id)arg2;
- (id)sendFavoritesTextWithComunicateData:(id)arg1;
- (id)sendFavoritesPhotoWithComunicateData:(id)arg1;
- (id)sendFavoritesMusicWithComunicateData:(id)arg1;
- (id)sendFavoritesVideoWithComunicateData:(id)arg1;
- (id)sendFavoritesFeedWithComunicateData:(id)arg1;
- (id)sendFavoritesFileWithComunicateData:(id)arg1;
- (void)sendFavoritesWithComunicateData:(id)arg1;
- (BOOL)ShouldInterceptShareFavoritesItemBeforeConfirm:(id)arg1;
- (void)OnShareFavoritesItemOK:(id)arg1;
- (void)OnShareFavoritesItemFail:(id)arg1 WithError:(int)arg2;
- (void)OnShareFavoritesItemCancel:(id)arg1;
- (void)removeFavSourcePathFileWithDataList:(id)arg1;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)shareAuthViewControllerDidRedirect:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)reportShareResult:(int)arg1;
- (id)m_navigationController;
- (void)setM_navigationController:(id)arg1;
- (BOOL)canReturnRightShareResult;
- (void)setCanReturnRightShareResult:(BOOL)arg1;
- (id)tipsViewController;
- (void)setTipsViewController:(id)arg1;
- (id)hdSongAlbumData;
- (void)setHdSongAlbumData:(id)arg1;
- (id)uploader;
- (void)setUploader:(id)arg1;
- (void).cxx_destruct;
@end

