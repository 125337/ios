@interface MMFinderLiveKTVAudioEffectSettingCell : WCTableViewNormalCellManager
{
    MMFinderLiveKTVAudioEffectSettingUserInfo * _customUserInfo; // +0x8
    MMUIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UISlider * _slider; // +0x20
    UICollectionView * _reverbCollectionView; // +0x28
}
- (id)initWithSize:(CGSize)arg1 userInfo:(id)arg2;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initSliderValue;
- (void)sliderValueChanged:(id)arg1;
- (void)layoutUI;
- (id)liveTask;
- (CGRect)getSliderDotArea;
- (id)customUserInfo;
- (void)setCustomUserInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)reverbCollectionView;
- (void)setReverbCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
