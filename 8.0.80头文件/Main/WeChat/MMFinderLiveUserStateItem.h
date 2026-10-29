@interface MMFinderLiveUserStateItem : MMLiveUserStateItem
{
    BOOL _isKtvPlayMember; // +0x8
    BOOL _isExposed; // +0x9
    BOOL _onlySingSegment; // +0xa
    unsigned int _rank; // +0xc
    unsigned int _playSize; // +0x10
    unsigned int _playAvgScores; // +0x14
    FinderLiveContact * _liveContact; // +0x18
    NSString * _bestPlaySongName; // +0x20
    NSString * _bestPlayLevel; // +0x28
}
+ (id)batchConvert:(id)arg1;
+ (id)batchConvertKtvPlayMember:(id)arg1;
- (id)initWithLiveContact:(id)arg1;
- (id)initWithKtvPlayMember:(id)arg1;
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (unsigned long long)disableCommentDef;
- (unsigned long long)rewardAmountInHeat;
- (unsigned int)watchTimeS;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
- (BOOL)isKtvPlayMember;
- (void)setIsKtvPlayMember:(BOOL)arg1;
- (unsigned int)playSize;
- (void)setPlaySize:(unsigned int)arg1;
- (unsigned int)playAvgScores;
- (void)setPlayAvgScores:(unsigned int)arg1;
- (id)bestPlaySongName;
- (void)setBestPlaySongName:(id)arg1;
- (id)bestPlayLevel;
- (void)setBestPlayLevel:(id)arg1;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (BOOL)onlySingSegment;
- (void)setOnlySingSegment:(BOOL)arg1;
- (void).cxx_destruct;
@end
