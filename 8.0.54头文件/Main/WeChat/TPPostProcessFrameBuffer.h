@interface TPPostProcessFrameBuffer : NSObject
{
    BOOL _ref; // +0x8
    int _sampleRate; // +0xc
    int _format; // +0x10
    int _nbSamples; // +0x14
    int _channels; // +0x18
    int _width; // +0x1c
    int _height; // +0x20
    int _sampleAspectRatioNum; // +0x24
    int _sampleAspectRatioDen; // +0x28
    int _rotation; // +0x2c
    int _eventFlag; // +0x30
    long long _mediaType; // +0x38
    char * * _data; // +0x40
    int * _size; // +0x48
    unsigned long long _channelLayout; // +0x50
    long long _ptsMs; // +0x58
    TPFrame * _frame; // +0x60
}
- (id)init;
- (void)dealloc;
- (id)initWithTPFrame:(void *)arg1 withEventFlag:(int)arg2;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (char * *)data;
- (void)setData:(char * *)arg1;
- (int *)size;
- (void)setSize:(int *)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (unsigned long long)channelLayout;
- (void)setChannelLayout:(unsigned long long)arg1;
- (int)format;
- (void)setFormat:(int)arg1;
- (long long)ptsMs;
- (void)setPtsMs:(long long)arg1;
- (int)nbSamples;
- (void)setNbSamples:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (int)sampleAspectRatioNum;
- (void)setSampleAspectRatioNum:(int)arg1;
- (int)sampleAspectRatioDen;
- (void)setSampleAspectRatioDen:(int)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (int)eventFlag;
- (void)setEventFlag:(int)arg1;
- (TPFrame *)frame;
- (void)setFrame:(TPFrame *)arg1;
- (BOOL)ref;
- (void)setRef:(BOOL)arg1;
@end

