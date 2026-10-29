@interface FaceRecogAVRecorder : NSObject <AudioRecorderDelegate>
{
    BOOL _isRecordingVideo; // +0x8
    BOOL _isRecordingAudio; // +0x9
    BOOL _hasVideoData; // +0xa
    BOOL _isProcessingVideo; // +0xb
    BOOL _isProcessingAudio; // +0xc
    BOOL _shouldTakeSnapshot; // +0xd
    BOOL _userCancel; // +0xe
    unsigned int _voiceId; // +0x10
    long long _audioRecorderErrorCode; // +0x18
    id /* block */ _fetchCallback; // +0x20
    id /* block */ _snapshotCallback; // +0x28
    SPXAudioRecorder * _spxRecorder; // +0x30
    FaceRecogVideoWriter * _videoWriter; // +0x38
    NSObject<OS_dispatch_queue> * _videoWriterQueue; // +0x40
    NSData * _outputAudioData; // +0x48
    NSString * _outputVideoPath; // +0x50
    NSString * _bioId; // +0x58
    unsigned long long _audioTimeStamp; // +0x60
    unsigned long long _videoTimeStamp; // +0x68
}
- (id)init;
- (void)updateBioId:(id)arg1;
- (void)cancel;
- (void)stop;
- (BOOL)startRecordVideoWithWidth:(double)arg1 height:(double)arg2;
- (BOOL)startRecordAudio;
- (void)onGetCaptureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (BOOL)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderEndRecording:(id)arg1;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned int)arg6;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)tryOutputVideoFromPath:(id)arg1 toPath:(id)arg2 complete:(id /* block */)arg3;
- (void)exportOriginVideoPath:(id)arg1 toPath:(id)arg2 complete:(id /* block */)arg3;
- (void)mergeAudioWithOriginVideoPath:(id)arg1 toPath:(id)arg2 complete:(id /* block */)arg3;
- (void)fetchOutputData:(id /* block */)arg1;
- (void)checkDumpAVDataFinished;
- (void)takeSnapshot:(id /* block */)arg1;
- (id)screenshotOfVideoStream:(__CVBuffer *)arg1;
- (BOOL)saveSnapShotWithBuffer:(opaqueCMSampleBuffer *)arg1;
- (BOOL)isRecordingVideo;
- (void)setIsRecordingVideo:(BOOL)arg1;
- (BOOL)isRecordingAudio;
- (void)setIsRecordingAudio:(BOOL)arg1;
- (long long)audioRecorderErrorCode;
- (void)setAudioRecorderErrorCode:(long long)arg1;
- (BOOL)hasVideoData;
- (void)setHasVideoData:(BOOL)arg1;
- (BOOL)isProcessingVideo;
- (void)setIsProcessingVideo:(BOOL)arg1;
- (BOOL)isProcessingAudio;
- (void)setIsProcessingAudio:(BOOL)arg1;
- (id /* block */)fetchCallback;
- (void)setFetchCallback:(id /* block */)arg1;
- (id /* block */)snapshotCallback;
- (void)setSnapshotCallback:(id /* block */)arg1;
- (BOOL)shouldTakeSnapshot;
- (void)setShouldTakeSnapshot:(BOOL)arg1;
- (id)spxRecorder;
- (void)setSpxRecorder:(id)arg1;
- (id)videoWriter;
- (void)setVideoWriter:(id)arg1;
- (id)videoWriterQueue;
- (void)setVideoWriterQueue:(id)arg1;
- (BOOL)userCancel;
- (void)setUserCancel:(BOOL)arg1;
- (id)outputAudioData;
- (void)setOutputAudioData:(id)arg1;
- (id)outputVideoPath;
- (void)setOutputVideoPath:(id)arg1;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (unsigned int)voiceId;
- (void)setVoiceId:(unsigned int)arg1;
- (unsigned long long)audioTimeStamp;
- (void)setAudioTimeStamp:(unsigned long long)arg1;
- (unsigned long long)videoTimeStamp;
- (void)setVideoTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

