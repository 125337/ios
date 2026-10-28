@interface ChatBotThreeColumnImageBrowseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionViewFlowLayout * _flowLayout; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSMutableArray * _imageInfos; // +0x18
    id <ChatBotThreeColumnImageBrowseViewDelegate> _delegate; // +0x20
}
- (id)initWithImageArray:(id)arg1;
- (void)layoutSubviews;
- (void)layoutCollectionView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)imageInfos;
- (void)setImageInfos:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
