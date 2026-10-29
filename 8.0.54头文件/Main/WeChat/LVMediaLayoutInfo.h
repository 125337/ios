@interface LVMediaLayoutInfo : NSObject
{
    BOOL _shouldScaling; // +0x8
    CGSize _originMediaSize; // +0x10
    CGSize _containerSize; // +0x20
    CGSize _cropSize; // +0x30
    CGSize _fullSize; // +0x40
    UIEdgeInsets _cropInsets; // +0x50
    UIEdgeInsets _fullMarginInsets; // +0x70
}
+ (WCShowArea)playerShowAreaForContainerSize:(CGSize)arg1 originMediaSize:(CGSize)arg2 cropInsets:(UIEdgeInsets)arg3;
- (void)configFrameForContainer:(id)arg1 imageCropContainer:(id)arg2 imageView:(id)arg3;
- (WCShowArea)playerShowAreaForContainer:(CGSize)arg1;
- (BOOL)shouldScaling;
- (void)setShouldScaling:(BOOL)arg1;
- (CGSize)originMediaSize;
- (void)setOriginMediaSize:(CGSize)arg1;
- (UIEdgeInsets)cropInsets;
- (void)setCropInsets:(UIEdgeInsets)arg1;
- (CGSize)containerSize;
- (void)setContainerSize:(CGSize)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (CGSize)fullSize;
- (void)setFullSize:(CGSize)arg1;
- (UIEdgeInsets)fullMarginInsets;
- (void)setFullMarginInsets:(UIEdgeInsets)arg1;
@end

