@interface MMFinderLiveStartGroupLivePanel : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id /* block */ _selectCallback; // +0x8
    id /* block */ _closeCallback; // +0x10
    WCFinderStarterLiveViewModel * _starterViewModel; // +0x18
    NSArray * _playTypeList; // +0x20
    NSString * _panelSubTitle; // +0x28
    UIView * _headerRow; // +0x30
    WCFinderHeadImageView * _headImageView; // +0x38
    UILabel * _nameLabel; // +0x40
    UICollectionView * _collectionView; // +0x48
}
+ (id)defaultPlayTypeList;
+ (id)iconNameForPlayType:(unsigned int)arg1;
- (id)initWithStarterViewModel:(id)arg1 playTypeList:(id)arg2 subTitle:(id)arg3;
- (BOOL)hasIdentity;
- (void)showWithAnimated:(BOOL)arg1;
- (void)reportHalfScreenExpose;
- (void)reportElementExposes;
- (void)setupPageSheetConfig;
- (void)setupDetailView;
- (void)pageSheetDidShow;
- (void)layoutSubviews;
- (void)layoutUI;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id /* block */)selectCallback;
- (void)setSelectCallback:(id /* block */)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id)starterViewModel;
- (void)setStarterViewModel:(id)arg1;
- (id)playTypeList;
- (void)setPlayTypeList:(id)arg1;
- (id)panelSubTitle;
- (void)setPanelSubTitle:(id)arg1;
- (id)headerRow;
- (void)setHeaderRow:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
