@interface WNRTEToolViewHelper : NSObject <MMPickLocationViewControllerDelegate, WCFileBrowseDelegate, UIDocumentPickerDelegate>
{
    unsigned int _mmassetCount; // +0x8
    id <WNRTEToolViewHelperDelegate> _delegate; // +0x10
    NSMutableArray * _arrAttachments; // +0x18
    MMPickLocationViewController * _locationViewCtrl; // +0x20
    RTEAttributeNode * _recordingAttribute; // +0x28
}
- (id)init;
- (void)onCreatePostImageView:(unsigned int)arg1;
- (void)onTakePhotoForPost;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onAddImageItemComplete;
- (void)showFilePickerView:(unsigned int)arg1;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onCreatPostLocationView;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelSeletctedLocation;
- (BOOL)onVoiceRecordBegin;
- (void)onVoiceRecordRealBegin;
- (void)onVoiceRecordEnd;
- (void)insertSeperateLine;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)mmassetCount;
- (void)setMmassetCount:(unsigned int)arg1;
- (id)arrAttachments;
- (void)setArrAttachments:(id)arg1;
- (id)locationViewCtrl;
- (void)setLocationViewCtrl:(id)arg1;
- (id)recordingAttribute;
- (void)setRecordingAttribute:(id)arg1;
- (void).cxx_destruct;
@end
