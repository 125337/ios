@interface EmoticonCustomCreateLogic : NSObject <EmoticonCustomManageAddLogicDelegate, EmoticonCreateUploadTaskDelegate, EmoticonCustomCreateVideoEditTaskDelegate, EmoticonCustomCreateImageEditTaskDelegate, MMImageLoaderObserver, EmoticonCustomManageSelectFromMultiImageViewControllerDelegate, MMUIViewControllerDelegate, MMImagePickerManagerDelegate>
{
    BOOL _isEditing; // +0x8
    BOOL _isMultiImage; // +0x9
    id <MMUIViewControllerDelegate> _delegate; // +0x10
    id <EmoticonCustomCreateLogicDelegate> _uploadDelegate; // +0x18
    NSString * _addCustomEmoticonSessionID; // +0x20
    EmoticonCustomCreateTask * _currentTask; // +0x28
    EmoticonCustomAddingItem * _currentAddingItem; // +0x30
    UINavigationController * _pickerNavController; // +0x38
    MMUIViewController * _presentingVC; // +0x40
    EmoticonCustomCreateDownloadTask * _downloadingTask; // +0x48
    EmoticonCustomCreateEditTask * _editTask; // +0x50
    EmoticonCreateUploadTask * _uploadTask; // +0x58
    WCFinderDataItem * _selectingDataItem; // +0x60
    MMUIViewController * _editorVC; // +0x68
    EmoticonCustomManageSelectFromMultiImageViewController * _multiImageVC; // +0x70
    EmoticonCustomCreatePreProcessTask * _preprocessTask; // +0x78
    unsigned long long _totalEditImageCount; // +0x80
    struct _videoCropStartTime; // +0x88
}
- (void)startVideoUploadTask:(id)arg1;
- (void)startImageUploadTask:(id)arg1;
- (id)getPresetAddingItem;
- (id)addlogicDelegate;
- (void)hasSameMd5Count:(unsigned long long)arg1;
- (BOOL)handleAddingItemAndShouldContinueUploading:(id)arg1;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (void)AddEmoticonUploadedButExceedLimitWithWrap:(id)arg1;
- (void)AddEmoticonFinishedWithWraps:(id)arg1 sessionID:(id)arg2;
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
- (void)MMImagePickerManagerDidSendAssets:(id)arg1 infos:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditImage:(id)arg1;
- (void)MMImagePickerManagerDidCancelEditImages:(id)arg1 infos:(id)arg2;
- (void)MMImagePickerManagerDidCancelEditVideo:(id)arg1 infos:(id)arg2;
- (void)MMImagePickerManagerDidUnselected:(id)arg1 infos:(id)arg2;
- (void)handleGIFInfo:(id)arg1;
- (void)tryCloseEditorVC:(BOOL)arg1;
- (void)uploadMultiEditImageTask:(id)arg1;
- (void)startLogic;
- (void)startLogicFromTask:(id)arg1;
- (void)startLogicFromPicker;
- (void)reInit;
- (void)reportEditInfo:(unsigned long long)arg1 result:(unsigned long long)arg2 actionType:(unsigned long long)arg3 fileType:(unsigned long long)arg4 infos:(id)arg5 sessionID:(id)arg6;
- (void)reportEditInfo:(unsigned long long)arg1 result:(unsigned long long)arg2 actionType:(unsigned long long)arg3 fileType:(unsigned long long)arg4 pupWinType:(unsigned long long)arg5 infos:(id)arg6 sessionID:(id)arg7;
- (id)getActionType:(unsigned long long)arg1;
- (unsigned long long)getPupWinType:(id)arg1;
- (void)MMImagePickerManagerDidCancelWithInfo:(id)arg1 selectedAssets:(id)arg2 finderData:(id)arg3;
- (void)MMImagePickerManagerDidWarning:(id)arg1 warning:(id)arg2 fromFinder:(BOOL)arg3;
- (id)rootVC;
- (id)dismissVC;
- (void)onEmoticonCreateCommonFail;
- (void)handleLoadingOnTopVC:(id)arg1 isStart:(BOOL)arg2;
- (id)getTopViewController;
- (id)getTopViewControllerIncludingNav;
- (id)getViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadDelegate;
- (void)setUploadDelegate:(id)arg1;
- (id)addCustomEmoticonSessionID;
- (void)setAddCustomEmoticonSessionID:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)currentAddingItem;
- (void)setCurrentAddingItem:(id)arg1;
- (id)pickerNavController;
- (void)setPickerNavController:(id)arg1;
- (id)presentingVC;
- (void)setPresentingVC:(id)arg1;
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
- (unsigned long long)totalEditImageCount;
- (void)setTotalEditImageCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
