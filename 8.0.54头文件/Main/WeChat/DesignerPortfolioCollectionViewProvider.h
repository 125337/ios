@interface DesignerPortfolioCollectionViewProvider : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, AffEmoticonDesignerPortfolioPackDataExt, DesignerPortfolioCellDelegate, EmoticonDesignerRichPortfolioCellDelegate>
{
    BOOL _isDisablingLoadMore; // +0x8
    BOOL _didReport; // +0x9
    unsigned int _designerUin; // +0xc
    NSMutableArray * _emotionsList; // +0x10
    id <DesignerPortfolioCollectionViewProviderDelegate> _delegate; // +0x18
    UICollectionViewLayout * _layout; // +0x20
    MMLoadMoreCollectionView * _collectionView; // +0x28
    UIView * _footerView; // +0x30
    NSString * _enterTimeStr; // +0x38
}
- (id)initWithDesignerUin:(unsigned int)arg1 andLayout:(id)arg2;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (void)dealloc;
- (unsigned char)shouldUseRichStyle;
- (id)displayView;
- (void)initView;
- (void)setCollectionLayout:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setIsDisablingLoadMore:(BOOL)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didClickEmotionItem:(id)arg1 withDelegate:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)performGetDesignerCGI;
- (void)removeExpiredEmoticonPackIfNeeded;
- (void)onFetchPackFinished;
- (void)onFetchPackFailed;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)OnRewardStoreItem:(id)arg1;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (id)enterTimeStr;
- (id)emotionsList;
- (void)setEmotionsList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)footerView;
- (BOOL)isDisablingLoadMore;
- (BOOL)didReport;
- (void)setDidReport:(BOOL)arg1;
- (void)setEnterTimeStr:(id)arg1;
- (void).cxx_destruct;
@end

