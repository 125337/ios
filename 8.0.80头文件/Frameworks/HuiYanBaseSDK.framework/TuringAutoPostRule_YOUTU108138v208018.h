@interface TuringAutoPostRule_YOUTU108138v208018 : TuringPostRule_YOUTU108138v208018
{
    BOOL _postsThroughWiFiOnly; // +0x18
    BOOL _cachesRecordInCaseOfReachedMaximumPostsLimitation; // +0x19
    BOOL _cachesRecordInCaseOfFailedPosting; // +0x1a
    BOOL _alsoPostsCachedRecordsIfPossible; // +0x1b
    unsigned long long _maximumPostsThroughCellulerPerDay; // +0x20
    unsigned long long _maximumPostsThroughCellulerPerHour; // +0x28
}
+ (id)autoPostRule;
- (id)initForAutoPosting:(BOOL)arg1;
- (void)markPostingThroughCellulerForScene:(unsigned long long)arg1;
- (BOOL)allowsPostingThroughCellulerForScene:(unsigned long long)arg1;
- (void)markPostingIfNeededForScene:(unsigned long long)arg1;
- (BOOL)matchesPostingNetworkConditionForScene:(unsigned long long)arg1;
- (BOOL)postsThroughWiFiOnly;
- (void)setPostsThroughWiFiOnly:(BOOL)arg1;
- (unsigned long long)maximumPostsThroughCellulerPerDay;
- (void)setMaximumPostsThroughCellulerPerDay:(unsigned long long)arg1;
- (unsigned long long)maximumPostsThroughCellulerPerHour;
- (void)setMaximumPostsThroughCellulerPerHour:(unsigned long long)arg1;
- (BOOL)cachesRecordInCaseOfReachedMaximumPostsLimitation;
- (void)setCachesRecordInCaseOfReachedMaximumPostsLimitation:(BOOL)arg1;
- (BOOL)cachesRecordInCaseOfFailedPosting;
- (void)setCachesRecordInCaseOfFailedPosting:(BOOL)arg1;
- (BOOL)alsoPostsCachedRecordsIfPossible;
- (void)setAlsoPostsCachedRecordsIfPossible:(BOOL)arg1;
@end
