@interface LOTAnimationView : UIView <CAAnimationDelegate>
{
    LOTCompositionContainer * _compContainer; // +0x8
    NSNumber * _playRangeStartFrame; // +0x10
    NSNumber * _playRangeEndFrame; // +0x18
    double _playRangeStartProgress; // +0x20
    double _playRangeEndProgress; // +0x28
    NSBundle * _bundle; // +0x30
    double _animationProgress; // +0x38
    BOOL _shouldRestoreStateWhenAttachedToWindow; // +0x40
    id /* block */ _completionBlockToRestoreWhenAttachedToWindow; // +0x48
    BOOL _isAnimationPlaying; // +0x50
    BOOL _loopAnimation; // +0x51
    BOOL _autoReverseAnimation; // +0x52
    BOOL _cacheEnable; // +0x53
    BOOL _shouldRasterizeWhenIdle; // +0x54
    NSString * _animation; // +0x58
    double _animationSpeed; // +0x60
    id /* block */ _completionBlock; // +0x68
    LOTComposition * _sceneModel; // +0x70
}
+ (id)animationNamed:(id)arg1;
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;
+ (id)animationFromJSON:(id)arg1;
+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;
+ (id)animationWithFilePath:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithModel:(id)arg1 inBundle:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAnimation:(id)arg1;
- (void)_initializeAnimationContainer;
- (void)_commonInit;
- (void)dealloc;
- (void)_setupWithSceneModel:(id)arg1;
- (void)_restoreState;
- (void)_removeCurrentAnimationIfNecessary;
- (double)_progressForFrame:(id)arg1;
- (id)_frameForProgress:(double)arg1;
- (BOOL)_isSpeedNegative;
- (void)_handleWindowChanges:(BOOL)arg1;
- (void)_handleWillEnterBackground;
- (void)_handleWillEnterForeground;
- (void)_callCompletionIfNecessary:(BOOL)arg1;
- (void)setAnimationNamed:(id)arg1;
- (void)setAnimationNamed:(id)arg1 inBundle:(id)arg2;
- (void)setAnimationFromJSON:(id)arg1;
- (void)setAnimationFromJSON:(id)arg1 inBundle:(id)arg2;
- (void)setSceneModel:(id)arg1;
- (void)play;
- (void)playWithCompletion:(id /* block */)arg1;
- (void)playToProgress:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)playFromProgress:(double)arg1 toProgress:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)playToFrame:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)playFromFrame:(id)arg1 toFrame:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)stop;
- (void)pause;
- (void)setAnimationProgress:(double)arg1;
- (void)setProgressWithFrame:(id)arg1;
- (void)setProgressWithFrame:(id)arg1 callCompletionIfNecessary:(BOOL)arg2;
- (void)setLoopAnimation:(BOOL)arg1;
- (void)setAnimationSpeed:(double)arg1;
- (void)forceDrawingUpdate;
- (void)setShouldRasterizeWhenIdle:(BOOL)arg1;
- (void)setCacheEnable:(BOOL)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (id)keysForKeyPath:(id)arg1;
- (CGPoint)convertPoint:(CGPoint)arg1 toKeypathLayer:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toKeypathLayer:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromKeypathLayer:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromKeypathLayer:(id)arg2;
- (void)addSubview:(id)arg1 toKeypathLayer:(id)arg2;
- (void)maskSubview:(id)arg1 toKeypathLayer:(id)arg2;
- (id)layerForKey:(id)arg1;
- (id)compositionLayers;
- (double)animationDuration;
- (double)animationProgress;
- (CGSize)intrinsicContentSize;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)_layoutAndForceUpdate;
- (void)_layout;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)addSubview:(id)arg1 toLayerNamed:(id)arg2 applyTransform:(BOOL)arg3;
- (CGRect)convertRect:(CGRect)arg1 toLayerNamed:(id)arg2;
- (void)setValue:(id)arg1 forKeypath:(id)arg2 atFrame:(id)arg3;
- (void)logHierarchyKeypaths;
- (id)animation;
- (BOOL)isAnimationPlaying;
- (BOOL)loopAnimation;
- (BOOL)autoReverseAnimation;
- (void)setAutoReverseAnimation:(BOOL)arg1;
- (double)animationSpeed;
- (BOOL)cacheEnable;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)sceneModel;
- (BOOL)shouldRasterizeWhenIdle;
- (void).cxx_destruct;
@end
