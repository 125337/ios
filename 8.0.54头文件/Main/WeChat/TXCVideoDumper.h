@interface TXCVideoDumper : TXCVideoBindableObject
{
    __sFILE * _file; // +0x8
}
+ (id)dataFromFile:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (void)dealloc;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)writeBytes:(const char *)arg1 length:(long long)arg2;
@end

