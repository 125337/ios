@interface AppGiftCardMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UILabel * m_titleLabel; // +0xb8
    UILabel * m_descLabel; // +0xc0
    UIImageView * m_thumbImageView; // +0xc8
    MMWebImageView * m_blurBgImageView; // +0xd0
    BOOL _isBlurBgImageLoad; // +0xd8
}
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)initBlurBgImageView;
- (double)calBlurImageHeight;
- (void)initSourceViewInside;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)arg1;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
