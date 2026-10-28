@interface MMOpenVoiceRecorder : MMObject
{
    NSObject<OS_dispatch_queue> * _mediaQueue; // +0x8
    int _sampleRate; // +0x10
    int _channels; // +0x14
    int _frameDuration; // +0x18
    NSString * _appid; // +0x20
    NSMutableDictionary * _pendingSnapshotTasks; // +0x28
    NSMutableDictionary * _recordingTasks; // +0x30
}
- (id)init;
- (void)takeSnapshotWithMember:(id)arg1 complete:(id /* block */)arg2;
- (void)startRecordWithMember:(id)arg1 complete:(id /* block */)arg2;
- (void)stopRecordWithMember:(id)arg1 complete:(id /* block */)arg2;
- (id)mvFileToWAFileStorage:(id)arg1;
- (void)onVideoFrame:(const char *)arg1 from:(id)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (__CVBuffer *)copyDataFromBuffer:(const char *)arg1 toYUVPixelBufferWithWidth:(unsigned long long)arg2 Height:(unsigned long long)arg3;
- (void)onAudioData:(id)arg1 timestamp:(double)arg2;
- (void)setAudioParam:(id)arg1;
- (void)appid:(id)arg1;
- (void)reset;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pendingSnapshotTasks;
- (void)setPendingSnapshotTasks:(id)arg1;
- (id)recordingTasks;
- (void)setRecordingTasks:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (int)frameDuration;
- (void)setFrameDuration:(int)arg1;
- (void).cxx_destruct;
@end
