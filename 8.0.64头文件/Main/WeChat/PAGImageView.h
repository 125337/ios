@interface PAGImageView : UIImageView
{
    NSString * filePath; // +0x8
    PAGAnimator * animator; // +0x10
    PAGComposition * pagComposition; // +0x18
    PAGDecoder * pagDecoder; // +0x20
    long long duartion; // +0x28
    float renderScaleFactor; // +0x30
    NSMutableDictionary * imagesMap; // +0x38
    mutex imageViewLock; // +0x40
    __CVPixelBufferPool * diskBufferPool; // +0x80
    BOOL _memoryCacheEnabled; // +0x88
    BOOL _isVisible; // +0x89
    BOOL _memeoryCacheFinished; // +0x8a
    float _maxFrameRate; // +0x8c
    long long _currentFrameIndex; // +0x90
    UIImage * _currentUIImage; // +0x98
    long long _pagContentVersion; // +0xa0
    long long _fileWidth; // +0xa8
    long long _fileHeight; // +0xb0
    CGSize _viewSize; // +0xb8
}
+ (id)ImageViewFlushQueue;
+ (void)RegisterFlushQueueDestoryMethod;
+ (unsigned long long)MaxDiskSize;
+ (void)SetMaxDiskSize:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initPAG;
- (void)dealloc;
- (void)setCompositionInternal:(id)arg1 maxFrameRate:(float)arg2;
- (__CVBuffer *)getDiskCacheCVPixelBuffer;
- (__CVBuffer *)getMemoryCacheCVPixelBuffer;
- (id)getPAGDecoder;
- (void)onAnimationFlush:(double)arg1;
- (void)didMoveToWindow;
- (void)checkVisible;
- (BOOL)updateImageViewFrom:(__CVBuffer *)arg1 atIndex:(long long)arg2;
- (BOOL)checkPAGCompositionChanged;
- (void)submitToImageView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)freeCache;
- (void)reset;
- (id)imageForCVPixelBuffer:(__CVBuffer *)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setRenderScale:(float)arg1;
- (float)renderScale;
- (void)setContentScaleFactor:(double)arg1;
- (BOOL)cacheAllFramesInMemory;
- (void)setCacheAllFramesInMemory:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)play;
- (void)pause;
- (unsigned long long)numFrames;
- (id)currentImage;
- (BOOL)isPlaying;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (id)getPath;
- (BOOL)setPath:(id)arg1;
- (BOOL)setPath:(id)arg1 maxFrameRate:(float)arg2;
- (void)setPathAsync:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setPathAsync:(id)arg1 maxFrameRate:(float)arg2 completionBlock:(id /* block */)arg3;
- (id)getComposition;
- (void)setComposition:(id)arg1;
- (void)setComposition:(id)arg1 maxFrameRate:(float)arg2;
- (void)setCurrentFrame:(unsigned long long)arg1;
- (unsigned long long)currentFrame;
- (BOOL)flush;
- (BOOL)memoryCacheEnabled;
- (void)setMemoryCacheEnabled:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (long long)currentFrameIndex;
- (void)setCurrentFrameIndex:(long long)arg1;
- (id)currentUIImage;
- (void)setCurrentUIImage:(id)arg1;
- (long long)pagContentVersion;
- (void)setPagContentVersion:(long long)arg1;
- (BOOL)memeoryCacheFinished;
- (void)setMemeoryCacheFinished:(BOOL)arg1;
- (long long)fileWidth;
- (void)setFileWidth:(long long)arg1;
- (long long)fileHeight;
- (void)setFileHeight:(long long)arg1;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)arg1;
- (CGSize)viewSize;
- (void)setViewSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
