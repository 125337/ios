@interface WCMicroMerchantAdMultiImgsCellView : WCMicroMerchantAdCellView <WCMicroMerchantAdMultiImagesViewDelegate>
{
    WCMicroMerchantAdMultiImagesView * _multiImagesView; // +0x8
}
- (void)setupMediaView;
- (void)layoutMediaContainerSubviews;
- (double)auxiliaryOverlayBackgroundAlpha;
- (void)startMediaViewFullExpose;
- (void)endMediaViewFullExpose;
- (void)onUserSlideFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)multiImagesView;
- (void)setMultiImagesView:(id)arg1;
- (void).cxx_destruct;
@end
