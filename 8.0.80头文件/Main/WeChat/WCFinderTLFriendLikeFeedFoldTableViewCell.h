@interface WCFinderTLFriendLikeFeedFoldTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _showUIDetail; // +0x8
    id <WCFinderTLFriendLikeFeedFoldTableViewCellDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIView * _sectionSeparator; // +0x28
    UIView * _lineSeparator; // +0x30
    CAGradientLayer * _gradientLayer; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    WCFinderFoldFeedReportInfo * _foldFeedReportInfo; // +0x48
}
+ (double)cellHByShowLargeSeparatorLine:(BOOL)arg1;
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithDataItem:(id)arg1 showLargeSeparatorLine:(BOOL)arg2 collectionViewOffsetX:(double)arg3;
- (double)collectionViewOffsetX;
- (void)selfWillEndDisPlayWithScene:(int)arg1;
- (BOOL)shouldShowMoreBtn;
- (unsigned long long)indexRowForMoreBtn;
- (void)onClickLabelBtn;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView;
- (id)titleLabel;
- (id)sectionSeparator;
- (id)lineSeparator;
- (id)gradientLayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSectionSeparator:(id)arg1;
- (void)setLineSeparator:(id)arg1;
- (BOOL)showUIDetail;
- (void)setShowUIDetail:(BOOL)arg1;
- (void)setGradientLayer:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)foldFeedReportInfo;
- (void)setFoldFeedReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
