@interface TextStateUploadMedia : NSObject
{
    int _mediaType; // +0x8
    NSData * _buffer; // +0x10
    NSData * _thumbBuffer; // +0x18
    CGSize _size; // +0x20
}
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)thumbBuffer;
- (void)setThumbBuffer:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (void).cxx_destruct;
@end

