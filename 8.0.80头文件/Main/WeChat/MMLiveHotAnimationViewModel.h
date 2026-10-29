@interface MMLiveHotAnimationViewModel : NSObject <WCFinderLiveExt, PAGViewListener>
{
    BOOL _currentAnimationLandscape; // +0x8
    PAGView * _curHotCommentAnimationView; // +0x10
    id <MMLiveHotAnimationViewPresenter> _viewPresenter; // +0x18
    MMFinderLiveResDownloadManager * _animationDownLoadManager; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    FinderLiveHotCommentAnimationInfoList * _animationInfoList; // +0x30
    NSMutableDictionary * _processedAnimationInfoDic; // +0x38
    MMLiveQueue * _animationQueue; // +0x40
}
- (id)initWithTaskId:(id)arg1 animationInfo:(id)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)initData;
- (void)initAnimationResource;
- (void)setCurHotCommentAnimationView:(id)arg1;
- (void)tryToPlayNextAnimation;
- (id)findInfoForResource:(id)arg1;
- (id)loadPAGFileWith:(id)arg1;
- (void)realPlayAnimationWith:(id)arg1;
- (void)onFinderLive:(id)arg1 receiveHotAnimation:(id)arg2;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (id)liveTask;
- (id)curHotCommentAnimationView;
- (id)viewPresenter;
- (void)setViewPresenter:(id)arg1;
- (BOOL)currentAnimationLandscape;
- (void)setCurrentAnimationLandscape:(BOOL)arg1;
- (id)animationDownLoadManager;
- (void)setAnimationDownLoadManager:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)animationInfoList;
- (void)setAnimationInfoList:(id)arg1;
- (id)processedAnimationInfoDic;
- (void)setProcessedAnimationInfoDic:(id)arg1;
- (id)animationQueue;
- (void)setAnimationQueue:(id)arg1;
- (void).cxx_destruct;
@end
