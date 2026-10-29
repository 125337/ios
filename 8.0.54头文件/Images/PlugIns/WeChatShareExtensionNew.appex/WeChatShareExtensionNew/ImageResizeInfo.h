@interface ImageResizeInfo : NSObject
{
    UIImage * _originImage; // +0x8
    NSURL * _imgUrl; // +0x10
    id /* block */ _resizeCallback; // +0x18
    CGSize _targetSize; // +0x20
}
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (CGSize)targetSize;
- (void)setTargetSize:(CGSize)arg1;
- (id /* block */)resizeCallback;
- (void)setResizeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

