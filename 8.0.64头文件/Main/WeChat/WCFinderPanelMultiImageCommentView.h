@interface WCFinderPanelMultiImageCommentView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderPanelMultiImageCommentViewDelegate> _delegate; // +0x8
    unsigned long long _commentsCount; // +0x10
    NSArray * _imagesComments; // +0x18
    UIView * _containerView; // +0x20
    UILabel * _titleLabel; // +0x28
    UICollectionView * _collectionView; // +0x30
    UICollectionViewFlowLayout * _collectionLayout; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)adjustUILayout;
- (void)updateWithCommentsCount:(unsigned long long)arg1 topCommentList:(id)arg2 width:(double)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)commentsCount;
- (void)setCommentsCount:(unsigned long long)arg1;
- (id)imagesComments;
- (void)setImagesComments:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (void).cxx_destruct;
@end
