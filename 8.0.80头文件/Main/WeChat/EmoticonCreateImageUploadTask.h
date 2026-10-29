@interface EmoticonCreateImageUploadTask : EmoticonCreateUploadTask
{
    BOOL _isMultiImage; // +0x38
    id /* block */ _prepareFailBlock; // +0x40
    UIImage * _editedImg; // +0x48
    NSData * _gifData; // +0x50
    NSArray * _editedDatas; // +0x58
}
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithGifData:(id)arg1;
- (void)setImageDatas:(id)arg1;
- (void)startUpload;
- (BOOL)isGif;
- (void)startStaticImageUpload;
- (void)startGifImageUpload;
- (void)startMixUpload;
- (void)handleStaticImg:(id)arg1 withAddingItem:(id)arg2;
- (BOOL)isMultiImage;
- (void)setIsMultiImage:(BOOL)arg1;
- (id /* block */)prepareFailBlock;
- (void)setPrepareFailBlock:(id /* block */)arg1;
- (id)editedImg;
- (void)setEditedImg:(id)arg1;
- (id)gifData;
- (void)setGifData:(id)arg1;
- (id)editedDatas;
- (void)setEditedDatas:(id)arg1;
- (void).cxx_destruct;
@end
