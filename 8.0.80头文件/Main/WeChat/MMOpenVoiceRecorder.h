@interface MMOpenVoiceRecorder : MMObject
{
    NSObject<OS_dispatch_queue> * _mediaQueue; // +0x8
    BOOL _shouldSaveRecordFile; // +0x10
    int _sampleRate; // +0x14
    int _channels; // +0x18
    int _frameDuration; // +0x1c
    NSString * _appid; // +0x20
    long long _roomId; // +0x28
    NSString * _extraData; // +0x30
    NSMutableDictionary * _pendingSnapshotTasks; // +0x38
    NSMutableDictionary * _recordingTasks; // +0x40
}
- (id)init;
- (void)takeSnapshotWithMember:(id)arg1 complete:(id /* block */)arg2;
- (void)startRecordWithMember:(id)arg1 recordMode:(unsigned long long)arg2 complete:(id /* block */)arg3;
- (void)stopRecordWithMember:(id)arg1 complete:(id /* block */)arg2;
- (id)mvFileToWAFileStorage:(id)arg1 recordMode:(unsigned long long)arg2;
- (void)saveRecordFileIfNeeded:(id)arg1;
- (void)onVideoFrame:(const char *)arg1 from:(id)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (__CVBuffer *)copyDataFromBuffer:(const char *)arg1 toYUVPixelBufferWithWidth:(unsigned long long)arg2 Height:(unsigned long long)arg3;
- (void)onAudioData:(id)arg1 timestamp:(double)arg2;
- (void)onLocalAudioData:(id)arg1 timestamp:(double)arg2;
- (void)setAudioParam:(id)arg1;
- (void)appid:(id)arg1;
- (void)reset;
- (id)appid;
- (void)setAppid:(id)arg1;
- (long long)roomId;
- (void)setRoomId:(long long)arg1;
- (BOOL)shouldSaveRecordFile;
- (void)setShouldSaveRecordFile:(BOOL)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
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
