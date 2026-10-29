@interface WCFinderProfileStickerTabPageModel : WCFinderStreamProfilePageModel <EmoticonFinderDesignerContentLogicDelegate>
{
    BOOL _loading; // +0x8
    BOOL _didLoadFail; // +0x9
    id <WCFinderProfileStickerTabPageModelDelegate> _delegate; // +0x10
    EmoticonFinderDesignerContentLogic * _contentLogic; // +0x18
    EmoticonFinderDesignerDataCenter * _dataCenter; // +0x20
    EmoticonFinderDesignerContentLogic * _mainTabContentLogic; // +0x28
    double _beginFetchData; // +0x30
}
+ (BOOL)allowLimitMode;
+ (BOOL)recordTabDisplayFlagToExtInfo;
+ (id)overviewSectionTypes;
+ (int)tabId;
- (id)finderUserName;
- (unsigned int)designerUin;
- (BOOL)shouldDisplayTab;
- (void)doLoadCache;
- (void)requestPageData;
- (void)prepareLogic;
- (void)_loadData;
- (BOOL)hasItemsToShow;
- (id)displayName;
- (id)viewPageClassName;
- (unsigned long long)maxStoreItemDisplayCount;
- (void)onFirstFetchFinished;
- (void)_updateOverviewSection;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)arg1;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(BOOL)arg2;
- (void)onNeedReloadForDataChange;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (id)getNavController;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)emoticonEnterScene;
- (BOOL)isStoreCellNeedBottomLineFor:(unsigned long long)arg1;
- (BOOL)isStoreStaticsNeeded;
- (BOOL)isAuthor;
- (BOOL)isSelf;
- (BOOL)needsSDKReport;
- (BOOL)needsModifyPageInfo;
- (id)sdkRequestID;
- (unsigned long long)sdkPageID;
- (id)sdkPageName;
- (int)enterHasRedDot;
- (void)reportExposeTab:(int)arg1;
- (void)reportClickTab:(int)arg1;
- (void)report:(long long)arg1 commentScene:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentLogic;
- (void)setContentLogic:(id)arg1;
- (id)dataCenter;
- (void)setDataCenter:(id)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)didLoadFail;
- (void)setDidLoadFail:(BOOL)arg1;
- (id)mainTabContentLogic;
- (void)setMainTabContentLogic:(id)arg1;
- (double)beginFetchData;
- (void)setBeginFetchData:(double)arg1;
- (void).cxx_destruct;
@end
