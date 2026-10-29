@interface EmoticonFinderDesignerContentLogic : NSObject <EmoticonFinderDesignerDataCenterDelegate, EmoticonHalfScreenSendViewDelegate, MMStoreEmotionDesignerPackBrowseViewControllerDelegate, EmoticonStoreDesingerIPViewCellDelegate, EmoticonDesignerRichPortfolioCellDelegate, IStoreEmotionRewardExt>
{
    id <EmoticonFinderDesignerContentLogicDelegate> _delegate; // +0x8
    EmoticonFinderDesignerDataCenter * _dataCenter; // +0x10
    EmoticonStoreDesingerIPViewCell * _ipCell; // +0x18
    EmoticonStoreItem * _rewardingItem; // +0x20
    MMStoreEmoticonDesignerPackBrowseViewController * _packBrowseVC; // +0x28
}
+ (void)registerCellsFor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithDataCenter:(id)arg1;
- (unsigned long long)totalEmojiCount;
- (unsigned long long)totalEmoticonCount;
- (id)getCellForColllectionView:(id)arg1 type:(unsigned long long)arg2 indexPath:(id)arg3;
- (id)displayItems:(unsigned long long)arg1;
- (unsigned long long)cellCountForType:(unsigned long long)arg1;
- (double)cellHeightForType:(unsigned long long)arg1 atIndexPath:(id)arg2 collectionViewWidth:(double)arg3;
- (id)displayingTypes;
- (BOOL)hasMoreStatusForType:(unsigned long long)arg1;
- (void)onCellTouchedForType:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)openViewMoreForType:(unsigned long long)arg1;
- (id)displayingIpSets;
- (void)onSelectIPSetAtIndex:(unsigned long long)arg1;
- (BOOL)isIPSetsHasMore;
- (void)loadMoreForIPSets;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (void)OnRewardStoreItem:(id)arg1;
- (void)openBegVCWith:(id)arg1 storeItem:(id)arg2;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (void)onFirstFetchFinished;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(BOOL)arg2;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)arg1;
- (void)onNeedReloadForDataChange;
- (id)sdkRequestID;
- (void)tabPageDidAppear;
- (void)tabPageDidDisappear;
- (id)delegate;
- (id)dataCenter;
- (void)setDataCenter:(id)arg1;
- (id)ipCell;
- (void)setIpCell:(id)arg1;
- (id)rewardingItem;
- (void)setRewardingItem:(id)arg1;
- (id)packBrowseVC;
- (void)setPackBrowseVC:(id)arg1;
- (void).cxx_destruct;
@end
