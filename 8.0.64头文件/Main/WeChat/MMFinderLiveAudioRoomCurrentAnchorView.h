@interface MMFinderLiveAudioRoomCurrentAnchorView : MMFinderLiveAudioRoomMicUserBaseView
{
    WCFinderContact * _anchorContact; // +0x108
}
- (void)handleTapGesture:(id)arg1;
- (void)layoutAvatarContainerView;
- (void)configUserAvatarView;
- (void)layoutUserAvatarView;
- (void)updateTitleLabelText;
- (void)configTitleLabelAndMicMutedButton;
- (void)onClickMicMutedButton;
- (void)updateAnchorMicMutedButtonHidden;
- (void)updateAnchorMicMutedButtonHiddenWithLayoutFlag:(BOOL)arg1;
- (id)tagLabelTextColor;
- (id)tagViewShadowColor;
- (void)updateSeatNameLabelHiddenAndText;
- (void)onTapHeatValue;
- (void)configWithAnchorContact:(id)arg1;
- (void)updateAnchorContact:(id)arg1;
- (void)updateMicUserInfo:(id)arg1 locationName:(id)arg2 showLocation:(BOOL)arg3;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (void).cxx_destruct;
@end
