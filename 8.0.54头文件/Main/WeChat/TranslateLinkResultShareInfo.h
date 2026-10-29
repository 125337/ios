@interface TranslateLinkResultShareInfo : MMObject
{
    unsigned int _videoTime; // +0x8
    unsigned int _skipCompress; // +0xc
    NSString * _url; // +0x10
}
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)videoTime;
- (void)setVideoTime:(unsigned int)arg1;
- (unsigned int)skipCompress;
- (void)setSkipCompress:(unsigned int)arg1;
- (void).cxx_destruct;
@end

