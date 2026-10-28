@interface MMLiveLotteryWinnerRecordCell : MMTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _isAudience; // +0x8
    id <MMLiveLotteryWinnerRecordCellDelegate> _cellDelegate; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMCPLabel * _displayNameLabel; // +0x20
    FinderLiveLotteryContact * _lotteryContact; // +0x28
    MMUILabel * _addressLabel; // +0x30
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x38
    NSMutableArray * _dataArray; // +0x40
    UICollectionView * _collectionView; // +0x48
    MMUIButton * _winTitleButton; // +0x50
    long long _giftShowType; // +0x58
    long long _giftRowNum; // +0x60
    MMLiveLotteryDetailCardGiftFlowLayout * _giftFlowLayout; // +0x68
}
+ (id)identifier;
+ (id)getDataArrayWithLotteryInfo:(id)arg1 lotteryContact:(id)arg2;
+ (BOOL)canShowLotteryGift:(id)arg1;
+ (BOOL)isGiftShowMoreLine:(id)arg1;
+ (long long)getGiftRowNumWithLotteryContact:(id)arg1 showMoreLine:(BOOL)arg2;
- (double)lotteryWinnerRecordCellInnerPadding;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (double)lotteryWinnerRecordHeadImageViewLeftMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initUI;
- (void)initHeaderImageView;
- (void)initNameLabel;
- (void)updateWithWinnerContact:(id)arg1 isAudience:(BOOL)arg2 lotteryInfo:(id)arg3 giftShowType:(long long)arg4;
- (double)getCollectionViewHeightWithShowType:(long long)arg1 giftRowNum:(long long)arg2;
- (double)getCollectionViewItemSizeWithShowType:(long long)arg1;
- (double)getCollectionViewRowMargin:(BOOL)arg1;
- (double)getCollectionViewColumnMarginWithShowType:(long long)arg1;
- (double)getCollectionViewNumberMarginWithShowType:(long long)arg1;
- (double)getNumberWidthGiftInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutAnchor;
- (void)layoutAudience;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)isCurrentSameGift;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView;
- (id)winTitleButton;
- (id)dataArray;
- (id)addressLabel;
- (void)prepareForReuse;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)lotteryContact;
- (void)setLotteryContact:(id)arg1;
- (void)setAddressLabel:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setWinTitleButton:(id)arg1;
- (long long)giftShowType;
- (void)setGiftShowType:(long long)arg1;
- (long long)giftRowNum;
- (void)setGiftRowNum:(long long)arg1;
- (id)giftFlowLayout;
- (void)setGiftFlowLayout:(id)arg1;
- (void).cxx_destruct;
@end
