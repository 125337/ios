@interface MMDeviceHeadImageView : UIView <MMWebImageViewDelegate>
{
    MMWebImageView * m_headView; // +0x8
    BOOL m_borderRadius; // +0x10
    BOOL _isRound; // +0x11
    CGSize m_headSize; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)TrySetDefaultHeadImage;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (void)SetHeadImage:(id)arg1;
- (void)setUpdateUrl:(id)arg1;
- (void)layoutSubviews;
- (void)setDeviceIconUrl:(id)arg1;
- (void)setIsRound:(BOOL)arg1;
- (void)reset;
- (void)onLoadImageOK:(id)arg1;
- (CGSize)m_headSize;
- (void)setM_headSize:(CGSize)arg1;
- (BOOL)isRound;
- (void).cxx_destruct;
@end

