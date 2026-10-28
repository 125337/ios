@interface VoIPBubbleMessageCellView : CommonMessageCellView
{
    UIView * m_unreadImageView; // +0xb0
}
- (void)layoutContentView;
- (void)updateStatus;
- (void)onTouchUpInside;
- (void)onClicked;
- (void)tapVoiceVoipNodeView;
- (void)startVoiceVoip;
- (void)tapVoipNodeView;
- (void)startVideoVoip;
- (void).cxx_destruct;
@end
