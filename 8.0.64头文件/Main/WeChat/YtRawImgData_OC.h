@interface YtRawImgData_OC : JSONModel
{
    int _x; // +0x8
    int _y; // +0xc
    NSString * _image; // +0x10
    long long _capture_time; // +0x18
    NSString * _checksum; // +0x20
}
- (id)image;
- (void)setImage:(id)arg1;
- (long long)capture_time;
- (void)setCapture_time:(long long)arg1;
- (id)checksum;
- (void)setChecksum:(id)arg1;
- (int)x;
- (void)setX:(int)arg1;
- (int)y;
- (void)setY:(int)arg1;
- (void).cxx_destruct;
@end
