@interface TextStatePublishFlutterViewController : MMFlutterViewController <UIGestureRecognizerDelegate>
{
    BOOL _isHandlingEdgeGesturePop; // +0x70
    unsigned int _enterScene; // +0x74
    int _publish2ndScene; // +0x78
    NSDictionary * _attachInfo; // +0x80
    NSString * _sessionId; // +0x88
    TextStatePublishConfiguration * _configuration; // +0x90
    MMFlutterInstance * _instance; // +0x98
    NSArray * _preSelectedMediaItems; // +0xa0
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xa8
}
- (id)initWithSourceInfo:(id)arg1 preSelectedMediaItems:(id)arg2 preSelectedIcon:(id)arg3 recommendIconGroups:(id)arg4 enterScene:(unsigned int)arg5 sessionId:(id)arg6 publish2ndScene:(int)arg7;
- (id)initWithSourceInfo:(id)arg1 preSelectedMediaItems:(id)arg2 preSelectedIcon:(id)arg3 recommendIconGroups:(id)arg4 enterScene:(unsigned int)arg5 sessionId:(id)arg6 publish2ndScene:(int)arg7 needEditStatusInfo:(id)arg8 preSelectedBigEmoji:(id)arg9;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldInteractiveDismiss;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initEdgeGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (int)publish2ndScene;
- (void)setPublish2ndScene:(int)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)preSelectedMediaItems;
- (void)setPreSelectedMediaItems:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (BOOL)isHandlingEdgeGesturePop;
- (void)setIsHandlingEdgeGesturePop:(BOOL)arg1;
- (void).cxx_destruct;
@end
