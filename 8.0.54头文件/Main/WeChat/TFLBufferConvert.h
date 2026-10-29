@interface TFLBufferConvert : NSObject
{
    id <MTLComputePipelineState> _program; // +0x8
}
- (id)initWithDevice:(id)arg1 isFloat16:(BOOL)arg2 convertToPBHWC4:(BOOL)arg3;
- (void)convertWithEncoder:(id)arg1 shape:(const StrongShape<tflite::gpu::Layout::BHWC> *)arg2 sourceBuffer:(id)arg3 convertedBuffer:(id)arg4;
- (void).cxx_destruct;
@end

