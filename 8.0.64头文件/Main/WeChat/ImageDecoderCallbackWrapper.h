@interface ImageDecoderCallbackWrapper : NSObject
{
    int _width; // +0x8
    int _height; // +0xc
    const Memory * _pixel; // +0x10
    function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> _callback; // +0x18
}
- (void)execute;
- (const Memory *)pixel;
- (void)setPixel:(const Memory *)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)>)callback;
- (void)setCallback:(function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
