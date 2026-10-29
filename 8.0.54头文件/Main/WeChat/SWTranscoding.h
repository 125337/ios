@interface SWTranscoding : NSObject
{
    VideoTranscoding mVideoTranscoding; // +0x8
    BOOL _useNewScale; // +0x148
    BOOL _skipAudioResampling; // +0x149
    BOOL _useSoftwareDecode; // +0x14a
    int _outWidth; // +0x14c
    int _outHeight; // +0x150
    float _frameRate; // +0x154
    int _videoBitrate; // +0x158
    int _audioBitrate; // +0x15c
    int _audioSampleRate; // +0x160
    int _audioChannel; // +0x164
    int _errorCode; // +0x168
    float _scaleFactor; // +0x16c
    int _adaptiveBitrateUp; // +0x170
    int _adaptiveBitrateDown; // +0x174
    int _resolutionAdjust; // +0x178
    int _scene; // +0x17c
    int _vcodec2Preset; // +0x180
    float _crf; // +0x184
    int _vbvBufferSize; // +0x188
    int _intraPeriod; // +0x18c
    NSURL * _inputURL; // +0x190
    NSURL * _outputURL; // +0x198
    NSString * _outputFileType; // +0x1a0
    id /* block */ _videoProgressHandler; // +0x1a8
    id /* block */ _completionHandler; // +0x1b0
    CGRect _cropSize; // +0x1b8
    struct _timeRange; // +0x1d8
}
- (id)initWithURL:(id)arg1 outputFile:(id)arg2;
- (void)setTranscodingParams:(id)arg1 Scene:(int)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)stopEncoding;
- (id)inputURL;
- (void)setInputURL:(id)arg1;
- (id)outputURL;
- (void)setOutputURL:(id)arg1;
- (int)outWidth;
- (void)setOutWidth:(int)arg1;
- (int)outHeight;
- (void)setOutHeight:(int)arg1;
- (float)frameRate;
- (void)setFrameRate:(float)arg1;
- (int)videoBitrate;
- (void)setVideoBitrate:(int)arg1;
- (int)audioBitrate;
- (void)setAudioBitrate:(int)arg1;
- (int)audioSampleRate;
- (void)setAudioSampleRate:(int)arg1;
- (int)audioChannel;
- (void)setAudioChannel:(int)arg1;
- (int)errorCode;
- (CGRect)cropSize;
- (void)setCropSize:(CGRect)arg1;
- (id)outputFileType;
- (void)setOutputFileType:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (float)scaleFactor;
- (void)setScaleFactor:(float)arg1;
- (BOOL)useNewScale;
- (void)setUseNewScale:(BOOL)arg1;
- (int)adaptiveBitrateUp;
- (void)setAdaptiveBitrateUp:(int)arg1;
- (int)adaptiveBitrateDown;
- (void)setAdaptiveBitrateDown:(int)arg1;
- (int)resolutionAdjust;
- (void)setResolutionAdjust:(int)arg1;
- (BOOL)skipAudioResampling;
- (void)setSkipAudioResampling:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)useSoftwareDecode;
- (void)setUseSoftwareDecode:(BOOL)arg1;
- (int)vcodec2Preset;
- (void)setVcodec2Preset:(int)arg1;
- (float)crf;
- (void)setCrf:(float)arg1;
- (int)vbvBufferSize;
- (void)setVbvBufferSize:(int)arg1;
- (int)intraPeriod;
- (void)setIntraPeriod:(int)arg1;
- (id /* block */)videoProgressHandler;
- (void)setVideoProgressHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

