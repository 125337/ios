@interface WCFinderSnSLiveSectionTableViewCell : MMTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGeneralMonitorDelegate>
{
    id <WCFinderSnSLiveSectionTableViewCellDelegate> _delegate; // +0x8
    unsigned long long _displayType; // +0x10
    UICollectionView * _snsLiveCollectionView; // +0x18
    NSMutableArray * _dataSource; // +0x20
    UILabel * _titleTipsLabel; // +0x28
    MMUIButton * _clearBtn; // +0x30
    UIView * _topSeparateLine; // +0x38
    UIView * _bottomSeparateLine; // +0x40
}
+ (double)cellHeightWithWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)topSeparateLine;
- (id)bottomSeparateLine;
- (void)initSubView;
- (id)titleTipsLabel;
- (id)clearBtn;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)arg1 hiddenBottomSeparateLine:(BOOL)arg2;
- (void)scrollToFirstLiveItem;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)onClickClearBtn:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)displayType;
- (void)setDisplayType:(unsigned long long)arg1;
- (id)snsLiveCollectionView;
- (void)setSnsLiveCollectionView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setTitleTipsLabel:(id)arg1;
- (void)setClearBtn:(id)arg1;
- (void)setTopSeparateLine:(id)arg1;
- (void)setBottomSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end
