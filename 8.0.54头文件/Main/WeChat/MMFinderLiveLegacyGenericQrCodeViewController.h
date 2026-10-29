@interface MMFinderLiveLegacyGenericQrCodeViewController : MMFinderLiveQrCodeViewController <MMFinderLiveQrCodeReporter, MMFinderLiveGenericQrCodeViewDelegate>
{
    unsigned int _isSpamModPic; // +0x68
    WCFinderContact * _anchorContact; // +0x70
    FinderLiveShareLiveQRCodeInfo * _qrCodeInfo; // +0x78
}
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)arg1 contact:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)createQrCodeView;
- (id)reporter;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onCancelButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onShareButtonInvoked;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)clearBackgroundImage;
- (void)reportShareQRCodeAction:(unsigned long long)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (unsigned int)isSpamModPic;
- (void)setIsSpamModPic:(unsigned int)arg1;
- (id)qrCodeInfo;
- (void)setQrCodeInfo:(id)arg1;
- (void).cxx_destruct;
@end

