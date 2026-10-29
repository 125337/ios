@interface MJComposingCreationMusicPickingSession : NSObject <MMBGMSelectHalfScreenViewControllerDelegate>
{
    BOOL _finished; // +0x8
    MJComposingCreationMusicPickingSession * _retainedSelf; // +0x10
    id /* block */ _resolveBlock; // +0x18
    id /* block */ _defaultMusicCompletionBlock; // +0x20
    MJComposingCreationMusicPickingViewModel * _musicPickingVM; // +0x28
    MJComposingCreationMusicPickingController * _musicPickingVC; // +0x30
    MMBGMPanelPublishContext * _publishContext; // +0x38
    UIView * _containerView; // +0x40
}
+ (void)logRecommendParamsCheckWithParams:(id)arg1;
+ (id)startWithParams:(id)arg1 fromVC:(id)arg2 resolveBlock:(id /* block */)arg3;
+ (id)fetchDefaultMusicWithParams:(id)arg1 effectLocalPaths:(id)arg2 completion:(id /* block */)arg3;
- (id)initInternal;
- (void)dealloc;
- (void)prepareRecommendContextWithParams:(id)arg1 effectLocalPaths:(id)arg2 completion:(id /* block */)arg3;
- (void)injectRecommendTabConfigIfNeeded;
- (void)fetchDefaultMusicWithRecommendPrompt:(id)arg1 pictureCount:(unsigned int)arg2 assetItems:(id)arg3;
- (void)finishDefaultMusicWithMusicInfo:(id)arg1 error:(id)arg2;
- (void)showMusicPanelWithFollowMusicInfo:(id)arg1 musicInfo:(id)arg2 recommendPrompt:(id)arg3 pictureCount:(unsigned int)arg4 assetItems:(id)arg5 fromVC:(id)arg6;
- (void)setupRecommendListDeduplicationAtPanelTabIndex:(unsigned long long)arg1;
- (id)parseDefaultMusicFromMusicInfo:(id)arg1;
- (id)convertResultMusicToDict:(id)arg1;
- (void)finishWithMusicResult:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (id)retainedSelf;
- (void)setRetainedSelf:(id)arg1;
- (id /* block */)resolveBlock;
- (void)setResolveBlock:(id /* block */)arg1;
- (id /* block */)defaultMusicCompletionBlock;
- (void)setDefaultMusicCompletionBlock:(id /* block */)arg1;
- (id)musicPickingVM;
- (void)setMusicPickingVM:(id)arg1;
- (id)musicPickingVC;
- (void)setMusicPickingVC:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
