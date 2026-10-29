@interface FinderNewUserPrepareResponse : WXPBGeneratedMessage
+ (void)initialize;
- (id)prepareWithCurrentUsername;
- (id)prepareWithUsername:(id)arg1;
- (id)finderPrepareDict;
- (id)mainFinderPrepare;
- (void)updateNoRecommendInfo:(id)arg1 withUsername:(id)arg2;
- (BOOL)updateWithBindFinderClubInfo:(id)arg1;
@end
