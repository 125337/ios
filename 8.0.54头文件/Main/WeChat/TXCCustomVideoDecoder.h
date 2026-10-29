@interface TXCCustomVideoDecoder : TXCVideoBindableObject <TXCVideoDecoderDelegate, TXIVideoDecoderInterface>
{
    ITXLiteAVVideoDecoder * _decoder; // +0x8
    unique_ptr<liteav::CustomDecodeCallback, std::default_delete<liteav::CustomDecodeCallback>> _decoderCallback; // +0x10
    BOOL _isHevc; // +0x18
    id <TXIVideoDecoderSupervisorInterface> supervisor; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    TXCVideoDecodeConfig * _config; // +0x30
    id /* block */ _complete; // +0x38
    TXCVideoFrame * _originalFrame; // +0x40
    TXCPixelBufferPool * _pool; // +0x48
}
+ (void)copyData:(const char *)arg1 toPixelBuffer:(__CVBuffer *)arg2 planeIndex:(int)arg3 dataStride:(unsigned long long)arg4;
+ (int)convertFrameType:(int)arg1;
- (id)initWithQueue:(id)arg1 isHevc:(BOOL)arg2 config:(id)arg3;
- (void)dealloc;
- (void)resetDecoderOnComplete:(id /* block */)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)createDecoder;
- (void)releaseDecoder;
- (void)onDecodeData:(const DecodedDataS *)arg1 cost:(unsigned int)arg2;
- (id)supervisor;
- (void)setSupervisor:(id)arg1;
- (id)queue;
- (id)config;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (id)originalFrame;
- (void)setOriginalFrame:(id)arg1;
- (BOOL)isHevc;
- (id)pool;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

