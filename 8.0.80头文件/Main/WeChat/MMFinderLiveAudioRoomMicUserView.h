@interface MMFinderLiveAudioRoomMicUserView : MMFinderLiveAudioRoomMicUserBaseView <MMFinderLiveRedPacketViewModelObserver>
{
    BOOL _forceShowPersonIcon; // +0x118
}
- (void)handleTapGesture:(id)arg1;
- (void)handleDoubleTapAtPoint:(CGPoint)arg1;
- (void)handleLongPressBegan;
- (void)handleLongPressEnded;
- (BOOL)shouldForceStopAudioWaveAnimation;
- (void)layoutAvatarContainerView;
- (void)configSeatSlotViews;
- (id)getIconImageForSeatSlot;
- (void)layoutSeatSlotViews;
- (void)updateUserAvatarViewImageAndHidden;
- (void)layoutUserAvatarView;
- (void)updateTitleLabelText;
- (void)onClickMicMutedButton;
- (void)updateMicMutedButtonHidden;
- (void)configTitleLabelAndMicMutedButton;
- (id)tagViewShadowColor;
- (id)tagViewBackgroundColor;
- (void)updateSeatNameLabelHiddenAndText;
- (BOOL)shouldCreateRedPacketView;
- (BOOL)shouldShowHeatValueWhenZero;
- (void)onTapHeatValue;
- (void)updateMicUserInfo:(id)arg1 seatInfo:(id)arg2 isAdminMode:(BOOL)arg3 audioRoomScene:(unsigned long long)arg4 locationName:(id)arg5 showLocation:(BOOL)arg6 showPersonIcon:(BOOL)arg7;
- (void)updateViewAfterSeatNameChanged;
- (void)updateViewAfterTalkingStatusChanged;
- (void)updateViewAfterMicMutedStatusChanged;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(BOOL)arg2;
- (BOOL)forceShowPersonIcon;
- (void)setForceShowPersonIcon:(BOOL)arg1;
@end
