@interface WCFinderProfileNativeDramaItemConfigurationView : UIView <UIContentView>
{
    WCFinderProfileNativeDramaItemConfiguration * _appliedConfiguration; // +0x8
    UIImageView * _coverImageView; // +0x10
    UIImageView * _stickyImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _episodeCountLabel; // +0x28
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (id)coverImageView;
- (id)stickyImageView;
- (id)titleLabel;
- (id)episodeCountLabel;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setStickyImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEpisodeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
