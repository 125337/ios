@interface WCFinderMinimizeFloatingStateView : UIView
{
    long long _state; // +0x8
    long long _playType; // +0x10
    UILabel * _label; // +0x18
    UIImageView * _iconView; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    WCFinderMinimizeFloatingAudioOnlyView * _audioOnlyView; // +0x30
}
- (void)setState:(long long)arg1;
- (void)setPlayType:(long long)arg1;
- (void)updateUI;
- (void)layoutSubviews;
- (void)switchPlayType;
- (id)label;
- (id)iconView;
- (id)loadingView;
- (id)audioOnlyView;
- (long long)state;
- (long long)playType;
- (void)setLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setAudioOnlyView:(id)arg1;
- (void).cxx_destruct;
@end
