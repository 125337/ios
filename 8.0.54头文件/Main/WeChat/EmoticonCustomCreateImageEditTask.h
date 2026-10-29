@interface EmoticonCustomCreateImageEditTask : EmoticonCustomCreateEditTask <WCEditImageViewControllerDelegate>
{
    id <EmoticonCustomCreateImageEditTaskDelegate> _delegate; // +0x8
    id /* block */ _editSucBlock; // +0x10
    id /* block */ _editCancelBlock; // +0x18
    NSString * _filePath; // +0x20
    NSData * _imgData; // +0x28
}
- (id)init;
- (id)initWithImagePath:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (void)startEdit;
- (void)openImageEditorWithFilePath:(id)arg1;
- (void)openImageEditorWithData:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)editSucBlock;
- (void)setEditSucBlock:(id /* block */)arg1;
- (id /* block */)editCancelBlock;
- (void)setEditCancelBlock:(id /* block */)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)imgData;
- (void)setImgData:(id)arg1;
- (void).cxx_destruct;
@end

