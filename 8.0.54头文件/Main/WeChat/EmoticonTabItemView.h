@interface EmoticonTabItemView : MMUIView <MMWebImageViewDelegate>
{
    BOOL _needConvertToGrayImage; // +0x8
    BOOL _hasRedPoint; // +0x9
    MMWebImageView * _m_webImageView; // +0x10
    MMBadgeView * _badgeView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setNormalImageUrl:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setHasRedPoint:(BOOL)arg1;
- (void)setAlwaysTemplateRenderingMode:(BOOL)arg1;
- (void)onLoadImageOK:(id)arg1;
- (BOOL)needConvertToGrayImage;
- (void)setNeedConvertToGrayImage:(BOOL)arg1;
- (BOOL)hasRedPoint;
- (id)m_webImageView;
- (void)setM_webImageView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

