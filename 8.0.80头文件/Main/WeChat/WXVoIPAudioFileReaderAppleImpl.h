@interface WXVoIPAudioFileReaderAppleImpl : NSObject
{
    unique_ptr<wxvoipsdk::audio::SilkResampler, std::default_delete<wxvoipsdk::audio::SilkResampler>> _resampler; // +0x8
    unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> _inputFrame; // +0x10
    unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> _outFrame; // +0x18
    BOOL _isResampleInited; // +0x20
    BOOL _isReadingCompleted; // +0x21
    BOOL _isLocalAsset; // +0x22
    int _sampleRate; // +0x24
    int _channels; // +0x28
    id <AudioFileReaderAppleImplDelegate> _delegate; // +0x30
    NSString * _url; // +0x38
    AVAsset * _asset; // +0x40
    AVAssetReader * _reader; // +0x48
    AVAssetReaderTrackOutput * _readerOutput; // +0x50
    long long _totalBytesRead; // +0x58
    long long _totalDurationMs; // +0x60
    long long _startTimeMs; // +0x68
    long long _retryCount; // +0x70
    WXVoIPAudioFileExtensionRepairer * _fileRepairer; // +0x78
}
+ (BOOL)isNetStream:(id)arg1;
+ (BOOL)isFileUrl:(id)arg1;
- (id)init;
- (void)dealloc;
- (void *)resampler;
- (AudioFrame *)inputFrame;
- (AudioFrame *)outFrame;
- (BOOL)openFile:(id)arg1;
- (BOOL)startReading:(id)arg1 at:(long long)arg2;
- (void)close;
- (void)decode;
- (void)setSampleRate:(int)arg1 channels:(int)arg2;
- (void)seekToTimestamp:(unsigned long long)arg1;
- (long long)getDuration;
- (const AudioStreamBasicDescription *)getSampleBufferDescription:(opaqueCMSampleBuffer *)arg1;
- (id)buildAssetFromUrl:(id)arg1;
- (void)resampleAudioFrame:(AudioFrame *)arg1 sampleBuffer:(opaqueCMSampleBuffer *)arg2 description:(const AudioStreamBasicDescription *)arg3;
- (struct)durationOfAsset:(id)arg1;
- (BOOL)setupAudioReaderWithAsset:(id)arg1 fromStartTime:(long long)arg2;
- (void)parseAudioBuffer:(opaqueCMSampleBuffer *)arg1 description:(const AudioStreamBasicDescription *)arg2;
- (long long)readLengthMs;
- (BOOL)isEndAtBeginning;
- (BOOL)retry;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)readerOutput;
- (void)setReaderOutput:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (BOOL)isResampleInited;
- (void)setIsResampleInited:(BOOL)arg1;
- (BOOL)isReadingCompleted;
- (void)setIsReadingCompleted:(BOOL)arg1;
- (BOOL)isLocalAsset;
- (void)setIsLocalAsset:(BOOL)arg1;
- (long long)totalBytesRead;
- (void)setTotalBytesRead:(long long)arg1;
- (long long)totalDurationMs;
- (void)setTotalDurationMs:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)retryCount;
- (void)setRetryCount:(long long)arg1;
- (id)fileRepairer;
- (void)setFileRepairer:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
