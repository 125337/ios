@interface MMFinderReplayKitVideoDecoder : NSObject
{
    BOOL _isHevc; // +0x8
    id <MMFinderReplayKitVideoDecoderDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    OpaqueVTDecompressionSession * _session; // +0x20
    opaqueCMFormatDescription * _formatDesc; // +0x28
    NSMutableDictionary * _parameterSets; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 compleBlock:(id /* block */)arg2;
- (void)resetDecoderOnComplete:(id /* block */)arg1;
- (void)notifyError:(id)arg1 forFrame:(id)arg2 withComplete:(id /* block */)arg3;
- (BOOL)checkToRecreateDecoder:(id)arg1 bitDeth:(long long)arg2 videoFullRangeFlag:(long long)arg3;
- (BOOL)createDecoderWithBitDeth:(long long)arg1 videoFullRangeFlag:(long long)arg2;
- (void)releaseDecoder;
- (BOOL)updateParameterSets:(id)arg1;
- (BOOL)createFormatDesc;
- (void)decodeEncodedFrame:(id)arg1 parsedNalus:(id)arg2 onComplete:(id /* block */)arg3;
- (void)sendImgToLive:(__CVBuffer *)arg1 videoFrameId:(long long)arg2;
- (opaqueCMSampleBuffer *)avccBufferFromEncodedNals:(id)arg1 format:(opaqueCMFormatDescription *)arg2 pts:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHevc;
- (id)queue;
- (void)setQueue:(id)arg1;
- (OpaqueVTDecompressionSession *)session;
- (void)setSession:(OpaqueVTDecompressionSession *)arg1;
- (opaqueCMFormatDescription *)formatDesc;
- (void)setFormatDesc:(opaqueCMFormatDescription *)arg1;
- (id)parameterSets;
- (void).cxx_destruct;
@end
