@interface MMFinderLiveConnectMicAudioUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    BOOL _showsLikeButton; // +0x8
    PAGView * _volumeAnimationView; // +0x10
}
- (void)setConfigureLiveDirtyHandle:(BOOL)arg1;
- (void)show;
- (void)configVolumeAnimationView;
- (void)updateHeadImageViewSize;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (unsigned long long)viewType;
- (CGRect)displayNormalizedFrame;
- (void)layoutUI;
- (id)layoutParametersForBigFormFactor;
- (id)layoutParametersForMediumFormFactor;
- (id)layoutParametersForMultiUsersMediumFormFactor;
- (id)layoutParametersForSmallFormFactor;
- (id)layoutParametersForLeadModeSmallFormFactor;
- (void)configureHeadImageViewLiveDirtyHandle;
- (void)configureNicknameLabelLiveDirtyHandle;
- (void)updateMicMutedButtonAppearance;
- (void)didMoveToSuperview;
- (id)volumeAnimationView;
- (void)setVolumeAnimationView:(id)arg1;
- (BOOL)showsLikeButton;
- (void)setShowsLikeButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
