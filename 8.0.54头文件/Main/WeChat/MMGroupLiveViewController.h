@interface MMGroupLiveViewController : MMLiveViewController <MMGroupLiveLogicDelegate, MMLiveFullScreenTipsViewDelegate, MMLiveNameVerifyViewControllerDelegate, MMUIViewControllerExt>
{
    MMGroupLiveOnlineUserProfileView * _profileView; // +0x68
    MMLiveFullScreenTipsView * _kickedOutTipsView; // +0x70
    long long _orientationBeforeMinimize; // +0x78
    long long _previousOrientation; // +0x80
    NSString * _lastFromVC; // +0x88
}
- (void)initData;
- (void)initLiveLogic;
- (void)initReporter;
- (BOOL)shouldSupportLandScape;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutOperationView;
- (id)createOperationView;
- (id)createCompleteViewController;
- (void)showLiveStarterViewController;
- (id)roomId;
- (long long)roleType;
- (void)createLive:(id)arg1;
- (id)liveTask;
- (void)gotoUserProfile:(id)arg1 isAnchorHeadImage:(BOOL)arg2;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)viewDidTransitionToNewSize;
- (void)onWillTransitionToMinimize;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (unsigned long long)systemCapabilityAuthScene;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCreateLive:(id)arg1;
- (void)onJoinLive:(id)arg1;
- (void)onStartCheckConnectMicWithVerifyUrl:(id)arg1;
- (void)onStartCheckCreateLiveWithVerifyUrl:(id)arg1;
- (void)onKickedOut;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)arg1;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (id)profileView;
- (void)setProfileView:(id)arg1;
- (id)kickedOutTipsView;
- (void)setKickedOutTipsView:(id)arg1;
- (long long)orientationBeforeMinimize;
- (void)setOrientationBeforeMinimize:(long long)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (id)lastFromVC;
- (void)setLastFromVC:(id)arg1;
- (void).cxx_destruct;
@end

