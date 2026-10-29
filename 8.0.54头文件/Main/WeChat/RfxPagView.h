@interface RfxPagView : UIView
{
    int deviceKind; // +0x8
    RfxPagPlayer * pagPlayer; // +0x10
    RfxPagSurface * pagSurface; // +0x18
    RfxPagFile * pagFile; // +0x20
    NSString * filePath; // +0x28
    RfxPagValueAnimator * valueAnimator; // +0x30
    NSMutableDictionary * textReplacementMap; // +0x38
    NSMutableDictionary * imageReplacementMap; // +0x40
    NSHashTable * listeners; // +0x48
    BOOL _isPlaying; // +0x50
    BOOL _sync; // +0x51
    BOOL _isAsyncFlushing; // +0x52
    BOOL _bufferPrepared; // +0x53
    BOOL _isInBackground; // +0x54
    BOOL _progressExplicitlySet; // +0x55
    BOOL _isVisible; // +0x56
    NSRecursiveLock * _updateTimeLock; // +0x58
    NSLock * _listenersLock; // +0x60
}
+ (void)startHookForFinderLive;
+ (void)load;
+ (id)FlushQueue;
+ (BOOL)UseOpenGLBackend;
+ (void)RegisterFlushQueueDestoryMethod;
+ (Class)layerClass;
- (id)finderLiveRenderStatistics;
- (void)setFinderLiveRenderStatistics:(id)arg1;
- (id)mm_initWithFrame:(CGRect)arg1;
- (void)mm_setRepeatCount:(int)arg1;
- (int)finderLivePAGRepeatCount;
- (void)setFinderLivePAGRepeatCount:(int)arg1;
- (BOOL)mm_flush;
- (id)initWithFrame:(CGRect)arg1;
- (void)initPAG;
- (void)dealloc;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)didMoveToWindow;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)checkVisible;
- (void)initPAGSurface;
- (void)onAnimationUpdate;
- (void)onAnimationStart;
- (void)onAnimationEnd;
- (void)onAnimationCancel;
- (void)onAnimationRepeat;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void)play;
- (void)doPlay;
- (void)stop;
- (void)setRepeatCount:(int)arg1;
- (id)getPath;
- (BOOL)setPath:(id)arg1;
- (id)getComposition;
- (void)setComposition:(id)arg1;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)arg1;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)arg1;
- (BOOL)flush;
- (void)updateView;
- (void)updateViewAsync;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)renderTargetBufferPrepared:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)helloworld;
- (BOOL)sync;
- (void)setSync:(BOOL)arg1;
- (BOOL)isAsyncFlushing;
- (void)setIsAsyncFlushing:(BOOL)arg1;
- (BOOL)bufferPrepared;
- (void)setBufferPrepared:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)progressExplicitlySet;
- (void)setProgressExplicitlySet:(BOOL)arg1;
- (id)updateTimeLock;
- (void)setUpdateTimeLock:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (id)listenersLock;
- (void)setListenersLock:(id)arg1;
@end

