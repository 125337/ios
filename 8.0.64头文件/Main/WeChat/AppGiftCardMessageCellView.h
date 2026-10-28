@interface AppGiftCardMessageCellView : CommonMessageCellView <MMWebImageViewDelegate>
{
    UILabel * m_titleLabel; // +0xb0
    UILabel * m_descLabel; // +0xb8
    UIImageView * m_thumbImageView; // +0xc0
    MMWebImageView * m_blurBgImageView; // +0xc8
    BOOL _isBlurBgImageLoad; // +0xd0
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
