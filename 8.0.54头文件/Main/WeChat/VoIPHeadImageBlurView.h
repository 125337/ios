@interface VoIPHeadImageBlurView : UIView
{
    BOOL _shouldIgnoreHeadViewCenterYCompatibilityInSmall; // +0x8
    int _scene; // +0xc
    UIImageView * _blurView; // +0x10
    MultiTalkHDHeadView * _headImageView; // +0x18
}
- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)layoutBlurView;
- (void)layoutHeadView;
- (void)updateScene:(int)arg1;
- (void)updateViewInfo:(id)arg1 scene:(int)arg2;
- (void)layoutBackground;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)shouldIgnoreHeadViewCenterYCompatibilityInSmall;
- (void)setShouldIgnoreHeadViewCenterYCompatibilityInSmall:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (void).cxx_destruct;
@end

