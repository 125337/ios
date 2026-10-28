@interface WABufferObject : NSObject
{
    void * _buffer; // +0x8
    long long _length; // +0x10
    OpaqueJSValue * _jsObject; // +0x18
    NSData * _data; // +0x20
}
- (void *)buffer;
- (void)setBuffer:(void *)arg1;
- (long long)length;
- (void)setLength:(long long)arg1;
- (OpaqueJSValue *)jsObject;
- (void)setJsObject:(OpaqueJSValue *)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
