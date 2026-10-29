@interface WAJSEventHandler_chooseImage : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    unsigned int m_imgCnt; // +0x8
    long long m_sizeType; // +0x10
    long long m_sourceType; // +0x18
    BOOL _frontCamera; // +0x20
    BOOL _userDidSelect; // +0x21
    unsigned long long _failedCount; // +0x28
}
- (id)init;
- (void)showAlbum;
- (void)showCamera;
- (void)handleJSEvent:(id)arg1;
- (void)asyncHandleCancel;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)getImagePickerSizeType:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)processImages:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)delayNotifyWeb:(id)arg1;
- (unsigned long long)failedCount;
- (void)setFailedCount:(unsigned long long)arg1;
- (BOOL)userDidSelect;
- (void)setUserDidSelect:(BOOL)arg1;
@end
