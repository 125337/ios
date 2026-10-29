@interface MMImageBrowserViewModel : NSObject <MMMediaBrowserViewModel>
{
    UIImage * _image; // +0x8
    NSData * _imageData; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    PHAsset * _imagePHAsset; // +0x20
    MMAsset * _imageMMAsset; // +0x28
    CMessageWrap * _recordMsg; // +0x30
    NSString * _recordDataId; // +0x38
    UIImage * _placeholderImage; // +0x40
}
- (id)initWithImage:(id)arg1 imageData:(id)arg2;
- (id)imageMMAsset;
- (id)viewClassName;
- (int)mediaType;
- (id)title;
- (id)subTitle;
- (id)getForwardMessageWrap;
- (id)generateFavItem;
- (void)asyncScaleFitMemoryImage:(id /* block */)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)imagePHAsset;
- (void)setImagePHAsset:(id)arg1;
- (void)setImageMMAsset:(id)arg1;
- (id)recordMsg;
- (void)setRecordMsg:(id)arg1;
- (id)recordDataId;
- (void)setRecordDataId:(id)arg1;
- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (void).cxx_destruct;
@end
