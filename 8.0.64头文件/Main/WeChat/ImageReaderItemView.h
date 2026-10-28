@interface ImageReaderItemView : ReaderItemView <MMWebImageViewDelegate>
{
    UIImageView * m_imageIcon; // +0xa8
    MMUILabel * m_imageNumLabel; // +0xb0
    CAGradientLayer * m_gradientLayer; // +0xb8
    CALayer * m_coverMaskLayer; // +0xc0
    unsigned int _imageCount; // +0xc8
}
- (void)topView;
- (void)normalView;
- (void)onLoadImageOK:(id)arg1;
- (id)accessibilityLabel;
- (unsigned int)imageCount;
- (void)setImageCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
