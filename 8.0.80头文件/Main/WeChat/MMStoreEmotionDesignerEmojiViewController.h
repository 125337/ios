@interface MMStoreEmotionDesignerEmojiViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMNavBarInteractiveDelegate, EmotionCollectionFooterViewDelegate, StoreEmotionGetDesignerEmojiListCgiDelegate, EmoticonHalfScreenSendViewDelegate, MMStoreEmotionTagSelectDelegate, StoreEmotionPageShareLogicDelegate>
{
    UICollectionView * m_collectionView; // +0x70
    EmotionCollectionFooterView * m_collectionFooterView; // +0x78
    StoreEmotionGetDesignerEmojiListCgi * m_getAllDesignerEmojisCgi; // +0x80
    StoreEmotionGetDesignerEmojiListCgi * m_curGetDesignerEmojisCgi; // +0x88
    NSArray * m_tagsList; // +0x90
    EmojiTag * m_lastSelectedTag; // +0x98
    unsigned int m_designerUin; // +0xa0
    NSString * m_keyword; // +0xa8
    unsigned long long m_searchId; // +0xb0
    EmotionBannerSet * m_bannerSet; // +0xb8
    unsigned long long m_designerEmojiMode; // +0xc0
    EmojiInfo * m_operatingEmoji; // +0xc8
    StoreEmotionPageShareLogic * m_shareLogic; // +0xd0
    int _entranceScene; // +0xd8
    EmoticonStoreReportInfo * _reportInfo; // +0xe0
    NSString * _sessionId; // +0xe8
}
+ (BOOL)canShowDesignerEmoji;
- (id)init;
- (id)initWithKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)initWithEmojiTag:(id)arg1;
- (id)initWithBannerSet:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initView;
- (void)configCollectionView;
- (void)updateCollectionLayout:(id)arg1;
- (void)configTagsEntrance;
- (void)configShareEntrance;
- (BOOL)isInTagMode;
- (BOOL)isInSearchMode;
- (void)reportExpose;
- (double)HeadImgHeight;
- (double)bannerSetTitleOffsetY;
- (double)bannerSetHeaderHeight;
- (double)bannerSetTitleHeight;
- (double)bannerSetDescHeight;
- (BOOL)hasHeadImgToShow;
- (void)onClose;
- (void)onOperate:(id)arg1;
- (void)onClickTagIcon;
- (void)onGetDesignerEmojiListSuccessedWithTags:(id)arg1 DesignerEmojiList:(id)arg2 hasMore:(BOOL)arg3;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(BOOL)arg4;
- (void)onGetDesignerEmojiListSuccessedWithKeyword:(id)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(BOOL)arg4;
- (void)onGetDesignerEmojiListSuccessedWithTagId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(BOOL)arg3;
- (void)onGetDesignerEmojiListSuccessedWithBannerSetId:(unsigned int)arg1 DesignerEmojiList:(id)arg2 hasMore:(BOOL)arg3;
- (void)onGetDesignerEmojiListFailed;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithKeyword:(id)arg1;
- (void)onGetDesignerEmojiListFailedWithTagId:(unsigned int)arg1;
- (void)onGetDesignerEmojiListFailedWithBannerSetId:(unsigned int)arg1;
- (void)onCancelTagSelect;
- (void)onSelectShowAllTag;
- (void)onSelectTag:(id)arg1;
- (void)switchToGetDesignerEmojiListCgi:(id)arg1;
- (BOOL)isSetNormalToBlackStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (int)entranceScene;
- (void)setEntranceScene:(int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
