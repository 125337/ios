@interface ChatBotBaseVoIPViewController : MMUIViewController <MiniTaskTransitionAnimationDelegate, MiniTaskPanGestureHandlerDelegate, ChatBotVoIPTalkingViewDelegate, IChatBotVoIPExt, ChatBotTextInputViewDelegate>
{
    BOOL _disableLeftPanGes; // +0x70
    ChatBotVoIPViewControllerContext * _context; // +0x78
    MiniTaskPanGestureHandler * _leftPanPopGestureHandler; // +0x80
    ChatBotBlurImageView * _fakeMainFrameSnapshotView; // +0x88
    UIView * _fakeSnapshotShadowView; // +0x90
    MMUIButton * _fakeSnapshotMaskView; // +0x98
    unsigned long long _roomId; // +0xa0
    UIImageView * _backgroundView; // +0xa8
    ChatBotVoIPRoomInfo * _roomInfo; // +0xb0
    ChatBotVoIPTalkingView * _talkingView; // +0xb8
    ChatBotTextInputView * _textInputView; // +0xc0
    double _keyboardHeight; // +0xc8
    id /* block */ _takePhotoHandle; // +0xd0
}
- (void)setupFakeSnapshot;
- (void)onFakeSnapshotClicked;
- (void)setupLeftPanGestureHandler;
- (void)onEnterWithNewContext:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (BOOL)shouldMiniInteractiveTransitionReceiveTouch:(id)arg1 PanGesture:(id)arg2;
- (void)onTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (id)init;
- (void)safeGuard;
- (id)getRoomIdentifier;
- (void)dealloc;
- (unsigned long long)getRoomId;
- (void)fetchRoomInfo;
- (void)viewDidLoad;
- (void)initViews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutBackground;
- (void)initNavigationItems;
- (id)getTalkingView;
- (id)getBackgroundView;
- (void)layoutTalkingView;
- (id)genJoinRoomParams;
- (void)joinRoom;
- (void)hangup;
- (void)checkNeedCaptureFrameDataToServer:(id /* block */)arg1;
- (void)closeVCByCallEnd;
- (unsigned int)getChatbotVoIPScene;
- (void)interruptAISpeaking;
- (void)onTalkSuccWithRoomID:(unsigned long long)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)close;
- (double)getContentViewLayoutTop;
- (void)setLocalViewRenderer:(id)arg1;
- (void)openTextInputMode;
- (void)onTakePhoto:(id /* block */)arg1;
- (id)getAIByPassInfo;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)registerKeyboardEvent;
- (void)unregisterKeyboardEvent;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateTextInputViewHeight;
- (void)onSendText:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)disableLeftPanGes;
- (void)setDisableLeftPanGes:(BOOL)arg1;
- (id)leftPanPopGestureHandler;
- (void)setLeftPanPopGestureHandler:(id)arg1;
- (id)fakeMainFrameSnapshotView;
- (void)setFakeMainFrameSnapshotView:(id)arg1;
- (id)fakeSnapshotShadowView;
- (void)setFakeSnapshotShadowView:(id)arg1;
- (id)fakeSnapshotMaskView;
- (void)setFakeSnapshotMaskView:(id)arg1;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
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
- (id /* block */)takePhotoHandle;
- (void)setTakePhotoHandle:(id /* block */)arg1;
- (void).cxx_destruct;
@end
