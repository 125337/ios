@interface Mp4StreamWriterApple : NSObject
{
    NSString * _outputFilePath; // +0x8
    AVAssetWriter * _writer; // +0x10
    AVAssetWriterInput * _videoWriterInput; // +0x18
    AVAssetWriterInput * _audioWriterInput; // +0x20
    NSDictionary * _audioOutputSettings; // +0x28
    BOOL _startedSession; // +0x30
    opaqueCMFormatDescription * _videoFormatDescription; // +0x38
    opaqueCMFormatDescription * _audioFormatDescription; // +0x40
    VideoMetadata _video_metadata; // +0x48
    BOOL _haveWrittenFirstAudioFrame; // +0xa0
    unsigned long long _totalWrittenBytes; // +0xa8
    struct _lastFramePTS; // +0xb0
    queue<std::unique_ptr<liteav::audio::AudioFrame>, std::deque<std::unique_ptr<liteav::audio::AudioFrame>>> _audio_frame_queue; // +0xc8
    queue<std::unique_ptr<liteav::video::VideoFrame>, std::deque<std::unique_ptr<liteav::video::VideoFrame>>> _video_frame_queue; // +0xf8
    NSDate * _stopTime; // +0x128
    id /* block */ _waitForFinishingWritingCallback; // +0x130
    BOOL _didCallStop; // +0x138
    BOOL _isAudioFinished; // +0x139
    BOOL _isVideoFinished; // +0x13a
    long long _lastVideoDurationMs; // +0x140
    NSOperationQueue * _operationQueue; // +0x148
}
- (id)init;
- (void)dealloc;
- (void)setOuputFilePath:(const void *)arg1;
- (void)setAudioMetadata:(const AudioMetadata *)arg1;
- (id)esdsDataWithAudioMetadata:(const AudioMetadata *)arg1;
- (id)audioExtraDataWithChannels:(long long)arg1 sampleRate:(long long)arg2;
- (id)putDescWithTag:(char)arg1 size:(unsigned int)arg2;
- (unsigned char)getSampleRateIndex:(unsigned int)arg1;
- (void)setVideoMetadata:(const void *)arg1;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)setUpWriter;
- (int)startWriting;
- (void)writeFrameLoop;
- (long long)stopWriting;
- (void)finishWritingWithBlock:(id /* block */)arg1;
- (int)enqueueAudioFrame:(unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>>)arg1;
- (int)enqueueVideoFrame:(unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>>)arg1;
- (int)writeAudioFrame:(unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>>)arg1;
- (BOOL)writeAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (int)writeVideoFrame:(unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>>)arg1 duration:(long long)arg2;
- (BOOL)writeVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)logWriterStatus;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
