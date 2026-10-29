@interface MJTemplatePlayerView : UIView
{
    BOOL _needsResumePlay; // +0x8
    MJTemplateCompositeTask * _compositeTask; // +0x10
    UIImageView * _backgroundImageView; // +0x18
}
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 compositeTask:(id)arg2;
- (void)playVideo;
- (void)stopVideo;
- (void)initView;
- (void)initBackgroundImageView;
- (CGRect)suitableBackgroundImageViewFrame;
- (void)layoutSubviews;
- (id)compositeTask;
- (void)setCompositeTask:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (BOOL)needsResumePlay;
- (void)setNeedsResumePlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
