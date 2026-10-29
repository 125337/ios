@interface WCTogetherManager : NSObject
{
    NSString * _username; // +0x8
    WCFacade * _referredFacade; // +0x10
    MyWCDB * _database; // +0x18
}
+ (void)_initializeForConfigurations;
+ (BOOL)togetherPostEnabled;
+ (BOOL)canShowBadgeInPostPage;
+ (BOOL)showsBadgeInPostPage;
+ (void)setShowsBadgeInPostPage:(BOOL)arg1;
+ (BOOL)canShowTogetherHistoryEntrance;
+ (BOOL)showsTogetherHistoryEntranceForUsername:(id)arg1;
+ (void)markHadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (BOOL)hadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (BOOL)showsBadgeInHistoryEntrance;
+ (void)setShowsBadgeInHistoryEntrance:(BOOL)arg1;
+ (BOOL)joinedTogether;
+ (void)setJoinedTogether:(BOOL)arg1;
+ (BOOL)_hadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (void)_setHadShownTogetherHistoryEntrance:(BOOL)arg1 forUsername:(id)arg2;
+ (BOOL)_showsBadgeInPostPage;
+ (void)_setShowsBadgeInPostPage:(BOOL)arg1;
+ (BOOL)_showsBadgeInHistoryEntrance;
+ (void)_setShowsBadgeInHistoryEntrance:(BOOL)arg1;
+ (BOOL)_joinedTogether;
+ (void)_setJoinedTogether:(BOOL)arg1;
+ (void)initialize;
- (id)initWithUsername:(id)arg1;
- (id)getCachedDataItemsWithMaxCount:(unsigned long long)arg1;
- (BOOL)updateCachedDataItems:(id)arg1;
- (BOOL)deleteAllCachedDataItems;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)referredFacade;
- (void)setReferredFacade:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void).cxx_destruct;
@end

