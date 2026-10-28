@interface MMWebViewMpInfoModelVideoInfo : NSObject
{
    unsigned int _videoWidth; // +0x8
    unsigned int _videoHeight; // +0xc
    unsigned int _duration; // +0x10
    NSString * _vid; // +0x18
}
- (id)vid;
- (void)setVid:(id)arg1;
- (unsigned int)videoWidth;
- (void)setVideoWidth:(unsigned int)arg1;
- (unsigned int)videoHeight;
- (void)setVideoHeight:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end
