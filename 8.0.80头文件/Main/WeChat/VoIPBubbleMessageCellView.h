@interface VoIPBubbleMessageCellView : CommonMessageCellView
{
    UIView * m_unreadImageView; // +0xb8
}
- (void)onAppear;
- (void)reportMissedCallBubbleExposure;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onTouchUpInside;
- (void)onClicked;
- (void)tapVoiceVoipNodeView;
- (id)retainCustomInfoForVoIPReport;
- (void)startVoiceVoip;
- (void)tapVoipNodeView;
- (void)startVideoVoip;
- (void).cxx_destruct;
@end
