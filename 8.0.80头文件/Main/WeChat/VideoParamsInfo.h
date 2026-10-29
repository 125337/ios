@interface VideoParamsInfo : NSObject
{
    unsigned int _fileSize; // +0x8
    unsigned int _duration; // +0xc
    unsigned int _videoBitrate; // +0x10
    unsigned int _audioBitrate; // +0x14
    unsigned int _audioChannel; // +0x18
    unsigned int _fps; // +0x1c
    unsigned int _width; // +0x20
    unsigned int _height; // +0x24
}
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)videoBitrate;
- (void)setVideoBitrate:(unsigned int)arg1;
- (unsigned int)audioBitrate;
- (void)setAudioBitrate:(unsigned int)arg1;
- (unsigned int)audioChannel;
- (void)setAudioChannel:(unsigned int)arg1;
- (unsigned int)fps;
- (void)setFps:(unsigned int)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
@end
