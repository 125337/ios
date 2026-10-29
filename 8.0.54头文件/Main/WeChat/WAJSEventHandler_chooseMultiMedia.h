@interface WAJSEventHandler_chooseMultiMedia : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    UINavigationController * m_oVideoPicker; // +0x8
    NSMutableArray * m_localIds; // +0x10
    BOOL _savedAssets; // +0x18
    BOOL _savedImage; // +0x19
    BOOL _shouldDismissVC; // +0x1a
    BOOL _isFromPicker; // +0x1b
    BOOL _isPickerCustom; // +0x1c
    unsigned int _maxDuration; // +0x20
    unsigned int _processedAssetCount; // +0x24
    long long _count; // +0x28
    NSMutableArray * _mediaObjectArray; // +0x30
    NSMutableArray * _resultObjectArray; // +0x38
    NSObject<OS_dispatch_queue> * _queueCopyVideoFile; // +0x40
    NSMutableArray * _imagesIndex; // +0x48
    MMNearbyPoiInfo * _poiInfo; // +0x50
    unsigned long long _sightCameraMode; // +0x58
    long long _pickAlbumType; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSightCamera;
- (void)showSystemCamera;
- (void)showAlbumPicker;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoFromPicker:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)processVideo:(id)arg1 withIndex:(int)arg2;
- (void)handleImageByImage:(id)arg1;
- (void)handleImageByLoacalIds:(id)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)asyncHandleCancel;
- (void)didTakeVideoWithIndex:(int)arg1;
- (id)getImageOrientationString:(long long)arg1;
- (void)dismissPicker;
- (void)dismissViewControllerAnimated:(BOOL)arg1;
- (void)dismissViewControllerInMainThreadAnimated:(BOOL)arg1;
- (id)generateMediaMarkInfoWithTime:(unsigned int)arg1 andScore:(unsigned int)arg2;
- (id)generateMediaMarkInfoWithTime:(unsigned int)arg1 andDistance:(int)arg2;
- (unsigned int)generateScoreWithDistance:(int)arg1;
- (unsigned int)maxDuration;
- (void)setMaxDuration:(unsigned int)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (BOOL)shouldDismissVC;
- (void)setShouldDismissVC:(BOOL)arg1;
- (BOOL)isFromPicker;
- (void)setIsFromPicker:(BOOL)arg1;
- (id)mediaObjectArray;
- (void)setMediaObjectArray:(id)arg1;
- (id)resultObjectArray;
- (void)setResultObjectArray:(id)arg1;
- (id)queueCopyVideoFile;
- (void)setQueueCopyVideoFile:(id)arg1;
- (unsigned int)processedAssetCount;
- (void)setProcessedAssetCount:(unsigned int)arg1;
- (id)imagesIndex;
- (void)setImagesIndex:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (unsigned long long)sightCameraMode;
- (void)setSightCameraMode:(unsigned long long)arg1;
- (long long)pickAlbumType;
- (void)setPickAlbumType:(long long)arg1;
- (BOOL)isPickerCustom;
- (void)setIsPickerCustom:(BOOL)arg1;
- (void).cxx_destruct;
@end

