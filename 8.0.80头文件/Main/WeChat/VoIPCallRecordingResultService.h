@interface VoIPCallRecordingResultService : MMUserService <MMScreenShotExt, MMServiceProtocol>
{
    BOOL _screenShotForwardViewVisible; // +0x8
    double _screenShotForwardViewWillDisappearAt; // +0x10
    MMSnackBar * _savedSnackBarAwaitingScreenShotDismiss; // +0x18
    NSMutableDictionary * _requestsByAnchor; // +0x20
    VoIPCallRecordingSnackBarRequest * _currentRequest; // +0x28
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMMScreenShotWillShow;
- (void)onFinishScreenShot;
- (void)showSavingSnackBarWithViewController:(id)arg1 anchorNs:(unsigned long long)arg2 isScreenShotEntry:(BOOL)arg3 reportContext:(id)arg4;
- (void)handleRecordingResultWithPath:(id)arg1 anchorNs:(unsigned long long)arg2;
- (void)p_activateNextRequestIfNeeded;
- (void)p_showSavingSnackBarForRequest:(id)arg1;
- (void)p_handleReadyResultForRequest:(id)arg1;
- (void)p_hideSavingSnackBarForRequest:(id)arg1;
- (void)p_finishRequestIfCurrent:(id)arg1;
- (BOOL)p_isLivePhotoPath:(id)arg1;
- (void)p_saveVideoPathToPhotoLibraryAndShowSnackBar:(id)arg1 forRequest:(id)arg2;
- (void)p_applySavedSnackBarHidePolicy:(id)arg1;
- (void)p_refreshSavingToSavedSnackBarForRequest:(id)arg1;
- (void)p_showSavedSnackBarForRequest:(id)arg1;
- (void)p_saveLivePhotoToAlbum:(id)arg1 forRequest:(id)arg2;
- (id)p_extractStillImageFromMOV:(id)arg1;
- (id)p_extractStillImageFromMOV:(id)arg1 atTime:(struct)arg2;
- (id)p_readAssetIdentifierFromMOV:(id)arg1;
- (struct)p_readStillImageTimeFromMOV:(id)arg1;
- (void)p_onLivePhotoSaveSuccess:(id)arg1 heicPath:(id)arg2 forRequest:(id)arg3;
- (void)p_onLivePhotoSaveFailed:(id)arg1 forRequest:(id)arg2;
- (void)p_reportSaveResultForRequest:(id)arg1 success:(BOOL)arg2;
- (id /* block */)p_savedSnackBarActionHandlerForRequest:(id)arg1;
- (void)p_cleanupIntermediateFileAtPath:(id)arg1;
- (void)p_cleanupLegacyIntermediateFiles;
- (double)screenShotForwardViewWillDisappearAt;
- (void)setScreenShotForwardViewWillDisappearAt:(double)arg1;
- (BOOL)screenShotForwardViewVisible;
- (void)setScreenShotForwardViewVisible:(BOOL)arg1;
- (id)savedSnackBarAwaitingScreenShotDismiss;
- (void)setSavedSnackBarAwaitingScreenShotDismiss:(id)arg1;
- (id)requestsByAnchor;
- (void)setRequestsByAnchor:(id)arg1;
- (id)currentRequest;
- (void)setCurrentRequest:(id)arg1;
- (void).cxx_destruct;
@end
