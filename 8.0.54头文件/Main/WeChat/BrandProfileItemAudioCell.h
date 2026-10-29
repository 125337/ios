@interface BrandProfileItemAudioCell : BrandProfileItemBaseCell <IMusicPlayerExt, MMMusicPlayerContollerDelegate, TingFlowPlayerNotification>
{
    UIView * _audioBgView; // +0x8
    WCBrandAudioPlayView * _audioPlayView; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)initPlayView;
- (void)onUpdateViewModel;
- (void)updatePlayItem;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)audioBgView;
- (void)setAudioBgView:(id)arg1;
- (id)audioPlayView;
- (void)setAudioPlayView:(id)arg1;
- (void).cxx_destruct;
@end

