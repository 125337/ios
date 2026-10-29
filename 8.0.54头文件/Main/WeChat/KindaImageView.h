@interface KindaImageView : KindaView <WCPayWebImageViewDelegate, MMKImageView>
{
    WCPayWebImageView * _m_imageView; // +0xa8
    long long _m_scaleType; // +0xb0
    KindaImage * _m_image; // +0xb8
    KindaImage * _m_defaultImage; // +0xc0
    MMDynamicColor * _tintColor; // +0xc8
    NSData * _imageData; // +0xd0
}
- (id)init;
- (id)getView;
- (void)setUrl:(id)arg1;
- (void)setDarkModeUrl:(id)arg1;
- (id)getDarkModeUrl;
- (id)getUrl;
- (void)setDefaultUrl:(id)arg1;
- (id)getDefaultUrl;
- (void)setImage:(id)arg1;
- (id)getImage;
- (void)setScaleType:(long long)arg1;
- (long long)getScaleType;
- (void)setTintColor:(id)arg1;
- (id)getImageData;
- (void)setImageData:(id)arg1;
- (id)getTintColor;
- (void)updateImage;
- (void)updateImageStyle;
- (void)mm_onColorAppearanceDidChange;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)m_imageView;
- (void)setM_imageView:(id)arg1;
- (long long)m_scaleType;
- (void)setM_scaleType:(long long)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_defaultImage;
- (void)setM_defaultImage:(id)arg1;
- (id)tintColor;
- (id)imageData;
- (void).cxx_destruct;
@end

