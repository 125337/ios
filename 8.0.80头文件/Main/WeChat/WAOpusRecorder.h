@interface WAOpusRecorder : WABaseRecorder <WARecordEncodeDelegate>
{
    BOOL _oggHeaderWritten; // +0x8
    WAOpusAudioCodec * _opusCodec; // +0x10
}
- (void)prepareToRecord;
- (void)clearRecorderState;
- (id)flushEncoderBeforeStop;
- (void)encodePCMBufferToOutputFormat:(WARecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (id)opusCodec;
- (void)setOpusCodec:(id)arg1;
- (BOOL)oggHeaderWritten;
- (void)setOggHeaderWritten:(BOOL)arg1;
- (void).cxx_destruct;
@end
