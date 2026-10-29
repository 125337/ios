@interface TXCHardwareVideoDecoder : TXCVideoBindableObject <TXIVideoDecoderInterface>
{
    BOOL _isHevc; // +0x8
    id <TXIVideoDecoderSupervisorInterface> supervisor; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCVideoDecodeConfig * _config; // +0x20
    TXCHardwareVideoFrameSorter * _frameSorter; // +0x28
    OpaqueVTDecompressionSession * _session; // +0x30
    opaqueCMFormatDescription * _formatDesc; // +0x38
    NSMutableDictionary * _parameterSets; // +0x40
}
- (id)initWithQueue:(id)arg1 usingHevc:(BOOL)arg2 config:(id)arg3;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)resetDecoderOnComplete:(id /* block */)arg1;
- (void)notifyError:(id)arg1 forFrame:(id)arg2 withComplete:(id /* block */)arg3;
- (BOOL)checkToRecreateDecoder:(id)arg1 bitDeth:(long long)arg2 videoFullRangeFlag:(long long)arg3;
- (BOOL)createDecoderWithBitDeth:(long long)arg1 videoFullRangeFlag:(long long)arg2;
- (void)releaseDecoder;
- (BOOL)updateParameterSets:(id)arg1;
- (BOOL)createFormatDesc;
- (unsigned long long)parseMaxNumRefFrames:(id)arg1 isHevc:(BOOL)arg2;
- (void)decodeEncodedFrame:(id)arg1 parsedNalus:(id)arg2 onComplete:(id /* block */)arg3;
- (void)onDecodeCallBack:(id)arg1 status:(int)arg2 infoFlags:(unsigned int)arg3 imageBuffer:(__CVBuffer *)arg4 startTime:(id)arg5 onComplete:(id /* block */)arg6;
- (id)supervisor;
- (void)setSupervisor:(id)arg1;
- (BOOL)isHevc;
- (id)queue;
- (id)config;
- (id)frameSorter;
- (void)setFrameSorter:(id)arg1;
- (OpaqueVTDecompressionSession *)session;
- (void)setSession:(OpaqueVTDecompressionSession *)arg1;
- (opaqueCMFormatDescription *)formatDesc;
- (void)setFormatDesc:(opaqueCMFormatDescription *)arg1;
- (id)parameterSets;
- (void).cxx_destruct;
@end

