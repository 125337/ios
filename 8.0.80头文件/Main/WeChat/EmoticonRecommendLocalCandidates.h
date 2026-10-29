@interface EmoticonRecommendLocalCandidates : NSObject
{
    NSArray * _sessionHighFrequencyMd5s; // +0x8
    NSArray * _sessionRecentMd5s; // +0x10
    NSArray * _globalHighFrequencyMd5s; // +0x18
    NSArray * _globalRecentMd5s; // +0x20
    NSArray * _secondaryGlobalHighFrequencyMd5s; // +0x28
}
- (id)init;
- (BOOL)isEmpty;
- (id)sessionHighFrequencyMd5s;
- (void)setSessionHighFrequencyMd5s:(id)arg1;
- (id)sessionRecentMd5s;
- (void)setSessionRecentMd5s:(id)arg1;
- (id)globalHighFrequencyMd5s;
- (void)setGlobalHighFrequencyMd5s:(id)arg1;
- (id)globalRecentMd5s;
- (void)setGlobalRecentMd5s:(id)arg1;
- (id)secondaryGlobalHighFrequencyMd5s;
- (void)setSecondaryGlobalHighFrequencyMd5s:(id)arg1;
- (void).cxx_destruct;
@end
