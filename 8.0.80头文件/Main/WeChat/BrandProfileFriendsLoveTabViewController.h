@interface BrandProfileFriendsLoveTabViewController : BrandProfileBaseTabViewController <BrandProfileFriendsLoveBoundaryCellDelegate>
{
    BOOL _hasReachedVisibilityLimit; // +0x8
    BOOL _hasInsertedVisibilityBoundary; // +0x9
    unsigned int _viewScope; // +0xc
}
- (void)loadCacheItem:(id)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiRespFuncFlag;
- (BOOL)shouldDeduplicateGroupMessages;
- (BOOL)shouldEnableItemLongPress;
- (id)preloadItemMessagesForSectionData:(id)arg1;
- (id)preloadSourceUserNameForItemMessage:(id)arg1;
- (void)preDownloadCoverImageIfNeed:(id)arg1;
- (void)onSelectItemViewModel:(id)arg1;
- (id)tabTitle;
- (BOOL)appendMsgList:(id)arg1;
- (BOOL)appendFriendsLoveGroupMessages:(id)arg1 isFeature:(BOOL)arg2;
- (BOOL)isInvisibleGroupMessage:(id)arg1;
- (void)resetVisibilityLimitState;
- (void)appendVisibilityBoundaryIfNeeded;
- (id)visibilityBoundaryWording;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)friendsLoveBoundaryCellDidTapSettings;
- (BOOL)shouldFetchNextPage;
- (BOOL)shouldShowLoadMoreFooter;
- (BOOL)hasReachedVisibilityLimit;
- (void)setHasReachedVisibilityLimit:(BOOL)arg1;
- (BOOL)hasInsertedVisibilityBoundary;
- (void)setHasInsertedVisibilityBoundary:(BOOL)arg1;
- (unsigned int)viewScope;
- (void)setViewScope:(unsigned int)arg1;
@end
