@interface LiteAppJsApiEmoticonStorePersonalCenterPageRouter : LiteAppPermanentJsApi <MMImagePickerManagerDelegate, EmoticonCustomCreateVideoEditTaskDelegate, EmoticonCustomCreateEditTaskDelegate, EmoticonCustomCreateImageEditTaskDelegate, EmoticonCustomManageSelectFromMultiImageViewControllerDelegate>
{
    BOOL _isMultiImage; // +0x20
    NSString * _liteappPath; // +0x28
    NSDictionary * _liteappExtendQuery; // +0x30
    NSString * _liteappAppid; // +0x38
    WCFinderDataItem * _selectingDataItem; // +0x40
    EmoticonCustomCreateDownloadTask * _downloadingTask; // +0x48
    MMUIViewController * _editorVC; // +0x50
    EmoticonCustomCreateEditTask * _editTask; // +0x58
    EmoticonCustomManageSelectFromMultiImageViewController * _multiImageVC; // +0x60
    struct _videoCropStartTime; // +0x68
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)makeImagePickResult:(id)arg1 imageData:(id)arg2;
- (void)openLiteApp:(id)arg1 imageInfo:(id)arg2;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancelEditImage:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)convertVideoToWxamAndJump:(id)arg1;
- (void)MMVideoPickerManager:(id)arg1 didFinishSelectingFinderDataItem:(id)arg2;
- (void)startDownloadVideo:(id)arg1;
- (id)downloadingVideoTask;
- (id)downloadingImageTask;
- (BOOL)interruptVideoDownloadTask:(id)arg1;
- (BOOL)interruptImageDownloadTask:(id)arg1;
- (void)onEmoticonCreateCommonFail;
- (void)openVideoEditorWithFilePath:(id)arg1 ThumbImageUrl:(id)arg2;
- (void)closeVideoEditor:(id)arg1;
- (void)closeImageEditor:(id)arg1;
- (void)startDownloadImage:(id)arg1;
- (void)handleLoadingOnTopVC:(id)arg1 isStart:(BOOL)arg2;
- (void)openMultiImageSelectEditor:(id)arg1;
- (void)openImageEditorWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)openImageEditorWithFilePath:(id)arg1 completion:(id /* block */)arg2;
- (void)openImageEditorWithTask:(id)arg1 completion:(id /* block */)arg2;
- (void)onGetEditorVC:(id)arg1;
- (CGSize)getDownloadingVideoSize;
- (CGSize)editorContainerViewSize;
- (void)onGetEditedVideoCropStartTime:(struct)arg1;
- (void)onMultiImageSelectImageData:(id)arg1;
- (void)onMultiImageGetImageDataFailed;
- (void)onMultiImageStartDownload;
- (void)onMultiImageDidCancel;
- (id)liteappPath;
- (void)setLiteappPath:(id)arg1;
- (id)liteappExtendQuery;
- (void)setLiteappExtendQuery:(id)arg1;
- (id)liteappAppid;
- (void)setLiteappAppid:(id)arg1;
- (id)selectingDataItem;
- (void)setSelectingDataItem:(id)arg1;
- (id)downloadingTask;
- (void)setDownloadingTask:(id)arg1;
- (id)editorVC;
- (void)setEditorVC:(id)arg1;
- (struct)videoCropStartTime;
- (void)setVideoCropStartTime:(struct)arg1;
- (id)editTask;
- (void)setEditTask:(id)arg1;
- (id)multiImageVC;
- (void)setMultiImageVC:(id)arg1;
- (BOOL)isMultiImage;
- (void)setIsMultiImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
