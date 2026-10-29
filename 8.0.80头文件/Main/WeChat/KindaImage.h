@interface KindaImage : NSObject <MMKImage>
{
    BOOL _supportDynamicSize; // +0x8
    float _inputWidth; // +0xc
    float _inputHeight; // +0x10
    NSString * _darkModeUrl; // +0x18
    MMDynamicColor * _color; // +0x20
    NSString * _url; // +0x28
    UIImage * _image; // +0x30
}
- (id)init;
- (void)setSupportDynamicSize:(BOOL)arg1;
- (BOOL)getSupportDynamicSize;
- (void)setUrl:(id)arg1;
- (void)setDarkModeUrl:(id)arg1;
- (void)setSvgUrl:(id)arg1 color:(id)arg2;
- (id)getUrl;
- (float)getWidth;
- (float)getHeight;
- (void)stretchImage:(float)arg1 topCap:(float)arg2;
- (void)setSvgUrl:(id)arg1 color:(id)arg2 size:(id)arg3;
- (void)setEmoticonContent:(id)arg1 type:(int)arg2 retryCount:(int)arg3 supportClick:(BOOL)arg4;
- (id)getReplacedTokenUrl:(id)arg1;
- (id)getImage;
- (id)darkModeUrl;
- (float)inputWidth;
- (void)setInputWidth:(float)arg1;
- (float)inputHeight;
- (void)setInputHeight:(float)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)url;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)supportDynamicSize;
- (void).cxx_destruct;
@end
