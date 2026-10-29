@interface LVPlayerDetailViewController : LVFlutterViewController
{
    BOOL _allowRotate; // +0x68
    BOOL _pendingMinimize; // +0x69
    MegaVideoPlayerDetailOpenParam * _openParam; // +0x70
    LVMinimizeContext * _minimizeContext; // +0x78
    UIView * _pushAnimationSnapshot; // +0x80
    UIView * _pushAnimationCardSnapshot; // +0x88
    UIView * _pushAnimationChannelListSnapshot; // +0x90
    NSString * _updatedSessionId; // +0x98
}
+ (id)routeName;
+ (id)extraPlugins;
+ (id)createWithParam:(id)arg1 openParam:(id)arg2 player:(id)arg3;
- (BOOL)enterFromMinimize;
- (void)minimizeWithPlayerId:(id)arg1;
- (void)prepareMinimize:(id)arg1;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)forceLandscape;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (BOOL)allowRotate;
- (void)setAllowRotate:(BOOL)arg1;
- (id)minimizeContext;
- (void)setMinimizeContext:(id)arg1;
- (BOOL)pendingMinimize;
- (void)setPendingMinimize:(BOOL)arg1;
- (id)pushAnimationSnapshot;
- (void)setPushAnimationSnapshot:(id)arg1;
- (id)pushAnimationCardSnapshot;
- (void)setPushAnimationCardSnapshot:(id)arg1;
- (id)pushAnimationChannelListSnapshot;
- (void)setPushAnimationChannelListSnapshot:(id)arg1;
- (id)updatedSessionId;
- (void)setUpdatedSessionId:(id)arg1;
- (void).cxx_destruct;
@end

