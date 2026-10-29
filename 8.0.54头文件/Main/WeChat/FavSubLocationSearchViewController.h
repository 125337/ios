@interface FavSubLocationSearchViewController : FavBaseSearchViewController <MMFavCellComponentDelegate>
{
    NSMutableArray * _arrCityDatas; // +0x68
}
- (id)initWithCellStyle:(unsigned long long)arg1 selectedDic:(id)arg2 maxSelectedCount:(unsigned long long)arg3;
- (void)configRightNavBtn;
- (void)onDone;
- (void)updateAddBtn;
- (void)initData;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)furtherSearchFilter:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned long long)arg3 withTagList:(id)arg4;
- (void)onClickTagButtonWithTagName:(id)arg1;
- (void)onClickDetailBtnWith:(id)arg1;
- (void)onSelectedDataWrap:(id)arg1;
- (void)canNotSelecteDueToExceedCount;
- (BOOL)isOnSearch;
- (id)arrCityDatas;
- (void)setArrCityDatas:(id)arg1;
- (void).cxx_destruct;
@end

