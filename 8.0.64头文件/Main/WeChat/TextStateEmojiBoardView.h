@interface TextStateEmojiBoardView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TextStateEmojiBoardModelDelegate>
{
    id <TextStateEmojiBoardViewDelegate> _delegate; // +0x8
    TextStatePublishReportObject * _publishReportObject; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x20
    TextStatePublishIconList * _publishIconList; // +0x28
    TextStateEmojiBoardModel * _model; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)collectionViewLayout;
- (id)collectionView;
- (void)setPublishIconList:(id)arg1;
- (id)model;
- (void)setPublishReportObject:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)maximumRecentUsedEmojiCount;
- (id)getCurrentInputCustomIconDesc;
- (id)getPublishReportObject;
- (BOOL)isRecentUsedSectionValid;
- (void)startRequestCustomIconRecommendData:(id)arg1;
- (void)checkRefreshRecommendGroup;
- (BOOL)isRecommendSectionValid;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishReportObject;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (id)publishIconList;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
