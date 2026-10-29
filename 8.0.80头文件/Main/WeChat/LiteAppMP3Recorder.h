@interface LiteAppMP3Recorder : LiteAppBaseRecorder <LiteAppRecordEncodeDelegate>
{
    lame_global_struct * _lame; // +0x8
}
- (void)prepareToRecord;
- (void)clearRecorderState;
- (void)encodePCMBufferToOutputFormat:(LiteAppRecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (BOOL)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (lame_global_struct *)lame;
- (void)setLame:(lame_global_struct *)arg1;
@end
