@interface ChatBotBaseVoIPViewController : ChatBotTransitionBaseViewController <ChatBotVoIPTalkingViewDelegate, IChatBotVoIPSessionDelegate, ChatBotTextInputViewDelegate>
{
    BOOL _isInRoom; // +0x70
    BOOL _hasJoinedRoom; // +0x71
    BOOL _hasVCPushOrPresented; // +0x72
    BOOL _shouldDeferStartSession; // +0x73
    BOOL _hasStartedSession; // +0x74
    id /* block */ _pendingVoiceCallCompletion; // +0x78
    UIImageView * _backgroundView; // +0x80
    ChatBotVoIPRoomInfo * _roomInfo; // +0x88
    UIView<CBTTalkingViewOptionalProtocol> * _talkingView; // +0x90
    ChatBotTextInputView * _textInputView; // +0x98
    double _keyboardHeight; // +0xa0
    id /* block */ _takePhotoHandle; // +0xa8
}
- (long long)reportInType;
- (void)setReportInType:(long long)arg1;
- (BOOL)hasReportedPageInForCurrentEntry;
- (void)setHasReportedPageInForCurrentEntry:(BOOL)arg1;
- (BOOL)didDisappearSinceLastPageIn;
- (void)setDidDisappearSinceLastPageIn:(BOOL)arg1;
- (id)init;
- (void)safeGuard;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (id)getRoomIdentifier;
- (void)dealloc;
- (void)fetchRoomInfo;
- (void)viewDidLoad;
- (void)initViews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutBackground;
- (id)getTalkingView;
- (id)getBackgroundView;
- (void)layoutTalkingView;
- (id)genStartSessionParams;
- (int)getOpenScene;
- (BOOL)needWelcomeEvent;
- (id)genAiCarryInfo;
- (void)startSession;
- (void)destroySession;
- (void)closeVCByCallEnd;
- (unsigned int)getChatbotVoIPScene;
- (void)interruptAISpeaking;
- (void)onTalkSucc;
- (void)onCallEnd;
- (void)onShowLinkErrMsg:(int)arg1 errorCode:(int)arg2;
- (void)close;
- (double)getContentViewLayoutTop;
- (void)setLocalViewRenderer:(id)arg1;
- (void)openTextInputMode;
- (void)onTakePhoto:(id /* block */)arg1;
- (id)getAIByPassInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (id)getBackgroundColorOfPoint:(CGPoint)arg1;
- (unsigned int)getCurrentVCVoIPScene;
- (void)registerKeyboardEvent;
- (void)unregisterKeyboardEvent;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateTextInputViewHeight;
- (void)onSendText:(id)arg1;
- (unsigned int)getUIState;
- (void)exitRoom:(id /* block */)arg1;
- (BOOL)shouldAllowPanGestureAtLocation:(CGPoint)arg1 forHandler:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onChatBotTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (BOOL)isInRoom;
- (void)setIsInRoom:(BOOL)arg1;
- (id /* block */)pendingVoiceCallCompletion;
- (void)setPendingVoiceCallCompletion:(id /* block */)arg1;
- (BOOL)hasJoinedRoom;
- (void)setHasJoinedRoom:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)talkingView;
- (void)setTalkingView:(id)arg1;
- (id)textInputView;
- (void)setTextInputView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)hasVCPushOrPresented;
- (void)setHasVCPushOrPresented:(BOOL)arg1;
- (BOOL)shouldDeferStartSession;
- (void)setShouldDeferStartSession:(BOOL)arg1;
- (BOOL)hasStartedSession;
- (void)setHasStartedSession:(BOOL)arg1;
- (id /* block */)takePhotoHandle;
- (void)setTakePhotoHandle:(id /* block */)arg1;
- (void).cxx_destruct;
@end
