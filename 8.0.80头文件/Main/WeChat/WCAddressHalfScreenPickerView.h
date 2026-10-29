@interface WCAddressHalfScreenPickerView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, WCAddressTableViewDelegate, WCAddressHeadViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <WCAddressHalfScreenDelegate> m_delegate; // +0x8
    double m_originPickerY; // +0x10
    unsigned long long m_numOfCollectionCell; // +0x18
    NSMutableArray * m_arrStage; // +0x20
    WCAddressStageDataStruct * m_selectProvince; // +0x28
    WCAddressStageDataStruct * m_selectCity; // +0x30
    WCAddressStageDataStruct * m_selectDistrict; // +0x38
    WCAddressStageDataStruct * m_selectStreet; // +0x40
    double _layoutOffsetY; // +0x48
    unsigned long long m_currComponent; // +0x50
    int m_appearComponent; // +0x58
    int m_maxStageComponent; // +0x5c
    WCAddressPickerHeadView * _headView; // +0x60
    WCAddressPickerBtnGroupView * _btnGroupView; // +0x68
    UICollectionView * _collectionView; // +0x70
    UICollectionViewLayout * _collectionViewLayout; // +0x78
}
- (id)initWithAuthorizationStatus:(BOOL)arg1;
- (void)initView:(BOOL)arg1;
- (void)initData;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)setComponentWhenAppear:(int)arg1;
- (void)setMaxStageComponent:(int)arg1;
- (void)setStagesInfo:(id)arg1;
- (void)setScreenViewDelegate:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)displayCell;
- (id)selectedProvince;
- (id)selectedCity;
- (id)selectedDistrict;
- (id)selectedStreet;
- (id)defaultStreetData;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3 Street:(id)arg4 Notify:(BOOL)arg5;
- (BOOL)setSelectStageWithNationalCode:(id)arg1;
- (void)setSelectorMode:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)moveToStage:(unsigned long long)arg1 withAnimated:(BOOL)arg2;
- (void)chooseAddressAtComponent:(unsigned long long)arg1 withStageData:(id)arg2;
- (void)chooseProvinceStageWithNonCity:(id)arg1;
- (void)onClickTipCellLink:(id)arg1;
- (void)layoutBtnGroupViewsAtComponent:(unsigned long long)arg1;
- (BOOL)isNonDistrictCity:(id)arg1;
- (void)setAddressWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andDetail:(id)arg5;
- (void)layoutSubviewsWhenHeaderChange:(double)arg1;
- (void)moveTopBarWithContentOffset:(double)arg1;
- (void)updateTopBarLayout:(double)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)btnGroupView;
- (void)setBtnGroupView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (void).cxx_destruct;
@end
