@interface WebviewJSEventHandler_choosePassport : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, WCPayScanPassportViewControllerDelegate>
{
    BOOL _needSaveOriginalImage; // +0x8
    BOOL _addLocalImageHasCallback; // +0x9
    BOOL _imageSizeConfirmToMaxSize; // +0xa
    unsigned long long _sourceType; // +0x10
    NSDictionary * _scanDetailMsgMap; // +0x18
    long long _originalImageMaxSize; // +0x20
    NSArray * _compressedLocalIds; // +0x28
    MMAsset * _originImageAsset; // +0x30
    NSArray * _menuList; // +0x38
    NSString * _cameraOriginalLocalId; // +0x40
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)titleForMenu:(unsigned long long)arg1;
- (id)menuListFromSourceType:(id)arg1;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleMenu:(unsigned long long)arg1;
- (unsigned long long)currentAuthScene;
- (void)showCameraPickerWithAuthScene:(unsigned long long)arg1;
- (void)resetPickState;
- (void)report:(unsigned long long)arg1;
- (void)reportDetail:(unsigned long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)WCPayScanPassportViewController:(id)arg1 DidDetectImageArr:(id)arg2;
- (void)WCPayScanPassportViewControllerCancel:(id)arg1;
- (void)WCPayScanPassportViewControllerFail:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)callbackOnlyCompressedSuccess:(id)arg1;
- (void)callbackAllUploadTasksSuccess:(id)arg1 originLocalIds:(id)arg2;
- (id)jpegDataWithImage:(id)arg1 metadata:(id)arg2;
- (long long)exifOrientationForImage:(id)arg1;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (BOOL)isVerticalScreen;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)scanDetailMsgMap;
- (void)setScanDetailMsgMap:(id)arg1;
- (BOOL)needSaveOriginalImage;
- (void)setNeedSaveOriginalImage:(BOOL)arg1;
- (long long)originalImageMaxSize;
- (void)setOriginalImageMaxSize:(long long)arg1;
- (BOOL)addLocalImageHasCallback;
- (void)setAddLocalImageHasCallback:(BOOL)arg1;
- (id)compressedLocalIds;
- (void)setCompressedLocalIds:(id)arg1;
- (BOOL)imageSizeConfirmToMaxSize;
- (void)setImageSizeConfirmToMaxSize:(BOOL)arg1;
- (id)originImageAsset;
- (void)setOriginImageAsset:(id)arg1;
- (id)menuList;
- (void)setMenuList:(id)arg1;
- (id)cameraOriginalLocalId;
- (void)setCameraOriginalLocalId:(id)arg1;
- (void).cxx_destruct;
@end
