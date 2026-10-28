@interface MBArrayBuffer : NSObject
{
    BOOL _isTraceBuffer; // +0x8
    int _bufferId; // +0xc
    unsigned long long _permission; // +0x10
    void * _bufferPtr; // +0x18
    unsigned long long _bufferLength; // +0x20
    NSMutableData * _localData; // +0x28
    NSObject * _dataRef; // +0x30
}
- (id)initWithLength:(unsigned int)arg1;
- (id)initWithBuffer:(void *)arg1 length:(unsigned long long)arg2 permission:(unsigned long long)arg3 dataRef:(id)arg4;
- (id)data;
- (unsigned long long)dataLength;
- (const void *)dataBufferPtr;
- (id)createJSObject:(id)arg1;
- (id)createTraceJSObject:(id)arg1;
- (BOOL)getWriteableBuffer:(void * *)arg1 length:(unsigned long long *)arg2;
- (BOOL)writeData:(id)arg1 offset:(unsigned long long)arg2 retWriteLength:(unsigned long long *)arg3 retErrno:(unsigned int *)arg4;
- (void)dealloc;
- (unsigned long long)permission;
- (int)bufferId;
- (void)setBufferId:(int)arg1;
- (BOOL)isTraceBuffer;
- (void)setIsTraceBuffer:(BOOL)arg1;
- (void *)bufferPtr;
- (void)setBufferPtr:(void *)arg1;
- (unsigned long long)bufferLength;
- (void)setBufferLength:(unsigned long long)arg1;
- (id)localData;
- (void)setLocalData:(id)arg1;
- (id)dataRef;
- (void)setDataRef:(id)arg1;
- (void).cxx_destruct;
@end
