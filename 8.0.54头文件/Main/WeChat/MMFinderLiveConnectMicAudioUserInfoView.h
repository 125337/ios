@interface MMFinderLiveConnectMicAudioUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    PAGView * _volumeAnimationView; // +0x8
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
- (id)volumeAnimationView;
- (void)setVolumeAnimationView:(id)arg1;
- (void).cxx_destruct;
@end

