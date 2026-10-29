@interface BTAudioItemCellView : BTReaderItemCellView <MMUIViewControllerExt, IAudioReceiverExt, IMusicPlayerExt, MMMusicPlayerContollerDelegate, TingFlowPlayerNotification>
{
    WCBrandAudioPlayView * m_audioPlayView; // +0x38
    MMUILabel * m_timeLabel; // +0x40
    UIView * m_containView; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (void)initTopReaderItem;
- (void)initContainView;
- (void)initCoverView;
- (void)initNormalReaderItem;
- (void)initPlayView;
- (void)initTitleAndTimeLabel;
- (void)initTitleView;
- (void)initFriendsReadLabel;
- (id)getFriendRelatedInfoTextColor;
- (void)onUpdateViewModel;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (void)StopPlay;
- (id)getChatName:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)audioPlayClicked;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end

