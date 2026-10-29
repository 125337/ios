@interface MMFinderLiveMicTalkingUsersCollectionCell : UICollectionViewCell
{
    BOOL _isSmallMode; // +0x8
    MMFinderLiveConnectMicUser * _micUser; // +0x10
    UIView * _infoContainerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _audioIconView; // +0x28
    PAGView * _volumeAnimationView; // +0x30
}
+ (id)identifier;
+ (double)cellLabelTextFontSize:(BOOL)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setMicUser:(id)arg1;
- (void)setIsSmallMode:(BOOL)arg1;
- (BOOL)isSmallMode;
- (id)micUser;
- (id)infoContainerView;
- (void)setInfoContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)audioIconView;
- (void)setAudioIconView:(id)arg1;
- (id)volumeAnimationView;
- (void)setVolumeAnimationView:(id)arg1;
- (void).cxx_destruct;
@end

