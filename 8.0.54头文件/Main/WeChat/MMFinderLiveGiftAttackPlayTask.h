@interface MMFinderLiveGiftAttackPlayTask : NSObject
{
    BOOL _isPlayPending; // +0x8
    BOOL _isPlayStart; // +0x9
    int _identifierNum; // +0xc
    MMFinderLiveGiftPlayItem * _playItem; // +0x10
    NSString * _taskKey; // +0x18
    MMFinderLiveGiftAttackRewardPlayContext * _playContext; // +0x20
    id /* block */ _checkRenderTaskNeedRemoveScriptCallback; // +0x28
    id /* block */ _getReusedRenderScriptCallback; // +0x30
    id /* block */ _shareFaceEffectCallback; // +0x38
    id /* block */ _faceEffectWillStartCallback; // +0x40
    id /* block */ _faceEffectDidStartCallback; // +0x48
    id /* block */ _getAppActiveStateCallback; // +0x50
    id /* block */ _renderTaskWillStartCallback; // +0x58
    id /* block */ _renderTaskDidFinishCallback; // +0x60
    id /* block */ _addScriptSuccCallback; // +0x68
    MMLiveTaskId * _liveTaskId; // +0x70
    NSMutableDictionary * _renderTaskDict; // +0x78
    id /* block */ _timeoutCallback; // +0x80
    id /* block */ _aniamtionCompletion; // +0x88
}
- (id)initWithGiftPlayItem:(id)arg1 liveTaskId:(id)arg2 identifier:(int)arg3;
- (void)initDefaultData;
- (void)createRenderTask;
- (id)createRenderTaskWithAttackUserName:(id)arg1 attackItem:(id)arg2;
- (void)startPending:(double)arg1 timeoutCallback:(id /* block */)arg2;
- (void)startAnimationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAnimation;
- (void)clearDirectly;
- (BOOL)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (BOOL)isExistRenderTaskForAttacker:(id)arg1;
- (id)getReusableFaceEffectRenderEnableTaskWithAnimationId:(id)arg1 forAttacker:(id)arg2;
- (id)getPreviousFaceEffectRenderEnableTasksExceptAnimationId:(id)arg1 forAttacker:(id)arg2;
- (BOOL)isExistAnimationId:(id)arg1;
- (BOOL)isCurrSupportPlayGiftAttack;
- (id)attackerUserNameList;
- (void)onPendingTimeout;
- (void)cancelPending;
- (void)startGiftAttackRender:(id)arg1;
- (void)checkCurrAnimationResult;
- (long long)getCurrAnimationResult;
- (void)endWithResult:(long long)arg1;
- (void)clearData;
- (id)tryGetResuedScriptForRenderTask:(id)arg1;
- (void)onRenderTaskWillStart:(id)arg1;
- (BOOL)isAppActive;
- (id)recipientUserName;
- (id)description;
- (void)registerRenderTask:(id)arg1 withKey:(id)arg2;
- (id)getAllRegisterRenderTasks;
- (id)getRegisterRenderTaskWithKey:(id)arg1;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)playContext;
- (void)setPlayContext:(id)arg1;
- (int)identifierNum;
- (void)setIdentifierNum:(int)arg1;
- (id /* block */)checkRenderTaskNeedRemoveScriptCallback;
- (void)setCheckRenderTaskNeedRemoveScriptCallback:(id /* block */)arg1;
- (id /* block */)getReusedRenderScriptCallback;
- (void)setGetReusedRenderScriptCallback:(id /* block */)arg1;
- (id /* block */)shareFaceEffectCallback;
- (void)setShareFaceEffectCallback:(id /* block */)arg1;
- (id /* block */)faceEffectWillStartCallback;
- (void)setFaceEffectWillStartCallback:(id /* block */)arg1;
- (id /* block */)faceEffectDidStartCallback;
- (void)setFaceEffectDidStartCallback:(id /* block */)arg1;
- (id /* block */)getAppActiveStateCallback;
- (void)setGetAppActiveStateCallback:(id /* block */)arg1;
- (id /* block */)renderTaskWillStartCallback;
- (void)setRenderTaskWillStartCallback:(id /* block */)arg1;
- (id /* block */)renderTaskDidFinishCallback;
- (void)setRenderTaskDidFinishCallback:(id /* block */)arg1;
- (id /* block */)addScriptSuccCallback;
- (void)setAddScriptSuccCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)renderTaskDict;
- (void)setRenderTaskDict:(id)arg1;
- (BOOL)isPlayPending;
- (void)setIsPlayPending:(BOOL)arg1;
- (BOOL)isPlayStart;
- (void)setIsPlayStart:(BOOL)arg1;
- (id /* block */)timeoutCallback;
- (void)setTimeoutCallback:(id /* block */)arg1;
- (id /* block */)aniamtionCompletion;
- (void)setAniamtionCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

