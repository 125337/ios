@interface WAWAVRecorder : WABaseRecorder
{
    AudioStreamBasicDescription _formatDescription; // +0x8
}
- (void)prepareToRecord;
- (id)fileHeadDataBeforeStop;
- (BOOL)frameRecordByteSizeEnable;
- (void)encodePCMBufferToOutputFormat:(WARecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (BOOL)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (AudioStreamBasicDescription)formatDescription;
- (void)setFormatDescription:(AudioStreamBasicDescription)arg1;
@end

