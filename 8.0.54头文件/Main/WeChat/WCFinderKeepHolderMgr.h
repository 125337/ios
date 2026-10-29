@interface WCFinderKeepHolderMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, MMServiceProtocol>
{
    NSMutableDictionary * _loadingImageDict; // +0x8
    NSMutableDictionary * _loadingImageAnimationDict; // +0x10
}
+ (BOOL)shouldMinimizeWithTLRecFinderCardData:(id)arg1;
- (id)createAnimation:(BOOL)arg1 forVC:(id)arg2;
- (id)keepHoldDelegateFromVC:(id)arg1;
- (void)onTransitionTriggerMininize:(id)arg1 userInfo:(id)arg2 giveUpClose:(BOOL *)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)closeVCForKeepHold:(id)arg1;
- (id)minimizeTaskDataWithTid:(id)arg1;
- (BOOL)shouldMinimizeWithDataItem:(id)arg1 cell:(id)arg2;
- (void)tryMinimizeTaskWithContentVM:(id)arg1 cell:(id)arg2;
- (void)addMinimizeTaskWithContentVM:(id)arg1 coverImage:(id)arg2 generateType:(unsigned long long)arg3;
- (void)addMinimizeTaskWithContentVM:(id)arg1 coverImage:(id)arg2 snapShotView:(id)arg3 animationStartFrame:(CGRect)arg4 fromViewControler:(id)arg5 generateType:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void)updateMinimizeTaskDataWithContentVM:(id)arg1;
- (void)updateSnapShotWithCell:(id)arg1 contentVM:(id)arg2;
- (void)updateSnapShotWithImage:(id)arg1 contentVM:(id)arg2;
- (id)takeMediaCellSnapshot:(id)arg1;
- (id)takeCurrentScreenSnapshot;
- (BOOL)tryAddMinimizeTask:(id)arg1;
- (id)minimizeTaskDataWithTLRecFinderCardData:(id)arg1;
- (id)generateOneShareVCWithMinimizeKey:(id)arg1 nonceId:(id)arg2 startPlayVideoTime:(double)arg3;
- (id)generateOneTaskDataWithContentVM:(id)arg1 generateType:(unsigned long long)arg2;
- (id)generateOneTaskDataWithTLRecFinderCardData:(id)arg1 generateType:(unsigned long long)arg2;
- (id)generateOneTaskDataWithNSDictionary:(id)arg1;
- (void)addMinimizeTaskWithNSDictionary:(id)arg1 animationViewImage:(id)arg2 fromViewFrame:(CGRect)arg3;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)loadingImageDict;
- (void)setLoadingImageDict:(id)arg1;
- (id)loadingImageAnimationDict;
- (void)setLoadingImageAnimationDict:(id)arg1;
- (void).cxx_destruct;
@end

