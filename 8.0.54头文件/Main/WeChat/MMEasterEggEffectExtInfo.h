@interface MMEasterEggEffectExtInfo : NSObject
{
    BOOL _resume; // +0x8
    unsigned int _messageLocalId; // +0xc
    NSString * _keyword; // +0x10
}
- (id)jsonString;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned int)messageLocalId;
- (void)setMessageLocalId:(unsigned int)arg1;
- (BOOL)resume;
- (void)setResume:(BOOL)arg1;
- (void).cxx_destruct;
@end

