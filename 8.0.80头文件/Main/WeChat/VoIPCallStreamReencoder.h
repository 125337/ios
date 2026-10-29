@interface VoIPCallStreamReencoder : NSObject
{
    BOOL _hasEncodeError; // +0x8
    BOOL _livePhotoMode; // +0x9
    int _encodeWidth; // +0xc
    int _encodeHeight; // +0x10
    int _averageBitRate; // +0x14
    NSMutableArray * _outputs; // +0x18
    NSObject * _outputsLock; // +0x20
    OpaqueVTCompressionSession * _session; // +0x28
    NSObject<OS_dispatch_semaphore> * _inflightSlots; // +0x30
    unsigned long long _inputFrameCount; // +0x38
}
- (id)initWithCanvasSize:(CGSize)arg1;
- (id)initWithCanvasSize:(CGSize)arg1 livePhotoMode:(BOOL)arg2;
- (id)reencodeFrames:(id)arg1;
- (BOOL)beginReencode;
- (BOOL)encodeComposedFrame:(id)arg1;
- (id)finishReencode;
- (void)cancelReencode;
- (BOOL)p_configureSession:(OpaqueVTCompressionSession *)arg1;
- (void)p_collectSampleBuffer:(opaqueCMSampleBuffer *)arg1 status:(int)arg2;
- (id)outputs;
- (void)setOutputs:(id)arg1;
- (id)outputsLock;
- (void)setOutputsLock:(id)arg1;
- (BOOL)hasEncodeError;
- (void)setHasEncodeError:(BOOL)arg1;
- (int)encodeWidth;
- (void)setEncodeWidth:(int)arg1;
- (int)encodeHeight;
- (void)setEncodeHeight:(int)arg1;
- (int)averageBitRate;
- (void)setAverageBitRate:(int)arg1;
- (BOOL)livePhotoMode;
- (void)setLivePhotoMode:(BOOL)arg1;
- (OpaqueVTCompressionSession *)session;
- (void)setSession:(OpaqueVTCompressionSession *)arg1;
- (id)inflightSlots;
- (void)setInflightSlots:(id)arg1;
- (unsigned long long)inputFrameCount;
- (void)setInputFrameCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
