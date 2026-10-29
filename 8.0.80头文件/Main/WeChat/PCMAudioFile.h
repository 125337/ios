@interface PCMAudioFile : NSObject
{
    AudioStreamBasicDescription mDataFormat; // +0x8
    OpaqueAudioFileID * mAudioFile; // +0x30
    NSString * mFileName; // +0x38
    unsigned int mCurrentPacket; // +0x40
}
- (void)createAudioFile_WAVE:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDataFormat:(AudioStreamBasicDescription)arg1;
- (BOOL)openByName:(id)arg1;
- (BOOL)writeBytes:(void *)arg1 len:(unsigned int)arg2;
- (void).cxx_destruct;
@end
