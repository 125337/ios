@interface LiteAppAACRecorder : LiteAppBaseRecorder <LiteAppRecordEncodeDelegate>
{
    unsigned int _recordPacket; // +0x8
    unsigned int _pcmBufferPacket; // +0xc
    OpaqueAudioConverter * _encodeCoverter; // +0x10
    OpaqueAudioFileID * _outputFileID; // +0x18
    NSMutableData * _pcmDataBuffer; // +0x20
}
- (void)prepareToRecord;
- (void)clearRecorderState;
- (void)encodePCMBufferToOutputFormat:(LiteAppRecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (BOOL)configureAACConverter:(AudioStreamBasicDescription)arg1;
- (BOOL)copyEncoderCookieToFile;
- (BOOL)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (OpaqueAudioConverter *)encodeCoverter;
- (void)setEncodeCoverter:(OpaqueAudioConverter *)arg1;
- (OpaqueAudioFileID *)outputFileID;
- (void)setOutputFileID:(OpaqueAudioFileID *)arg1;
- (unsigned int)recordPacket;
- (void)setRecordPacket:(unsigned int)arg1;
- (unsigned int)pcmBufferPacket;
- (void)setPcmBufferPacket:(unsigned int)arg1;
- (id)pcmDataBuffer;
- (void)setPcmDataBuffer:(id)arg1;
- (void).cxx_destruct;
@end
