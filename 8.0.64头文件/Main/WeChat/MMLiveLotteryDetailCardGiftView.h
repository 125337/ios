@interface MMLiveLotteryDetailCardGiftView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UIImageView * _bgImageView; // +0x8
    UICollectionView * _collectionView; // +0x10
    MMLiveLotteryDetailCardGiftFlowLayout * _flowLayout; // +0x18
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x20
    unsigned long long _type; // +0x28
    long long _giftCount; // +0x30
    long long _column; // +0x38
    long long _row; // +0x40
    double _itemSize; // +0x48
    double _collectionViewWidth; // +0x50
    double _collectionViewHeight; // +0x58
    NSMutableArray * _showGiftInfoArray; // +0x60
}
+ (unsigned long long)getTypeWithLotteryInfo:(long long)arg1;
+ (double)getItemRowMargin;
+ (double)getItemColumnMargin:(unsigned long long)arg1;
+ (double)getItemSize:(unsigned long long)arg1;
+ (long long)getColumnCount:(unsigned long long)arg1;
+ (BOOL)isWinnerWithLotteryInfo:(id)arg1;
+ (id)getShowGiftInfoWithLotteryInfo:(id)arg1;
- (void)updateWithLotteryInfo:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)addContentView;
- (void)layoutUI;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)isCurrentSameGift;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)giftCount;
- (void)setGiftCount:(long long)arg1;
- (long long)column;
- (void)setColumn:(long long)arg1;
- (long long)row;
- (void)setRow:(long long)arg1;
- (double)itemSize;
- (void)setItemSize:(double)arg1;
- (double)collectionViewWidth;
- (void)setCollectionViewWidth:(double)arg1;
- (double)collectionViewHeight;
- (void)setCollectionViewHeight:(double)arg1;
- (id)showGiftInfoArray;
- (void)setShowGiftInfoArray:(id)arg1;
- (void).cxx_destruct;
@end
