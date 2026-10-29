@interface ScanAIIntentRequestInput : NSObject
{
    long long _mode; // +0x8
    UIImage * _image; // +0x10
    __CVBuffer * _imageBuffer; // +0x18
    long long _interfaceOrientation; // +0x20
}
+ (id)imageInputWithImage:(id)arg1;
+ (id)videoInputWithImageBuffer:(__CVBuffer *)arg1 interfaceOrientation:(long long)arg2;
- (void)dealloc;
- (void)releaseRawInput;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (__CVBuffer *)imageBuffer;
- (void)setImageBuffer:(__CVBuffer *)arg1;
- (long long)interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
