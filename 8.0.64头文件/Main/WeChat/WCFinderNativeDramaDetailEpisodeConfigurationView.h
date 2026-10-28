@interface WCFinderNativeDramaDetailEpisodeConfigurationView : UIView <UIContentView>
{
    WCFinderNativeDramaDetailEpisodeConfiguration * _appliedConfiguration; // +0x8
    UILabel * _episodeIndexLabel; // +0x10
    UIView * _lockBackgroundView; // +0x18
    UIImageView * _lockImageView; // +0x20
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)_updateStatusCanPlay;
- (void)_updateStatusLocked;
- (void)layoutSubviews;
- (id)episodeIndexLabel;
- (id)lockBackgroundView;
- (id)lockImageView;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setEpisodeIndexLabel:(id)arg1;
- (void)setLockBackgroundView:(id)arg1;
- (void)setLockImageView:(id)arg1;
- (void).cxx_destruct;
@end
