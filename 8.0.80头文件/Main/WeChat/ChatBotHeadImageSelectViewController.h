@interface ChatBotHeadImageSelectViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id /* block */ _selectCompletionBlock; // +0x70
    MMUIButton * _backBtn; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewFlowLayout * _flowLayout; // +0x90
    NSMutableArray * _imageUrlArray; // +0x98
}
- (id)initWithSelectCompletionBlock:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)initImage;
- (void)initLayout;
- (void)setupLayout;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)close;
- (id /* block */)selectCompletionBlock;
- (void)setSelectCompletionBlock:(id /* block */)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)imageUrlArray;
- (void)setImageUrlArray:(id)arg1;
- (void).cxx_destruct;
@end
