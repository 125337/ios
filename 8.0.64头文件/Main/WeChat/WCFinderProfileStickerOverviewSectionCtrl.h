@interface WCFinderProfileStickerOverviewSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <EmoticonFinderDesignerContentLogicDelegate>
{
    double _emojiCellWidth; // +0x8
    unsigned long long _emojiCellLineCount; // +0x10
    double _emojiCellMargin; // +0x18
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (void)dealloc;
- (void)onSectionDataChanged:(id)arg1;
- (long long)_moreBtnType;
- (id)contentLogic;
- (void)onPageSizeChanged;
- (BOOL)displayingEmoticon;
- (BOOL)displayingEmoji;
- (BOOL)showHeaderJumpTabButton;
- (BOOL)showBottomJumpTabButton;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (BOOL)storeItemNeedShowMore;
- (BOOL)signleEmojiNeedShowMore;
- (unsigned long long)emoticonRowMaxCount;
- (unsigned long long)emojiRowMaxCount;
- (double)emojiCellWidth;
- (unsigned long long)emojiCellLineCount;
- (void)genEmojiCellWidth;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (id)getNavController;
- (id)getViewController;
- (unsigned long long)DetailVCEntryScene;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)PackCellExtrance;
- (unsigned long long)HalfScreenExtrance;
- (unsigned long long)IPSetCellExtrance;
- (unsigned long long)emoticonEnterScene;
- (unsigned long long)enterIsRed;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (BOOL)isStoreStaticsNeeded;
- (BOOL)isAuthor;
- (BOOL)isSelf;
- (void)onNeedReloadForDataChange;
- (void)onFirstFetchFinished;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(BOOL)arg2;
- (BOOL)isStoreCellNeedBottomLineFor:(unsigned long long)arg1;
- (BOOL)isStoreCellNeedHideBtn;
- (BOOL)needsSDKReport;
- (unsigned long long)sdkPageID;
- (id)sdkPageName;
- (id)sdkRequestID;
- (BOOL)needsModifyPageInfo;
- (void)setEmojiCellWidth:(double)arg1;
- (void)setEmojiCellLineCount:(unsigned long long)arg1;
- (double)emojiCellMargin;
- (void)setEmojiCellMargin:(double)arg1;
@end
