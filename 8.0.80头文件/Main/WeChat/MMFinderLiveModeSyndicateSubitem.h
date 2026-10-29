@interface MMFinderLiveModeSyndicateSubitem : MMFinderLiveModeItem <PBCoding>
{
    BOOL _enablePlatformSettlement; // +0x28
    unsigned long long _maximumParticipantsCount; // +0x30
    MMLiveSyndicateModel * _model; // +0x38
}
- (id)init;
- (int)submode;
- (unsigned long long)maximumParticipantsCount;
- (void)setMaximumParticipantsCount:(unsigned long long)arg1;
- (BOOL)enablePlatformSettlement;
- (void)setEnablePlatformSettlement:(BOOL)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
