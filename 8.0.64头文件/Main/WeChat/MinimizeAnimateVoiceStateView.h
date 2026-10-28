@interface MinimizeAnimateVoiceStateView : MinimizeAnimateStateBaseView
{
    VoicePlayingView * _iconView; // +0x38
}
- (id)initWithGrayBackground:(BOOL)arg1 isMiniVersion:(BOOL)arg2;
- (void)layoutSubviews;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
