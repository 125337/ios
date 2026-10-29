@interface EmoticonCustomCreateLogic : NSObject <EmoticonCustomManageAddLogicDelegate, EmoticonCreateUploadTaskDelegate, EmoticonCustomCreateVideoEditTaskDelegate, EmoticonCustomCreateImageEditTaskDelegate, MMImageLoaderObserver, EmoticonCustomManageSelectFromMultiImageViewControllerDelegate, MMUIViewControllerDelegate, MMImagePickerManagerDelegate>
{
    BOOL _isEditing; // +0x8
    BOOL _isMultiImage; // +0x9
    id <MMUIViewControllerDelegate> _delegate; // +0x10
    EmoticonCustomCreateTask * _currentTask; // +0x18
    EmoticonCustomAddingItem * _currentAddingItem; // +0x20
    UINavigationController * _pickerNavController; // +0x28
    EmoticonCustomCreateDownloadTask * _downloadingTask; // +0x30
    EmoticonCustomCreateEditTask * _editTask; // +0x38
    EmoticonCreateUploadTask * _uploadTask; // +0x40
    WCFinderDataItem * _selectingDataItem; // +0x48
    MMUIViewController * _editorVC; // +0x50
    EmoticonCustomManageSelectFromMultiImageViewController * _multiImageVC; // +0x58
    EmoticonCustomCreatePreProcessTask * _preprocessTask; // +0x60
    struct _videoCropStartTime; // +0x68
}
- (void)startVideoUploadTask:(id)arg1;
- (void)startImageUploadTask:(id)arg1;
- (id)getPresetAddingItem;
- (id)addlogicDelegate;
- (BOOL)handleAddingItemAndShouldContinueUploading:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (void)AddEmoticonUploadedButExceedLimitWithWrap:(id)arg1;
- (void)openResultVCWith:(id)arg1 isExceedLimit:(BOOL)arg2;
- (id)uploadImageTask;
- (id)uploadVideoTask;
- (void)preprocessWithTask:(id)arg1;
- (void)startVideoEdit:(id)arg1;
- (void)startImageEdit:(id)arg1;
- (CGSize)getDownloadingVideoSize;
- (CGSize)editorContainerViewSize;
- (void)onGetEditorVC:(id)arg1;
- (void)onGetEditedVideoCropStartTime:(struct)arg1;
- (void)startVideoDownloadTask:(id)arg1;
- (BOOL)interruptVideoDownloadTask:(id)arg1;
- (void)startImageDownloadTask:(id)arg1;
- (BOOL)interruptImageDownloadTask:(id)arg1;
- (id)downloadingVideoTask;
- (id)downloadingImageTask;
- (BOOL)isFinderCreateEnabled;
- (void)appendAdditionalInfoToItem:(id)arg1;
- (void)handleSelectedDataItem:(id)arg1;
- (void)startDownloadImage:(id)arg1;
- (void)startDownloadVideo:(id)arg1;
- (void)openVideoEditorWithFilePath:(id)arg1 ThumbImageUrl:(id)arg2;
- (void)startUploadWithVideoPath:(id)arg1;
- (void)openImageEditorWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)openImageEditorWithFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)openImageEditorWithTask:(id)arg1 completion:(id /* block */)arg2;
- (void)openMultiImageSelectEditor:(id)arg1;
- (void)MMVideoPickerManager:(id)arg1 didFinishSelectingFinderDataItem:(id)arg2;
- (void)closeVideoEditor:(id)arg1;
- (void)closeImageEditor:(id)arg1;
- (void)onMultiImageSelectImageData:(id)arg1;
- (void)onMultiImageGetImageDataFailed;
- (void)onMultiImageStartDownload;
- (void)onMultiImageDidCancel;
- (void)startLogicDirectFromFeedId;
- (void)preprocessIfNeededWithVideoPath:(id)arg1;
- (void)openEditorWithVideoPath:(id)arg1;
- (void)directFinderStartUploadWithVideoPath:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditImage:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditVideo:(id)arg1;
- (void)handleGIFInfo:(id)arg1;
- (void)tryCloseEditorVC:(BOOL)arg1;
- (void)startLogic;
- (void)startLogicFromTask:(id)arg1;
- (void)startLogicFromPicker;
- (void)reInit;
- (id)rootVC;
- (void)onEmoticonCreateCommonFail;
- (void)handleLoadingOnTopVC:(id)arg1 isStart:(BOOL)arg2;
- (id)getTopViewController;
- (id)getTopViewControllerIncludingNav;
- (id)getViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)currentAddingItem;
- (void)setCurrentAddingItem:(id)arg1;
- (id)pickerNavController;
- (void)setPickerNavController:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (id)downloadingTask;
- (void)setDownloadingTask:(id)arg1;
- (id)editTask;
- (void)setEditTask:(id)arg1;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (id)selectingDataItem;
- (void)setSelectingDataItem:(id)arg1;
- (id)editorVC;
- (void)setEditorVC:(id)arg1;
- (id)multiImageVC;
- (void)setMultiImageVC:(id)arg1;
- (struct)videoCropStartTime;
- (void)setVideoCropStartTime:(struct)arg1;
- (BOOL)isMultiImage;
- (void)setIsMultiImage:(BOOL)arg1;
- (id)preprocessTask;
- (void)setPreprocessTask:(id)arg1;
- (void).cxx_destruct;
@end

