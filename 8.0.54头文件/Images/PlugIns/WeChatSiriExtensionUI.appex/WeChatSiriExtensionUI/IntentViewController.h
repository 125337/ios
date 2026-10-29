@interface IntentViewController : UIViewController <INUIHostedViewSiriProviding, INUIHostedViewControlling>
{
    UIViewController * _currentViewController; // +0x8
    SRESpeakingViewController * _speakingViewController; // +0x10
    SREMessageViewController * _messageViewController; // +0x18
    SREResultViewController * _resultViewController; // +0x20
    UIImage * _backgroundImage; // +0x28
}
- (void)initService;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)showResultViewControllerWithIntent:(id)arg1;
- (void)showMessageViewControllerWithIntent:(id)arg1;
- (void)showSpeakingViewControllerWithIntent:(id)arg1;
- (id)viewControllerFromMainStoryBoardWithIdentifier:(id)arg1;
- (CGSize)desiredSize;
- (BOOL)displaysMessage;
- (void)setupBackgroundImageIfNeededWithIntent:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)speakingViewController;
- (void)setSpeakingViewController:(id)arg1;
- (id)messageViewController;
- (void)setMessageViewController:(id)arg1;
- (id)resultViewController;
- (void)setResultViewController:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void).cxx_destruct;
@end

