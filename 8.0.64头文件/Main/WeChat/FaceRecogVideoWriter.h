@interface FaceRecogVideoWriter : MMObject
{
    BOOL _hadStartSession; // +0x8
    AVAssetWriter * _writer; // +0x10
    AVAssetWriterInput * _videoInput; // +0x18
    AVAssetWriterInput * _audioInput; // +0x20
    NSString * _path; // +0x28
}
+ (id)writerForPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
- (void)dealloc;
- (id)initPath:(id)arg1 Height:(long long)arg2 width:(long long)arg3 channels:(int)arg4 samples:(double)arg5;
- (void)initVideoInputHeight:(long long)arg1 width:(long long)arg2;
- (void)initAudioInputChannels:(int)arg1 samples:(double)arg2;
- (BOOL)startWriting;
- (long long)writerStatus;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)cancelWriting;
- (BOOL)encodeFrame:(opaqueCMSampleBuffer *)arg1 isVideo:(BOOL)arg2;
- (CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)audioInput;
- (void)setAudioInput:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)hadStartSession;
- (void)setHadStartSession:(BOOL)arg1;
- (void).cxx_destruct;
@end
