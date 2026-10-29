@interface WCTimelineFlutterProfileViewController : MMFlutterViewController <SNSPluginDelegate, WCCommitViewAnimationDelegate, WCFinderShareAbstractCell, MMLiveMorphDismissTarget, MMLiveTaskMgrExt>
{
    CContact * _contact; // +0x70
    UIImage * _thumbSnapshot; // +0x78
    UIImageView * _transitionThumbView; // +0x80
    NSString * _currentFinderSnsId; // +0x88
    FlutterDetailApi * _detailCaller; // +0x90
    MMFlutterInstance * _instance; // +0x98
    CGRect _thumbScreenRect; // +0xa0
}
+ (id)createInstance;
+ (void)updateAffSnsObject:(id)arg1;
- (id)initWithContact:(id)arg1 source:(id)arg2;
- (id)initWithSearchSource:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (void)closeButtonTapped;
- (id)getPluginTopViewController;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onMinimizeInteractiveDidEnd:(id)arg1;
- (void)onCollapseAnimationDidEnd:(id)arg1;
- (void)_showLiveThumbIfNeeded:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (BOOL)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (void)onAnimatorWillBeginExpand:(id)arg1;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (CGRect)thumbScreenRect;
- (void)setThumbScreenRect:(CGRect)arg1;
- (id)thumbSnapshot;
- (void)setThumbSnapshot:(id)arg1;
- (id)transitionThumbView;
- (void)setTransitionThumbView:(id)arg1;
- (id)currentFinderSnsId;
- (void)setCurrentFinderSnsId:(id)arg1;
- (id)detailCaller;
- (void)setDetailCaller:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
