@interface V2TXLiveStreamInfo : NSObject
{
    int _width; // +0x8
    int _height; // +0xc
    int _bitrate; // +0x10
    float _framerate; // +0x14
    NSString * _url; // +0x18
}
- (id)description;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (int)bitrate;
- (void)setBitrate:(int)arg1;
- (float)framerate;
- (void)setFramerate:(float)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
