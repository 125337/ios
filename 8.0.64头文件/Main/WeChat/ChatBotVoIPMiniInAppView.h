@interface ChatBotVoIPMiniInAppView : UIView <MMTransparentButtonDelegate>
{
    id <ChatBotVoIPMiniInAppViewDelegate> _delegate; // +0x8
    ChatBotVoIPRoomInfo * _roomInfo; // +0x10
    UIView * _mainView; // +0x18
    MMHeadImageView * _headImageView; // +0x20
    MMHeadImageView * _talkingHeadImageView; // +0x28
    MMTransparentButton * _chatBotVoiceInputBtn; // +0x30
    MMUIButton * _hangupBtn; // +0x38
    VoIPHeadImageBlurView * _remoteHeadImageBlurView; // +0x40
    UIButton * _mainButton; // +0x48
}
+ (CGSize)contentViewSize;
- (id)initWithRoomInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onMainButtonClick:(id)arg1;
- (void)layoutChatBotMainButton;
- (void)layoutContentView;
- (void)layoutChatBotHangupBtn;
- (void)hangup;
- (void)layoutChatBotHeadImageView;
- (void)layoutChatBotHeadImageBlurView;
- (void)layoutChatBotVoiceInputView;
- (id)getInputBtn;
- (void)openMic;
- (void)closeMic;
- (void)initTalkingHeadImageView;
- (void)updateTalkingInfo:(id)arg1;
- (void)checkTalkingMember;
- (void)updateTalkingHeadImageViewWithMemberId:(id)arg1;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)talkingHeadImageView;
- (void)setTalkingHeadImageView:(id)arg1;
- (id)chatBotVoiceInputBtn;
- (void)setChatBotVoiceInputBtn:(id)arg1;
- (id)hangupBtn;
- (void)setHangupBtn:(id)arg1;
- (id)remoteHeadImageBlurView;
- (void)setRemoteHeadImageBlurView:(id)arg1;
- (id)mainButton;
- (void)setMainButton:(id)arg1;
- (void).cxx_destruct;
@end
