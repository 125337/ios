@interface FlutterPAGController : NSObject <FlutterTexture>
{
    __CVBuffer * _lastPixelBuffer; // +0x8
    NSNumber * _pagId; // +0x10
    FlutterPAGInfo * _pagInfo; // +0x18
    CGSize _size; // +0x20
    PAGSurface * _pagSurface; // +0x30
    PAGPlayer * _pagPlayer; // +0x38
    long long _duration; // +0x40
    int _repeatCount; // +0x48
    NSObject<OS_dispatch_queue> * _pag_queue; // +0x50
    BOOL _isReleased; // +0x58
    BOOL _couldProduceFrame; // +0x59
    NSObject<FlutterTextureRegistry> * _flutterTextureRegistry; // +0x60
    double _currentPlayFraction; // +0x68
    long long _textureId; // +0x70
    PAGFile * _pagFile; // +0x78
    FlutterPAGValueAnimator * _valueAnimator; // +0x80
    PAGViewListenerApi * _pagViewListener; // +0x88
    double _playSpeed; // +0x90
}
+ (void)setFlutterUpdatePath:(id)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (id)init:(id)arg1 flutterTextureRegistry:(id)arg2 binaryMessenger:(id)arg3;
- (id)getTextureId;
- (void)setPAGSourceInfo:(id)arg1;
- (void)setSizeWidth:(double)arg1 height:(double)arg2;
- (void)setSource:(id)arg1;
- (void)setPagInfo:(id)arg1;
- (void)startPlay;
- (void)startPlayImpl;
- (void)stopPlay:(BOOL)arg1;
- (void)stopPlay;
- (void)resumePlay;
- (void)pausePlay;
- (void)setProgress:(double)arg1;
- (void)setRepeatCount:(int)arg1;
- (BOOL)replaceImageIndex:(long long)arg1 path:(id)arg2;
- (BOOL)replaceTextIndex:(long long)arg1 text:(id)arg2;
- (BOOL)setSolidColorName:(id)arg1 color:(id)arg2;
- (void)flush;
- (void)pagFlushWhenPause;
- (void)releaseAndFree;
- (void)free;
- (double)getProgress;
- (void)setPlayTimeMs:(long long)arg1;
- (void)onAnimationStart;
- (void)onAnimationUpdate;
- (void)onAnimationEnd;
- (void)onAnimationCancel;
- (void)onAnimationRepeat;
- (void)updateView;
- (void)producePAGCVPixelBuffer;
- (BOOL)refreshPAGWithProgress:(double)arg1;
- (__CVBuffer *)RBGBuffereCopyWithPixelBuffer:(__CVBuffer *)arg1 pixelBufferDst:(__CVBuffer *)arg2;
- (__CVBuffer *)RBGBufferCreate:(int)arg1 bufferHeight:(int)arg2;
- (void)dealloc;
- (void)onTextureUnregistered:(id)arg1;
- (id)flutterTextureRegistry;
- (void)setFlutterTextureRegistry:(id)arg1;
- (double)currentPlayFraction;
- (void)setCurrentPlayFraction:(double)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
- (id)valueAnimator;
- (void)setValueAnimator:(id)arg1;
- (BOOL)isReleased;
- (void)setIsReleased:(BOOL)arg1;
- (BOOL)couldProduceFrame;
- (void)setCouldProduceFrame:(BOOL)arg1;
- (id)pagViewListener;
- (void)setPagViewListener:(id)arg1;
- (double)playSpeed;
- (void)setPlaySpeed:(double)arg1;
- (void).cxx_destruct;
@end
