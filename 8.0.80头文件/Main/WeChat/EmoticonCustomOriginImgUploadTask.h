@interface EmoticonCustomOriginImgUploadTask : NSObject <EmoticonUploaderDelegate>
{
    NSString * _md5; // +0x8
    UIImage * _img; // +0x10
    id <EmoticonOriginImgUploadDelegate> _delegate; // +0x18
    EmoticonUploader * _emoticonUploader; // +0x20
    CGSize _uploadImageSize; // +0x28
}
- (id)initWithImage:(id)arg1 delegate:(id)arg2;
- (BOOL)startUpload;
- (CGSize)uploadImageSize;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)img;
- (void)setImg:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (void)setUploadImageSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
