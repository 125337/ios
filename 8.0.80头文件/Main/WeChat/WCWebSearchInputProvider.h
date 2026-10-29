@interface WCWebSearchInputProvider : NSObject <FTSVoiceHijackOverlayViewDelegate, SearchVoiceInputViewControllerDelegate, FTSFloatingVoiceInputViewDelegate, IStreamVoiceInputExt, FTSWebSearchAdViewDelegate, FTSFloatingVoiceInputModeSwitchViewDelegate, MMUIHalfScreenViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _isHalfPageVCFromNative; // +0x8
    unsigned int _searchScene; // +0xc
    id <WSInputProviderDelegate> _delegate; // +0x10
    NSString * _searchSessionId; // +0x18
    id <WSWebViewPluginableProtocol> _webViewOwner; // +0x20
    unsigned long long _buttonType; // +0x28
    FTSContext * _ftsContext; // +0x30
    NSMutableDictionary * _delayTasks; // +0x38
    unsigned long long _scene; // +0x40
    MMUIHalfScreenViewController * _halfPageVC; // +0x48
    SearchVoiceInputViewController * _searchVoiceInputViewController; // +0x50
    UIViewController * _viewController; // +0x58
    StreamVoiceInputLogic * _curInputLogic; // +0x60
    NSString * _lastResultText; // +0x68
    unsigned long long _currVoiceStatus; // +0x70
    FTSFloatingVoiceInputView * _floatingVoiceInputView; // +0x78
    FTSFloatingVoiceInputView * _halfPageFloatingVoiceInputView; // +0x80
    unsigned long long _sceneType; // +0x88
    FTSFloatingVoiceInputView * _currentActiveVoiceView; // +0x90
}
- (id)hijackOverlay;
- (void)setHijackOverlay:(id)arg1;
- (id)hijackVoiceInputView;
- (void)setHijackVoiceInputView:(id)arg1;
- (id)hijackThirdExtInfo;
- (void)setHijackThirdExtInfo:(id)arg1;
- (void)enableWebInputVoiceHijackWithParams:(id)arg1;
- (void)disableWebInputVoiceHijack;
- (void)updateWebInputVoiceHijackHotRegionWithParams:(id)arg1;
- (void)setWebInputVoiceHijackEnabledWithParams:(id)arg1;
- (CGRect)convertHotRegionFromParams:(id)arg1 viewController:(id)arg2;
- (void)ftsVoiceHijackOverlayView:(id)arg1 didChangeState:(long long)arg2 locationInWindow:(CGPoint)arg3;
- (id)ensureHijackVoiceInputView;
- (id)initWithViewController:(id)arg1 scene:(unsigned long long)arg2;
- (void)dealloc;
- (id)genNavInputButton;
- (id)genNavInputButton:(CGSize)arg1;
- (id)genNavInputButton:(unsigned long long)arg1 size:(CGSize)arg2;
- (id)genCustomButton:(id)arg1 iconName:(id)arg2 size:(CGSize)arg3;
- (id)genAISearchButton:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)genAISearchV2Button:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)genAdV2Button:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)genAdButtonWithAdInfo:(id)arg1 adViewDelegate:(id)arg2;
- (id)genCameraInputButton:(CGSize)arg1;
- (id)genVoiceInputButton:(CGSize)arg1;
- (void)onClickButtonForCamera;
- (void)onClickButtonForVoice;
- (void)startNativeVoiceInput:(id)arg1;
- (void)onTapHalfPageContentBackgroundDismiss;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cleanupHalfPageVoiceInputAndDismiss:(BOOL)arg1;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)showNativeVoiceInputEntry:(id)arg1;
- (void)showNativeVoiceInputModeSwitchEntry:(id)arg1;
- (void)hideNativeVoiceInputEntry;
- (void)startNativeVoiceInputV2:(id)arg1;
- (void)removeNativeVoiceInputV2;
- (void)startVoiceInputProcess:(BOOL)arg1;
- (void)handleTaskWithID:(id)arg1;
- (void)addDelayedTaskWithID:(id)arg1 delay:(double)arg2;
- (void)cancelTaskWithID:(id)arg1;
- (void)cancelAllTask;
- (void)startStreamVoiceInput:(long long)arg1 vadSAndNRation:(float)arg2 setLangBySystem:(BOOL)arg3;
- (void)tryStartVoiceInput:(long long)arg1 vadSAndNRation:(float)arg2 setLangBySystem:(BOOL)arg3;
- (void)stopStreamVoiceInput;
- (void)cancelStreamVoiceInput;
- (void)doCancel;
- (void)tryShowStreamVoiceInputViewController:(BOOL)arg1;
- (void)animateShowVoiceInputController;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onConfirmSearch:(id)arg1 voiceId:(id)arg2;
- (void)onClickKeyboard;
- (void)onClickKeyboardForBottomToggle;
- (void)onGestureStart:(BOOL)arg1;
- (void)onClickEmptySpaceHide;
- (void)onCloseH5HalfScreenInput;
- (void)onVoiceInputStart;
- (void)onVoiceInputStop:(BOOL)arg1;
- (void)modeSwitchView:(id)arg1 didSwitchToMode:(long long)arg2;
- (void)modeSwitchViewDidClickUploadButton:(id)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)notifyStreamVoiceInputViewCompletion;
- (void)notifyStreamVoiceInputStart:(BOOL)arg1;
- (void)notifyStreamVoiceClickKeyboard;
- (void)notifyStreamVoiceOnShowDialog;
- (void)notifyStreamVoiceOnHideDialog;
- (void)notifyStreamVoiceOnClose;
- (void)notifyStreamVoiceBottomToggleKeyboard;
- (void)notifyStreamVoiceInputData:(id)arg1;
- (void)notifyStreamVoiceSearch:(id)arg1 isFromHalfPage:(BOOL)arg2 voiceId:(id)arg3;
- (void)notifyStreamVoiceInputEnd;
- (void)notifyStreamVoiceInputStop;
- (void)notifyStreamVoiceInputCancel;
- (void)notifyStreamVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (void)notifyStreamVoiceInputStatus:(id)arg1;
- (void)notifyStreamVoiceModeSwitch:(long long)arg1;
- (void)notifyStreamVoiceUploadClick;
- (double)ftsVoiceInputViewHeight:(double)arg1 bottomSpace:(double)arg2;
- (void)configBottomAiContinue:(id)arg1;
- (void)startActionTriggerShimmerAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (id)webViewOwner;
- (void)setWebViewOwner:(id)arg1;
- (unsigned long long)buttonType;
- (void)setButtonType:(unsigned long long)arg1;
- (id)ftsContext;
- (void)setFtsContext:(id)arg1;
- (id)delayTasks;
- (void)setDelayTasks:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)halfPageVC;
- (void)setHalfPageVC:(id)arg1;
- (id)searchVoiceInputViewController;
- (void)setSearchVoiceInputViewController:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)curInputLogic;
- (void)setCurInputLogic:(id)arg1;
- (id)lastResultText;
- (void)setLastResultText:(id)arg1;
- (unsigned long long)currVoiceStatus;
- (void)setCurrVoiceStatus:(unsigned long long)arg1;
- (id)floatingVoiceInputView;
- (void)setFloatingVoiceInputView:(id)arg1;
- (id)halfPageFloatingVoiceInputView;
- (void)setHalfPageFloatingVoiceInputView:(id)arg1;
- (BOOL)isHalfPageVCFromNative;
- (void)setIsHalfPageVCFromNative:(BOOL)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (id)currentActiveVoiceView;
- (void)setCurrentActiveVoiceView:(id)arg1;
- (void).cxx_destruct;
@end
