@interface WCWebSearchInputProvider : NSObject <SearchVoiceInputViewControllerDelegate, FTSFloatingVoiceInputViewDelegate, IStreamVoiceInputExt, FTSWebSearchAdViewDelegate>
{
    BOOL _isHalfPageVCFromNative; // +0x8
    unsigned int _searchScene; // +0xc
    id <WSInputProviderDelegate> _delegate; // +0x10
    NSString * _searchSessionId; // +0x18
    id <WSWebViewPluginableProtocol> _webViewOwner; // +0x20
    unsigned long long _buttonType; // +0x28
    NSMutableDictionary * _delayTasks; // +0x30
    unsigned long long _scene; // +0x38
    MMUIHalfScreenViewController * _halfPageVC; // +0x40
    SearchVoiceInputViewController * _searchVoiceInputViewController; // +0x48
    UIViewController * _viewController; // +0x50
    StreamVoiceInputLogic * _curInputLogic; // +0x58
    NSString * _lastResultText; // +0x60
    unsigned long long _currVoiceStatus; // +0x68
    FTSFloatingVoiceInputView * _floatingVoiceInputView; // +0x70
    unsigned long long _sceneType; // +0x78
}
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
- (void)startNativeVoiceInput:(BOOL)arg1;
- (void)showNativeVoiceInputEntry:(unsigned long long)arg1;
- (void)hideNativeVoiceInputEntry;
- (void)startVoiceInputProcess;
- (void)handleTaskWithID:(id)arg1;
- (void)addDelayedTaskWithID:(id)arg1 delay:(double)arg2;
- (void)cancelTaskWithID:(id)arg1;
- (void)cancelAllTask;
- (void)startStreamVoiceInput:(long long)arg1 vadSAndNRation:(float)arg2 setLangBySystem:(BOOL)arg3;
- (void)tryStartVoiceInput:(long long)arg1 vadSAndNRation:(float)arg2 setLangBySystem:(BOOL)arg3;
- (void)stopStreamVoiceInput;
- (void)cancelStreamVoiceInput;
- (void)doCancel;
- (void)tryShowStreamVoiceInputViewController;
- (void)animateShowVoiceInputController;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onConfirmSearch:(id)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)notifyStreamVoiceInputStart;
- (void)notifyStreamVoiceInputData:(id)arg1;
- (void)notifyStreamVoiceSearch:(id)arg1 isFromHalfPage:(BOOL)arg2;
- (void)notifyStreamVoiceInputEnd;
- (void)notifyStreamVoiceInputStop;
- (void)notifyStreamVoiceInputCancel;
- (void)notifyStreamVoiceInputError:(unsigned long long)arg1 errMsg:(id)arg2;
- (void)notifyStreamVoiceInputStatus:(id)arg1;
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
- (BOOL)isHalfPageVCFromNative;
- (void)setIsHalfPageVCFromNative:(BOOL)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
