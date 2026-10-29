@interface WASpecializedAgentSheetView : UIView <WASpecializedAgentContentViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isDragging; // +0x8
    BOOL _dimmingDismissingKeyboard; // +0x9
    BOOL _sheetHiddenByExternalKeyboard; // +0xa
    BOOL _isDarkModeEnabled; // +0xb
    unsigned long long _state; // +0x10
    WASpecializedAgentContentView * _contentView; // +0x18
    id <WASpecializedAgentSheetViewDelegate> _sheetDelegate; // +0x20
    id _sheetDelegateRetainer; // +0x28
    UIView * _sheetContainer; // +0x30
    UIView * _contentClipper; // +0x38
    UIView * _handleBar; // +0x40
    UIView * _handleIndicator; // +0x48
    UIPanGestureRecognizer * _handlePanGesture; // +0x50
    unsigned long long _dragStartState; // +0x58
    UILongPressGestureRecognizer * _dimmingTouch; // +0x60
    UIScreenEdgePanGestureRecognizer * _edgeShrinkPan; // +0x68
    UIView * _recordingDimmingView; // +0x70
    CAGradientLayer * _recordingDimmingGradient; // +0x78
    UITapGestureRecognizer * _thinkingExpandTap; // +0x80
    unsigned long long _previousStateBeforeInputActive; // +0x88
    unsigned long long _stateBeforeVoiceRecord; // +0x90
    double _keyboardOverlap; // +0x98
    double _lastContainerWidth; // +0xa0
    CGRect _dragStartContainerFrame; // +0xa8
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (double)currentInputPanelHeight;
- (double)attachmentOverlap;
- (double)chatAreaHeightForState:(unsigned long long)arg1;
- (double)fullStateTopY;
- (CGRect)capsuleAreaFrame;
- (void)setState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)syncHostGestureBlockingFlag;
- (void)applyChatInteractionForState:(unsigned long long)arg1;
- (void)applyInputPanelBottomPaddingForState:(unsigned long long)arg1;
- (BOOL)isSilentInputState;
- (void)applyChromeAppearance;
- (void)showRecordingDimmingOverlay;
- (void)hideRecordingDimmingOverlay;
- (void)onHandleBarPanned:(id)arg1;
- (void)onEdgeShrinkPanned:(id)arg1;
- (void)applyDragWithGestureState:(long long)arg1 translationY:(double)arg2 velocityY:(double)arg3;
- (long long)dragLevelIndexForState:(unsigned long long)arg1;
- (unsigned long long)stateForDragLevelIndex:(long long)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)adjustForKeyboardNotification:(id)arg1 visible:(BOOL)arg2;
- (double)keyboardOverlapFromNotification:(id)arg1;
- (id)findFirstResponderInView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onDimmingAreaTouched:(id)arg1;
- (void)onThinkingExpandTapped:(id)arg1;
- (BOOL)isKeyboardVisible;
- (void)showInterruptThinkingTips;
- (id)agentContext;
- (void)setAgentContext:(id)arg1;
- (unsigned long long)openAgentScene;
- (void)setOpenAgentScene:(unsigned long long)arg1;
- (BOOL)isColdLaunch;
- (void)setIsColdLaunch:(BOOL)arg1;
- (void)show;
- (void)hide;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2 openAgentScene:(unsigned long long)arg3;
- (void)contentViewDidRequestClose:(id)arg1;
- (void)contentView:(id)arg1 setEdgePanGestureEnabled:(BOOL)arg2;
- (void)contentViewDidFireContextReady:(id)arg1;
- (void)contentView:(id)arg1 setAgentLoadingDisplayed:(BOOL)arg2;
- (void)contentViewDidUserSendMessage:(id)arg1;
- (void)contentViewDidReceiveAgentContent:(id)arg1;
- (void)contentViewDidUpdateThinkingContent:(id)arg1;
- (void)contentViewDidTapThinkingExpand:(id)arg1;
- (void)contentViewDidStartVoiceRecord:(id)arg1;
- (void)contentViewDidTapPlusButton:(id)arg1;
- (void)contentViewDidEndVoiceRecord:(id)arg1 cancelled:(BOOL)arg2;
- (void)routeToRelativePath:(id)arg1 forTask:(id)arg2 scene:(unsigned long long)arg3 handoffId:(id)arg4 handoff:(id)arg5;
- (void)contentView:(id)arg1 didReceiveCardRelatedPageUpdateForAppId:(id)arg2 path:(id)arg3 envVersion:(id)arg4;
- (void)contentView:(id)arg1 didTapThinkingLinkURL:(id)arg2;
- (void)contentView:(id)arg1 didTapMiniAppLinkWithAppId:(id)arg2 path:(id)arg3 linkContent:(id)arg4;
- (void)contentView:(id)arg1 didTapWeAppCardWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4 handoffId:(id)arg5 handoff:(id)arg6;
- (void)contentView:(id)arg1 didAutoJumpWeAppCardWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4 handoffId:(id)arg5 handoff:(id)arg6;
- (void)openWeAppCardWithAppId:(id)arg1 path:(id)arg2 debugMode:(unsigned long long)arg3 handoffId:(id)arg4 handoff:(id)arg5;
- (void)contentView:(id)arg1 didTapExpandButtonWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)sheetDelegate;
- (void)setSheetDelegate:(id)arg1;
- (id)sheetDelegateRetainer;
- (void)setSheetDelegateRetainer:(id)arg1;
- (id)sheetContainer;
- (void)setSheetContainer:(id)arg1;
- (id)contentClipper;
- (void)setContentClipper:(id)arg1;
- (id)handleBar;
- (void)setHandleBar:(id)arg1;
- (id)handleIndicator;
- (void)setHandleIndicator:(id)arg1;
- (id)handlePanGesture;
- (void)setHandlePanGesture:(id)arg1;
- (unsigned long long)dragStartState;
- (void)setDragStartState:(unsigned long long)arg1;
- (CGRect)dragStartContainerFrame;
- (void)setDragStartContainerFrame:(CGRect)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (id)dimmingTouch;
- (void)setDimmingTouch:(id)arg1;
- (id)edgeShrinkPan;
- (void)setEdgeShrinkPan:(id)arg1;
- (id)recordingDimmingView;
- (void)setRecordingDimmingView:(id)arg1;
- (id)recordingDimmingGradient;
- (void)setRecordingDimmingGradient:(id)arg1;
- (id)thinkingExpandTap;
- (void)setThinkingExpandTap:(id)arg1;
- (unsigned long long)previousStateBeforeInputActive;
- (void)setPreviousStateBeforeInputActive:(unsigned long long)arg1;
- (unsigned long long)stateBeforeVoiceRecord;
- (void)setStateBeforeVoiceRecord:(unsigned long long)arg1;
- (BOOL)dimmingDismissingKeyboard;
- (void)setDimmingDismissingKeyboard:(BOOL)arg1;
- (double)keyboardOverlap;
- (void)setKeyboardOverlap:(double)arg1;
- (double)lastContainerWidth;
- (void)setLastContainerWidth:(double)arg1;
- (BOOL)sheetHiddenByExternalKeyboard;
- (void)setSheetHiddenByExternalKeyboard:(BOOL)arg1;
- (BOOL)isDarkModeEnabled;
- (void)setIsDarkModeEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
