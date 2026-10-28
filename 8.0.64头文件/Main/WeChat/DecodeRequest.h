@interface DecodeRequest : NSObject
{
    UIImage * _imageRef; // +0x8
    NSData * _data; // +0x10
    struct * _frameInfo; // +0x18
}
- (void)dealloc;
- (id)imageRef;
- (void)setImageRef:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (struct *)frameInfo;
- (void)setFrameInfo:(struct *)arg1;
- (void).cxx_destruct;
@end
