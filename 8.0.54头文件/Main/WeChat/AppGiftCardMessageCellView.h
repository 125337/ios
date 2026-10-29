@interface AppGiftCardMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UILabel * m_titleLabel; // +0xa8
    UILabel * m_descLabel; // +0xb0
    UIImageView * m_thumbImageView; // +0xb8
    MMWebImageView * m_blurBgImageView; // +0xc0
    BOOL _isBlurBgImageLoad; // +0xc8
}
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)initBlurBgImageView;
- (double)calBlurImageHeight;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)arg1;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end

