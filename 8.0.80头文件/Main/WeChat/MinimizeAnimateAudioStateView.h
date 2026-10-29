@interface MinimizeAnimateAudioStateView : MinimizeAnimateStateBaseView
{
    VoicePlayingView * _iconView; // +0x58
}
- (id)initWithGrayBackground:(BOOL)arg1;
- (void)layoutSubviews;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (void)initOrUpdateTaskData:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end
