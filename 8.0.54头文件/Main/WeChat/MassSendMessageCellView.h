@interface MassSendMessageCellView : BaseMessageCellView <IAudioReceiverExt, MMRTCMenuResponderDelegate, MMRichTextSelectEventDelegate, MsgImgFullScreenTransitionObject>
{
    MassSendBodyContainerView * m_bodyContainerView; // +0x28
    UIView * m_bodyView; // +0x30
    UIView * m_separatorView; // +0x38
    UILabel * m_receiverLabel; // +0x40
    UIButton * m_sendAgainBtn; // +0x48
    UIView * m_maskImageView; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (void)setHighlighted:(BOOL)arg1;
- (void)highlightMsgAnimated;
- (void)showOperationMenu;
- (void)onAppear;
- (void)initReceiverLabel;
- (void)initSendAgainButton;
- (void)initMaskImageView;
- (void)initBodyContainerView;
- (void)initBodyView;
- (id)FormTextView;
- (id)FormImageView;
- (id)FormVoiceView;
- (id)FormVideoView;
- (id)FormEmoticonView;
- (id)FormFinderContentView;
- (void)onImageClicked;
- (void)onVideoClicked;
- (void)onVoiceClicked;
- (void)onEmoticonClicked;
- (void)onFinderClicked;
- (void)onSendAgain:(id)arg1;
- (void)onLongTouch:(CGPoint)arg1;
- (void)onLongPressWithRichTextCoverView;
- (void)stopAudioPlaying;
- (void)OnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onRichTextViewExit;
- (id)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (id)getViewController;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)arg1;
- (void).cxx_destruct;
@end

