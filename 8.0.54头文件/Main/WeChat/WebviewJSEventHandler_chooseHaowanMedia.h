@interface WebviewJSEventHandler_chooseHaowanMedia : WebviewJSEventHandlerBase <MMImagePickerManagerDelegate, GameVideoAlbumControllerDelegate, IWebviewResourceManagerExt>
{
    NSMutableArray * _localIds; // +0x8
    unsigned long long _totalCount; // +0x10
    UINavigationController * _startViewController; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showGameVideoAlbum:(long long)arg1 params:(id)arg2;
- (void)showGameHaowanTabAlbum:(long long)arg1 params:(id)arg2;
- (void)videoAlbumControllerDidExit;
- (void)videoAlbumControllerDidSkip;
- (void)gameAlbumVideoDidChoose:(id)arg1 extraInfo:(id)arg2;
- (void)showAssetPicker:(id)arg1;
- (void)showImageEditor:(unsigned long long)arg1;
- (void)showVideoEditor;
- (void)showImageAndVideoEditor:(unsigned long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)callbackCanceled;
- (void)callbackWithVideoInfo:(id)arg1 extra:(id)arg2;
- (void)handlePickingImageWithInfo:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)trackEventChooseMediaExplosure;
- (void)trackEventChooseMediaCancel;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (id)startViewController;
- (void)setStartViewController:(id)arg1;
- (void).cxx_destruct;
@end

