@interface WCVideoProducerMusicCardView : UICollectionViewCell <CAAnimationDelegate>
{
    UIView * _contentContainerView; // +0x8
    MMUIImageView * _musicIconView; // +0x10
    WCStoryLyricWaveView * _waveIconView; // +0x18
    UILabel * _titleLabelView; // +0x20
    WCMarqueeTextView * _lyricsMarqueeView; // +0x28
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadMusicCellViewModel:(id)arg1;
- (void)_startPlaying;
- (void)_stopPlaying;
- (void)_loadMusicTitle:(id)arg1;
- (void)_loadMusicDescription:(id)arg1;
- (void)_loadForAccessibility:(id)arg1;
- (void)_initView;
- (void)_initTopInfoBar;
- (void)_initDescriptionBar;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)waveIconView;
- (void)setWaveIconView:(id)arg1;
- (id)titleLabelView;
- (void)setTitleLabelView:(id)arg1;
- (id)lyricsMarqueeView;
- (void)setLyricsMarqueeView:(id)arg1;
- (void).cxx_destruct;
@end

