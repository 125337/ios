@interface MJPageViewV2 : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _doneFirstLayout; // +0x8
    double _titleBarHeight; // +0x10
    long long _titleBarAlignment; // +0x18
    UIColor * _titleNormalColor; // +0x20
    UIColor * _titleSelectedColor; // +0x28
    UIFont * _titleFont; // +0x30
    UIFont * _titleSelectedFont; // +0x38
    id <MJPageViewV2Delegate> _delegate; // +0x40
    id <MJPageViewV2DataSource> _dataSource; // +0x48
    long long _selectedIndex; // +0x50
    UICollectionView * _collectionView; // +0x58
    UICollectionViewFlowLayout * _layout; // +0x60
    UIStackView * _titleBar; // +0x68
    NSMutableArray * _titleLabels; // +0x70
    UIView * _titleIndicator; // +0x78
    CGSize _lastCollectionViewSize; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupTitleBar;
- (void)setTitleBarHeight:(double)arg1;
- (void)setTitleBarAlignment:(long long)arg1;
- (void)layoutTitleBar;
- (void)setupCollectionView;
- (void)updateTitleLabelStyle;
- (void)scrollTitleBarToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)reloadPageAtIndex:(long long)arg1;
- (void)reloadData;
- (void)didTapTitle:(id)arg1;
- (void)scrollContentToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)reloadTitles;
- (void)reloadContents;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)titleBarHeight;
- (long long)titleBarAlignment;
- (id)titleNormalColor;
- (void)setTitleNormalColor:(id)arg1;
- (id)titleSelectedColor;
- (void)setTitleSelectedColor:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleSelectedFont;
- (void)setTitleSelectedFont:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (long long)selectedIndex;
- (BOOL)doneFirstLayout;
- (void)setDoneFirstLayout:(BOOL)arg1;
- (CGSize)lastCollectionViewSize;
- (void)setLastCollectionViewSize:(CGSize)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)titleLabels;
- (void)setTitleLabels:(id)arg1;
- (id)titleIndicator;
- (void)setTitleIndicator:(id)arg1;
- (void).cxx_destruct;
@end
