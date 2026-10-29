@interface GameShareDataImageModel : NSObject
{
    NSString * _imgUrl; // +0x8
    NSString * _localId; // +0x10
    NSString * _base64Data; // +0x18
    UIImage * _image; // +0x20
}
- (void)triggerGetImapgeWithComplectionBlock:(id /* block */)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)localId;
- (void)setLocalId:(id)arg1;
- (id)base64Data;
- (void)setBase64Data:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
