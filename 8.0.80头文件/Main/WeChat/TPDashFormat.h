@interface TPDashFormat : NSObject
{
    int _width; // +0x8
    int _height; // +0xc
    int _bandwidth; // +0x10
    int _audioChannels; // +0x14
    int _audioSamplingRate; // +0x18
    float _frameRate; // +0x1c
    NSString * _representationId; // +0x20
    NSString * _codecs; // +0x28
    NSString * _mimeType; // +0x30
    NSString * _language; // +0x38
}
- (id)init;
- (id)representationId;
- (void)setRepresentationId:(id)arg1;
- (id)codecs;
- (void)setCodecs:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (int)bandwidth;
- (void)setBandwidth:(int)arg1;
- (int)audioChannels;
- (void)setAudioChannels:(int)arg1;
- (int)audioSamplingRate;
- (void)setAudioSamplingRate:(int)arg1;
- (float)frameRate;
- (void)setFrameRate:(float)arg1;
- (void).cxx_destruct;
@end
