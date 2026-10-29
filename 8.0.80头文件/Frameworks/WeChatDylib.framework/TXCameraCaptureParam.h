@interface TXCameraCaptureParam : NSObject
{
    long long _mode; // +0x8
    long long _width; // +0x10
    long long _height; // +0x18
}
- (long long)mode;
- (void)setMode:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
@end
