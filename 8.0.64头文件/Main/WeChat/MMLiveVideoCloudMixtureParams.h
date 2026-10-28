@interface MMLiveVideoCloudMixtureParams : NSObject
{
    int _videoWidth; // +0x8
    int _videoHeight; // +0xc
    int _subWidth; // +0x10
    int _subHeight; // +0x14
    int _bitrate; // +0x18
    int _offsetX; // +0x1c
    int _offsetY; // +0x20
    int _videoFps; // +0x24
}
- (int)videoWidth;
- (void)setVideoWidth:(int)arg1;
- (int)videoHeight;
- (void)setVideoHeight:(int)arg1;
- (int)subWidth;
- (void)setSubWidth:(int)arg1;
- (int)subHeight;
- (void)setSubHeight:(int)arg1;
- (int)bitrate;
- (void)setBitrate:(int)arg1;
- (int)offsetX;
- (void)setOffsetX:(int)arg1;
- (int)offsetY;
- (void)setOffsetY:(int)arg1;
- (int)videoFps;
- (void)setVideoFps:(int)arg1;
@end
