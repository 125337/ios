@interface WAJSEventHandler_chooseMedia : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    BOOL _isSwitch; // +0x8
    BOOL _userDidSelect; // +0x9
    unsigned int _mediaType; // +0xc
    unsigned int _maxDuration; // +0x10
    unsigned int _processedAssetCount; // +0x14
    long long _sourceType; // +0x18
    long long _sizeType; // +0x20
    long long _count; // +0x28
    long long _cameraDirection; // +0x30
    UINavigationController * _videoPicker; // +0x38
    MMImagePickerManagerOptionObj * _optionObj; // +0x40
    NSMutableArray * _keyObjectArray; // +0x48
    NSMutableArray * _resultObjectArray; // +0x50
    unsigned long long _failedCount; // +0x58
    unsigned long long _totalProcessCount; // +0x60
}
- (void)dealloc;
- (void)initialization;
- (void)handleJSEvent:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSightCamera;
- (void)showAlbumPicker;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)processVideo:(id)arg1;
- (void)processVideo:(id)arg1 complerHandler:(id /* block */)arg2;
- (void)processVideoAndDismissPicker:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoByArrLocalInfo:(id)arg1;
- (void)processImage:(id)arg1;
- (void)processImageByArrLocalInfo:(id)arg1;
- (void)didFinishProcessAssets;
- (void)removeObjectFromResultAtIndex:(unsigned long long)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)asyncHandleCancel;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)arg1 inPicker:(id)arg2;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (unsigned int)maxDuration;
- (void)setMaxDuration:(unsigned int)arg1;
- (long long)sizeType;
- (void)setSizeType:(long long)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (long long)cameraDirection;
- (void)setCameraDirection:(long long)arg1;
- (id)videoPicker;
- (void)setVideoPicker:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (BOOL)isSwitch;
- (void)setIsSwitch:(BOOL)arg1;
- (BOOL)userDidSelect;
- (void)setUserDidSelect:(BOOL)arg1;
- (id)keyObjectArray;
- (void)setKeyObjectArray:(id)arg1;
- (id)resultObjectArray;
- (void)setResultObjectArray:(id)arg1;
- (unsigned int)processedAssetCount;
- (void)setProcessedAssetCount:(unsigned int)arg1;
- (unsigned long long)failedCount;
- (void)setFailedCount:(unsigned long long)arg1;
- (unsigned long long)totalProcessCount;
- (void)setTotalProcessCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

