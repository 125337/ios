@interface WCMyStoryCameraMgr : MMUserService <MMUIViewControllerExt, MMImagePickerManagerDelegate, MMServiceProtocol>
{
    WCStoryPublishReportObj * _publishReportObj; // +0x8
    unsigned long long _enterScene; // +0x10
    EditStoryImageAttr * _storyAttr; // +0x18
}
- (void)showImagePicker;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (void)setStoryAttr:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraClickRecordBtn;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)sendTakePhotoNotification;
- (void)postNewItemForSight:(id)arg1;
- (void)postNewItemForSight:(id)arg1 originImageMd5:(id)arg2;
- (id)genDataItemWithSightDraftItem:(id)arg1 thumbPath:(id)arg2 originImageMd5:(id)arg3;
- (void)createPhotoMovieWithPicker:(id)arg1 selectImageArray:(id)arg2 selectedImageMd5s:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (id)publishReportObj;
- (void)setPublishReportObj:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)storyAttr;
- (void).cxx_destruct;
@end

