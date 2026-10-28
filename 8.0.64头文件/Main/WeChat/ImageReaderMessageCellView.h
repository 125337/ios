@interface ImageReaderMessageCellView : ReaderMessageCellView <MMWebImageViewDelegate>
{
    UIImageView * m_imageIcon; // +0x48
    MMUILabel * m_imageNum; // +0x50
    CAGradientLayer * m_coverMaskLayer; // +0x58
    CAGradientLayer * m_gradientLayer; // +0x60
}
- (void)layoutContentView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)addCoverMaskLayer;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void).cxx_destruct;
@end
