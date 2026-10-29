@interface TXCVideoConsumer : NSObject <TXCVideoResultHandlerDelegate, TXCVideoRenderReportDelegate, TXCVideoDecodeReportDelegate, TXIVideoDecodeSupervisorDelegate>
{
    BOOL _paused; // +0x8
    BOOL _running; // +0x9
    BOOL _enablesBackgroundDecoding; // +0xa
    id <TXIVideoConsumerDelegate> _delegate; // +0x10
    NSString * _tag; // +0x18
    unsigned long long _currentRenderTimestamp; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    TXCDispatchQueue * _decodeQueue; // +0x30
    TXCVideoDecoderSupervisor * _supervisor; // +0x38
    TXCVideoDecodeConfig * _decodeConfig; // +0x40
    id <TXIVideoDecoderInterface> _decoder; // +0x48
    TXCVideoDecodeReport * _decodeReport; // +0x50
    id <TXIGlContext> _glContext; // +0x58
    TXCVideoRenderConfig * _renderConfig; // +0x60
    id <TXILocalVideoRenderer> _localRenderer; // +0x68
    id <TXIVideoRenderer> _customRenderer; // +0x70
    TXCVideoRenderReport * _renderReporter; // +0x78
    TXCVideoStreamSnapshot * _streamSnapshot; // +0x80
    TXCVideoResultHandler * _resultHandler; // +0x88
    id /* block */ _inputLog; // +0x90
    long long _lastTicks; // +0x98
}
+ (DecodeAbility)decodeAbility;
+ (void)setLogDelegate:(id)arg1;
- (id)init;
- (void)setup;
- (void)dealloc;
- (void)setTag:(id)arg1;
- (void)start;
- (void)stop:(BOOL)arg1;
- (void)resume:(id /* block */)arg1;
- (void)pause:(id /* block */)arg1;
- (void)setDecoderStrategy:(int)arg1;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)enableCustomDecoder:(id)arg1;
- (void)setRealTime:(BOOL)arg1;
- (int)getWritableState;
- (void)deliverFrame:(id)arg1;
- (void)setRenderView:(id)arg1;
- (void)setCustomRender:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setMirrorMode:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)enablesRenderUsingMetal:(BOOL)arg1;
- (void)snapshotFromSource:(unsigned long long)arg1 onComplete:(id /* block */)arg2;
- (void)setupStreamLine;
- (void)createDecoder;
- (id)createRendererWithView:(id)arg1;
- (void)createStreamSnapshotIfNeeded;
- (void)logApi:(id)arg1;
- (void)observeAppState;
- (void)onAppResignActive;
- (void)decodeSupervisorOnNotifyRecreate:(id)arg1;
- (void)onDecodeFrame:(id)arg1 isFirst:(BOOL)arg2;
- (void)resultHandler:(id)arg1 onError:(id)arg2;
- (void)resultHandler:(id)arg1 didProcessVideoFrame:(id)arg2;
- (void)onRenderFrame:(id)arg1 isFirst:(BOOL)arg2;
- (void)onRenderFirstFrameInView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tag;
- (unsigned long long)currentRenderTimestamp;
- (void)setCurrentRenderTimestamp:(unsigned long long)arg1;
- (id)queue;
- (BOOL)isPaused;
- (void)setPaused:(BOOL)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (id)decodeQueue;
- (id)supervisor;
- (id)decodeConfig;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (id)decodeReport;
- (BOOL)enablesBackgroundDecoding;
- (void)setEnablesBackgroundDecoding:(BOOL)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)renderConfig;
- (id)localRenderer;
- (void)setLocalRenderer:(id)arg1;
- (id)customRenderer;
- (void)setCustomRenderer:(id)arg1;
- (id)renderReporter;
- (id)streamSnapshot;
- (void)setStreamSnapshot:(id)arg1;
- (id)resultHandler;
- (id /* block */)inputLog;
- (long long)lastTicks;
- (void)setLastTicks:(long long)arg1;
- (void).cxx_destruct;
@end

