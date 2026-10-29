@interface EmoticonCreateImageUploadTask : EmoticonCreateUploadTask
{
    BOOL _isMultiImage; // +0x28
    id /* block */ _prepareFailBlock; // +0x30
    UIImage * _editedImg; // +0x38
    NSData * _gifData; // +0x40
}
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithGifData:(id)arg1;
- (void)startUpload;
- (BOOL)isGif;
- (void)startStaticImageUpload;
- (void)startGifImageUpload;
- (void)handleStaticImg:(id)arg1 withAddingItem:(id)arg2;
- (BOOL)isMultiImage;
- (void)setIsMultiImage:(BOOL)arg1;
- (id /* block */)prepareFailBlock;
- (void)setPrepareFailBlock:(id /* block */)arg1;
- (id)editedImg;
- (void)setEditedImg:(id)arg1;
- (id)gifData;
- (void)setGifData:(id)arg1;
- (void).cxx_destruct;
@end

