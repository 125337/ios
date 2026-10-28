@interface WASMPageSheetAudioListItemView : WCTSettingSwitchView
{
    UIButton * _audioButton; // +0x8
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)loadUI:(id)arg1;
- (id)audioButton;
- (void)setAudioButton:(id)arg1;
- (void).cxx_destruct;
@end
