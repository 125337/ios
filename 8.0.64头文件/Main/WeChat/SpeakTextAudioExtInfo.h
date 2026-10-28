@interface SpeakTextAudioExtInfo : NSObject <PBCoding>
{
    unsigned int _bytesLen; // +0x8
    unsigned int _audioTime; // +0xc
}
+ (void)PBArrayAdd_bytesLen;
+ (void)PBArrayAdd_audioTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)bytesLen;
- (void)setBytesLen:(unsigned int)arg1;
- (unsigned int)audioTime;
- (void)setAudioTime:(unsigned int)arg1;
@end
