@interface TAVImageResource : TAVResource
{
    CIImage * _image; // +0x8
}
- (id)initWithImage:(id)arg1 duration:(struct)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)tracksForType:(id)arg1;
- (id)imageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
