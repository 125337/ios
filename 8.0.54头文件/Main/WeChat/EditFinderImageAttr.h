@interface EditFinderImageAttr : NSObject <NSCoding>
{
    NSMutableArray * _unCropImagesArray; // +0x8
    CGRect _fullScreenRectInScreen; // +0x10
    CGRect _cropRectInScreen; // +0x30
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)genEditCropRectWithImageSize:(CGSize)arg1;
- (id)unCropImagesArray;
- (void)setUnCropImagesArray:(id)arg1;
- (CGRect)fullScreenRectInScreen;
- (void)setFullScreenRectInScreen:(CGRect)arg1;
- (CGRect)cropRectInScreen;
- (void)setCropRectInScreen:(CGRect)arg1;
- (void).cxx_destruct;
@end

