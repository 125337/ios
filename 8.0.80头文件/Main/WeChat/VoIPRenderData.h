@interface VoIPRenderData : NSObject
{
    float _degrees; // +0x8
    XImage * _image; // +0x10
    XImage * _uvImage; // +0x18
}
- (id)initWithDegrees:(float)arg1 image:(id)arg2;
- (id)initWithDegrees:(float)arg1 yImage:(id)arg2 uvImage:(id)arg3;
- (void)renderToRenderer:(id)arg1;
- (float)degrees;
- (void)setDegrees:(float)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)uvImage;
- (void)setUvImage:(id)arg1;
- (void).cxx_destruct;
@end
