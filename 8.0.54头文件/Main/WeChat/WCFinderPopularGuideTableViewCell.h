@interface WCFinderPopularGuideTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderPopularGuideTableViewCellDelegate> _delegate; // +0x8
    UILabel * _popularLabel; // +0x10
    MMUIButton * _morePopularAction; // +0x18
    UICollectionView * _collectionView; // +0x20
    NSArray * _contentArray; // +0x28
    UIButton * _backgroundBtn; // +0x30
    WCFinderFeedLayoutContentVM * _contentVM; // +0x38
}
+ (double)cellHeight;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpUI;
- (void)configureCollection;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateWithContentVM:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onClickAction;
- (void)onClickTipsAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)popularLabel;
- (void)setPopularLabel:(id)arg1;
- (id)morePopularAction;
- (void)setMorePopularAction:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)contentArray;
- (void)setContentArray:(id)arg1;
- (id)backgroundBtn;
- (void)setBackgroundBtn:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

