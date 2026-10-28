@interface LVPlayerDetailViewController : LVFlutterViewController
{
    BOOL _allowRotate; // +0x70
    BOOL _pendingMinimize; // +0x71
    MegaVideoPlayerDetailOpenParam * _openParam; // +0x78
    LVMinimizeContext * _minimizeContext; // +0x80
    UIView * _pushAnimationSnapshot; // +0x88
    UIView * _pushAnimationCardSnapshot; // +0x90
    UIView * _pushAnimationChannelListSnapshot; // +0x98
    NSString * _starId; // +0xa0
    NSString * _updatedSessionId; // +0xa8
}
+ (id)routeName;
+ (id)extraPlugins;
+ (id)createWithParam:(id)arg1 openParam:(id)arg2 player:(id)arg3;
- (BOOL)enterFromMinimize;
- (void)minimizeWithPlayerId:(id)arg1;
- (void)prepareMinimize:(id)arg1;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useTransparentNavibar;
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
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
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
- (id)starId;
- (void)setStarId:(id)arg1;
- (id)updatedSessionId;
- (void)setUpdatedSessionId:(id)arg1;
- (void).cxx_destruct;
@end
