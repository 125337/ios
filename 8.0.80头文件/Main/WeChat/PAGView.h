@interface PAGView : UIView
{
    PAGPlayer * pagPlayer; // +0x8
    PAGSurface * pagSurface; // +0x10
    PAGFile * pagFile; // +0x18
    NSString * filePath; // +0x20
    PAGAnimator * animator; // +0x28
    BOOL _isVisible; // +0x30
}
+ (void)startHookForFinderLive;
+ (void)load;
+ (Class)layerClass;
- (id)finderLiveRenderStatistics;
- (void)setFinderLiveRenderStatistics:(id)arg1;
- (id)mm_initWithFrame:(CGRect)arg1;
- (void)mm_setRepeatCount:(int)arg1;
- (int)finderLivePAGRepeatCount;
- (void)setFinderLivePAGRepeatCount:(int)arg1;
- (BOOL)mm_flush;
- (void)mm_onAnimationFlush:(double)arg1;
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
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)onAnimationFlush:(double)arg1;
- (BOOL)sync;
- (void)setSync:(BOOL)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (id)getPath;
- (BOOL)setPath:(id)arg1;
- (void)setPathAsync:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)getComposition;
- (void)setComposition:(id)arg1;
- (BOOL)videoEnabled;
- (void)setVideoEnabled:(BOOL)arg1;
- (BOOL)cacheEnabled;
- (void)setCacheEnabled:(BOOL)arg1;
- (BOOL)useDiskCache;
- (void)setUseDiskCache:(BOOL)arg1;
- (float)cacheScale;
- (void)setCacheScale:(float)arg1;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)arg1;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)arg1;
- (long long)currentFrame;
- (BOOL)flush;
- (id)getLayersUnderPoint:(CGPoint)arg1;
- (void)freeCache;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (__CVBuffer *)makeSnapshot;
- (CGRect)getBounds:(id)arg1;
- (void)AsyncSurfacePrepared:(id)arg1;
@end
