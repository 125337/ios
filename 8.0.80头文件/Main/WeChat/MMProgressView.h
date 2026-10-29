@interface MMProgressView : UIView
{
    UIImageView * m_imgvBack; // +0x8
    UIImageView * m_imgvFront; // +0x10
    CGRect m_rectLayout; // +0x18
    float m_fProgress; // +0x38
    float m_fTopWidth; // +0x3c
}
- (id)initWithFrame:(CGRect)arg1 BackImg:(id)arg2 FrontImg:(id)arg3 Layout:(CGRect)arg4 CapWidth:(float)arg5 CapHeight:(float)arg6;
- (id)initBrandProgressWithFrame:(CGRect)arg1 layout:(CGRect)arg2;
- (void)disableBrandProgress;
- (void)enableBrandProgress;
- (void)SetProgress:(float)arg1;
- (void)SetFrontImageByName:(id)arg1;
- (void)setProgressFontRect:(CGRect)arg1;
- (id)m_imgvBack;
- (void)setM_imgvBack:(id)arg1;
- (id)m_imgvFront;
- (void)setM_imgvFront:(id)arg1;
- (void).cxx_destruct;
@end
