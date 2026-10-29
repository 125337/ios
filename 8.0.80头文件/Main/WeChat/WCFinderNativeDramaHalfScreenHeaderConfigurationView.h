@interface WCFinderNativeDramaHalfScreenHeaderConfigurationView : UIView <UIContentView>
{
    WCFinderNativeDramaHalfScreenHeaderConfiguration * _appliedConfiguration; // +0x8
    UIImageView * _coverImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descriptionLabel; // +0x20
    UIImageView * _moreButton; // +0x28
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)_onTapMoreButton;
- (id)coverImageView;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)moreButton;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
