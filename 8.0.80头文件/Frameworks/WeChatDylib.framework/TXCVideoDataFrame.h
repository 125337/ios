@interface TXCVideoDataFrame : NSObject
{
    NSData * _data; // +0x8
    unsigned long long _width; // +0x10
    unsigned long long _height; // +0x18
    unsigned long long _format; // +0x20
}
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4;
- (id)data;
- (unsigned long long)width;
- (unsigned long long)height;
- (unsigned long long)format;
- (void).cxx_destruct;
@end
