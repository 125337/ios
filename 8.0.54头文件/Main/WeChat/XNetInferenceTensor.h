@interface XNetInferenceTensor : NSObject
{
    shared_ptr<xnet::Tensor<xnet::Storage<DeviceKindCPU, ResourceKindBuffer>>> _tensor; // +0x8
    NSMutableData * _data; // +0x18
}
- (id)initWithUnderlying:(const void *)arg1;
- (const void *)underlying;
- (id)initWithDescription:(id)arg1;
- (id)initWithShape:(id)arg1 dataType:(id)arg2;
- (id)description;
- (id)dataType;
- (id)shape;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objects;
- (void)setObjects:(id)arg1;
- (BOOL)setDataWithBufferPtr:(const void *)arg1 length:(unsigned int)arg2;
- (void *)bufferPtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

