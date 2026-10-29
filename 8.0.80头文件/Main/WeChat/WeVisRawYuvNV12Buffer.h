@interface WeVisRawYuvNV12Buffer : NSObject
{
    vector<unsigned char, std::allocator<unsigned char>> buffer; // +0x8
    unsigned long long _width; // +0x20
    unsigned long long _height; // +0x28
}
+ (id)copyFromCVPixelBuffer:(__CVBuffer *)arg1;
- (char *)dataPtr;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
