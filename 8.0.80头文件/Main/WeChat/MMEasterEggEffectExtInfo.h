@interface MMEasterEggEffectExtInfo : NSObject
{
    BOOL _resume; // +0x8
    unsigned int _messageLocalId; // +0xc
    unsigned int _randomSeed; // +0x10
    NSString * _keyword; // +0x18
}
- (id)jsonString;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned int)messageLocalId;
- (void)setMessageLocalId:(unsigned int)arg1;
- (unsigned int)randomSeed;
- (void)setRandomSeed:(unsigned int)arg1;
- (BOOL)resume;
- (void)setResume:(BOOL)arg1;
- (void).cxx_destruct;
@end
