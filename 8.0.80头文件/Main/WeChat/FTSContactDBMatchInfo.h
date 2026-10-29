@interface FTSContactDBMatchInfo : NSObject
{
    unsigned int _firstLevelIndex; // +0x8
    unsigned int _secondLevelIndex; // +0xc
    unsigned int _location; // +0x10
    NSArray * _matchPhases; // +0x18
    NSString * _matchContent; // +0x20
    unsigned long long _queryMatchType; // +0x28
}
- (unsigned int)firstLevelIndex;
- (void)setFirstLevelIndex:(unsigned int)arg1;
- (unsigned int)secondLevelIndex;
- (void)setSecondLevelIndex:(unsigned int)arg1;
- (unsigned int)location;
- (void)setLocation:(unsigned int)arg1;
- (id)matchPhases;
- (void)setMatchPhases:(id)arg1;
- (id)matchContent;
- (void)setMatchContent:(id)arg1;
- (unsigned long long)queryMatchType;
- (void)setQueryMatchType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
