@interface MMFinderLiveGiftAttackRenderTask : NSObject
{
    BOOL _isRenderStart; // +0x8
    BOOL _isAnimationFinished; // +0x9
    BOOL _needClearFaceEffect; // +0xa
    BOOL _isAnimationInvoke; // +0xb
    BOOL _isFaceEffectClear; // +0xc
    BOOL _isRenderEndFinished; // +0xd
    BOOL _isBombFlyingEnd; // +0xe
    BOOL _isFaceEffectStart; // +0xf
    int _identifierNum; // +0x10
    int _effectLevel; // +0x14
    int _faceEffectIncreaseTimes; // +0x18
    int _faceEffectIncreaseTimesRecord; // +0x1c
    MMFinderLiveGiftPlayItem * _playItem; // +0x20
    NSString * _attackUserName; // +0x28
    FinderLiveGiftAttackItem * _attackItem; // +0x30
    long long _renderResult; // +0x38
    long long _faceEffectRenderType; // +0x40
    long long _renderAttackGiftCountType; // +0x48
    long long _renderScriptId; // +0x50
    id /* block */ _checkNeedRemoveScriptCallback; // +0x58
    id /* block */ _shareFaceEffectCallback; // +0x60
    id /* block */ _faceEffectWillStartCallback; // +0x68
    id /* block */ _faceEffectDidStartCallback; // +0x70
    id /* block */ _addScriptSuccCallback; // +0x78
    NSString * _taskKey; // +0x80
    NSString * _uniqueKey; // +0x88
    MMLiveTaskId * _liveTaskId; // +0x90
    MMWeEffectManager * _weeffectManager; // +0x98
    id /* block */ _renderCompletion; // +0xa0
    GiftAttackRenderScriptObj * _renderScriptObj; // +0xa8
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0xb0
    CGPoint _startPos; // +0xb8
    CGRect _detectRegion; // +0xc8
}
+ (id)baseResourceDir;
- (id)initWithGiftPlayItem:(id)arg1 attackUserName:(id)arg2 attackItem:(id)arg3 liveTaskId:(id)arg4 identifier:(int)arg5;
- (void)initDefaultData;
- (void)initAttackGiftCountType;
- (void)startAnimationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAnimation;
- (void)clearDirectly;
- (BOOL)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)increaseFaceEffectRenderTime;
- (void)clearFaceEffect;
- (void)updateNeedClearFaceEffect;
- (id)renderResourcePath;
- (BOOL)isScriptUnifyManage;
- (double)maxRunningTime;
- (double)supplyCheckTimeForFaceEffectIncreOnce;
- (void)startOverTimeCheck;
- (void)cancelOverTimeCheck;
- (void)handleForOverTime;
- (void)makeFaceEffectRenderType;
- (BOOL)updateDetectRegion:(CGRect)arg1;
- (BOOL)updateStartPos:(CGPoint)arg1;
- (BOOL)isAnimParamsValid;
- (void)startRender;
- (void)stopRender;
- (void)onAnimationFinished;
- (void)endWithResult:(long long)arg1;
- (void)clearData;
- (void)onBombFlyingEnd;
- (void)onFaceEffectRenderStart;
- (void)addRenderScript:(id /* block */)arg1;
- (void)setDetectRegion:(CGRect)arg1 completion:(id /* block */)arg2;
- (void)sendRenderMessage:(id /* block */)arg1;
- (id)getRenderJsonMessage;
- (BOOL)tryFaceEffectRenderShareWithOthersIfEnable;
- (void)removeRenderScriptWithClearSrc:(id /* block */)arg1;
- (BOOL)clearResourcesIfNeeded;
- (BOOL)clearResourcesForAddFailed;
- (BOOL)clearResources;
- (BOOL)checkNeedRemoveScript;
- (void)invokeIncreaseFaceEffectRenderTimeIfNeed;
- (void)sendFaceEffectRenderMessageToIncreaseTime;
- (id)getResetFaceEffectTimerJsonMessage;
- (void)invokeClearFaceEffectRenderIfNeed;
- (void)sendFaceEffectRenderMessageToClear;
- (id)getResetFaceEffectJsonMessage;
- (void)sendEffectRenderMessageToClear:(id /* block */)arg1;
- (id)getResetEffectJsonMessage;
- (void)sendResetLuaParamsRenderMessage:(id /* block */)arg1;
- (id)getResetLuaParamsJsonMessage;
- (id)liveTask;
- (id)animationId;
- (BOOL)isAnimationEnd;
- (BOOL)isFaceEffectRenderEnabled;
- (id)description;
- (void)initActualResDir;
- (id)getActualResourcePath;
- (id)getScriptResourcePath;
- (id)getInitialResourcePath;
- (void)createEffectLevel;
- (BOOL)isRenderStart;
- (void)setIsRenderStart:(BOOL)arg1;
- (BOOL)isAnimationFinished;
- (void)setIsAnimationFinished:(BOOL)arg1;
- (BOOL)needClearFaceEffect;
- (void)setNeedClearFaceEffect:(BOOL)arg1;
- (CGRect)detectRegion;
- (void)setDetectRegion:(CGRect)arg1;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (id)attackUserName;
- (void)setAttackUserName:(id)arg1;
- (id)attackItem;
- (void)setAttackItem:(id)arg1;
- (long long)renderResult;
- (void)setRenderResult:(long long)arg1;
- (long long)faceEffectRenderType;
- (void)setFaceEffectRenderType:(long long)arg1;
- (long long)renderAttackGiftCountType;
- (void)setRenderAttackGiftCountType:(long long)arg1;
- (long long)renderScriptId;
- (void)setRenderScriptId:(long long)arg1;
- (id /* block */)checkNeedRemoveScriptCallback;
- (void)setCheckNeedRemoveScriptCallback:(id /* block */)arg1;
- (id /* block */)shareFaceEffectCallback;
- (void)setShareFaceEffectCallback:(id /* block */)arg1;
- (id /* block */)faceEffectWillStartCallback;
- (void)setFaceEffectWillStartCallback:(id /* block */)arg1;
- (id /* block */)faceEffectDidStartCallback;
- (void)setFaceEffectDidStartCallback:(id /* block */)arg1;
- (id /* block */)addScriptSuccCallback;
- (void)setAddScriptSuccCallback:(id /* block */)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (int)identifierNum;
- (void)setIdentifierNum:(int)arg1;
- (id)uniqueKey;
- (void)setUniqueKey:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (CGPoint)startPos;
- (void)setStartPos:(CGPoint)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id /* block */)renderCompletion;
- (void)setRenderCompletion:(id /* block */)arg1;
- (id)renderScriptObj;
- (void)setRenderScriptObj:(id)arg1;
- (BOOL)isAnimationInvoke;
- (void)setIsAnimationInvoke:(BOOL)arg1;
- (BOOL)isFaceEffectClear;
- (void)setIsFaceEffectClear:(BOOL)arg1;
- (BOOL)isRenderEndFinished;
- (void)setIsRenderEndFinished:(BOOL)arg1;
- (BOOL)isBombFlyingEnd;
- (void)setIsBombFlyingEnd:(BOOL)arg1;
- (BOOL)isFaceEffectStart;
- (void)setIsFaceEffectStart:(BOOL)arg1;
- (int)effectLevel;
- (void)setEffectLevel:(int)arg1;
- (int)faceEffectIncreaseTimes;
- (void)setFaceEffectIncreaseTimes:(int)arg1;
- (int)faceEffectIncreaseTimesRecord;
- (void)setFaceEffectIncreaseTimesRecord:(int)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
