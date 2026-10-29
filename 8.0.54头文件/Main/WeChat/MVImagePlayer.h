@interface MVImagePlayer : NSObject <MVImageLoaderDelegate>
{
    BOOL _isPlaying; // +0x8
    unsigned int _animationType; // +0xc
    NSString * _imagePath; // +0x10
    NSString * _imageId; // +0x18
    long long _fps; // +0x20
    double _duration; // +0x28
    id <MVImagePlayerDelegate> _delegate; // +0x30
    MMTimer * _timer; // +0x38
    __CVBuffer * _pixelBuffer; // +0x40
    double _currenTimeStamp; // +0x48
    MVImageLoader * _imageLoader; // +0x50
    NSDate * _startPlayDate; // +0x58
    NSObject<OS_dispatch_queue> * _renderDispatchQueue; // +0x60
    CGSize _outputSize; // +0x68
}
- (id)init;
- (void)loadImageData;
- (void)start;
- (void)loadImageIfNeeded;
- (void)startPlayWithImage:(id)arg1;
- (void)setupDisplayImage:(id)arg1;
- (void)_setupDisplayImage:(id)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)dealloc;
- (void)clear;
- (void)pause;
- (void)stop;
- (void)seek:(double)arg1;
- (double)timerInterval;
- (void)startTimer;
- (void)_startTimer;
- (void)stopTimer;
- (void)onTimeFired;
- (BOOL)displayImage;
- (id)inputTextureWithImageSize:(CGSize)arg1 outputSize:(CGSize)arg2 progress:(double)arg3 animationType:(int)arg4;
- (void)setupScaleAnimiationForTexture:(id)arg1 withStartCenterPoint:(CGPoint)arg2 endCenterPoint:(CGPoint)arg3 animationType:(int)arg4;
- (id)imageLoader;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 urlString:(id)arg3;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)imageId;
- (void)setImageId:(id)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned int)animationType;
- (void)setAnimationType:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (double)currenTimeStamp;
- (void)setCurrenTimeStamp:(double)arg1;
- (void)setImageLoader:(id)arg1;
- (BOOL)isPlaying;
- (id)startPlayDate;
- (void)setStartPlayDate:(id)arg1;
- (id)renderDispatchQueue;
- (void)setRenderDispatchQueue:(id)arg1;
- (void).cxx_destruct;
@end

