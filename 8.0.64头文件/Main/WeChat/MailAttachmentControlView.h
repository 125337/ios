@interface MailAttachmentControlView : MMUIView <WCFileBrowseDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, MailAttachmentsViewDelegate>
{
    NSMutableArray * m_arrAttachmentViews; // +0x8
    UILabel * m_labelCol; // +0x10
    UIImageView * m_imgvAttach; // +0x18
    UILabel * m_labTip; // +0x20
    UIButton * m_blueButton; // +0x28
    UIView * m_grayLineView; // +0x30
    id <MailAttachmentControlViewDelegate> m_delegate; // +0x38
    unsigned int m_uiImageAttachIndex; // +0x40
    unsigned int m_uiVideoAttachIndex; // +0x44
    unsigned int m_uiFileAttachIndex; // +0x48
    NSMutableArray * m_attachmentToUpload; // +0x50
    unsigned int m_assetCount; // +0x58
    UINavigationController * m_picker; // +0x60
    MailAttachment * m_lastAttachment; // +0x68
    id /* block */ _assetSelectedBlock; // +0x70
}
- (void)updateViews;
- (BOOL)isAllUploadSuccess;
- (BOOL)containsAttachmentWithFilename:(id)arg1;
- (id)allUploadedFiles;
- (id)allToStoreFiles;
- (unsigned long long)count;
- (unsigned long long)totalSize;
- (void)properInit;
- (id)init;
- (id)initWithStoredAttachments:(id)arg1;
- (void)initView;
- (double)getContentTotalHeight;
- (void)onButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)takePhoto;
- (void)selectFromAlbum;
- (void)openFileBrowser;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)getNewAttachmentNameWithNameSuffix:(id)arg1 fileName:(id)arg2;
- (void)addToUploadAttachment:(id)arg1 withNameSuffix:(id)arg2;
- (void)addToUploadAttachment:(id)arg1 withNameSuffix:(id)arg2 fileName:(id)arg3;
- (void)onAddAttachmentItemComplete;
- (void)dismissPickerViewController;
- (void)handleUploadData:(id)arg1 name:(id)arg2;
- (void)addAttachmentView:(id)arg1;
- (void)doDeleteAttachment:(unsigned int)arg1;
- (void)OnDeleteAttachment:(id)arg1;
- (BOOL)onFileBrowseWillSelectFile:(id)arg1 selected:(id)arg2;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)addAttachmentsWithFileInfos:(vector<FileInfo, std::allocator<FileInfo>>)arg1;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)onFileBrowser:(id)arg1 assetPickerController:(id)arg2 clickAssetInfo:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_lastAttachment;
- (void)setM_lastAttachment:(id)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
