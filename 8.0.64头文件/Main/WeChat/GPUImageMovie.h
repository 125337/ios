@interface GPUImageMovie : GPUImageOutput <AVPlayerItemOutputPullDelegate>
{
    BOOL audioEncodingIsFinished; // +0x70
    BOOL videoEncodingIsFinished; // +0x71
    GPUImageMovieWriter * synchronizedMovieWriter; // +0x78
    AVAssetReader * reader; // +0x80
    AVPlayerItemVideoOutput * playerItemOutput; // +0x88
    CADisplayLink * displayLink; // +0x90
    struct previousFrameTime; // +0x98
    struct processingFrameTime; // +0xb0
    double previousActualFrameTime; // +0xc8
    BOOL keepLooping; // +0xd0
    unsigned int luminanceTexture; // +0xd4
    unsigned int chrominanceTexture; // +0xd8
    GLProgram * yuvConversionProgram; // +0xe0
    int yuvConversionPositionAttribute; // +0xe8
    int yuvConversionTextureCoordinateAttribute; // +0xec
    int yuvConversionLuminanceTextureUniform; // +0xf0
    int yuvConversionChrominanceTextureUniform; // +0xf4
    int yuvConversionMatrixUniform; // +0xf8
    const float * _preferredConversion; // +0x100
    BOOL isFullYUVRange; // +0x108
    int imageBufferWidth; // +0x10c
    int imageBufferHeight; // +0x110
    BOOL _runBenchmark; // +0x114
    BOOL _playAtActualSpeed; // +0x115
    BOOL _shouldRepeat; // +0x116
    BOOL _disableDisplayLink; // +0x117
    BOOL _isCancel; // +0x118
    NSURL * _url; // +0x120
    AVAsset * _asset; // +0x128
    id <GPUImageMovieDelegate> _delegate; // +0x130
    AVPlayerItem * _playerItem; // +0x138
}
- (id)initWithURL:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (void)yuvConversionSetup;
- (void)dealloc;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;
- (void)startProcessing;
- (id)createAssetReader;
- (void)processAsset;
- (void)processPlayerItem;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)pauseMovieProcessing;
- (void)resumeMovieProcessing;
- (struct)getTimeforInterval:(double)arg1;
- (BOOL)hasNewPixelBufferForItemTime:(struct)arg1;
- (void)displayLinkCallback:(id)arg1 outputItemTime:(struct)arg2;
- (void)displayLinkCallback:(id)arg1;
- (BOOL)readNextVideoFrameFromOutput:(id)arg1;
- (BOOL)readNextAudioSampleFromOutput:(id)arg1;
- (void)processMovieFrame:(opaqueCMSampleBuffer *)arg1;
- (float)progress;
- (void)processMovieFrame:(__CVBuffer *)arg1 withSampleTime:(struct)arg2;
- (void)endProcessing;
- (void)cancelProcessing;
- (void)convertYUVToRGBOutput;
- (id)assetReader;
- (BOOL)audioEncodingIsFinished;
- (BOOL)videoEncodingIsFinished;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (BOOL)runBenchmark;
- (void)setRunBenchmark:(BOOL)arg1;
- (BOOL)playAtActualSpeed;
- (void)setPlayAtActualSpeed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldRepeat;
- (void)setShouldRepeat:(BOOL)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (BOOL)disableDisplayLink;
- (void)setDisableDisplayLink:(BOOL)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end
