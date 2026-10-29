@interface MMLiveGameJoinTeamTipsView : MMNormalTipsView <WCFinderLiveExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id /* block */ _showAction; // +0x10
    id /* block */ _reloadAction; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)prepareDataWithShowAction:(id /* block */)arg1 reloadAction:(id /* block */)arg2;
- (void)fetchGameTeamInfo;
- (id)liveTask;
- (void)updateWithTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 descAccessibility:(id)arg5;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)dismissWithAnimationFromPosition:(CGPoint)arg1 toPosition:(CGPoint)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation;
- (id)taskId;
- (id /* block */)showAction;
- (void)setShowAction:(id /* block */)arg1;
- (id /* block */)reloadAction;
- (void)setReloadAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

