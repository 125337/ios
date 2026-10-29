@interface WCMomentsFinderRecommendationManager : NSObject <IWCTimelineMgrExt, IWCTimeLineViewControllerExt, WCFinderRedDotExt, MMLimitedModeExt>
{
    BOOL _enabled; // +0x8
    BOOL _configurations_allowsDisplayingDynamically; // +0x9
    BOOL _hasDisplayedFirstCachedItem; // +0xa
    BOOL _hasFetchedRecommendationInfo; // +0xb
    BOOL _isPreloading; // +0xc
    WCFacade * _referredFacade; // +0x10
    WCMomentsFinderRecommendationInfo * _recommendationInfo; // +0x18
    WCDataItem * _recommendationPlaceholderItem; // +0x20
    long long _configurations_updateConditionN; // +0x28
    long long _configurations_updateConditionM; // +0x30
    long long _configurations_updateTimeInterval; // +0x38
    long long _configurations_displayingTimeInterval; // +0x40
    NSString * _configurations_customizedSeparatorTips; // +0x48
    unsigned long long _firstCachedItemID; // +0x50
    NSArray * _itemIDsForMissRead; // +0x58
    NSMutableSet * _freshItemIDs; // +0x60
    unsigned long long _firstItemIDForRecommendationInfoUpdates; // +0x68
    double _lastTimeThatFetchedRecommendationInfo; // +0x70
    NSString * _preloadGroupID; // +0x78
    WCMomentsFinderRecommendationReporter * _reporter; // +0x80
}
- (id)init;
- (void)beginNewSession;
- (void)updateFirstCachedItemID:(unsigned long long)arg1;
- (void)updateFirstCacheItemDisplayStatusWithDisplayingDataItem:(id)arg1;
- (void)updateItemIDsForMissRead:(id)arg1;
- (void)updateFreshItemIDsWithResponseDataItems:(id)arg1;
- (void)calculateFirstItemIDForRecommendationInfoUpdates;
- (void)checkUpdateRecommendationInfoWithDataItem:(id)arg1;
- (void)fetchRecommendationInfo;
- (id)createRecommendationInfoWithCtrlInfo:(id)arg1;
- (void)didReceiveFinderCtrlInfo:(id)arg1 tag:(id)arg2;
- (void)clearRecommendationInfo;
- (void)regenerateRecommendationPlaceholderItemAfterDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)willDisplayRecommendationPlaceholderItem:(id)arg1;
- (void)didEndDisplayingRecommendationPlaceholderItem:(id)arg1;
- (double)lastTimeThatDisplayedRecommendationInfo;
- (void)setLastTimeThatDisplayedRecommendationInfo:(double)arg1;
- (BOOL)hasPreloaded;
- (void)resetPreloadContext;
- (void)preloadRecommendationInfoIfNeeded:(id)arg1;
- (void)cancelPreloadingRecommendationInfoIfNeeded;
- (void)navigateToFinderWithRecommendationInfo:(id)arg1 fromViewController:(id)arg2;
- (void)onFirstPageUpdated:(unsigned long long)arg1 datas:(id)arg2 feedIds:(id)arg3 feedFlags:(id)arg4 wsGroupDict:(id)arg5;
- (void)onTimelineWillEnterPage:(id)arg1;
- (void)onTimelineDidLeavePage:(id)arg1;
- (void)onTimeLineViewWillDisplayDataItem:(id)arg1;
- (void)onTimelineViewDidEndDisplayingDataItem:(id)arg1;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)arg1;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)_limitedModeDidChange;
- (id)referredFacade;
- (void)setReferredFacade:(id)arg1;
- (id)recommendationInfo;
- (void)setRecommendationInfo:(id)arg1;
- (id)recommendationPlaceholderItem;
- (void)setRecommendationPlaceholderItem:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (long long)configurations_updateConditionN;
- (void)setConfigurations_updateConditionN:(long long)arg1;
- (long long)configurations_updateConditionM;
- (void)setConfigurations_updateConditionM:(long long)arg1;
- (long long)configurations_updateTimeInterval;
- (void)setConfigurations_updateTimeInterval:(long long)arg1;
- (long long)configurations_displayingTimeInterval;
- (void)setConfigurations_displayingTimeInterval:(long long)arg1;
- (BOOL)configurations_allowsDisplayingDynamically;
- (void)setConfigurations_allowsDisplayingDynamically:(BOOL)arg1;
- (id)configurations_customizedSeparatorTips;
- (void)setConfigurations_customizedSeparatorTips:(id)arg1;
- (unsigned long long)firstCachedItemID;
- (void)setFirstCachedItemID:(unsigned long long)arg1;
- (BOOL)hasDisplayedFirstCachedItem;
- (void)setHasDisplayedFirstCachedItem:(BOOL)arg1;
- (id)itemIDsForMissRead;
- (void)setItemIDsForMissRead:(id)arg1;
- (id)freshItemIDs;
- (void)setFreshItemIDs:(id)arg1;
- (unsigned long long)firstItemIDForRecommendationInfoUpdates;
- (void)setFirstItemIDForRecommendationInfoUpdates:(unsigned long long)arg1;
- (BOOL)hasFetchedRecommendationInfo;
- (void)setHasFetchedRecommendationInfo:(BOOL)arg1;
- (double)lastTimeThatFetchedRecommendationInfo;
- (void)setLastTimeThatFetchedRecommendationInfo:(double)arg1;
- (id)preloadGroupID;
- (void)setPreloadGroupID:(id)arg1;
- (BOOL)isPreloading;
- (void)setIsPreloading:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

