@interface TPVideoCropInfo : NSObject
{
    long long _width; // +0x8
    long long _height; // +0x10
    long long _cropLeft; // +0x18
    long long _cropRight; // +0x20
    long long _cropTop; // +0x28
    long long _cropBottom; // +0x30
}
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 cropLeft:(long long)arg3 cropRight:(long long)arg4 cropTop:(long long)arg5 cropBottom:(long long)arg6;
- (long long)width;
- (long long)height;
- (long long)cropLeft;
- (long long)cropRight;
- (long long)cropTop;
- (long long)cropBottom;
@end

