@interface KindaLoadingImage : KindaView <MMKLoadingImage>
{
    MMUIActivityIndicatorView * _m_loadingImage; // +0xa8
    long long _m_loadingImageStyle; // +0xb0
}
- (id)init;
- (id)getView;
- (void)setStyle:(long long)arg1;
- (long long)getStyle;
- (void)startAnimating;
- (void)stopAnimating;
- (id)m_loadingImage;
- (void)setM_loadingImage:(id)arg1;
- (long long)m_loadingImageStyle;
- (void)setM_loadingImageStyle:(long long)arg1;
- (void).cxx_destruct;
@end
