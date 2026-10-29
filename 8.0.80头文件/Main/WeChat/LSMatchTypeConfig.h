@interface LSMatchTypeConfig : NSObject
{
    unsigned int _matchType; // +0x8
    unsigned int _matchSubType; // +0xc
    LSTargetGenerator * _targetGenerator; // +0x10
    NSString * _nsMatchDesc; // +0x18
}
+ (id)matchType:(unsigned int)arg1 subType:(unsigned int)arg2 target:(id)arg3 desc:(id)arg4;
- (BOOL)applyRule:(int)arg1;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
- (unsigned int)matchSubType;
- (void)setMatchSubType:(unsigned int)arg1;
- (id)targetGenerator;
- (void)setTargetGenerator:(id)arg1;
- (id)nsMatchDesc;
- (void)setNsMatchDesc:(id)arg1;
- (void).cxx_destruct;
@end
