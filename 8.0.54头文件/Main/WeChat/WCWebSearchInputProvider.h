@interface WCWebSearchInputProvider : NSObject <SearchVoiceInputViewControllerDelegate>
{
    unsigned int _searchScene; // +0x8
    id <WSInputProviderDelegate> _delegate; // +0x10
    NSString * _searchSessionId; // +0x18
    id <WSWebViewPluginableProtocol> _webViewOwner; // +0x20
    unsigned long long _buttonType; // +0x28
    unsigned long long _scene; // +0x30
    SearchVoiceInputViewController * _searchVoiceInputViewController; // +0x38
    UIViewController * _viewController; // +0x40
}
- (id)initWithViewController:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)initiativeImageSearchEnabled;
- (id)extraInputButtonImageName;
- (id)genNavInputButton;
- (id)genNormalInputButton;
- (void)onClickButton;
- (void)startVoiceInputProcess;
- (void)tryShowStreamVoiceInputViewController;
- (void)animateShowVoiceInputController;
- (void)onVoiceInputEndWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
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
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)searchVoiceInputViewController;
- (void)setSearchVoiceInputViewController:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

