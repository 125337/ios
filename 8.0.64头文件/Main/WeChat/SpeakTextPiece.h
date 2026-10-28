@interface SpeakTextPiece : NSObject <PBCoding>
{
    BOOL _endFlag; // +0x8
    unsigned int _index; // +0xc
    unsigned int _voiceFormat; // +0x10
    NSData * _voiceData; // +0x18
}
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_voiceFormat;
+ (void)PBArrayAdd_voiceData;
+ (void)PBArrayAdd_endFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)voiceFormat;
- (void)setVoiceFormat:(unsigned int)arg1;
- (id)voiceData;
- (void)setVoiceData:(id)arg1;
- (BOOL)endFlag;
- (void)setEndFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
